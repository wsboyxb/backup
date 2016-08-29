// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArenaLvCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ArenaLvCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_ArenaLvCfg_2eproto() {
  delete ArenaLvCfg::default_instance_;
  delete ArenaLvCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ArenaLvCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ArenaLvCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ArenaLvCfg::default_instance_ = new ArenaLvCfg();
  ArenaLvCfgSet::default_instance_ = new ArenaLvCfgSet();
  ArenaLvCfg::default_instance_->InitAsDefaultInstance();
  ArenaLvCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ArenaLvCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ArenaLvCfg_2eproto_once_);
void protobuf_AddDesc_ArenaLvCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ArenaLvCfg_2eproto_once_,
                 &protobuf_AddDesc_ArenaLvCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ArenaLvCfg_2eproto {
  StaticDescriptorInitializer_ArenaLvCfg_2eproto() {
    protobuf_AddDesc_ArenaLvCfg_2eproto();
  }
} static_descriptor_initializer_ArenaLvCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ArenaLvCfg::kLevelFieldNumber;
const int ArenaLvCfg::kScoreFieldNumber;
const int ArenaLvCfg::kNameFieldNumber;
#endif  // !_MSC_VER

ArenaLvCfg::ArenaLvCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaLvCfg::InitAsDefaultInstance() {
}

ArenaLvCfg::ArenaLvCfg(const ArenaLvCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaLvCfg::SharedCtor() {
  _cached_size_ = 0;
  level_ = 0u;
  score_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaLvCfg::~ArenaLvCfg() {
  SharedDtor();
}

void ArenaLvCfg::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaLvCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaLvCfg& ArenaLvCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaLvCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaLvCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaLvCfg* ArenaLvCfg::default_instance_ = NULL;

ArenaLvCfg* ArenaLvCfg::New() const {
  return new ArenaLvCfg;
}

void ArenaLvCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 0u;
    score_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaLvCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 Level = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Score;
        break;
      }

      // required uint32 Score = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Score:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &score_)));
          set_has_score();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_Name;
        break;
      }

      // required string Name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ArenaLvCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 Level = 1;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->level(), output);
  }

  // required uint32 Score = 2;
  if (has_score()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->score(), output);
  }

  // required string Name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->name(), output);
  }

}

int ArenaLvCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 Level = 1;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 Score = 2;
    if (has_score()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->score());
    }

    // required string Name = 3;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaLvCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaLvCfg*>(&from));
}

void ArenaLvCfg::MergeFrom(const ArenaLvCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_score()) {
      set_score(from.score());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
  }
}

void ArenaLvCfg::CopyFrom(const ArenaLvCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaLvCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void ArenaLvCfg::Swap(ArenaLvCfg* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(score_, other->score_);
    std::swap(name_, other->name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaLvCfg::GetTypeName() const {
  return "com.cfg.vo.ArenaLvCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int ArenaLvCfgSet::kArenaLvCfgFieldNumber;
#endif  // !_MSC_VER

ArenaLvCfgSet::ArenaLvCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ArenaLvCfgSet::InitAsDefaultInstance() {
}

ArenaLvCfgSet::ArenaLvCfgSet(const ArenaLvCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ArenaLvCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ArenaLvCfgSet::~ArenaLvCfgSet() {
  SharedDtor();
}

void ArenaLvCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ArenaLvCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ArenaLvCfgSet& ArenaLvCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ArenaLvCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ArenaLvCfg_2eproto();
#endif
  return *default_instance_;
}

ArenaLvCfgSet* ArenaLvCfgSet::default_instance_ = NULL;

ArenaLvCfgSet* ArenaLvCfgSet::New() const {
  return new ArenaLvCfgSet;
}

void ArenaLvCfgSet::Clear() {
  arenalvcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ArenaLvCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.ArenaLvCfg arenaLvCfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_arenaLvCfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_arenalvcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_arenaLvCfg;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ArenaLvCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.ArenaLvCfg arenaLvCfg = 1;
  for (int i = 0; i < this->arenalvcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->arenalvcfg(i), output);
  }

}

int ArenaLvCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.ArenaLvCfg arenaLvCfg = 1;
  total_size += 1 * this->arenalvcfg_size();
  for (int i = 0; i < this->arenalvcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->arenalvcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ArenaLvCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ArenaLvCfgSet*>(&from));
}

void ArenaLvCfgSet::MergeFrom(const ArenaLvCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  arenalvcfg_.MergeFrom(from.arenalvcfg_);
}

void ArenaLvCfgSet::CopyFrom(const ArenaLvCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArenaLvCfgSet::IsInitialized() const {

  for (int i = 0; i < arenalvcfg_size(); i++) {
    if (!this->arenalvcfg(i).IsInitialized()) return false;
  }
  return true;
}

void ArenaLvCfgSet::Swap(ArenaLvCfgSet* other) {
  if (other != this) {
    arenalvcfg_.Swap(&other->arenalvcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ArenaLvCfgSet::GetTypeName() const {
  return "com.cfg.vo.ArenaLvCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)