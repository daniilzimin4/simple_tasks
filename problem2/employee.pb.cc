// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: employee.proto

#include "employee.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace employee {

inline constexpr PositionRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : new_position_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        employee_id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PositionRequest::PositionRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PositionRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PositionRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PositionRequestDefaultTypeInternal() {}
  union {
    PositionRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PositionRequestDefaultTypeInternal _PositionRequest_default_instance_;

inline constexpr ManagerIdRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : employee_id_{0},
        new_manager_id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ManagerIdRequest::ManagerIdRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ManagerIdRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ManagerIdRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ManagerIdRequestDefaultTypeInternal() {}
  union {
    ManagerIdRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ManagerIdRequestDefaultTypeInternal _ManagerIdRequest_default_instance_;

inline constexpr Employee::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        position_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        id_{0},
        manager_id_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Employee::Employee(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct EmployeeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EmployeeDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~EmployeeDefaultTypeInternal() {}
  union {
    Employee _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EmployeeDefaultTypeInternal _Employee_default_instance_;
}  // namespace employee
static ::_pb::Metadata file_level_metadata_employee_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_employee_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_employee_2eproto = nullptr;
const ::uint32_t TableStruct_employee_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::employee::Employee, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::employee::Employee, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::employee::Employee, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::employee::Employee, _impl_.position_),
    PROTOBUF_FIELD_OFFSET(::employee::Employee, _impl_.manager_id_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::employee::PositionRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::employee::PositionRequest, _impl_.employee_id_),
    PROTOBUF_FIELD_OFFSET(::employee::PositionRequest, _impl_.new_position_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::employee::ManagerIdRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::employee::ManagerIdRequest, _impl_.employee_id_),
    PROTOBUF_FIELD_OFFSET(::employee::ManagerIdRequest, _impl_.new_manager_id_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::employee::Employee)},
        {12, -1, -1, sizeof(::employee::PositionRequest)},
        {22, -1, -1, sizeof(::employee::ManagerIdRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::employee::_Employee_default_instance_._instance,
    &::employee::_PositionRequest_default_instance_._instance,
    &::employee::_ManagerIdRequest_default_instance_._instance,
};
const char descriptor_table_protodef_employee_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\016employee.proto\022\010employee\032\033google/proto"
    "buf/empty.proto\"J\n\010Employee\022\n\n\002id\030\001 \001(\005\022"
    "\014\n\004name\030\002 \001(\t\022\020\n\010position\030\003 \001(\t\022\022\n\nmanag"
    "er_id\030\004 \001(\005\"<\n\017PositionRequest\022\023\n\013employ"
    "ee_id\030\001 \001(\005\022\024\n\014new_position\030\002 \001(\t\"\?\n\020Man"
    "agerIdRequest\022\023\n\013employee_id\030\001 \001(\005\022\026\n\016ne"
    "w_manager_id\030\002 \001(\0052\230\003\n\017EmployeeService\0225"
    "\n\013AddEmployee\022\022.employee.Employee\032\022.empl"
    "oyee.Employee\022C\n\023GetAllListEmployees\022\026.g"
    "oogle.protobuf.Empty\032\022.employee.Employee"
    "0\001\022@\n\022DeleteEmployeeById\022\022.employee.Empl"
    "oyee\032\026.google.protobuf.Empty\022D\n\023SetEmplo"
    "yeePosition\022\031.employee.PositionRequest\032\022"
    ".employee.Employee\022F\n\024SetEmployeeManager"
    "Id\022\032.employee.ManagerIdRequest\032\022.employe"
    "e.Employee\0229\n\017GetEmployeeById\022\022.employee"
    ".Employee\032\022.employee.Employeeb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_employee_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::absl::once_flag descriptor_table_employee_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_employee_2eproto = {
    false,
    false,
    677,
    descriptor_table_protodef_employee_2eproto,
    "employee.proto",
    &descriptor_table_employee_2eproto_once,
    descriptor_table_employee_2eproto_deps,
    1,
    3,
    schemas,
    file_default_instances,
    TableStruct_employee_2eproto::offsets,
    file_level_metadata_employee_2eproto,
    file_level_enum_descriptors_employee_2eproto,
    file_level_service_descriptors_employee_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_employee_2eproto_getter() {
  return &descriptor_table_employee_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_employee_2eproto(&descriptor_table_employee_2eproto);
namespace employee {
// ===================================================================

class Employee::_Internal {
 public:
};

Employee::Employee(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:employee.Employee)
}
inline PROTOBUF_NDEBUG_INLINE Employee::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : name_(arena, from.name_),
        position_(arena, from.position_),
        _cached_size_{0} {}

Employee::Employee(
    ::google::protobuf::Arena* arena,
    const Employee& from)
    : ::google::protobuf::Message(arena) {
  Employee* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, id_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, id_),
           offsetof(Impl_, manager_id_) -
               offsetof(Impl_, id_) +
               sizeof(Impl_::manager_id_));

  // @@protoc_insertion_point(copy_constructor:employee.Employee)
}
inline PROTOBUF_NDEBUG_INLINE Employee::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : name_(arena),
        position_(arena),
        _cached_size_{0} {}

inline void Employee::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, id_),
           0,
           offsetof(Impl_, manager_id_) -
               offsetof(Impl_, id_) +
               sizeof(Impl_::manager_id_));
}
Employee::~Employee() {
  // @@protoc_insertion_point(destructor:employee.Employee)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Employee::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.position_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Employee::Clear() {
// @@protoc_insertion_point(message_clear_start:employee.Employee)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.position_.ClearToEmpty();
  ::memset(&_impl_.id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.manager_id_) -
      reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.manager_id_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Employee::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 0, 38, 2> Employee::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Employee_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 manager_id = 4;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Employee, _impl_.manager_id_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Employee, _impl_.manager_id_)}},
    // int32 id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Employee, _impl_.id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Employee, _impl_.id_)}},
    // string name = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Employee, _impl_.name_)}},
    // string position = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Employee, _impl_.position_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 id = 1;
    {PROTOBUF_FIELD_OFFSET(Employee, _impl_.id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string name = 2;
    {PROTOBUF_FIELD_OFFSET(Employee, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string position = 3;
    {PROTOBUF_FIELD_OFFSET(Employee, _impl_.position_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // int32 manager_id = 4;
    {PROTOBUF_FIELD_OFFSET(Employee, _impl_.manager_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
    "\21\0\4\10\0\0\0\0"
    "employee.Employee"
    "name"
    "position"
  }},
};

::uint8_t* Employee::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:employee.Employee)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_id(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "employee.Employee.name");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string position = 3;
  if (!this->_internal_position().empty()) {
    const std::string& _s = this->_internal_position();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "employee.Employee.position");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // int32 manager_id = 4;
  if (this->_internal_manager_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<4>(
            stream, this->_internal_manager_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:employee.Employee)
  return target;
}

::size_t Employee::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:employee.Employee)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // string position = 3;
  if (!this->_internal_position().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_position());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_id());
  }

  // int32 manager_id = 4;
  if (this->_internal_manager_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_manager_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Employee::_class_data_ = {
    Employee::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Employee::GetClassData() const {
  return &_class_data_;
}

void Employee::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Employee*>(&to_msg);
  auto& from = static_cast<const Employee&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:employee.Employee)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_position().empty()) {
    _this->_internal_set_position(from._internal_position());
  }
  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  if (from._internal_manager_id() != 0) {
    _this->_internal_set_manager_id(from._internal_manager_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Employee::CopyFrom(const Employee& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:employee.Employee)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Employee::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Employee::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Employee::InternalSwap(Employee* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.position_, &other->_impl_.position_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Employee, _impl_.manager_id_)
      + sizeof(Employee::_impl_.manager_id_)
      - PROTOBUF_FIELD_OFFSET(Employee, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::google::protobuf::Metadata Employee::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_employee_2eproto_getter, &descriptor_table_employee_2eproto_once,
      file_level_metadata_employee_2eproto[0]);
}
// ===================================================================

class PositionRequest::_Internal {
 public:
};

PositionRequest::PositionRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:employee.PositionRequest)
}
inline PROTOBUF_NDEBUG_INLINE PositionRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : new_position_(arena, from.new_position_),
        _cached_size_{0} {}

