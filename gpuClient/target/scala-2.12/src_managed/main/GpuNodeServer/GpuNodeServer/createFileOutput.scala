// Generated by the Scala Plugin for the Protocol Buffer Compiler.
// Do not edit!
//
// Protofile syntax: PROTO3

package GpuNodeServer.GpuNodeServer



@SerialVersionUID(0L)
final case class createFileOutput(
    msg: String = ""
    ) extends com.trueaccord.scalapb.GeneratedMessage with com.trueaccord.scalapb.Message[createFileOutput] with com.trueaccord.lenses.Updatable[createFileOutput] {
    @transient
    private[this] var __serializedSizeCachedValue: Int = 0
    private[this] def __computeSerializedValue(): Int = {
      var __size = 0
      if (msg != "") { __size += _root_.com.google.protobuf.CodedOutputStream.computeStringSize(1, msg) }
      __size
    }
    final override def serializedSize: Int = {
      var read = __serializedSizeCachedValue
      if (read == 0) {
        read = __computeSerializedValue()
        __serializedSizeCachedValue = read
      }
      read
    }
    def writeTo(`_output__`: _root_.com.google.protobuf.CodedOutputStream): Unit = {
      {
        val __v = msg
        if (__v != "") {
          _output__.writeString(1, __v)
        }
      };
    }
    def mergeFrom(`_input__`: _root_.com.google.protobuf.CodedInputStream): GpuNodeServer.GpuNodeServer.createFileOutput = {
      var __msg = this.msg
      var _done__ = false
      while (!_done__) {
        val _tag__ = _input__.readTag()
        _tag__ match {
          case 0 => _done__ = true
          case 10 =>
            __msg = _input__.readString()
          case tag => _input__.skipField(tag)
        }
      }
      GpuNodeServer.GpuNodeServer.createFileOutput(
          msg = __msg
      )
    }
    def withMsg(__v: String): createFileOutput = copy(msg = __v)
    def getFieldByNumber(__fieldNumber: Int): scala.Any = {
      (__fieldNumber: @_root_.scala.unchecked) match {
        case 1 => {
          val __t = msg
          if (__t != "") __t else null
        }
      }
    }
    def getField(__field: _root_.scalapb.descriptors.FieldDescriptor): _root_.scalapb.descriptors.PValue = {
      require(__field.containingMessage eq companion.scalaDescriptor)
      (__field.number: @_root_.scala.unchecked) match {
        case 1 => _root_.scalapb.descriptors.PString(msg)
      }
    }
    override def toString: String = _root_.com.trueaccord.scalapb.TextFormat.printToUnicodeString(this)
    def companion = GpuNodeServer.GpuNodeServer.createFileOutput
}

object createFileOutput extends com.trueaccord.scalapb.GeneratedMessageCompanion[GpuNodeServer.GpuNodeServer.createFileOutput] {
  implicit def messageCompanion: com.trueaccord.scalapb.GeneratedMessageCompanion[GpuNodeServer.GpuNodeServer.createFileOutput] = this
  def fromFieldsMap(__fieldsMap: scala.collection.immutable.Map[_root_.com.google.protobuf.Descriptors.FieldDescriptor, scala.Any]): GpuNodeServer.GpuNodeServer.createFileOutput = {
    require(__fieldsMap.keys.forall(_.getContainingType() == javaDescriptor), "FieldDescriptor does not match message type.")
    val __fields = javaDescriptor.getFields
    GpuNodeServer.GpuNodeServer.createFileOutput(
      __fieldsMap.getOrElse(__fields.get(0), "").asInstanceOf[String]
    )
  }
  implicit def messageReads: _root_.scalapb.descriptors.Reads[GpuNodeServer.GpuNodeServer.createFileOutput] = _root_.scalapb.descriptors.Reads{
    case _root_.scalapb.descriptors.PMessage(__fieldsMap) =>
      require(__fieldsMap.keys.forall(_.containingMessage == scalaDescriptor), "FieldDescriptor does not match message type.")
      GpuNodeServer.GpuNodeServer.createFileOutput(
        __fieldsMap.get(scalaDescriptor.findFieldByNumber(1).get).map(_.as[String]).getOrElse("")
      )
    case _ => throw new RuntimeException("Expected PMessage")
  }
  def javaDescriptor: _root_.com.google.protobuf.Descriptors.Descriptor = GpuNodeServerProto.javaDescriptor.getMessageTypes.get(1)
  def scalaDescriptor: _root_.scalapb.descriptors.Descriptor = GpuNodeServerProto.scalaDescriptor.messages(1)
  def messageCompanionForFieldNumber(__number: Int): _root_.com.trueaccord.scalapb.GeneratedMessageCompanion[_] = throw new MatchError(__number)
  lazy val nestedMessagesCompanions: Seq[_root_.com.trueaccord.scalapb.GeneratedMessageCompanion[_]] = Seq.empty
  def enumCompanionForFieldNumber(__fieldNumber: Int): _root_.com.trueaccord.scalapb.GeneratedEnumCompanion[_] = throw new MatchError(__fieldNumber)
  lazy val defaultInstance = GpuNodeServer.GpuNodeServer.createFileOutput(
  )
  implicit class createFileOutputLens[UpperPB](_l: _root_.com.trueaccord.lenses.Lens[UpperPB, GpuNodeServer.GpuNodeServer.createFileOutput]) extends _root_.com.trueaccord.lenses.ObjectLens[UpperPB, GpuNodeServer.GpuNodeServer.createFileOutput](_l) {
    def msg: _root_.com.trueaccord.lenses.Lens[UpperPB, String] = field(_.msg)((c_, f_) => c_.copy(msg = f_))
  }
  final val MSG_FIELD_NUMBER = 1
}
