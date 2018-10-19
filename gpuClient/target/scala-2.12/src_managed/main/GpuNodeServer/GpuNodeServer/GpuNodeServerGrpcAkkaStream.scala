package GpuNodeServer.GpuNodeServer

import _root_.akka.NotUsed
import _root_.akka.stream.Materializer
import _root_.akka.stream.scaladsl.{ Flow, Sink, Source }
import _root_.com.google.protobuf.Descriptors.ServiceDescriptor
import _root_.com.trueaccord.scalapb.grpc.{ AbstractService, ConcreteProtoFileDescriptorSupplier, Grpc, Marshaller, ServiceCompanion }
import _root_.grpc.akkastreams.GrpcAkkaStreams._
import _root_.io.grpc.{ CallOptions, Channel, MethodDescriptor, ServerServiceDefinition }
import _root_.io.grpc.stub.{ AbstractStub, ClientCalls, ServerCalls, StreamObserver }
import _root_.org.reactivestreams.{ Publisher, Subscriber }
import _root_.scala.concurrent.Await
import _root_.scala.concurrent.duration._
import _root_.scala.util.{ Failure, Success }

object GpuNodeServerGrpcAkkaStream {
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
    def createFile: Flow[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput, NotUsed]
    def callKernel: Flow[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput, NotUsed]
  }
  
  object GpuNode extends ServiceCompanion[GpuNode] {
    implicit def serviceCompanion: ServiceCompanion[GpuNode] = this
    def javaDescriptor: ServiceDescriptor =
      GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor.getServices().get(0)
  }
  
  class GpuNodeStub(
    channel: Channel,
    options: CallOptions = CallOptions.DEFAULT
  ) extends AbstractStub[GpuNodeStub](channel, options) with GpuNode {
    override def createFile: Flow[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput, NotUsed] =
      Flow[GpuNodeServer.GpuNodeServer.createFileInput].flatMapConcat(request =>
        Source.fromFuture(
          Grpc.guavaFuture2ScalaFuture(
            ClientCalls.futureUnaryCall(channel.newCall(METHOD_CREATE_FILE, options), request)
          )
        )
      )
    override def callKernel: Flow[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput, NotUsed] =
      Flow[GpuNodeServer.GpuNodeServer.kernelCallInput].flatMapConcat(request =>
        Source.fromFuture(
          Grpc.guavaFuture2ScalaFuture(
            ClientCalls.futureUnaryCall(channel.newCall(METHOD_CALL_KERNEL, options), request)
          )
        )
      )
    override def build(channel: Channel, options: CallOptions): GpuNodeStub =
      new GpuNodeStub(channel, options)
  }
  
  def bindService(serviceImpl: GpuNode)(implicit mat: Materializer): ServerServiceDefinition =
    ServerServiceDefinition
      .builder("GpuNodeServer.GpuNode")
      .addMethod(
        METHOD_CREATE_FILE,
        ServerCalls.asyncUnaryCall(
          new ServerCalls.UnaryMethod[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput] {
            override def invoke(request: GpuNodeServer.GpuNodeServer.createFileInput, responseObserver: StreamObserver[GpuNodeServer.GpuNodeServer.createFileOutput]) =
              Source
                .single(request)
                .via(serviceImpl.createFile)
                .runForeach(responseObserver.onNext)
                .onComplete {
                  case Success(_) => responseObserver.onCompleted()
                  case Failure(t) => responseObserver.onError(t)
                }(mat.executionContext)
          }
        )
      )
      .addMethod(
        METHOD_CALL_KERNEL,
        ServerCalls.asyncUnaryCall(
          new ServerCalls.UnaryMethod[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput] {
            override def invoke(request: GpuNodeServer.GpuNodeServer.kernelCallInput, responseObserver: StreamObserver[GpuNodeServer.GpuNodeServer.kernelCallOutput]) =
              Source
                .single(request)
                .via(serviceImpl.callKernel)
                .runForeach(responseObserver.onNext)
                .onComplete {
                  case Success(_) => responseObserver.onCompleted()
                  case Failure(t) => responseObserver.onError(t)
                }(mat.executionContext)
          }
        )
      )
      .build()
  
  def stub(channel: Channel): GpuNodeStub = new GpuNodeStub(channel)
  
  def javaDescriptor: ServiceDescriptor =
    GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor.getServices().get(0)
}
