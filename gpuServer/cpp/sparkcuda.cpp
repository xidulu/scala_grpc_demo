#include "sparkcuda.h"

void* SparkCUDA::getBuffer() {
	return ptr;
}

std::string SparkCUDA::createFile(const char *path, size_t size) {
	fd = open(path, O_RDWR);
	filepath = std::string(path);
	if (fd != -1) {
		ptr = mmap(0, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
		// mmap creates 4k aligned buffe
		buf_size = size;
		return std::string("ok");
	}
	else
		return std::string(":(");
}

int SparkCUDA::getfd() {
	return fd;
}

std::string SparkCUDA::deleteFile(const char *path) {
	close(fd);
	munmap(ptr, buf_size);
	unlink(path);
}

void SparkCUDA::callKernel(const char *modulePath, const char *funcName, int param,
							std::string &out_path, size_t &out_size) {
	CUfunction kernelFunc;
	CUmodule cuModule;
	CUresult result;
	out_path = filepath;
	out_size = buf_size;
	cuInit(0);
	int deviceCount = 0;
	CUdevice cuDevice; 
    CUresult error = cuDeviceGetCount(&deviceCount);
    printf("device count is %d\n",deviceCount);
    error = cuDeviceGet(&cuDevice, 0); 

    if(error!=CUDA_SUCCESS){
        printf("Error happened in get device!\n");
    }

    CUcontext cuContext;
    error = cuCtxCreate(&cuContext, 0, cuDevice);
    if(error!=CUDA_SUCCESS){
        printf("Error happened in create context!\n");
    }

	result = cuModuleLoad(&cuModule, modulePath);
	if (result != CUDA_SUCCESS) {
		out_path = "module not found.";
		out_size = 0;
		std::cout << result;
		return;
	}
	result = cuModuleGetFunction(&kernelFunc, cuModule, funcName);
	if (result != CUDA_SUCCESS) {
		out_path = "kernel not found.";
		out_size = 0;
		return;
	}
	int units = buf_size/sizeof(int);
	cudaHostRegister(&param, sizeof(param), cudaHostRegisterDefault);
	cudaHostRegister(&units, sizeof(units), cudaHostRegisterDefault);
	cudaHostRegister(ptr, buf_size, cudaHostRegisterDefault);
	
	void *params[] = {&ptr, &param, &units};
	result = cuLaunchKernel(kernelFunc, 1, 1, 1, units, 1, 1, 0, 0, params, nullptr);

	if (result != CUDA_SUCCESS) {
		out_path = "execution failed.";
		out_size = 0;
	}
	else {
		out_path = filepath;
		out_size = buf_size;
	}
	cudaThreadSynchronize();
	cuModuleUnload(cuModule);

	cudaHostUnregister(ptr);
	cudaHostUnregister(&param);
	cudaHostUnregister(&units);
}

int main() {
	using std::cout;
	using std::endl;
	SparkCUDA sparkcuda;
	size_t size = 8 * sizeof(int);
	std::string ret = sparkcuda.createFile("./swap.data", size);
	if (ret == "ok") {
		std::cout << "createFile CUDA after createFile spark called";
		getchar();
		for (int i = 0; i < 8; ++i) 
			std::cout << *((int*)sparkcuda.getBuffer() + i) << std::endl;
		std::cout << "read from buffer" << std::endl;
		std::string outpath;
		size_t outsize;
		sparkcuda.callKernel("./addn.ptx", "add_n", 3, outpath, outsize);
		std::cout << outpath << std::endl;
		for (int i = 0; i < 8; ++i) 
			std::cout << *((int*)sparkcuda.getBuffer() + i) << std::endl;
	}
	else {
		std::cout << "createFile CUDA failed";
	}
	return 0;
}