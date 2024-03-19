// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: echo.proto
#ifndef GRPC_echo_2eproto__INCLUDED
#define GRPC_echo_2eproto__INCLUDED

#include "echo.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace echo {

class Echo final {
 public:
  static constexpr char const* service_full_name() {
    return "echo.Echo";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status UnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::echo::EchoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoResponse>> AsyncUnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoResponse>>(AsyncUnaryEchoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoResponse>> PrepareAsyncUnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoResponse>>(PrepareAsyncUnaryEchoRaw(context, request, cq));
    }
    virtual ::grpc::Status UnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::echo::EchoLockResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoLockResponse>> AsyncUnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoLockResponse>>(AsyncUnaryLockRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoLockResponse>> PrepareAsyncUnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoLockResponse>>(PrepareAsyncUnaryLockRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void UnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void UnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void UnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoLockResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void UnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoLockResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoResponse>* AsyncUnaryEchoRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoResponse>* PrepareAsyncUnaryEchoRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoLockResponse>* AsyncUnaryLockRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::echo::EchoLockResponse>* PrepareAsyncUnaryLockRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status UnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::echo::EchoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoResponse>> AsyncUnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoResponse>>(AsyncUnaryEchoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoResponse>> PrepareAsyncUnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoResponse>>(PrepareAsyncUnaryEchoRaw(context, request, cq));
    }
    ::grpc::Status UnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::echo::EchoLockResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoLockResponse>> AsyncUnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoLockResponse>>(AsyncUnaryLockRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoLockResponse>> PrepareAsyncUnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::echo::EchoLockResponse>>(PrepareAsyncUnaryLockRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void UnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoResponse* response, std::function<void(::grpc::Status)>) override;
      void UnaryEcho(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void UnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoLockResponse* response, std::function<void(::grpc::Status)>) override;
      void UnaryLock(::grpc::ClientContext* context, const ::echo::EchoRequest* request, ::echo::EchoLockResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::echo::EchoResponse>* AsyncUnaryEchoRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::echo::EchoResponse>* PrepareAsyncUnaryEchoRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::echo::EchoLockResponse>* AsyncUnaryLockRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::echo::EchoLockResponse>* PrepareAsyncUnaryLockRaw(::grpc::ClientContext* context, const ::echo::EchoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_UnaryEcho_;
    const ::grpc::internal::RpcMethod rpcmethod_UnaryLock_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status UnaryEcho(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoResponse* response);
    virtual ::grpc::Status UnaryLock(::grpc::ServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoLockResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_UnaryEcho : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_UnaryEcho() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_UnaryEcho() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryEcho(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnaryEcho(::grpc::ServerContext* context, ::echo::EchoRequest* request, ::grpc::ServerAsyncResponseWriter< ::echo::EchoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UnaryLock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_UnaryLock() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_UnaryLock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryLock(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnaryLock(::grpc::ServerContext* context, ::echo::EchoRequest* request, ::grpc::ServerAsyncResponseWriter< ::echo::EchoLockResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_UnaryEcho<WithAsyncMethod_UnaryLock<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_UnaryEcho : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_UnaryEcho() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::echo::EchoRequest, ::echo::EchoResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoResponse* response) { return this->UnaryEcho(context, request, response); }));}
    void SetMessageAllocatorFor_UnaryEcho(
        ::grpc::MessageAllocator< ::echo::EchoRequest, ::echo::EchoResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::echo::EchoRequest, ::echo::EchoResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_UnaryEcho() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryEcho(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UnaryEcho(
      ::grpc::CallbackServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_UnaryLock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_UnaryLock() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::echo::EchoRequest, ::echo::EchoLockResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::echo::EchoRequest* request, ::echo::EchoLockResponse* response) { return this->UnaryLock(context, request, response); }));}
    void SetMessageAllocatorFor_UnaryLock(
        ::grpc::MessageAllocator< ::echo::EchoRequest, ::echo::EchoLockResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::echo::EchoRequest, ::echo::EchoLockResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_UnaryLock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryLock(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UnaryLock(
      ::grpc::CallbackServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_UnaryEcho<WithCallbackMethod_UnaryLock<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_UnaryEcho : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_UnaryEcho() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_UnaryEcho() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryEcho(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UnaryLock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_UnaryLock() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_UnaryLock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryLock(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_UnaryEcho : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_UnaryEcho() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_UnaryEcho() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryEcho(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnaryEcho(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_UnaryLock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_UnaryLock() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_UnaryLock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryLock(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnaryLock(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_UnaryEcho : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_UnaryEcho() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->UnaryEcho(context, request, response); }));
    }
    ~WithRawCallbackMethod_UnaryEcho() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryEcho(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UnaryEcho(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_UnaryLock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_UnaryLock() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->UnaryLock(context, request, response); }));
    }
    ~WithRawCallbackMethod_UnaryLock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UnaryLock(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UnaryLock(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_UnaryEcho : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_UnaryEcho() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::echo::EchoRequest, ::echo::EchoResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::echo::EchoRequest, ::echo::EchoResponse>* streamer) {
                       return this->StreamedUnaryEcho(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_UnaryEcho() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status UnaryEcho(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUnaryEcho(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::echo::EchoRequest,::echo::EchoResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_UnaryLock : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_UnaryLock() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::echo::EchoRequest, ::echo::EchoLockResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::echo::EchoRequest, ::echo::EchoLockResponse>* streamer) {
                       return this->StreamedUnaryLock(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_UnaryLock() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status UnaryLock(::grpc::ServerContext* /*context*/, const ::echo::EchoRequest* /*request*/, ::echo::EchoLockResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUnaryLock(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::echo::EchoRequest,::echo::EchoLockResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_UnaryEcho<WithStreamedUnaryMethod_UnaryLock<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_UnaryEcho<WithStreamedUnaryMethod_UnaryLock<Service > > StreamedService;
};

}  // namespace echo


#endif  // GRPC_echo_2eproto__INCLUDED
