#include "GpuNode.grpc.pb.h"
#include "sparkcuda.h"
#include <iostream>
#include <unordered_map>
#include <mutex>
#include <grpc/grpc.h>
#include <grpc++/server.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>
#include <grpc++/security/server_credentials.h>

using rpcService::createFileInput;
using rpcService::createFileOutput;
using rpcService::GpuNode;
using rpcService::kernelCallInput;
using rpcService::kernelCallOutput;

class gpuServerImpl final : public GpuNode::Service
{
  public:
    ::grpc::Status CreateFile(::grpc::ServerContext *context,
                              const createFileInput *request,
                              createFileOutput *response) override
    {
        response->set_msg(
            kernel.createFile((request->fpath()).c_str(), request->fsize())
        );
        return grpc::Status::OK;
    }

    ::grpc::Status CallKernel(::grpc::ServerContext *context,
                              const kernelCallInput *request,
                              kernelCallOutput *response) override
    {
        std::string out_path;
        size_t out_size;
        kernel.callKernel(request->fpath().c_str(),request->func().c_str(), request->param(), out_path, out_size);
        response->set_fpath(out_path);
        response->set_fsize(out_size);
        return grpc::Status::OK;
    }

  private:
    SparkCUDA kernel;
};

int main(int args, char *argv[])
{
    std::string addr = "0.0.0.0:5000";
    gpuServerImpl service;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(addr, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    auto server = builder.BuildAndStart();
    std::cout << "Server listening on " << addr << std::endl;
    server->Wait();
    return 0;
}