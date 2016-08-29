// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActCfg.proto

#ifndef PROTOBUF_ActCfg_2eproto__INCLUDED
#define PROTOBUF_ActCfg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace cfg {
namespace vo {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ActCfg_2eproto();
void protobuf_AssignDesc_ActCfg_2eproto();
void protobuf_ShutdownFile_ActCfg_2eproto();

class ActCfg;
class ActCfgSet;

// ===================================================================

class ActCfg : public ::google::protobuf::MessageLite {
 public:
  ActCfg();
  virtual ~ActCfg();

  ActCfg(const ActCfg& from);

  inline ActCfg& operator=(const ActCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const ActCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActCfg* other);

  // implements Message ----------------------------------------------

  ActCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActCfg& from);
  void MergeFrom(const ActCfg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 Type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 type() const;
  inline void set_type(::google::protobuf::uint32 value);

  // required string Name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string ActIcon = 3;
  inline bool has_acticon() const;
  inline void clear_acticon();
  static const int kActIconFieldNumber = 3;
  inline const ::std::string& acticon() const;
  inline void set_acticon(const ::std::string& value);
  inline void set_acticon(const char* value);
  inline void set_acticon(const char* value, size_t size);
  inline ::std::string* mutable_acticon();
  inline ::std::string* release_acticon();
  inline void set_allocated_acticon(::std::string* acticon);

  // required string Content = 4;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 4;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // required string Time = 5;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 5;
  inline const ::std::string& time() const;
  inline void set_time(const ::std::string& value);
  inline void set_time(const char* value);
  inline void set_time(const char* value, size_t size);
  inline ::std::string* mutable_time();
  inline ::std::string* release_time();
  inline void set_allocated_time(::std::string* time);

  // required string TimeLabel = 6;
  inline bool has_timelabel() const;
  inline void clear_timelabel();
  static const int kTimeLabelFieldNumber = 6;
  inline const ::std::string& timelabel() const;
  inline void set_timelabel(const ::std::string& value);
  inline void set_timelabel(const char* value);
  inline void set_timelabel(const char* value, size_t size);
  inline ::std::string* mutable_timelabel();
  inline ::std::string* release_timelabel();
  inline void set_allocated_timelabel(::std::string* timelabel);

  // required uint32 ActStyle = 7;
  inline bool has_actstyle() const;
  inline void clear_actstyle();
  static const int kActStyleFieldNumber = 7;
  inline ::google::protobuf::uint32 actstyle() const;
  inline void set_actstyle(::google::protobuf::uint32 value);

  // required uint32 Order = 8;
  inline bool has_order() const;
  inline void clear_order();
  static const int kOrderFieldNumber = 8;
  inline ::google::protobuf::uint32 order() const;
  inline void set_order(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.ActCfg)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_acticon();
  inline void clear_has_acticon();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_timelabel();
  inline void clear_has_timelabel();
  inline void set_has_actstyle();
  inline void clear_has_actstyle();
  inline void set_has_order();
  inline void clear_has_order();

  ::std::string* name_;
  ::std::string* acticon_;
  ::std::string* content_;
  ::google::protobuf::uint32 type_;
  ::google::protobuf::uint32 actstyle_;
  ::std::string* time_;
  ::std::string* timelabel_;
  ::google::protobuf::uint32 order_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActCfg_2eproto();
  friend void protobuf_ShutdownFile_ActCfg_2eproto();

  void InitAsDefaultInstance();
  static ActCfg* default_instance_;
};
// -------------------------------------------------------------------

class ActCfgSet : public ::google::protobuf::MessageLite {
 public:
  ActCfgSet();
  virtual ~ActCfgSet();

  ActCfgSet(const ActCfgSet& from);

  inline ActCfgSet& operator=(const ActCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ActCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActCfgSet* other);

  // implements Message ----------------------------------------------

  ActCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActCfgSet& from);
  void MergeFrom(const ActCfgSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.cfg.vo.ActCfg actCfg = 1;
  inline int actcfg_size() const;
  inline void clear_actcfg();
  static const int kActCfgFieldNumber = 1;
  inline const ::com::cfg::vo::ActCfg& actcfg(int index) const;
  inline ::com::cfg::vo::ActCfg* mutable_actcfg(int index);
  inline ::com::cfg::vo::ActCfg* add_actcfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ActCfg >&
      actcfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ActCfg >*
      mutable_actcfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.ActCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ActCfg > actcfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ActCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ActCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_ActCfg_2eproto();
  friend void protobuf_ShutdownFile_ActCfg_2eproto();

  void InitAsDefaultInstance();
  static ActCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// ActCfg

// required uint32 Type = 1;
inline bool ActCfg::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActCfg::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActCfg::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActCfg::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 ActCfg::type() const {
  return type_;
}
inline void ActCfg::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
}

// required string Name = 2;
inline bool ActCfg::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActCfg::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActCfg::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActCfg::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ActCfg::name() const {
  return *name_;
}
inline void ActCfg::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ActCfg::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ActCfg::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActCfg::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* ActCfg::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActCfg::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string ActIcon = 3;
inline bool ActCfg::has_acticon() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ActCfg::set_has_acticon() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ActCfg::clear_has_acticon() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ActCfg::clear_acticon() {
  if (acticon_ != &::google::protobuf::internal::kEmptyString) {
    acticon_->clear();
  }
  clear_has_acticon();
}
inline const ::std::string& ActCfg::acticon() const {
  return *acticon_;
}
inline void ActCfg::set_acticon(const ::std::string& value) {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  acticon_->assign(value);
}
inline void ActCfg::set_acticon(const char* value) {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  acticon_->assign(value);
}
inline void ActCfg::set_acticon(const char* value, size_t size) {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  acticon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActCfg::mutable_acticon() {
  set_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    acticon_ = new ::std::string;
  }
  return acticon_;
}
inline ::std::string* ActCfg::release_acticon() {
  clear_has_acticon();
  if (acticon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = acticon_;
    acticon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActCfg::set_allocated_acticon(::std::string* acticon) {
  if (acticon_ != &::google::protobuf::internal::kEmptyString) {
    delete acticon_;
  }
  if (acticon) {
    set_has_acticon();
    acticon_ = acticon;
  } else {
    clear_has_acticon();
    acticon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string Content = 4;
inline bool ActCfg::has_content() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ActCfg::set_has_content() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ActCfg::clear_has_content() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ActCfg::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& ActCfg::content() const {
  return *content_;
}
inline void ActCfg::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void ActCfg::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void ActCfg::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActCfg::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* ActCfg::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActCfg::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string Time = 5;
inline bool ActCfg::has_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ActCfg::set_has_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ActCfg::clear_has_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ActCfg::clear_time() {
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    time_->clear();
  }
  clear_has_time();
}
inline const ::std::string& ActCfg::time() const {
  return *time_;
}
inline void ActCfg::set_time(const ::std::string& value) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(value);
}
inline void ActCfg::set_time(const char* value) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(value);
}
inline void ActCfg::set_time(const char* value, size_t size) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActCfg::mutable_time() {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  return time_;
}
inline ::std::string* ActCfg::release_time() {
  clear_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = time_;
    time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActCfg::set_allocated_time(::std::string* time) {
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    delete time_;
  }
  if (time) {
    set_has_time();
    time_ = time;
  } else {
    clear_has_time();
    time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string TimeLabel = 6;
inline bool ActCfg::has_timelabel() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ActCfg::set_has_timelabel() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ActCfg::clear_has_timelabel() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ActCfg::clear_timelabel() {
  if (timelabel_ != &::google::protobuf::internal::kEmptyString) {
    timelabel_->clear();
  }
  clear_has_timelabel();
}
inline const ::std::string& ActCfg::timelabel() const {
  return *timelabel_;
}
inline void ActCfg::set_timelabel(const ::std::string& value) {
  set_has_timelabel();
  if (timelabel_ == &::google::protobuf::internal::kEmptyString) {
    timelabel_ = new ::std::string;
  }
  timelabel_->assign(value);
}
inline void ActCfg::set_timelabel(const char* value) {
  set_has_timelabel();
  if (timelabel_ == &::google::protobuf::internal::kEmptyString) {
    timelabel_ = new ::std::string;
  }
  timelabel_->assign(value);
}
inline void ActCfg::set_timelabel(const char* value, size_t size) {
  set_has_timelabel();
  if (timelabel_ == &::google::protobuf::internal::kEmptyString) {
    timelabel_ = new ::std::string;
  }
  timelabel_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActCfg::mutable_timelabel() {
  set_has_timelabel();
  if (timelabel_ == &::google::protobuf::internal::kEmptyString) {
    timelabel_ = new ::std::string;
  }
  return timelabel_;
}
inline ::std::string* ActCfg::release_timelabel() {
  clear_has_timelabel();
  if (timelabel_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = timelabel_;
    timelabel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActCfg::set_allocated_timelabel(::std::string* timelabel) {
  if (timelabel_ != &::google::protobuf::internal::kEmptyString) {
    delete timelabel_;
  }
  if (timelabel) {
    set_has_timelabel();
    timelabel_ = timelabel;
  } else {
    clear_has_timelabel();
    timelabel_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 ActStyle = 7;
inline bool ActCfg::has_actstyle() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ActCfg::set_has_actstyle() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ActCfg::clear_has_actstyle() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ActCfg::clear_actstyle() {
  actstyle_ = 0u;
  clear_has_actstyle();
}
inline ::google::protobuf::uint32 ActCfg::actstyle() const {
  return actstyle_;
}
inline void ActCfg::set_actstyle(::google::protobuf::uint32 value) {
  set_has_actstyle();
  actstyle_ = value;
}

// required uint32 Order = 8;
inline bool ActCfg::has_order() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ActCfg::set_has_order() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ActCfg::clear_has_order() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ActCfg::clear_order() {
  order_ = 0u;
  clear_has_order();
}
inline ::google::protobuf::uint32 ActCfg::order() const {
  return order_;
}
inline void ActCfg::set_order(::google::protobuf::uint32 value) {
  set_has_order();
  order_ = value;
}

// -------------------------------------------------------------------

// ActCfgSet

// repeated .com.cfg.vo.ActCfg actCfg = 1;
inline int ActCfgSet::actcfg_size() const {
  return actcfg_.size();
}
inline void ActCfgSet::clear_actcfg() {
  actcfg_.Clear();
}
inline const ::com::cfg::vo::ActCfg& ActCfgSet::actcfg(int index) const {
  return actcfg_.Get(index);
}
inline ::com::cfg::vo::ActCfg* ActCfgSet::mutable_actcfg(int index) {
  return actcfg_.Mutable(index);
}
inline ::com::cfg::vo::ActCfg* ActCfgSet::add_actcfg() {
  return actcfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ActCfg >&
ActCfgSet::actcfg() const {
  return actcfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::ActCfg >*
ActCfgSet::mutable_actcfg() {
  return &actcfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ActCfg_2eproto__INCLUDED