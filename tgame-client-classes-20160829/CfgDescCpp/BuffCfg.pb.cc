// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BuffCfg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BuffCfg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

void protobuf_ShutdownFile_BuffCfg_2eproto() {
  delete BuffEffect::default_instance_;
  delete BuffCfg::default_instance_;
  delete BuffCfgSet::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_BuffCfg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_BuffCfg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  BuffEffect::default_instance_ = new BuffEffect();
  BuffCfg::default_instance_ = new BuffCfg();
  BuffCfgSet::default_instance_ = new BuffCfgSet();
  BuffEffect::default_instance_->InitAsDefaultInstance();
  BuffCfg::default_instance_->InitAsDefaultInstance();
  BuffCfgSet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BuffCfg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_BuffCfg_2eproto_once_);
void protobuf_AddDesc_BuffCfg_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_BuffCfg_2eproto_once_,
                 &protobuf_AddDesc_BuffCfg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BuffCfg_2eproto {
  StaticDescriptorInitializer_BuffCfg_2eproto() {
    protobuf_AddDesc_BuffCfg_2eproto();
  }
} static_descriptor_initializer_BuffCfg_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int BuffEffect::kEffectTypeFieldNumber;
const int BuffEffect::kValueFieldNumber;
const int BuffEffect::kMagicTypeFieldNumber;
#endif  // !_MSC_VER

BuffEffect::BuffEffect()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BuffEffect::InitAsDefaultInstance() {
}

BuffEffect::BuffEffect(const BuffEffect& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BuffEffect::SharedCtor() {
  _cached_size_ = 0;
  effecttype_ = 0u;
  value_ = 0u;
  magictype_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BuffEffect::~BuffEffect() {
  SharedDtor();
}

void BuffEffect::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BuffEffect::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BuffEffect& BuffEffect::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BuffCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BuffCfg_2eproto();
#endif
  return *default_instance_;
}

BuffEffect* BuffEffect::default_instance_ = NULL;

BuffEffect* BuffEffect::New() const {
  return new BuffEffect;
}

void BuffEffect::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    effecttype_ = 0u;
    value_ = 0u;
    magictype_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BuffEffect::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 EffectType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &effecttype_)));
          set_has_effecttype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Value;
        break;
      }

      // required uint32 Value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_MagicType;
        break;
      }

      // required uint32 MagicType = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MagicType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &magictype_)));
          set_has_magictype();
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

void BuffEffect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 EffectType = 1;
  if (has_effecttype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->effecttype(), output);
  }

  // required uint32 Value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->value(), output);
  }

  // required uint32 MagicType = 3;
  if (has_magictype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->magictype(), output);
  }

}

int BuffEffect::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 EffectType = 1;
    if (has_effecttype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->effecttype());
    }

    // required uint32 Value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->value());
    }

    // required uint32 MagicType = 3;
    if (has_magictype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->magictype());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BuffEffect::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BuffEffect*>(&from));
}

void BuffEffect::MergeFrom(const BuffEffect& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_effecttype()) {
      set_effecttype(from.effecttype());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
    if (from.has_magictype()) {
      set_magictype(from.magictype());
    }
  }
}

