#include <iostream>
#include <string>
#include <cstdio>
#include <cuda_runtime.h>
#include <cuda.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

class SparkCUDA
{
  private:
    int fd;
    size_t buf_size;
    void *ptr;
    std::string filepath;

  public:
    std::string createFile(const char *path, size_t size);
    std::string deleteFile(const char *path);
    void callKernel(const char *modulePath, const char *funcName, int param,
                    std::string &out_path, size_t &out_size);
    void *getBuffer();
    int getfd();
};
