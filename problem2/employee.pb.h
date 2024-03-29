// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: employee.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_employee_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_employee_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/empty.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_employee_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_employee_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_employee_2eproto;
namespace employee {
class Employee;
struct EmployeeDefaultTypeInternal;
extern EmployeeDefaultTypeInternal _Employee_default_instance_;
class ManagerIdRequest;
struct ManagerIdRequestDefaultTypeInternal;
extern ManagerIdRequestDefaultTypeInternal _ManagerIdRequest_default_instance_;
class PositionRequest;
struct PositionRequestDefaultTypeInternal;
extern PositionRequestDefaultTypeInternal _PositionRequest_default_instance_;
}  // namespace employee
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace employee {

// ===================================================================


// -------------------------------------------------------------------

class PositionRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:employee.PositionRequest) */ {
 public:
  inline PositionRequest() : PositionRequest(nullptr) {}
  ~PositionRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PositionRequest(::google::protobuf::internal::ConstantInitialized);

  inline PositionRequest(const PositionRequest& from)
      : PositionRequest(nullptr, from) {}
  PositionRequest(PositionRequest&& from) noexcept
    : PositionRequest() {
    *this = ::std::move(from);
  }

  inline PositionRequest& operator=(const PositionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PositionRequest& operator=(PositionRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PositionRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const PositionRequest* internal_default_instance() {
    return reinterpret_cast<const PositionRequest*>(
               &_PositionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PositionRequest& a, PositionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PositionRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PositionRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PositionRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PositionRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const PositionRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const PositionRequest& from) {
    PositionRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(PositionRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "employee.PositionRequest";
  }
  protected:
  explicit PositionRequest(::google::protobuf::Arena* arena);
  PositionRequest(::google::protobuf::Arena* arena, const PositionRequest& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNewPositionFieldNumber = 2,
    kEmployeeIdFieldNumber = 1,
  };
  // string new_position = 2;
  void clear_new_position() ;
  const std::string& new_position() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_new_position(Arg_&& arg, Args_... args);
  std::string* mutable_new_position();
  PROTOBUF_NODISCARD std::string* release_new_position();
  void set_allocated_new_position(std::string* value);

  private:
  const std::string& _internal_new_position() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_new_position(
      const std::string& value);
  std::string* _internal_mutable_new_position();

  public:
  // int32 employee_id = 1;
  void clear_employee_id() ;
  ::int32_t employee_id() const;
  void set_employee_id(::int32_t value);

  private:
  ::int32_t _internal_employee_id() const;
  void _internal_set_employee_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:employee.PositionRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      45, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr new_position_;
    ::int32_t employee_id_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_employee_2eproto;
};// -------------------------------------------------------------------

class ManagerIdRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:employee.ManagerIdRequest) */ {
 public:
  inline ManagerIdRequest() : ManagerIdRequest(nullptr) {}
  ~ManagerIdRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ManagerIdRequest(::google::protobuf::internal::ConstantInitialized);

  inline ManagerIdRequest(const ManagerIdRequest& from)
      : ManagerIdRequest(nullptr, from) {}
  ManagerIdRequest(ManagerIdRequest&& from) noexcept
    : ManagerIdRequest() {
    *this = ::std::move(from);
  }

  inline ManagerIdRequest& operator=(const ManagerIdRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ManagerIdRequest& operator=(ManagerIdRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ManagerIdRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ManagerIdRequest* internal_default_instance() {
    return reinterpret_cast<const ManagerIdRequest*>(
               &_ManagerIdRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ManagerIdRequest& a, ManagerIdRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ManagerIdRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ManagerIdRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ManagerIdRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ManagerIdRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ManagerIdRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const ManagerIdRequest& from) {
    ManagerIdRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ManagerIdRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "employee.ManagerIdRequest";
  }
  protected:
  explicit ManagerIdRequest(::google::protobuf::Arena* arena);
  ManagerIdRequest(::google::protobuf::Arena* arena, const ManagerIdRequest& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEmployeeIdFieldNumber = 1,
    kNewManagerIdFieldNumber = 2,
  };
  // int32 employee_id = 1;
  void clear_employee_id() ;
  ::int32_t employee_id() const;
  void set_employee_id(::int32_t value);

  private:
  ::int32_t _internal_employee_id() const;
  void _internal_set_employee_id(::int32_t value);

  public:
  // int32 new_manager_id = 2;
  void clear_new_manager_id() ;
  ::int32_t new_manager_id() const;
  void set_new_manager_id(::int32_t value);

  private:
  ::int32_t _internal_new_manager_id() const;
  void _internal_set_new_manager_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:employee.ManagerIdRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::int32_t employee_id_;
    ::int32_t new_manager_id_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_employee_2eproto;
};// -------------------------------------------------------------------

class Employee final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:employee.Employee) */ {
 public:
  inline Employee() : Employee(nullptr) {}
  ~Employee() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Employee(::google::protobuf::internal::ConstantInitialized);

  inline Employee(const Employee& from)
      : Employee(nullptr, from) {}
  Employee(Employee&& from) noexcept
    : Employee() {
    *this = ::std::move(from);
  }

  inline Employee& operator=(const Employee& from) {
    CopyFrom(from);
    return *this;
  }
  inline Employee& operator=(Employee&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Employee& default_instance() {
    return *internal_default_instance();
  }
  static inline const Employee* internal_default_instance() {
    return reinterpret_cast<const Employee*>(
               &_Employee_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Employee& a, Employee& b) {
    a.Swap(&b);
  }
  inline void Swap(Employee* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Employee* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Employee* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Employee>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Employee& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Employee& from) {
    Employee::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Employee* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "employee.Employee";
  }
  protected:
  explicit Employee(::google::protobuf::Arena* arena);
  Employee(::google::protobuf::Arena* arena, const Employee& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kPositionFieldNumber = 3,
    kIdFieldNumber = 1,
    kManagerIdFieldNumber = 4,
  };
  // string name = 2;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string position = 3;
  void clear_position() ;
  const std::string& position() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_position(Arg_&& arg, Args_... args);
  std::string* mutable_position();
  PROTOBUF_NODISCARD std::string* release_position();
  void set_allocated_position(std::string* value);

  private:
  const std::string& _internal_position() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_position(
      const std::string& value);
  std::string* _internal_mutable_position();

  public:
  // int32 id = 1;
  void clear_id() ;
  ::int32_t id() const;
  void set_id(::int32_t value);

  private:
  ::int32_t _internal_id() const;
  void _internal_set_id(::int32_t value);

  public:
  // int32 manager_id = 4;
  void clear_manager_id() ;
  ::int32_t manager_id() const;
  void set_manager_id(::int32_t value);

  private:
  ::int32_t _internal_manager_id() const;
  void _internal_set_manager_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:employee.Employee)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      38, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr position_;
    ::int32_t id_;
    ::int32_t manager_id_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_employee_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Employee

// int32 id = 1;
inline void Employee::clear_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.id_ = 0;
}
inline ::int32_t Employee::id() const {
  // @@protoc_insertion_point(field_get:employee.Employee.id)
  return _internal_id();
}
inline void Employee::set_id(::int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:employee.Employee.id)
}
inline ::int32_t Employee::_internal_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.id_;
}
inline void Employee::_internal_set_id(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.id_ = value;
}

// string name = 2;
inline void Employee::clear_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Employee::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:employee.Employee.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Employee::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:employee.Employee.name)
}
inline std::string* Employee::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:employee.Employee.name)
  return _s;
}
inline const std::string& Employee::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void Employee::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Employee::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Employee::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:employee.Employee.name)
  return _impl_.name_.Release();
}
inline void Employee::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:employee.Employee.name)
}