void BuffEffect::CopyFrom(const BuffEffect& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuffEffect::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void BuffEffect::Swap(BuffEffect* other) {
  if (other != this) {
    std::swap(effecttype_, other->effecttype_);
    std::swap(value_, other->value_);
    std::swap(magictype_, other->magictype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BuffEffect::GetTypeName() const {
  return "com.cfg.vo.BuffEffect";
}


// ===================================================================

#ifndef _MSC_VER
const int BuffCfg::kBuffIDFieldNumber;
const int BuffCfg::kNameFieldNumber;
const int BuffCfg::kDescFieldNumber;
const int BuffCfg::kIconFieldNumber;
const int BuffCfg::kStateIconFieldNumber;
const int BuffCfg::kAnimationFieldNumber;
const int BuffCfg::kTargetTypeFieldNumber;
const int BuffCfg::kAddOrDecFieldNumber;
const int BuffCfg::kLiveSpanFieldNumber;
const int BuffCfg::kDisplayPosFieldNumber;
const int BuffCfg::kEffectsFieldNumber;
#endif  // !_MSC_VER

BuffCfg::BuffCfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BuffCfg::InitAsDefaultInstance() {
}

BuffCfg::BuffCfg(const BuffCfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BuffCfg::SharedCtor() {
  _cached_size_ = 0;
  buffid_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  stateicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  animation_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  targettype_ = 0u;
  addordec_ = 0u;
  livespan_ = 0u;
  displaypos_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BuffCfg::~BuffCfg() {
  SharedDtor();
}

void BuffCfg::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    delete icon_;
  }
  if (stateicon_ != &::google::protobuf::internal::kEmptyString) {
    delete stateicon_;
  }
  if (animation_ != &::google::protobuf::internal::kEmptyString) {
    delete animation_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BuffCfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BuffCfg& BuffCfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BuffCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BuffCfg_2eproto();
#endif
  return *default_instance_;
}

BuffCfg* BuffCfg::default_instance_ = NULL;

BuffCfg* BuffCfg::New() const {
  return new BuffCfg;
}

void BuffCfg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    buffid_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_desc()) {
      if (desc_ != &::google::protobuf::internal::kEmptyString) {
        desc_->clear();
      }
    }
    if (has_icon()) {
      if (icon_ != &::google::protobuf::internal::kEmptyString) {
        icon_->clear();
      }
    }
    if (has_stateicon()) {
      if (stateicon_ != &::google::protobuf::internal::kEmptyString) {
        stateicon_->clear();
      }
    }
    if (has_animation()) {
      if (animation_ != &::google::protobuf::internal::kEmptyString) {
        animation_->clear();
      }
    }
    targettype_ = 0u;
    addordec_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    livespan_ = 0u;
    displaypos_ = 0u;
  }
  effects_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BuffCfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 BuffID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &buffid_)));
          set_has_buffid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Name;
        break;
      }

      // required string Name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_Desc;
        break;
      }

      // required string Desc = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_desc()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_Icon;
        break;
      }

      // required string Icon = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Icon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_icon()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_StateIcon;
        break;
      }

      // required string StateIcon = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_StateIcon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stateicon()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_Animation;
        break;
      }

      // required string Animation = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Animation:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_animation()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_TargetType;
        break;
      }

      // required uint32 TargetType = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TargetType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &targettype_)));
          set_has_targettype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_AddOrDec;
        break;
      }

      // required uint32 AddOrDec = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_AddOrDec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &addordec_)));
          set_has_addordec();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_LiveSpan;
        break;
      }

      // required uint32 LiveSpan = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_LiveSpan:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &livespan_)));
          set_has_livespan();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_DisplayPos;
        break;
      }

      // required uint32 DisplayPos = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DisplayPos:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &displaypos_)));
          set_has_displaypos();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_Effects;
        break;
      }

      // repeated .com.cfg.vo.BuffEffect Effects = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Effects:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_effects()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(98)) goto parse_Effects;
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

void BuffCfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 BuffID = 1;
  if (has_buffid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->buffid(), output);
  }

  // required string Name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required string Desc = 3;
  if (has_desc()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->desc(), output);
  }

  // required string Icon = 4;
  if (has_icon()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->icon(), output);
  }

  // required string StateIcon = 5;
  if (has_stateicon()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->stateicon(), output);
  }

  // required string Animation = 6;
  if (has_animation()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->animation(), output);
  }

  // required uint32 TargetType = 7;
  if (has_targettype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->targettype(), output);
  }

  // required uint32 AddOrDec = 8;
  if (has_addordec()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->addordec(), output);
  }

  // required uint32 LiveSpan = 9;
  if (has_livespan()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->livespan(), output);
  }

  // required uint32 DisplayPos = 10;
  if (has_displaypos()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->displaypos(), output);
  }

  // repeated .com.cfg.vo.BuffEffect Effects = 12;
  for (int i = 0; i < this->effects_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      12, this->effects(i), output);
  }

}

int BuffCfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 BuffID = 1;
    if (has_buffid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->buffid());
    }

    // required string Name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required string Desc = 3;
    if (has_desc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->desc());
    }

    // required string Icon = 4;
    if (has_icon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->icon());
    }

    // required string StateIcon = 5;
    if (has_stateicon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->stateicon());
    }

    // required string Animation = 6;
    if (has_animation()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->animation());
    }

    // required uint32 TargetType = 7;
    if (has_targettype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->targettype());
    }

    // required uint32 AddOrDec = 8;
    if (has_addordec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->addordec());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 LiveSpan = 9;
    if (has_livespan()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->livespan());
    }

    // required uint32 DisplayPos = 10;
    if (has_displaypos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->displaypos());
    }

  }
  // repeated .com.cfg.vo.BuffEffect Effects = 12;
  total_size += 1 * this->effects_size();
  for (int i = 0; i < this->effects_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->effects(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BuffCfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BuffCfg*>(&from));
}

