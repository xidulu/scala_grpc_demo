package GpuNodeServer.GpuNodeServer

object GpuNodeGrpc {
  val METHOD_CREATE_FILE: _root_.io.grpc.MethodDescriptor[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput] =
    _root_.io.grpc.MethodDescriptor.newBuilder()
      .setType(_root_.io.grpc.MethodDescriptor.MethodType.UNARY)
      .setFullMethodName(_root_.io.grpc.MethodDescriptor.generateFullMethodName("GpuNodeServer.GpuNode", "CreateFile"))
      .setRequestMarshaller(new com.trueaccord.scalapb.grpc.Marshaller(GpuNodeServer.GpuNodeServer.createFileInput))
      .setResponseMarshaller(new com.trueaccord.scalapb.grpc.Marshaller(GpuNodeServer.GpuNodeServer.createFileOutput))
      .build()
  
  val METHOD_CALL_KERNEL: _root_.io.grpc.MethodDescriptor[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput] =
    _root_.io.grpc.MethodDescriptor.newBuilder()
      .setType(_root_.io.grpc.MethodDescriptor.MethodType.UNARY)
      .setFullMethodName(_root_.io.grpc.MethodDescriptor.generateFullMethodName("GpuNodeServer.GpuNode", "CallKernel"))
      .setRequestMarshaller(new com.trueaccord.scalapb.grpc.Marshaller(GpuNodeServer.GpuNodeServer.kernelCallInput))
      .setResponseMarshaller(new com.trueaccord.scalapb.grpc.Marshaller(GpuNodeServer.GpuNodeServer.kernelCallOutput))
      .build()
  
  val SERVICE: _root_.io.grpc.ServiceDescriptor =
    _root_.io.grpc.ServiceDescriptor.newBuilder("GpuNodeServer.GpuNode")
      .setSchemaDescriptor(new _root_.com.trueaccord.scalapb.grpc.ConcreteProtoFileDescriptorSupplier(GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor))
      .addMethod(METHOD_CREATE_FILE)
      .addMethod(METHOD_CALL_KERNEL)
      .build()
  
  trait GpuNode extends _root_.com.trueaccord.scalapb.grpc.AbstractService {
    override def serviceCompanion = GpuNode
    def createFile(request: GpuNodeServer.GpuNodeServer.createFileInput): scala.concurrent.Future[GpuNodeServer.GpuNodeServer.createFileOutput]
    def callKernel(request: GpuNodeServer.GpuNodeServer.kernelCallInput): scala.concurrent.Future[GpuNodeServer.GpuNodeServer.kernelCallOutput]
  }
  
  object GpuNode extends _root_.com.trueaccord.scalapb.grpc.ServiceCompanion[GpuNode] {
    implicit def serviceCompanion: _root_.com.trueaccord.scalapb.grpc.ServiceCompanion[GpuNode] = this
    def javaDescriptor: _root_.com.google.protobuf.Descriptors.ServiceDescriptor = GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor.getServices().get(0)
  }
  
  trait GpuNodeBlockingClient {
    def serviceCompanion = GpuNode
    def createFile(request: GpuNodeServer.GpuNodeServer.createFileInput): GpuNodeServer.GpuNodeServer.createFileOutput
    def callKernel(request: GpuNodeServer.GpuNodeServer.kernelCallInput): GpuNodeServer.GpuNodeServer.kernelCallOutput
  }
  
  class GpuNodeBlockingStub(channel: _root_.io.grpc.Channel, options: _root_.io.grpc.CallOptions = _root_.io.grpc.CallOptions.DEFAULT) extends _root_.io.grpc.stub.AbstractStub[GpuNodeBlockingStub](channel, options) with GpuNodeBlockingClient {
    override def createFile(request: GpuNodeServer.GpuNodeServer.createFileInput): GpuNodeServer.GpuNodeServer.createFileOutput = {
      _root_.io.grpc.stub.ClientCalls.blockingUnaryCall(channel.newCall(METHOD_CREATE_FILE, options), request)
    }
    