// string position = 3;
inline void Employee::clear_position() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.position_.ClearToEmpty();
}
inline const std::string& Employee::position() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:employee.Employee.position)
  return _internal_position();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Employee::set_position(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.position_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:employee.Employee.position)
}
inline std::string* Employee::mutable_position() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_position();
  // @@protoc_insertion_point(field_mutable:employee.Employee.position)
  return _s;
}
inline const std::string& Employee::_internal_position() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.position_.Get();
}
inline void Employee::_internal_set_position(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.position_.Set(value, GetArena());
}
inline std::string* Employee::_internal_mutable_position() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.position_.Mutable( GetArena());
}
inline std::string* Employee::release_position() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:employee.Employee.position)
  return _impl_.position_.Release();
}
inline void Employee::set_allocated_position(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.position_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.position_.IsDefault()) {
          _impl_.position_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:employee.Employee.position)
}

// int32 manager_id = 4;
inline void Employee::clear_manager_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.manager_id_ = 0;
}
inline ::int32_t Employee::manager_id() const {
  // @@protoc_insertion_point(field_get:employee.Employee.manager_id)
  return _internal_manager_id();
}
inline void Employee::set_manager_id(::int32_t value) {
  _internal_set_manager_id(value);
  // @@protoc_insertion_point(field_set:employee.Employee.manager_id)
}
inline ::int32_t Employee::_internal_manager_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.manager_id_;
}
inline void Employee::_internal_set_manager_id(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.manager_id_ = value;
}