PositionRequest::PositionRequest(
    ::google::protobuf::Arena* arena,
    const PositionRequest& from)
    : ::google::protobuf::Message(arena) {
  PositionRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.employee_id_ = from._impl_.employee_id_;

  // @@protoc_insertion_point(copy_constructor:employee.PositionRequest)
}
inline PROTOBUF_NDEBUG_INLINE PositionRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : new_position_(arena),
        _cached_size_{0} {}

inline void PositionRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.employee_id_ = {};
}
PositionRequest::~PositionRequest() {
  // @@protoc_insertion_point(destructor:employee.PositionRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PositionRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.new_position_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void PositionRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:employee.PositionRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.new_position_.ClearToEmpty();
  _impl_.employee_id_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* PositionRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 45, 2> PositionRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PositionRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string new_position = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(PositionRequest, _impl_.new_position_)}},
    // int32 employee_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(PositionRequest, _impl_.employee_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(PositionRequest, _impl_.employee_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 employee_id = 1;
    {PROTOBUF_FIELD_OFFSET(PositionRequest, _impl_.employee_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string new_position = 2;
    {PROTOBUF_FIELD_OFFSET(PositionRequest, _impl_.new_position_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\30\0\14\0\0\0\0\0"
    "employee.PositionRequest"
    "new_position"
  }},
};

::uint8_t* PositionRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:employee.PositionRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 employee_id = 1;
  if (this->_internal_employee_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_employee_id(), target);
  }

  // string new_position = 2;
  if (!this->_internal_new_position().empty()) {
    const std::string& _s = this->_internal_new_position();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "employee.PositionRequest.new_position");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:employee.PositionRequest)
  return target;
}

