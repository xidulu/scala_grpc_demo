package GpuNodeServer.GpuNodeServer

import _root_.com.google.protobuf.Descriptors.ServiceDescriptor
import _root_.com.trueaccord.scalapb.grpc.{ AbstractService, ConcreteProtoFileDescriptorSupplier, Marshaller, ServiceCompanion }
import _root_.io.grpc.{ CallOptions, Channel, MethodDescriptor, ServerServiceDefinition }
import _root_.grpcmonix.GrpcMonix._
import _root_.io.grpc.stub.{ AbstractStub, ClientCalls, ServerCalls, StreamObserver }
import _root_.monix.eval.Task
import _root_.monix.execution.{ Cancelable, Scheduler }
import _root_.monix.reactive.Observable
import _root_.org.reactivestreams.{ Publisher => PublisherR, Subscriber => SubscriberR }

object GpuNodeServerGrpcMonix {
  
  val METHOD_CREATE_FILE: MethodDescriptor[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput] =
    MethodDescriptor.newBuilder()
      .setType(MethodDescriptor.MethodType.UNARY)
      .setFullMethodName(MethodDescriptor.generateFullMethodName("GpuNodeServer.GpuNode", "CreateFile"))
      .setRequestMarshaller(new Marshaller(GpuNodeServer.GpuNodeServer.createFileInput))
      .setResponseMarshaller(new Marshaller(GpuNodeServer.GpuNodeServer.createFileOutput))
      .build()
  val METHOD_CALL_KERNEL: MethodDescriptor[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput] =
    MethodDescriptor.newBuilder()
      .setType(MethodDescriptor.MethodType.UNARY)
      .setFullMethodName(MethodDescriptor.generateFullMethodName("GpuNodeServer.GpuNode", "CallKernel"))
      .setRequestMarshaller(new Marshaller(GpuNodeServer.GpuNodeServer.kernelCallInput))
      .setResponseMarshaller(new Marshaller(GpuNodeServer.GpuNodeServer.kernelCallOutput))
      .build()
  
  val SERVICE: _root_.io.grpc.ServiceDescriptor = _root_.io.grpc.ServiceDescriptor.newBuilder("GpuNodeServer.GpuNode")
    .setSchemaDescriptor(new ConcreteProtoFileDescriptorSupplier(GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor))
    .addMethod(METHOD_CREATE_FILE)
    .addMethod(METHOD_CALL_KERNEL)
    .build()
  
  trait GpuNode extends AbstractService {
    override def serviceCompanion = GpuNode
    def createFile(request: GpuNodeServer.GpuNodeServer.createFileInput): Task[GpuNodeServer.GpuNodeServer.createFileOutput]
    def callKernel(request: GpuNodeServer.GpuNodeServer.kernelCallInput): Task[GpuNodeServer.GpuNodeServer.kernelCallOutput]
  }
  
  object GpuNode extends ServiceCompanion[GpuNode] {
    implicit def serviceCompanion: ServiceCompanion[GpuNode] = this
    def javaDescriptor: ServiceDescriptor = GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor.getServices().get(0)
  }
  
  class GpuNodeStub(
    channel: Channel,
    options: CallOptions = CallOptions.DEFAULT
  ) extends AbstractStub[GpuNodeStub](channel, options) with GpuNode {
    override def createFile(request: GpuNodeServer.GpuNodeServer.createFileInput): Task[GpuNodeServer.GpuNodeServer.createFileOutput] = 
      guavaFutureToMonixTask(
        ClientCalls.futureUnaryCall(channel.newCall(METHOD_CREATE_FILE, options), request)
      )
    override def callKernel(request: GpuNodeServer.GpuNodeServer.kernelCallInput): Task[GpuNodeServer.GpuNodeServer.kernelCallOutput] = 
      guavaFutureToMonixTask(
        ClientCalls.futureUnaryCall(channel.newCall(METHOD_CALL_KERNEL, options), request)
      )
    override def build(channel: Channel, options: CallOptions): GpuNodeStub = 
      new GpuNodeStub(channel, options)
  }
  
  def bindService(serviceImpl: GpuNode, scheduler: Scheduler): ServerServiceDefinition = 
    ServerServiceDefinition
      .builder("GpuNodeServer.GpuNode")
      .addMethod(
        METHOD_CREATE_FILE,
        ServerCalls.asyncUnaryCall(
          new ServerCalls.UnaryMethod[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput] {
            override def invoke(request: GpuNodeServer.GpuNodeServer.createFileInput, observer: StreamObserver[GpuNodeServer.GpuNodeServer.createFileOutput]): Unit =
              serviceImpl.createFile(request).runAsync(grpcObserverToMonixCallback(observer))(scheduler)
          }
        )
      )
      .addMethod(
        METHOD_CALL_KERNEL,
        ServerCalls.asyncUnaryCall(
          new ServerCalls.UnaryMethod[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput] {
            override def invoke(request: GpuNodeServer.GpuNodeServer.kernelCallInput, observer: StreamObserver[GpuNodeServer.GpuNodeServer.kernelCallOutput]): Unit =
              serviceImpl.callKernel(request).runAsync(grpcObserverToMonixCallback(observer))(scheduler)
          }
        )
      )
      .build()
  
  def stub(channel: Channel): GpuNodeStub = new GpuNodeStub(channel)
  
  def javaDescriptor: ServiceDescriptor = 
    GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor.getServices().get(0)
}
