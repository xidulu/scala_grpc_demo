// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GpuNode.proto

#ifndef PROTOBUF_INCLUDED_GpuNode_2eproto
#define PROTOBUF_INCLUDED_GpuNode_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_GpuNode_2eproto 

namespace protobuf_GpuNode_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_GpuNode_2eproto
namespace rpcService {
class createFileInput;
class createFileInputDefaultTypeInternal;
extern createFileInputDefaultTypeInternal _createFileInput_default_instance_;
class createFileOutput;
class createFileOutputDefaultTypeInternal;
extern createFileOutputDefaultTypeInternal _createFileOutput_default_instance_;
class kernelCallInput;
class kernelCallInputDefaultTypeInternal;
extern kernelCallInputDefaultTypeInternal _kernelCallInput_default_instance_;
class kernelCallOutput;
class kernelCallOutputDefaultTypeInternal;
extern kernelCallOutputDefaultTypeInternal _kernelCallOutput_default_instance_;
}  // namespace rpcService
namespace google {
namespace protobuf {
template<> ::rpcService::createFileInput* Arena::CreateMaybeMessage<::rpcService::createFileInput>(Arena*);
template<> ::rpcService::createFileOutput* Arena::CreateMaybeMessage<::rpcService::createFileOutput>(Arena*);
template<> ::rpcService::kernelCallInput* Arena::CreateMaybeMessage<::rpcService::kernelCallInput>(Arena*);
template<> ::rpcService::kernelCallOutput* Arena::CreateMaybeMessage<::rpcService::kernelCallOutput>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace rpcService {

// ===================================================================

class createFileInput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rpcService.createFileInput) */ {
 public:
  createFileInput();
  virtual ~createFileInput();

  createFileInput(const createFileInput& from);