::size_t PositionRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:employee.PositionRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string new_position = 2;
  if (!this->_internal_new_position().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_new_position());
  }

  // int32 employee_id = 1;
  if (this->_internal_employee_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_employee_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData PositionRequest::_class_data_ = {
    PositionRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* PositionRequest::GetClassData() const {
  return &_class_data_;
}

void PositionRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<PositionRequest*>(&to_msg);
  auto& from = static_cast<const PositionRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:employee.PositionRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_new_position().empty()) {
    _this->_internal_set_new_position(from._internal_new_position());
  }
  if (from._internal_employee_id() != 0) {
    _this->_internal_set_employee_id(from._internal_employee_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PositionRequest::CopyFrom(const PositionRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:employee.PositionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool PositionRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* PositionRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void PositionRequest::InternalSwap(PositionRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.new_position_, &other->_impl_.new_position_, arena);
        swap(_impl_.employee_id_, other->_impl_.employee_id_);
}

::google::protobuf::Metadata PositionRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_employee_2eproto_getter, &descriptor_table_employee_2eproto_once,
      file_level_metadata_employee_2eproto[1]);
}
// ===================================================================

class ManagerIdRequest::_Internal {
 public:
};

ManagerIdRequest::ManagerIdRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:employee.ManagerIdRequest)
}
ManagerIdRequest::ManagerIdRequest(
    ::google::protobuf::Arena* arena, const ManagerIdRequest& from)
    : ManagerIdRequest(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE ManagerIdRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void ManagerIdRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, employee_id_),
           0,
           offsetof(Impl_, new_manager_id_) -
               offsetof(Impl_, employee_id_) +
               sizeof(Impl_::new_manager_id_));
}
ManagerIdRequest::~ManagerIdRequest() {
  // @@protoc_insertion_point(destructor:employee.ManagerIdRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ManagerIdRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void ManagerIdRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:employee.ManagerIdRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.employee_id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.new_manager_id_) -
      reinterpret_cast<char*>(&_impl_.employee_id_)) + sizeof(_impl_.new_manager_id_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ManagerIdRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> ManagerIdRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_ManagerIdRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 new_manager_id = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ManagerIdRequest, _impl_.new_manager_id_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(ManagerIdRequest, _impl_.new_manager_id_)}},
    // int32 employee_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ManagerIdRequest, _impl_.employee_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(ManagerIdRequest, _impl_.employee_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 employee_id = 1;
    {PROTOBUF_FIELD_OFFSET(ManagerIdRequest, _impl_.employee_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 new_manager_id = 2;
    {PROTOBUF_FIELD_OFFSET(ManagerIdRequest, _impl_.new_manager_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* ManagerIdRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:employee.ManagerIdRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 employee_id = 1;
  if (this->_internal_employee_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_employee_id(), target);
  }

  // int32 new_manager_id = 2;
  if (this->_internal_new_manager_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_new_manager_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:employee.ManagerIdRequest)
  return target;
}

::size_t ManagerIdRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:employee.ManagerIdRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 employee_id = 1;
  if (this->_internal_employee_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_employee_id());
  }

  // int32 new_manager_id = 2;
  if (this->_internal_new_manager_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_new_manager_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData ManagerIdRequest::_class_data_ = {
    ManagerIdRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* ManagerIdRequest::GetClassData() const {
  return &_class_data_;
}

void ManagerIdRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<ManagerIdRequest*>(&to_msg);
  auto& from = static_cast<const ManagerIdRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:employee.ManagerIdRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_employee_id() != 0) {
    _this->_internal_set_employee_id(from._internal_employee_id());
  }
  if (from._internal_new_manager_id() != 0) {
    _this->_internal_set_new_manager_id(from._internal_new_manager_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ManagerIdRequest::CopyFrom(const ManagerIdRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:employee.ManagerIdRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ManagerIdRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* ManagerIdRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void ManagerIdRequest::InternalSwap(ManagerIdRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ManagerIdRequest, _impl_.new_manager_id_)
      + sizeof(ManagerIdRequest::_impl_.new_manager_id_)
      - PROTOBUF_FIELD_OFFSET(ManagerIdRequest, _impl_.employee_id_)>(
          reinterpret_cast<char*>(&_impl_.employee_id_),
          reinterpret_cast<char*>(&other->_impl_.employee_id_));
}

::google::protobuf::Metadata ManagerIdRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_employee_2eproto_getter, &descriptor_table_employee_2eproto_once,
      file_level_metadata_employee_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace employee
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
