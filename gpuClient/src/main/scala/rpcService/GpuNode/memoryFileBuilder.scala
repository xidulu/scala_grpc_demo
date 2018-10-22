package rpcService.GpuNode
import java.io.{File, RandomAccessFile}
import java.nio.channels.FileChannel

import com.google.protobuf.wrappers.Int32Value

import scala.util.Try

object memoryFileBuilder {
  def create(path: String, bufferSize: Long): Try[Unit] = {
    Try({
      val file = new File(path)
      file.createNewFile()
      (new RandomAccessFile(file, "rw")).
        getChannel.
        map(FileChannel.MapMode.READ_WRITE, 0, bufferSize)
    })
  }

}