  inline createFileInput& operator=(const createFileInput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  createFileInput(createFileInput&& from) noexcept
    : createFileInput() {
    *this = ::std::move(from);
  }

  inline createFileInput& operator=(createFileInput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const createFileInput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const createFileInput* internal_default_instance() {
    return reinterpret_cast<const createFileInput*>(
               &_createFileInput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(createFileInput* other);
  friend void swap(createFileInput& a, createFileInput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline createFileInput* New() const final {
    return CreateMaybeMessage<createFileInput>(NULL);
  }

  createFileInput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<createFileInput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const createFileInput& from);
  void MergeFrom(const createFileInput& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(createFileInput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string fpath = 2;
  void clear_fpath();
  static const int kFpathFieldNumber = 2;
  const ::std::string& fpath() const;
  void set_fpath(const ::std::string& value);
  #if LANG_CXX11
  void set_fpath(::std::string&& value);
  #endif
  void set_fpath(const char* value);
  void set_fpath(const char* value, size_t size);
  ::std::string* mutable_fpath();
  ::std::string* release_fpath();
  void set_allocated_fpath(::std::string* fpath);

  // int64 fsize = 1;
  void clear_fsize();
  static const int kFsizeFieldNumber = 1;
  ::google::protobuf::int64 fsize() const;
  void set_fsize(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:rpcService.createFileInput)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr fpath_;
  ::google::protobuf::int64 fsize_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_GpuNode_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class createFileOutput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rpcService.createFileOutput) */ {
 public:
  createFileOutput();
  virtual ~createFileOutput();

  createFileOutput(const createFileOutput& from);

  inline createFileOutput& operator=(const createFileOutput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  createFileOutput(createFileOutput&& from) noexcept
    : createFileOutput() {
    *this = ::std::move(from);
  }

  inline createFileOutput& operator=(createFileOutput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const createFileOutput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const createFileOutput* internal_default_instance() {
    return reinterpret_cast<const createFileOutput*>(
               &_createFileOutput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(createFileOutput* other);
  friend void swap(createFileOutput& a, createFileOutput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline createFileOutput* New() const final {
    return CreateMaybeMessage<createFileOutput>(NULL);
  }

  createFileOutput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<createFileOutput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const createFileOutput& from);
  void MergeFrom(const createFileOutput& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(createFileOutput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string msg = 1;
  void clear_msg();
  static const int kMsgFieldNumber = 1;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:rpcService.createFileOutput)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_GpuNode_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class kernelCallInput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rpcService.kernelCallInput) */ {
 public:
  kernelCallInput();
  virtual ~kernelCallInput();

  kernelCallInput(const kernelCallInput& from);

  inline kernelCallInput& operator=(const kernelCallInput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  kernelCallInput(kernelCallInput&& from) noexcept
    : kernelCallInput() {
    *this = ::std::move(from);
  }

  inline kernelCallInput& operator=(kernelCallInput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const kernelCallInput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const kernelCallInput* internal_default_instance() {
    return reinterpret_cast<const kernelCallInput*>(
               &_kernelCallInput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(kernelCallInput* other);
  friend void swap(kernelCallInput& a, kernelCallInput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline kernelCallInput* New() const final {
    return CreateMaybeMessage<kernelCallInput>(NULL);
  }

  kernelCallInput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<kernelCallInput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const kernelCallInput& from);
  void MergeFrom(const kernelCallInput& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(kernelCallInput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string fpath = 1;
  void clear_fpath();
  static const int kFpathFieldNumber = 1;
  const ::std::string& fpath() const;
  void set_fpath(const ::std::string& value);
  #if LANG_CXX11
  void set_fpath(::std::string&& value);
  #endif
  void set_fpath(const char* value);
  void set_fpath(const char* value, size_t size);
  ::std::string* mutable_fpath();
  ::std::string* release_fpath();
  void set_allocated_fpath(::std::string* fpath);

  // string func = 2;
  void clear_func();
  static const int kFuncFieldNumber = 2;
  const ::std::string& func() const;
  void set_func(const ::std::string& value);
  #if LANG_CXX11
  void set_func(::std::string&& value);
  #endif
  void set_func(const char* value);
  void set_func(const char* value, size_t size);
  ::std::string* mutable_func();
  ::std::string* release_func();
  void set_allocated_func(::std::string* func);

  // int64 param = 3;
  void clear_param();
  static const int kParamFieldNumber = 3;
  ::google::protobuf::int64 param() const;
  void set_param(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:rpcService.kernelCallInput)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr fpath_;
  ::google::protobuf::internal::ArenaStringPtr func_;
  ::google::protobuf::int64 param_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_GpuNode_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class kernelCallOutput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rpcService.kernelCallOutput) */ {
 public:
  kernelCallOutput();
  virtual ~kernelCallOutput();

  kernelCallOutput(const kernelCallOutput& from);

  inline kernelCallOutput& operator=(const kernelCallOutput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  kernelCallOutput(kernelCallOutput&& from) noexcept
    : kernelCallOutput() {
    *this = ::std::move(from);
  }

  inline kernelCallOutput& operator=(kernelCallOutput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const kernelCallOutput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const kernelCallOutput* internal_default_instance() {
    return reinterpret_cast<const kernelCallOutput*>(
               &_kernelCallOutput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(kernelCallOutput* other);
  friend void swap(kernelCallOutput& a, kernelCallOutput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline kernelCallOutput* New() const final {
    return CreateMaybeMessage<kernelCallOutput>(NULL);
  }

  kernelCallOutput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<kernelCallOutput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const kernelCallOutput& from);
  void MergeFrom(const kernelCallOutput& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(kernelCallOutput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string fpath = 1;
  void clear_fpath();
  static const int kFpathFieldNumber = 1;
  const ::std::string& fpath() const;
  void set_fpath(const ::std::string& value);
  #if LANG_CXX11
  void set_fpath(::std::string&& value);
  #endif
  void set_fpath(const char* value);
  void set_fpath(const char* value, size_t size);
  ::std::string* mutable_fpath();
  ::std::string* release_fpath();
  void set_allocated_fpath(::std::string* fpath);

  // int32 fsize = 2;
  void clear_fsize();
  static const int kFsizeFieldNumber = 2;
  ::google::protobuf::int32 fsize() const;
  void set_fsize(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:rpcService.kernelCallOutput)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr fpath_;
  ::google::protobuf::int32 fsize_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_GpuNode_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// createFileInput

// int64 fsize = 1;
inline void createFileInput::clear_fsize() {
  fsize_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 createFileInput::fsize() const {
  // @@protoc_insertion_point(field_get:rpcService.createFileInput.fsize)
  return fsize_;
}
inline void createFileInput::set_fsize(::google::protobuf::int64 value) {
  
  fsize_ = value;
  // @@protoc_insertion_point(field_set:rpcService.createFileInput.fsize)
}

// string fpath = 2;
inline void createFileInput::clear_fpath() {
  fpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& createFileInput::fpath() const {
  // @@protoc_insertion_point(field_get:rpcService.createFileInput.fpath)
  return fpath_.GetNoArena();
}
inline void createFileInput::set_fpath(const ::std::string& value) {
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rpcService.createFileInput.fpath)
}
#if LANG_CXX11
inline void createFileInput::set_fpath(::std::string&& value) {
  
  fpath_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rpcService.createFileInput.fpath)
}
#endif
inline void createFileInput::set_fpath(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rpcService.createFileInput.fpath)
}
inline void createFileInput::set_fpath(const char* value, size_t size) {
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rpcService.createFileInput.fpath)
}
inline ::std::string* createFileInput::mutable_fpath() {
  
  // @@protoc_insertion_point(field_mutable:rpcService.createFileInput.fpath)
  return fpath_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* createFileInput::release_fpath() {
  // @@protoc_insertion_point(field_release:rpcService.createFileInput.fpath)
  
  return fpath_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void createFileInput::set_allocated_fpath(::std::string* fpath) {
  if (fpath != NULL) {
    
  } else {
    
  }
  fpath_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fpath);
  // @@protoc_insertion_point(field_set_allocated:rpcService.createFileInput.fpath)
}

// -------------------------------------------------------------------

// createFileOutput

// string msg = 1;
inline void createFileOutput::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& createFileOutput::msg() const {
  // @@protoc_insertion_point(field_get:rpcService.createFileOutput.msg)
  return msg_.GetNoArena();
}
inline void createFileOutput::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rpcService.createFileOutput.msg)
}
#if LANG_CXX11
inline void createFileOutput::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rpcService.createFileOutput.msg)
}
#endif
inline void createFileOutput::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rpcService.createFileOutput.msg)
}
inline void createFileOutput::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rpcService.createFileOutput.msg)
}
inline ::std::string* createFileOutput::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:rpcService.createFileOutput.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* createFileOutput::release_msg() {
  // @@protoc_insertion_point(field_release:rpcService.createFileOutput.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void createFileOutput::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:rpcService.createFileOutput.msg)
}

// -------------------------------------------------------------------

// kernelCallInput

// string fpath = 1;
inline void kernelCallInput::clear_fpath() {
  fpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& kernelCallInput::fpath() const {
  // @@protoc_insertion_point(field_get:rpcService.kernelCallInput.fpath)
  return fpath_.GetNoArena();
}
inline void kernelCallInput::set_fpath(const ::std::string& value) {
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rpcService.kernelCallInput.fpath)
}
#if LANG_CXX11
inline void kernelCallInput::set_fpath(::std::string&& value) {
  
  fpath_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rpcService.kernelCallInput.fpath)
}
#endif
inline void kernelCallInput::set_fpath(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rpcService.kernelCallInput.fpath)
}
inline void kernelCallInput::set_fpath(const char* value, size_t size) {
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rpcService.kernelCallInput.fpath)
}
inline ::std::string* kernelCallInput::mutable_fpath() {
  
  // @@protoc_insertion_point(field_mutable:rpcService.kernelCallInput.fpath)
  return fpath_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* kernelCallInput::release_fpath() {
  // @@protoc_insertion_point(field_release:rpcService.kernelCallInput.fpath)
  
  return fpath_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void kernelCallInput::set_allocated_fpath(::std::string* fpath) {
  if (fpath != NULL) {
    
  } else {
    
  }
  fpath_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fpath);
  // @@protoc_insertion_point(field_set_allocated:rpcService.kernelCallInput.fpath)
}

// string func = 2;
inline void kernelCallInput::clear_func() {
  func_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& kernelCallInput::func() const {
  // @@protoc_insertion_point(field_get:rpcService.kernelCallInput.func)
  return func_.GetNoArena();
}
inline void kernelCallInput::set_func(const ::std::string& value) {
  
  func_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rpcService.kernelCallInput.func)
}
#if LANG_CXX11
inline void kernelCallInput::set_func(::std::string&& value) {
  
  func_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rpcService.kernelCallInput.func)
}
#endif
inline void kernelCallInput::set_func(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  func_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rpcService.kernelCallInput.func)
}
inline void kernelCallInput::set_func(const char* value, size_t size) {
  
  func_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rpcService.kernelCallInput.func)
}
inline ::std::string* kernelCallInput::mutable_func() {
  
  // @@protoc_insertion_point(field_mutable:rpcService.kernelCallInput.func)
  return func_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* kernelCallInput::release_func() {
  // @@protoc_insertion_point(field_release:rpcService.kernelCallInput.func)
  
  return func_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void kernelCallInput::set_allocated_func(::std::string* func) {
  if (func != NULL) {
    
  } else {
    
  }
  func_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), func);
  // @@protoc_insertion_point(field_set_allocated:rpcService.kernelCallInput.func)
}

// int64 param = 3;
inline void kernelCallInput::clear_param() {
  param_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 kernelCallInput::param() const {
  // @@protoc_insertion_point(field_get:rpcService.kernelCallInput.param)
  return param_;
}
inline void kernelCallInput::set_param(::google::protobuf::int64 value) {
  
  param_ = value;
  // @@protoc_insertion_point(field_set:rpcService.kernelCallInput.param)
}

// -------------------------------------------------------------------

// kernelCallOutput

// string fpath = 1;
inline void kernelCallOutput::clear_fpath() {
  fpath_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& kernelCallOutput::fpath() const {
  // @@protoc_insertion_point(field_get:rpcService.kernelCallOutput.fpath)
  return fpath_.GetNoArena();
}
inline void kernelCallOutput::set_fpath(const ::std::string& value) {
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rpcService.kernelCallOutput.fpath)
}
#if LANG_CXX11
inline void kernelCallOutput::set_fpath(::std::string&& value) {
  
  fpath_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rpcService.kernelCallOutput.fpath)
}
#endif
inline void kernelCallOutput::set_fpath(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rpcService.kernelCallOutput.fpath)
}
inline void kernelCallOutput::set_fpath(const char* value, size_t size) {
  
  fpath_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rpcService.kernelCallOutput.fpath)
}
inline ::std::string* kernelCallOutput::mutable_fpath() {
  
  // @@protoc_insertion_point(field_mutable:rpcService.kernelCallOutput.fpath)
  return fpath_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* kernelCallOutput::release_fpath() {
  // @@protoc_insertion_point(field_release:rpcService.kernelCallOutput.fpath)
  
  return fpath_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void kernelCallOutput::set_allocated_fpath(::std::string* fpath) {
  if (fpath != NULL) {
    
  } else {
    
  }
  fpath_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fpath);
  // @@protoc_insertion_point(field_set_allocated:rpcService.kernelCallOutput.fpath)
}

// int32 fsize = 2;
inline void kernelCallOutput::clear_fsize() {
  fsize_ = 0;
}
inline ::google::protobuf::int32 kernelCallOutput::fsize() const {
  // @@protoc_insertion_point(field_get:rpcService.kernelCallOutput.fsize)
  return fsize_;
}
inline void kernelCallOutput::set_fsize(::google::protobuf::int32 value) {
  
  fsize_ = value;
  // @@protoc_insertion_point(field_set:rpcService.kernelCallOutput.fsize)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace rpcService

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_GpuNode_2eproto