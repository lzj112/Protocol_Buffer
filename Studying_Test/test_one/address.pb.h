// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#ifndef PROTOBUF_INCLUDED_address_2eproto
#define PROTOBUF_INCLUDED_address_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_address_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_address_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_address_2eproto();
namespace tutorial {
class AddressBook;
class AddressBookDefaultTypeInternal;
extern AddressBookDefaultTypeInternal _AddressBook_default_instance_;
class Persion;
class PersionDefaultTypeInternal;
extern PersionDefaultTypeInternal _Persion_default_instance_;
}  // namespace tutorial
namespace google {
namespace protobuf {
template<> ::tutorial::AddressBook* Arena::CreateMaybeMessage<::tutorial::AddressBook>(Arena*);
template<> ::tutorial::Persion* Arena::CreateMaybeMessage<::tutorial::Persion>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tutorial {

// ===================================================================

class Persion :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Persion) */ {
 public:
  Persion();
  virtual ~Persion();

  Persion(const Persion& from);

  inline Persion& operator=(const Persion& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Persion(Persion&& from) noexcept
    : Persion() {
    *this = ::std::move(from);
  }

  inline Persion& operator=(Persion&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Persion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Persion* internal_default_instance() {
    return reinterpret_cast<const Persion*>(
               &_Persion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Persion* other);
  friend void swap(Persion& a, Persion& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Persion* New() const final {
    return CreateMaybeMessage<Persion>(nullptr);
  }

  Persion* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Persion>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Persion& from);
  void MergeFrom(const Persion& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Persion* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int32 age = 2;
  void clear_age();
  static const int kAgeFieldNumber = 2;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tutorial.Persion)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 age_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_address_2eproto;
};
// -------------------------------------------------------------------

class AddressBook :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.AddressBook) */ {
 public:
  AddressBook();
  virtual ~AddressBook();

  AddressBook(const AddressBook& from);

  inline AddressBook& operator=(const AddressBook& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AddressBook(AddressBook&& from) noexcept
    : AddressBook() {
    *this = ::std::move(from);
  }

  inline AddressBook& operator=(AddressBook&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const AddressBook& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddressBook* internal_default_instance() {
    return reinterpret_cast<const AddressBook*>(
               &_AddressBook_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AddressBook* other);
  friend void swap(AddressBook& a, AddressBook& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AddressBook* New() const final {
    return CreateMaybeMessage<AddressBook>(nullptr);
  }

  AddressBook* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AddressBook>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AddressBook& from);
  void MergeFrom(const AddressBook& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddressBook* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .tutorial.Persion persion = 1;
  bool has_persion() const;
  void clear_persion();
  static const int kPersionFieldNumber = 1;
  const ::tutorial::Persion& persion() const;
  ::tutorial::Persion* release_persion();
  ::tutorial::Persion* mutable_persion();
  void set_allocated_persion(::tutorial::Persion* persion);

  // @@protoc_insertion_point(class_scope:tutorial.AddressBook)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::tutorial::Persion* persion_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_address_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Persion

// string name = 1;
inline void Persion::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Persion::name() const {
  // @@protoc_insertion_point(field_get:tutorial.Persion.name)
  return name_.GetNoArena();
}
inline void Persion::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Persion.name)
}
#if LANG_CXX11
inline void Persion::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.Persion.name)
}
#endif
inline void Persion::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Persion.name)
}
inline void Persion::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Persion.name)
}
inline ::std::string* Persion::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Persion.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Persion::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.Persion.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Persion::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Persion.name)
}

// int32 age = 2;
inline void Persion::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 Persion::age() const {
  // @@protoc_insertion_point(field_get:tutorial.Persion.age)
  return age_;
}
inline void Persion::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Persion.age)
}

// -------------------------------------------------------------------

// AddressBook

// .tutorial.Persion persion = 1;
inline bool AddressBook::has_persion() const {
  return this != internal_default_instance() && persion_ != nullptr;
}
inline void AddressBook::clear_persion() {
  if (GetArenaNoVirtual() == nullptr && persion_ != nullptr) {
    delete persion_;
  }
  persion_ = nullptr;
}
inline const ::tutorial::Persion& AddressBook::persion() const {
  const ::tutorial::Persion* p = persion_;
  // @@protoc_insertion_point(field_get:tutorial.AddressBook.persion)
  return p != nullptr ? *p : *reinterpret_cast<const ::tutorial::Persion*>(
      &::tutorial::_Persion_default_instance_);
}
inline ::tutorial::Persion* AddressBook::release_persion() {
  // @@protoc_insertion_point(field_release:tutorial.AddressBook.persion)
  
  ::tutorial::Persion* temp = persion_;
  persion_ = nullptr;
  return temp;
}
inline ::tutorial::Persion* AddressBook::mutable_persion() {
  
  if (persion_ == nullptr) {
    auto* p = CreateMaybeMessage<::tutorial::Persion>(GetArenaNoVirtual());
    persion_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.AddressBook.persion)
  return persion_;
}
inline void AddressBook::set_allocated_persion(::tutorial::Persion* persion) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete persion_;
  }
  if (persion) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      persion = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, persion, submessage_arena);
    }
    
  } else {
    
  }
  persion_ = persion;
  // @@protoc_insertion_point(field_set_allocated:tutorial.AddressBook.persion)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_address_2eproto