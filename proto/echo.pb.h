// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_echo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_echo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_echo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_echo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_echo_2eproto;
namespace echo {
class EchoLockResponse;
struct EchoLockResponseDefaultTypeInternal;
extern EchoLockResponseDefaultTypeInternal _EchoLockResponse_default_instance_;
class EchoRequest;
struct EchoRequestDefaultTypeInternal;
extern EchoRequestDefaultTypeInternal _EchoRequest_default_instance_;
class EchoResponse;
struct EchoResponseDefaultTypeInternal;
extern EchoResponseDefaultTypeInternal _EchoResponse_default_instance_;
}  // namespace echo
PROTOBUF_NAMESPACE_OPEN
template<> ::echo::EchoLockResponse* Arena::CreateMaybeMessage<::echo::EchoLockResponse>(Arena*);
template<> ::echo::EchoRequest* Arena::CreateMaybeMessage<::echo::EchoRequest>(Arena*);
template<> ::echo::EchoResponse* Arena::CreateMaybeMessage<::echo::EchoResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace echo {

// ===================================================================

class EchoRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:echo.EchoRequest) */ {
 public:
  inline EchoRequest() : EchoRequest(nullptr) {}
  ~EchoRequest() override;
  explicit constexpr EchoRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EchoRequest(const EchoRequest& from);
  EchoRequest(EchoRequest&& from) noexcept
    : EchoRequest() {
    *this = ::std::move(from);
  }

  inline EchoRequest& operator=(const EchoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoRequest& operator=(EchoRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EchoRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const EchoRequest* internal_default_instance() {
    return reinterpret_cast<const EchoRequest*>(
               &_EchoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EchoRequest& a, EchoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EchoRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EchoRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EchoRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const EchoRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "echo.EchoRequest";
  }
  protected:
  explicit EchoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:echo.EchoRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_2eproto;
};
// -------------------------------------------------------------------

class EchoResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:echo.EchoResponse) */ {
 public:
  inline EchoResponse() : EchoResponse(nullptr) {}
  ~EchoResponse() override;
  explicit constexpr EchoResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EchoResponse(const EchoResponse& from);
  EchoResponse(EchoResponse&& from) noexcept
    : EchoResponse() {
    *this = ::std::move(from);
  }

  inline EchoResponse& operator=(const EchoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoResponse& operator=(EchoResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EchoResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const EchoResponse* internal_default_instance() {
    return reinterpret_cast<const EchoResponse*>(
               &_EchoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(EchoResponse& a, EchoResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EchoResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EchoResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EchoResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const EchoResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "echo.EchoResponse";
  }
  protected:
  explicit EchoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:echo.EchoResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_2eproto;
};
// -------------------------------------------------------------------

class EchoLockResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:echo.EchoLockResponse) */ {
 public:
  inline EchoLockResponse() : EchoLockResponse(nullptr) {}
  ~EchoLockResponse() override;
  explicit constexpr EchoLockResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EchoLockResponse(const EchoLockResponse& from);
  EchoLockResponse(EchoLockResponse&& from) noexcept
    : EchoLockResponse() {
    *this = ::std::move(from);
  }

  inline EchoLockResponse& operator=(const EchoLockResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoLockResponse& operator=(EchoLockResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const EchoLockResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const EchoLockResponse* internal_default_instance() {
    return reinterpret_cast<const EchoLockResponse*>(
               &_EchoLockResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(EchoLockResponse& a, EchoLockResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoLockResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoLockResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EchoLockResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EchoLockResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EchoLockResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const EchoLockResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EchoLockResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "echo.EchoLockResponse";
  }
  protected:
  explicit EchoLockResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 2,
    kStartFieldNumber = 3,
    kEndFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // string message = 2;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // .google.protobuf.Timestamp start = 3;
  bool has_start() const;
  private:
  bool _internal_has_start() const;
  public:
  void clear_start();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& start() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_start();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_start();
  void set_allocated_start(::PROTOBUF_NAMESPACE_ID::Timestamp* start);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_start() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_start();
  public:
  void unsafe_arena_set_allocated_start(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* start);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_start();

  // .google.protobuf.Timestamp end = 4;
  bool has_end() const;
  private:
  bool _internal_has_end() const;
  public:
  void clear_end();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& end() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_end();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_end();
  void set_allocated_end(::PROTOBUF_NAMESPACE_ID::Timestamp* end);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_end() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_end();
  public:
  void unsafe_arena_set_allocated_end(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* end);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_end();

  // int64 id = 1;
  void clear_id();
  int64_t id() const;
  void set_id(int64_t value);
  private:
  int64_t _internal_id() const;
  void _internal_set_id(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:echo.EchoLockResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* start_;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* end_;
  int64_t id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EchoRequest

// string message = 1;
inline void EchoRequest::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& EchoRequest::message() const {
  // @@protoc_insertion_point(field_get:echo.EchoRequest.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EchoRequest::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:echo.EchoRequest.message)
}
inline std::string* EchoRequest::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:echo.EchoRequest.message)
  return _s;
}
inline const std::string& EchoRequest::_internal_message() const {
  return message_.Get();
}
inline void EchoRequest::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* EchoRequest::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* EchoRequest::release_message() {
  // @@protoc_insertion_point(field_release:echo.EchoRequest.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void EchoRequest::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (message_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:echo.EchoRequest.message)
}

// -------------------------------------------------------------------

// EchoResponse

// string message = 1;
inline void EchoResponse::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& EchoResponse::message() const {
  // @@protoc_insertion_point(field_get:echo.EchoResponse.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EchoResponse::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:echo.EchoResponse.message)
}
inline std::string* EchoResponse::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:echo.EchoResponse.message)
  return _s;
}
inline const std::string& EchoResponse::_internal_message() const {
  return message_.Get();
}
inline void EchoResponse::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* EchoResponse::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* EchoResponse::release_message() {
  // @@protoc_insertion_point(field_release:echo.EchoResponse.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void EchoResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (message_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:echo.EchoResponse.message)
}

// -------------------------------------------------------------------

// EchoLockResponse

// int64 id = 1;
inline void EchoLockResponse::clear_id() {
  id_ = int64_t{0};
}
inline int64_t EchoLockResponse::_internal_id() const {
  return id_;
}
inline int64_t EchoLockResponse::id() const {
  // @@protoc_insertion_point(field_get:echo.EchoLockResponse.id)
  return _internal_id();
}
inline void EchoLockResponse::_internal_set_id(int64_t value) {
  
  id_ = value;
}
inline void EchoLockResponse::set_id(int64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:echo.EchoLockResponse.id)
}

// string message = 2;
inline void EchoLockResponse::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& EchoLockResponse::message() const {
  // @@protoc_insertion_point(field_get:echo.EchoLockResponse.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EchoLockResponse::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:echo.EchoLockResponse.message)
}
inline std::string* EchoLockResponse::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:echo.EchoLockResponse.message)
  return _s;
}
inline const std::string& EchoLockResponse::_internal_message() const {
  return message_.Get();
}
inline void EchoLockResponse::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* EchoLockResponse::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* EchoLockResponse::release_message() {
  // @@protoc_insertion_point(field_release:echo.EchoLockResponse.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void EchoLockResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (message_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:echo.EchoLockResponse.message)
}

// .google.protobuf.Timestamp start = 3;
inline bool EchoLockResponse::_internal_has_start() const {
  return this != internal_default_instance() && start_ != nullptr;
}
inline bool EchoLockResponse::has_start() const {
  return _internal_has_start();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& EchoLockResponse::_internal_start() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = start_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& EchoLockResponse::start() const {
  // @@protoc_insertion_point(field_get:echo.EchoLockResponse.start)
  return _internal_start();
}
inline void EchoLockResponse::unsafe_arena_set_allocated_start(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_);
  }
  start_ = start;
  if (start) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:echo.EchoLockResponse.start)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::release_start() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = start_;
  start_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::unsafe_arena_release_start() {
  // @@protoc_insertion_point(field_release:echo.EchoLockResponse.start)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = start_;
  start_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::_internal_mutable_start() {
  
  if (start_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    start_ = p;
  }
  return start_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::mutable_start() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start();
  // @@protoc_insertion_point(field_mutable:echo.EchoLockResponse.start)
  return _msg;
}
inline void EchoLockResponse::set_allocated_start(::PROTOBUF_NAMESPACE_ID::Timestamp* start) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_);
  }
  if (start) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start));
    if (message_arena != submessage_arena) {
      start = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start, submessage_arena);
    }
    
  } else {
    
  }
  start_ = start;
  // @@protoc_insertion_point(field_set_allocated:echo.EchoLockResponse.start)
}

