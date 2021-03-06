// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: polynomial.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "polynomial.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Polynomial_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Polynomial_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_polynomial_2eproto() {
  protobuf_AddDesc_polynomial_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "polynomial.proto");
  GOOGLE_CHECK(file != NULL);
  Polynomial_descriptor_ = file->message_type(0);
  static const int Polynomial_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polynomial, coefs_),
  };
  Polynomial_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Polynomial_descriptor_,
      Polynomial::default_instance_,
      Polynomial_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polynomial, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Polynomial, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Polynomial));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_polynomial_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Polynomial_descriptor_, &Polynomial::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_polynomial_2eproto() {
  delete Polynomial::default_instance_;
  delete Polynomial_reflection_;
}

void protobuf_AddDesc_polynomial_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020polynomial.proto\"\037\n\nPolynomial\022\021\n\005coef"
    "s\030\001 \003(\022B\002\020\001", 51);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "polynomial.proto", &protobuf_RegisterTypes);
  Polynomial::default_instance_ = new Polynomial();
  Polynomial::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_polynomial_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_polynomial_2eproto {
  StaticDescriptorInitializer_polynomial_2eproto() {
    protobuf_AddDesc_polynomial_2eproto();
  }
} static_descriptor_initializer_polynomial_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Polynomial::kCoefsFieldNumber;
#endif  // !_MSC_VER

Polynomial::Polynomial()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Polynomial::InitAsDefaultInstance() {
}

Polynomial::Polynomial(const Polynomial& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Polynomial::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Polynomial::~Polynomial() {
  SharedDtor();
}

void Polynomial::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Polynomial::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Polynomial::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Polynomial_descriptor_;
}

const Polynomial& Polynomial::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_polynomial_2eproto();
  return *default_instance_;
}

Polynomial* Polynomial::default_instance_ = NULL;

Polynomial* Polynomial::New() const {
  return new Polynomial;
}

void Polynomial::Clear() {
  coefs_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Polynomial::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated sint64 coefs = 1 [packed = true];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, this->mutable_coefs())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 1, 10, input, this->mutable_coefs())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Polynomial::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated sint64 coefs = 1 [packed = true];
  if (this->coefs_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_coefs_cached_byte_size_);
  }
  for (int i = 0; i < this->coefs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64NoTag(
      this->coefs(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Polynomial::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated sint64 coefs = 1 [packed = true];
  if (this->coefs_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _coefs_cached_byte_size_, target);
  }
  for (int i = 0; i < this->coefs_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteSInt64NoTagToArray(this->coefs(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Polynomial::ByteSize() const {
  int total_size = 0;

  // repeated sint64 coefs = 1 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->coefs_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        SInt64Size(this->coefs(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _coefs_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Polynomial::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Polynomial* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Polynomial*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Polynomial::MergeFrom(const Polynomial& from) {
  GOOGLE_CHECK_NE(&from, this);
  coefs_.MergeFrom(from.coefs_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Polynomial::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Polynomial::CopyFrom(const Polynomial& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Polynomial::IsInitialized() const {

  return true;
}

void Polynomial::Swap(Polynomial* other) {
  if (other != this) {
    coefs_.Swap(&other->coefs_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Polynomial::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Polynomial_descriptor_;
  metadata.reflection = Polynomial_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