    override def callKernel(request: GpuNodeServer.GpuNodeServer.kernelCallInput): GpuNodeServer.GpuNodeServer.kernelCallOutput = {
      _root_.io.grpc.stub.ClientCalls.blockingUnaryCall(channel.newCall(METHOD_CALL_KERNEL, options), request)
    }
    
    override def build(channel: _root_.io.grpc.Channel, options: _root_.io.grpc.CallOptions): GpuNodeBlockingStub = new GpuNodeBlockingStub(channel, options)
  }
  
  class GpuNodeStub(channel: _root_.io.grpc.Channel, options: _root_.io.grpc.CallOptions = _root_.io.grpc.CallOptions.DEFAULT) extends _root_.io.grpc.stub.AbstractStub[GpuNodeStub](channel, options) with GpuNode {
    override def createFile(request: GpuNodeServer.GpuNodeServer.createFileInput): scala.concurrent.Future[GpuNodeServer.GpuNodeServer.createFileOutput] = {
      com.trueaccord.scalapb.grpc.Grpc.guavaFuture2ScalaFuture(_root_.io.grpc.stub.ClientCalls.futureUnaryCall(channel.newCall(METHOD_CREATE_FILE, options), request))
    }
    
    override def callKernel(request: GpuNodeServer.GpuNodeServer.kernelCallInput): scala.concurrent.Future[GpuNodeServer.GpuNodeServer.kernelCallOutput] = {
      com.trueaccord.scalapb.grpc.Grpc.guavaFuture2ScalaFuture(_root_.io.grpc.stub.ClientCalls.futureUnaryCall(channel.newCall(METHOD_CALL_KERNEL, options), request))
    }
    
    override def build(channel: _root_.io.grpc.Channel, options: _root_.io.grpc.CallOptions): GpuNodeStub = new GpuNodeStub(channel, options)
  }
  
  def bindService(serviceImpl: GpuNode, executionContext: scala.concurrent.ExecutionContext): _root_.io.grpc.ServerServiceDefinition =
    _root_.io.grpc.ServerServiceDefinition.builder(SERVICE)
    .addMethod(
      METHOD_CREATE_FILE,
      _root_.io.grpc.stub.ServerCalls.asyncUnaryCall(new _root_.io.grpc.stub.ServerCalls.UnaryMethod[GpuNodeServer.GpuNodeServer.createFileInput, GpuNodeServer.GpuNodeServer.createFileOutput] {
        override def invoke(request: GpuNodeServer.GpuNodeServer.createFileInput, observer: _root_.io.grpc.stub.StreamObserver[GpuNodeServer.GpuNodeServer.createFileOutput]): Unit =
          serviceImpl.createFile(request).onComplete(com.trueaccord.scalapb.grpc.Grpc.completeObserver(observer))(
            executionContext)
      }))
    .addMethod(
      METHOD_CALL_KERNEL,
      _root_.io.grpc.stub.ServerCalls.asyncUnaryCall(new _root_.io.grpc.stub.ServerCalls.UnaryMethod[GpuNodeServer.GpuNodeServer.kernelCallInput, GpuNodeServer.GpuNodeServer.kernelCallOutput] {
        override def invoke(request: GpuNodeServer.GpuNodeServer.kernelCallInput, observer: _root_.io.grpc.stub.StreamObserver[GpuNodeServer.GpuNodeServer.kernelCallOutput]): Unit =
          serviceImpl.callKernel(request).onComplete(com.trueaccord.scalapb.grpc.Grpc.completeObserver(observer))(
            executionContext)
      }))
    .build()
  
  def blockingStub(channel: _root_.io.grpc.Channel): GpuNodeBlockingStub = new GpuNodeBlockingStub(channel)
  
  def stub(channel: _root_.io.grpc.Channel): GpuNodeStub = new GpuNodeStub(channel)
  
  def javaDescriptor: _root_.com.google.protobuf.Descriptors.ServiceDescriptor = GpuNodeServer.GpuNodeServer.GpuNodeServerProto.javaDescriptor.getServices().get(0)
  
}