// .google.protobuf.Timestamp end = 4;
inline bool EchoLockResponse::_internal_has_end() const {
  return this != internal_default_instance() && end_ != nullptr;
}
inline bool EchoLockResponse::has_end() const {
  return _internal_has_end();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& EchoLockResponse::_internal_end() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = end_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& EchoLockResponse::end() const {
  // @@protoc_insertion_point(field_get:echo.EchoLockResponse.end)
  return _internal_end();
}
inline void EchoLockResponse::unsafe_arena_set_allocated_end(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_);
  }
  end_ = end;
  if (end) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:echo.EchoLockResponse.end)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::release_end() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = end_;
  end_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::unsafe_arena_release_end() {
  // @@protoc_insertion_point(field_release:echo.EchoLockResponse.end)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = end_;
  end_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::_internal_mutable_end() {
  
  if (end_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    end_ = p;
  }
  return end_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* EchoLockResponse::mutable_end() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_end();
  // @@protoc_insertion_point(field_mutable:echo.EchoLockResponse.end)
  return _msg;
}
inline void EchoLockResponse::set_allocated_end(::PROTOBUF_NAMESPACE_ID::Timestamp* end) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_);
  }
  if (end) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end));
    if (message_arena != submessage_arena) {
      end = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end, submessage_arena);
    }
    
  } else {
    
  }
  end_ = end;
  // @@protoc_insertion_point(field_set_allocated:echo.EchoLockResponse.end)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_echo_2eproto