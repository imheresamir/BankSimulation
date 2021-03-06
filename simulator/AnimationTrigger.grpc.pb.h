// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: AnimationTrigger.proto
#ifndef GRPC_AnimationTrigger_2eproto__INCLUDED
#define GRPC_AnimationTrigger_2eproto__INCLUDED

#include "AnimationTrigger.pb.h"

#include <grpc++/impl/internal_stub.h>
#include <grpc++/impl/rpc_method.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/async_unary_call.h>
#include <grpc++/status.h>
#include <grpc++/stream.h>

namespace grpc {
class CompletionQueue;
class ChannelInterface;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace banksimulation {

class BankSimulatorStateProxy GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SendState(::grpc::ClientContext* context, const ::banksimulation::BankSimulatorState& request, ::banksimulation::ServerAck* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::banksimulation::ServerAck>> AsyncSendState(::grpc::ClientContext* context, const ::banksimulation::BankSimulatorState& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::banksimulation::ServerAck>>(AsyncSendStateRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::banksimulation::ServerAck>* AsyncSendStateRaw(::grpc::ClientContext* context, const ::banksimulation::BankSimulatorState& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface, public ::grpc::InternalStub {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SendState(::grpc::ClientContext* context, const ::banksimulation::BankSimulatorState& request, ::banksimulation::ServerAck* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::banksimulation::ServerAck>> AsyncSendState(::grpc::ClientContext* context, const ::banksimulation::BankSimulatorState& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::banksimulation::ServerAck>>(AsyncSendStateRaw(context, request, cq));
    }

   private:
    ::grpc::ClientAsyncResponseReader< ::banksimulation::ServerAck>* AsyncSendStateRaw(::grpc::ClientContext* context, const ::banksimulation::BankSimulatorState& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_SendState_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);

  class Service : public ::grpc::SynchronousService {
   public:
    Service() : service_(nullptr) {}
    virtual ~Service();
    virtual ::grpc::Status SendState(::grpc::ServerContext* context, const ::banksimulation::BankSimulatorState* request, ::banksimulation::ServerAck* response);
    ::grpc::RpcService* service() GRPC_OVERRIDE GRPC_FINAL;
   private:
    ::grpc::RpcService* service_;
  };
  class AsyncService GRPC_FINAL : public ::grpc::AsynchronousService {
   public:
    explicit AsyncService();
    ~AsyncService() {};
    void RequestSendState(::grpc::ServerContext* context, ::banksimulation::BankSimulatorState* request, ::grpc::ServerAsyncResponseWriter< ::banksimulation::ServerAck>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag);
  };
};

}  // namespace banksimulation


#endif  // GRPC_AnimationTrigger_2eproto__INCLUDED