void BuffCfg::MergeFrom(const BuffCfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  effects_.MergeFrom(from.effects_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_buffid()) {
      set_buffid(from.buffid());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_desc()) {
      set_desc(from.desc());
    }
    if (from.has_icon()) {
      set_icon(from.icon());
    }
    if (from.has_stateicon()) {
      set_stateicon(from.stateicon());
    }
    if (from.has_animation()) {
      set_animation(from.animation());
    }
    if (from.has_targettype()) {
      set_targettype(from.targettype());
    }
    if (from.has_addordec()) {
      set_addordec(from.addordec());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_livespan()) {
      set_livespan(from.livespan());
    }
    if (from.has_displaypos()) {
      set_displaypos(from.displaypos());
    }
  }
}

void BuffCfg::CopyFrom(const BuffCfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuffCfg::IsInitialized() const {
  if ((_has_bits_[0] & 0x000003ff) != 0x000003ff) return false;

  for (int i = 0; i < effects_size(); i++) {
    if (!this->effects(i).IsInitialized()) return false;
  }
  return true;
}

void BuffCfg::Swap(BuffCfg* other) {
  if (other != this) {
    std::swap(buffid_, other->buffid_);
    std::swap(name_, other->name_);
    std::swap(desc_, other->desc_);
    std::swap(icon_, other->icon_);
    std::swap(stateicon_, other->stateicon_);
    std::swap(animation_, other->animation_);
    std::swap(targettype_, other->targettype_);
    std::swap(addordec_, other->addordec_);
    std::swap(livespan_, other->livespan_);
    std::swap(displaypos_, other->displaypos_);
    effects_.Swap(&other->effects_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BuffCfg::GetTypeName() const {
  return "com.cfg.vo.BuffCfg";
}


// ===================================================================

#ifndef _MSC_VER
const int BuffCfgSet::kBuffcfgFieldNumber;
#endif  // !_MSC_VER

BuffCfgSet::BuffCfgSet()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void BuffCfgSet::InitAsDefaultInstance() {
}

BuffCfgSet::BuffCfgSet(const BuffCfgSet& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void BuffCfgSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BuffCfgSet::~BuffCfgSet() {
  SharedDtor();
}

void BuffCfgSet::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void BuffCfgSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BuffCfgSet& BuffCfgSet::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_BuffCfg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_BuffCfg_2eproto();
#endif
  return *default_instance_;
}

BuffCfgSet* BuffCfgSet::default_instance_ = NULL;

BuffCfgSet* BuffCfgSet::New() const {
  return new BuffCfgSet;
}

void BuffCfgSet::Clear() {
  buffcfg_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool BuffCfgSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com.cfg.vo.BuffCfg buffcfg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_buffcfg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_buffcfg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_buffcfg;
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

void BuffCfgSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com.cfg.vo.BuffCfg buffcfg = 1;
  for (int i = 0; i < this->buffcfg_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->buffcfg(i), output);
  }

}

int BuffCfgSet::ByteSize() const {
  int total_size = 0;

  // repeated .com.cfg.vo.BuffCfg buffcfg = 1;
  total_size += 1 * this->buffcfg_size();
  for (int i = 0; i < this->buffcfg_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->buffcfg(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BuffCfgSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BuffCfgSet*>(&from));
}

void BuffCfgSet::MergeFrom(const BuffCfgSet& from) {
  GOOGLE_CHECK_NE(&from, this);
  buffcfg_.MergeFrom(from.buffcfg_);
}

void BuffCfgSet::CopyFrom(const BuffCfgSet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuffCfgSet::IsInitialized() const {

  for (int i = 0; i < buffcfg_size(); i++) {
    if (!this->buffcfg(i).IsInitialized()) return false;
  }
  return true;
}

void BuffCfgSet::Swap(BuffCfgSet* other) {
  if (other != this) {
    buffcfg_.Swap(&other->buffcfg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string BuffCfgSet::GetTypeName() const {
  return "com.cfg.vo.BuffCfgSet";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)