// -------------------------------------------------------------------

// PositionRequest

// int32 employee_id = 1;
inline void PositionRequest::clear_employee_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.employee_id_ = 0;
}
inline ::int32_t PositionRequest::employee_id() const {
  // @@protoc_insertion_point(field_get:employee.PositionRequest.employee_id)
  return _internal_employee_id();
}
inline void PositionRequest::set_employee_id(::int32_t value) {
  _internal_set_employee_id(value);
  // @@protoc_insertion_point(field_set:employee.PositionRequest.employee_id)
}
inline ::int32_t PositionRequest::_internal_employee_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.employee_id_;
}
inline void PositionRequest::_internal_set_employee_id(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.employee_id_ = value;
}

// string new_position = 2;
inline void PositionRequest::clear_new_position() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.new_position_.ClearToEmpty();
}
inline const std::string& PositionRequest::new_position() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:employee.PositionRequest.new_position)
  return _internal_new_position();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PositionRequest::set_new_position(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.new_position_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:employee.PositionRequest.new_position)
}
inline std::string* PositionRequest::mutable_new_position() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_new_position();
  // @@protoc_insertion_point(field_mutable:employee.PositionRequest.new_position)
  return _s;
}
inline const std::string& PositionRequest::_internal_new_position() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.new_position_.Get();
}
inline void PositionRequest::_internal_set_new_position(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.new_position_.Set(value, GetArena());
}
inline std::string* PositionRequest::_internal_mutable_new_position() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.new_position_.Mutable( GetArena());
}
inline std::string* PositionRequest::release_new_position() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:employee.PositionRequest.new_position)
  return _impl_.new_position_.Release();
}
inline void PositionRequest::set_allocated_new_position(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.new_position_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.new_position_.IsDefault()) {
          _impl_.new_position_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:employee.PositionRequest.new_position)
}

// -------------------------------------------------------------------

// ManagerIdRequest

// int32 employee_id = 1;
inline void ManagerIdRequest::clear_employee_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.employee_id_ = 0;
}
inline ::int32_t ManagerIdRequest::employee_id() const {
  // @@protoc_insertion_point(field_get:employee.ManagerIdRequest.employee_id)
  return _internal_employee_id();
}
inline void ManagerIdRequest::set_employee_id(::int32_t value) {
  _internal_set_employee_id(value);
  // @@protoc_insertion_point(field_set:employee.ManagerIdRequest.employee_id)
}
inline ::int32_t ManagerIdRequest::_internal_employee_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.employee_id_;
}
inline void ManagerIdRequest::_internal_set_employee_id(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.employee_id_ = value;
}

// int32 new_manager_id = 2;
inline void ManagerIdRequest::clear_new_manager_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.new_manager_id_ = 0;
}
inline ::int32_t ManagerIdRequest::new_manager_id() const {
  // @@protoc_insertion_point(field_get:employee.ManagerIdRequest.new_manager_id)
  return _internal_new_manager_id();
}
inline void ManagerIdRequest::set_new_manager_id(::int32_t value) {
  _internal_set_new_manager_id(value);
  // @@protoc_insertion_point(field_set:employee.ManagerIdRequest.new_manager_id)
}
inline ::int32_t ManagerIdRequest::_internal_new_manager_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.new_manager_id_;
}
inline void ManagerIdRequest::_internal_set_new_manager_id(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.new_manager_id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace employee


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_employee_2eproto_2epb_2eh
