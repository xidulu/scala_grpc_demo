// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: GpuNode.proto

#include "GpuNode.pb.h"
#include "GpuNode.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace rpcService {

static const char* GpuNode_method_names[] = {
  "/rpcService.GpuNode/CreateFile",
  "/rpcService.GpuNode/CallKernel",
};

std::unique_ptr< GpuNode::Stub> GpuNode::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GpuNode::Stub> stub(new GpuNode::Stub(channel));
  return stub;
}

GpuNode::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateFile_(GpuNode_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CallKernel_(GpuNode_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GpuNode::Stub::CreateFile(::grpc::ClientContext* context, const ::rpcService::createFileInput& request, ::rpcService::createFileOutput* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateFile_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::rpcService::createFileOutput>* GpuNode::Stub::AsyncCreateFileRaw(::grpc::ClientContext* context, const ::rpcService::createFileInput& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::rpcService::createFileOutput>::Create(channel_.get(), cq, rpcmethod_CreateFile_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::rpcService::createFileOutput>* GpuNode::Stub::PrepareAsyncCreateFileRaw(::grpc::ClientContext* context, const ::rpcService::createFileInput& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::rpcService::createFileOutput>::Create(channel_.get(), cq, rpcmethod_CreateFile_, context, request, false);
}

::grpc::Status GpuNode::Stub::CallKernel(::grpc::ClientContext* context, const ::rpcService::kernelCallInput& request, ::rpcService::kernelCallOutput* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CallKernel_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::rpcService::kernelCallOutput>* GpuNode::Stub::AsyncCallKernelRaw(::grpc::ClientContext* context, const ::rpcService::kernelCallInput& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::rpcService::kernelCallOutput>::Create(channel_.get(), cq, rpcmethod_CallKernel_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::rpcService::kernelCallOutput>* GpuNode::Stub::PrepareAsyncCallKernelRaw(::grpc::ClientContext* context, const ::rpcService::kernelCallInput& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::rpcService::kernelCallOutput>::Create(channel_.get(), cq, rpcmethod_CallKernel_, context, request, false);
}

GpuNode::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GpuNode_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GpuNode::Service, ::rpcService::createFileInput, ::rpcService::createFileOutput>(
          std::mem_fn(&GpuNode::Service::CreateFile), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GpuNode_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GpuNode::Service, ::rpcService::kernelCallInput, ::rpcService::kernelCallOutput>(
          std::mem_fn(&GpuNode::Service::CallKernel), this)));
}

GpuNode::Service::~Service() {
}

::grpc::Status GpuNode::Service::CreateFile(::grpc::ServerContext* context, const ::rpcService::createFileInput* request, ::rpcService::createFileOutput* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GpuNode::Service::CallKernel(::grpc::ServerContext* context, const ::rpcService::kernelCallInput* request, ::rpcService::kernelCallOutput* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace rpcService

