#include "GpuNodeServer.grpc.pb.h"
#include <iostream>
#include <unordered_map>
#include <mutex>
#include <grpc/grpc.h>
#include <grpc++/server.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>
#include <grpc++/security/server_credentials.h>

using GpuNodeServer::createFileInput;
using GpuNodeServer::createFileOutput;
using GpuNodeServer::GpuNode;
using GpuNodeServer::kernelCallInput;
using GpuNodeServer::kernelCallOutput;

class gpuServerImpl final : public GpuNode::Service
{
  public:
    // gpuServerImpl()
    ::grpc::Status CreateFile(::grpc::ServerContext *context,
                              const createFileInput *request,
                              createFileOutput *response) override
    {
        return grpc::Status::OK;
    }

    ::grpc::Status CallKernel(::grpc::ServerContext *context,
                              const kernelCallInput *request,
                              kernelCallOutput *response) override
    {
        return grpc::Status::OK;
    }
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