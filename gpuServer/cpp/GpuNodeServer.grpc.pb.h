// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: GpuNodeServer.proto
#ifndef GRPC_GpuNodeServer_2eproto__INCLUDED
#define GRPC_GpuNodeServer_2eproto__INCLUDED

#include "GpuNodeServer.pb.h"

#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace GpuNodeServer {

class GpuNode final {
 public:
  static constexpr char const* service_full_name() {
    return "GpuNodeServer.GpuNode";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CreateFile(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::GpuNodeServer::createFileOutput* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::createFileOutput>> AsyncCreateFile(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::createFileOutput>>(AsyncCreateFileRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::createFileOutput>> PrepareAsyncCreateFile(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::createFileOutput>>(PrepareAsyncCreateFileRaw(context, request, cq));
    }
    virtual ::grpc::Status CallKernel(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::GpuNodeServer::kernelCallOutput* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::kernelCallOutput>> AsyncCallKernel(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::kernelCallOutput>>(AsyncCallKernelRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::kernelCallOutput>> PrepareAsyncCallKernel(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::kernelCallOutput>>(PrepareAsyncCallKernelRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::createFileOutput>* AsyncCreateFileRaw(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::createFileOutput>* PrepareAsyncCreateFileRaw(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::kernelCallOutput>* AsyncCallKernelRaw(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GpuNodeServer::kernelCallOutput>* PrepareAsyncCallKernelRaw(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateFile(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::GpuNodeServer::createFileOutput* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::createFileOutput>> AsyncCreateFile(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::createFileOutput>>(AsyncCreateFileRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::createFileOutput>> PrepareAsyncCreateFile(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::createFileOutput>>(PrepareAsyncCreateFileRaw(context, request, cq));
    }
    ::grpc::Status CallKernel(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::GpuNodeServer::kernelCallOutput* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::kernelCallOutput>> AsyncCallKernel(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::kernelCallOutput>>(AsyncCallKernelRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::kernelCallOutput>> PrepareAsyncCallKernel(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::kernelCallOutput>>(PrepareAsyncCallKernelRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::createFileOutput>* AsyncCreateFileRaw(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::createFileOutput>* PrepareAsyncCreateFileRaw(::grpc::ClientContext* context, const ::GpuNodeServer::createFileInput& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::kernelCallOutput>* AsyncCallKernelRaw(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GpuNodeServer::kernelCallOutput>* PrepareAsyncCallKernelRaw(::grpc::ClientContext* context, const ::GpuNodeServer::kernelCallInput& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateFile_;
    const ::grpc::internal::RpcMethod rpcmethod_CallKernel_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateFile(::grpc::ServerContext* context, const ::GpuNodeServer::createFileInput* request, ::GpuNodeServer::createFileOutput* response);
    virtual ::grpc::Status CallKernel(::grpc::ServerContext* context, const ::GpuNodeServer::kernelCallInput* request, ::GpuNodeServer::kernelCallOutput* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateFile() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateFile(::grpc::ServerContext* context, const ::GpuNodeServer::createFileInput* request, ::GpuNodeServer::createFileOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateFile(::grpc::ServerContext* context, ::GpuNodeServer::createFileInput* request, ::grpc::ServerAsyncResponseWriter< ::GpuNodeServer::createFileOutput>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CallKernel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CallKernel() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CallKernel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CallKernel(::grpc::ServerContext* context, const ::GpuNodeServer::kernelCallInput* request, ::GpuNodeServer::kernelCallOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCallKernel(::grpc::ServerContext* context, ::GpuNodeServer::kernelCallInput* request, ::grpc::ServerAsyncResponseWriter< ::GpuNodeServer::kernelCallOutput>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateFile<WithAsyncMethod_CallKernel<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateFile() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateFile(::grpc::ServerContext* context, const ::GpuNodeServer::createFileInput* request, ::GpuNodeServer::createFileOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CallKernel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CallKernel() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CallKernel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CallKernel(::grpc::ServerContext* context, const ::GpuNodeServer::kernelCallInput* request, ::GpuNodeServer::kernelCallOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CreateFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CreateFile() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CreateFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateFile(::grpc::ServerContext* context, const ::GpuNodeServer::createFileInput* request, ::GpuNodeServer::createFileOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateFile(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CallKernel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CallKernel() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_CallKernel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CallKernel(::grpc::ServerContext* context, const ::GpuNodeServer::kernelCallInput* request, ::GpuNodeServer::kernelCallOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCallKernel(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateFile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CreateFile() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::GpuNodeServer::createFileInput, ::GpuNodeServer::createFileOutput>(std::bind(&WithStreamedUnaryMethod_CreateFile<BaseClass>::StreamedCreateFile, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CreateFile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateFile(::grpc::ServerContext* context, const ::GpuNodeServer::createFileInput* request, ::GpuNodeServer::createFileOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateFile(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GpuNodeServer::createFileInput,::GpuNodeServer::createFileOutput>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CallKernel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CallKernel() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::GpuNodeServer::kernelCallInput, ::GpuNodeServer::kernelCallOutput>(std::bind(&WithStreamedUnaryMethod_CallKernel<BaseClass>::StreamedCallKernel, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CallKernel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CallKernel(::grpc::ServerContext* context, const ::GpuNodeServer::kernelCallInput* request, ::GpuNodeServer::kernelCallOutput* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCallKernel(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GpuNodeServer::kernelCallInput,::GpuNodeServer::kernelCallOutput>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateFile<WithStreamedUnaryMethod_CallKernel<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateFile<WithStreamedUnaryMethod_CallKernel<Service > > StreamedService;
};

}  // namespace GpuNodeServer


#endif  // GRPC_GpuNodeServer_2eproto__INCLUDED
