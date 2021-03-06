// Generated by the Scala Plugin for the Protocol Buffer Compiler.
// Do not edit!
//
// Protofile syntax: PROTO3

package rpcService.GpuNode



@SerialVersionUID(0L)
final case class kernelCallInput(
    fpath: String = "",
    func: String = "",
    param: Long = 0L
    ) extends com.trueaccord.scalapb.GeneratedMessage with com.trueaccord.scalapb.Message[kernelCallInput] with com.trueaccord.lenses.Updatable[kernelCallInput] {
    @transient
    private[this] var __serializedSizeCachedValue: Int = 0
    private[this] def __computeSerializedValue(): Int = {
      var __size = 0
      if (fpath != "") { __size += _root_.com.google.protobuf.CodedOutputStream.computeStringSize(1, fpath) }
      if (func != "") { __size += _root_.com.google.protobuf.CodedOutputStream.computeStringSize(2, func) }
      if (param != 0L) { __size += _root_.com.google.protobuf.CodedOutputStream.computeInt64Size(3, param) }
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
        val __v = fpath
        if (__v != "") {
          _output__.writeString(1, __v)
        }
      };
      {
        val __v = func
        if (__v != "") {
          _output__.writeString(2, __v)
        }
      };
      {
        val __v = param
        if (__v != 0L) {
          _output__.writeInt64(3, __v)
        }
      };
    }
    def mergeFrom(`_input__`: _root_.com.google.protobuf.CodedInputStream): rpcService.GpuNode.kernelCallInput = {
      var __fpath = this.fpath
      var __func = this.func
      var __param = this.param
      var _done__ = false
      while (!_done__) {
        val _tag__ = _input__.readTag()
        _tag__ match {
          case 0 => _done__ = true
          case 10 =>
            __fpath = _input__.readString()
          case 18 =>
            __func = _input__.readString()
          case 24 =>
            __param = _input__.readInt64()
          case tag => _input__.skipField(tag)
        }
      }
      rpcService.GpuNode.kernelCallInput(
          fpath = __fpath,
          func = __func,
          param = __param
      )
    }
    def withFpath(__v: String): kernelCallInput = copy(fpath = __v)
    def withFunc(__v: String): kernelCallInput = copy(func = __v)
    def withParam(__v: Long): kernelCallInput = copy(param = __v)
    def getFieldByNumber(__fieldNumber: Int): scala.Any = {
      (__fieldNumber: @_root_.scala.unchecked) match {
        case 1 => {
          val __t = fpath
          if (__t != "") __t else null
        }
        case 2 => {
          val __t = func
          if (__t != "") __t else null
        }
        case 3 => {
          val __t = param
          if (__t != 0L) __t else null
        }
      }
    }
    def getField(__field: _root_.scalapb.descriptors.FieldDescriptor): _root_.scalapb.descriptors.PValue = {
      require(__field.containingMessage eq companion.scalaDescriptor)
      (__field.number: @_root_.scala.unchecked) match {
        case 1 => _root_.scalapb.descriptors.PString(fpath)
        case 2 => _root_.scalapb.descriptors.PString(func)
        case 3 => _root_.scalapb.descriptors.PLong(param)
      }
    }
    override def toString: String = _root_.com.trueaccord.scalapb.TextFormat.printToUnicodeString(this)
    def companion = rpcService.GpuNode.kernelCallInput
}

object kernelCallInput extends com.trueaccord.scalapb.GeneratedMessageCompanion[rpcService.GpuNode.kernelCallInput] {
  implicit def messageCompanion: com.trueaccord.scalapb.GeneratedMessageCompanion[rpcService.GpuNode.kernelCallInput] = this
  def fromFieldsMap(__fieldsMap: scala.collection.immutable.Map[_root_.com.google.protobuf.Descriptors.FieldDescriptor, scala.Any]): rpcService.GpuNode.kernelCallInput = {
    require(__fieldsMap.keys.forall(_.getContainingType() == javaDescriptor), "FieldDescriptor does not match message type.")
    val __fields = javaDescriptor.getFields
    rpcService.GpuNode.kernelCallInput(
      __fieldsMap.getOrElse(__fields.get(0), "").asInstanceOf[String],
      __fieldsMap.getOrElse(__fields.get(1), "").asInstanceOf[String],
      __fieldsMap.getOrElse(__fields.get(2), 0L).asInstanceOf[Long]
    )
  }
  implicit def messageReads: _root_.scalapb.descriptors.Reads[rpcService.GpuNode.kernelCallInput] = _root_.scalapb.descriptors.Reads{
    case _root_.scalapb.descriptors.PMessage(__fieldsMap) =>
      require(__fieldsMap.keys.forall(_.containingMessage == scalaDescriptor), "FieldDescriptor does not match message type.")
      rpcService.GpuNode.kernelCallInput(
        __fieldsMap.get(scalaDescriptor.findFieldByNumber(1).get).map(_.as[String]).getOrElse(""),
        __fieldsMap.get(scalaDescriptor.findFieldByNumber(2).get).map(_.as[String]).getOrElse(""),
        __fieldsMap.get(scalaDescriptor.findFieldByNumber(3).get).map(_.as[Long]).getOrElse(0L)
      )
    case _ => throw new RuntimeException("Expected PMessage")
  }
  def javaDescriptor: _root_.com.google.protobuf.Descriptors.Descriptor = GpuNodeProto.javaDescriptor.getMessageTypes.get(2)
  def scalaDescriptor: _root_.scalapb.descriptors.Descriptor = GpuNodeProto.scalaDescriptor.messages(2)
  def messageCompanionForFieldNumber(__number: Int): _root_.com.trueaccord.scalapb.GeneratedMessageCompanion[_] = throw new MatchError(__number)
  lazy val nestedMessagesCompanions: Seq[_root_.com.trueaccord.scalapb.GeneratedMessageCompanion[_]] = Seq.empty
  def enumCompanionForFieldNumber(__fieldNumber: Int): _root_.com.trueaccord.scalapb.GeneratedEnumCompanion[_] = throw new MatchError(__fieldNumber)
  lazy val defaultInstance = rpcService.GpuNode.kernelCallInput(
  )
  implicit class kernelCallInputLens[UpperPB](_l: _root_.com.trueaccord.lenses.Lens[UpperPB, rpcService.GpuNode.kernelCallInput]) extends _root_.com.trueaccord.lenses.ObjectLens[UpperPB, rpcService.GpuNode.kernelCallInput](_l) {
    def fpath: _root_.com.trueaccord.lenses.Lens[UpperPB, String] = field(_.fpath)((c_, f_) => c_.copy(fpath = f_))
    def func: _root_.com.trueaccord.lenses.Lens[UpperPB, String] = field(_.func)((c_, f_) => c_.copy(func = f_))
    def param: _root_.com.trueaccord.lenses.Lens[UpperPB, Long] = field(_.param)((c_, f_) => c_.copy(param = f_))
  }
  final val FPATH_FIELD_NUMBER = 1
  final val FUNC_FIELD_NUMBER = 2
  final val PARAM_FIELD_NUMBER = 3
}
