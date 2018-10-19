package GpuNodeServer

import io.grpc.ManagedChannelBuilder
;

object client extends App {
  val channel = ManagedChannelBuilder.forAddress("0.0.0.0", 5000).usePlaintext(true).build()
  val request = GpuNodeServer.createFileInput(1, "./")
  val stub = GpuNodeServer.GpuNodeGrpc.blockingStub(channel)
  val reply: GpuNodeServer.createFileOutput = stub.createFile(request)
}
