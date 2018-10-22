package rpcService.GpuNode

import io.grpc.ManagedChannelBuilder
;



object FileCreator extends App {
//  memoryFileBuilder.create("sdfas", 11)
  val channel = ManagedChannelBuilder.forAddress("0.0.0.0", 5000).usePlaintext(true).build()
  val request = rpcService.GpuNode.createFileInput(1, "./")
  val stub = rpcService.GpuNode.GpuNodeGrpc.blockingStub(channel)
  val reply: rpcService.GpuNode.createFileOutput = stub.createFile(request)
}
