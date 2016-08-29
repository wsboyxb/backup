// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DebrisCfg.proto

#ifndef PROTOBUF_DebrisCfg_2eproto__INCLUDED
#define PROTOBUF_DebrisCfg_2eproto__INCLUDED

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
void  protobuf_AddDesc_DebrisCfg_2eproto();
void protobuf_AssignDesc_DebrisCfg_2eproto();
void protobuf_ShutdownFile_DebrisCfg_2eproto();

class DebrisCfg;
class DebrisCfgSet;

// ===================================================================

class DebrisCfg : public ::google::protobuf::MessageLite {
 public:
  DebrisCfg();
  virtual ~DebrisCfg();

  DebrisCfg(const DebrisCfg& from);

  inline DebrisCfg& operator=(const DebrisCfg& from) {
    CopyFrom(from);
    return *this;
  }

  static const DebrisCfg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DebrisCfg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DebrisCfg* other);

  // implements Message ----------------------------------------------

  DebrisCfg* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DebrisCfg& from);
  void MergeFrom(const DebrisCfg& from);
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

  // required uint32 DebrisID = 1;
  inline bool has_debrisid() const;
  inline void clear_debrisid();
  static const int kDebrisIDFieldNumber = 1;
  inline ::google::protobuf::uint32 debrisid() const;
  inline void set_debrisid(::google::protobuf::uint32 value);

  // required string DebrisName = 2;
  inline bool has_debrisname() const;
  inline void clear_debrisname();
  static const int kDebrisNameFieldNumber = 2;
  inline const ::std::string& debrisname() const;
  inline void set_debrisname(const ::std::string& value);
  inline void set_debrisname(const char* value);
  inline void set_debrisname(const char* value, size_t size);
  inline ::std::string* mutable_debrisname();
  inline ::std::string* release_debrisname();
  inline void set_allocated_debrisname(::std::string* debrisname);

  // required uint32 DebrisColor = 3;
  inline bool has_debriscolor() const;
  inline void clear_debriscolor();
  static const int kDebrisColorFieldNumber = 3;
  inline ::google::protobuf::uint32 debriscolor() const;
  inline void set_debriscolor(::google::protobuf::uint32 value);

  // required string DebrisIcon = 4;
  inline bool has_debrisicon() const;
  inline void clear_debrisicon();
  static const int kDebrisIconFieldNumber = 4;
  inline const ::std::string& debrisicon() const;
  inline void set_debrisicon(const ::std::string& value);
  inline void set_debrisicon(const char* value);
  inline void set_debrisicon(const char* value, size_t size);
  inline ::std::string* mutable_debrisicon();
  inline ::std::string* release_debrisicon();
  inline void set_allocated_debrisicon(::std::string* debrisicon);

  // required string DebrisDesc = 5;
  inline bool has_debrisdesc() const;
  inline void clear_debrisdesc();
  static const int kDebrisDescFieldNumber = 5;
  inline const ::std::string& debrisdesc() const;
  inline void set_debrisdesc(const ::std::string& value);
  inline void set_debrisdesc(const char* value);
  inline void set_debrisdesc(const char* value, size_t size);
  inline ::std::string* mutable_debrisdesc();
  inline ::std::string* release_debrisdesc();
  inline void set_allocated_debrisdesc(::std::string* debrisdesc);

  // required uint32 ComposeNeedCnt = 6;
  inline bool has_composeneedcnt() const;
  inline void clear_composeneedcnt();
  static const int kComposeNeedCntFieldNumber = 6;
  inline ::google::protobuf::uint32 composeneedcnt() const;
  inline void set_composeneedcnt(::google::protobuf::uint32 value);

  // required uint32 ComposeType = 7;
  inline bool has_composetype() const;
  inline void clear_composetype();
  static const int kComposeTypeFieldNumber = 7;
  inline ::google::protobuf::uint32 composetype() const;
  inline void set_composetype(::google::protobuf::uint32 value);

  // required uint32 ComposeCfgID = 8;
  inline bool has_composecfgid() const;
  inline void clear_composecfgid();
  static const int kComposeCfgIDFieldNumber = 8;
  inline ::google::protobuf::uint32 composecfgid() const;
  inline void set_composecfgid(::google::protobuf::uint32 value);

  // required uint32 CostCoin = 9;
  inline bool has_costcoin() const;
  inline void clear_costcoin();
  static const int kCostCoinFieldNumber = 9;
  inline ::google::protobuf::uint32 costcoin() const;
  inline void set_costcoin(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DebrisCfg)
 private:
  inline void set_has_debrisid();
  inline void clear_has_debrisid();
  inline void set_has_debrisname();
  inline void clear_has_debrisname();
  inline void set_has_debriscolor();
  inline void clear_has_debriscolor();
  inline void set_has_debrisicon();
  inline void clear_has_debrisicon();
  inline void set_has_debrisdesc();
  inline void clear_has_debrisdesc();
  inline void set_has_composeneedcnt();
  inline void clear_has_composeneedcnt();
  inline void set_has_composetype();
  inline void clear_has_composetype();
  inline void set_has_composecfgid();
  inline void clear_has_composecfgid();
  inline void set_has_costcoin();
  inline void clear_has_costcoin();

  ::std::string* debrisname_;
  ::google::protobuf::uint32 debrisid_;
  ::google::protobuf::uint32 debriscolor_;
  ::std::string* debrisicon_;
  ::std::string* debrisdesc_;
  ::google::protobuf::uint32 composeneedcnt_;
  ::google::protobuf::uint32 composetype_;
  ::google::protobuf::uint32 composecfgid_;
  ::google::protobuf::uint32 costcoin_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DebrisCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DebrisCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DebrisCfg_2eproto();
  friend void protobuf_ShutdownFile_DebrisCfg_2eproto();

  void InitAsDefaultInstance();
  static DebrisCfg* default_instance_;
};
// -------------------------------------------------------------------

class DebrisCfgSet : public ::google::protobuf::MessageLite {
 public:
  DebrisCfgSet();
  virtual ~DebrisCfgSet();

  DebrisCfgSet(const DebrisCfgSet& from);

  inline DebrisCfgSet& operator=(const DebrisCfgSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const DebrisCfgSet& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const DebrisCfgSet* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(DebrisCfgSet* other);

  // implements Message ----------------------------------------------

  DebrisCfgSet* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const DebrisCfgSet& from);
  void MergeFrom(const DebrisCfgSet& from);
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

  // repeated .com.cfg.vo.DebrisCfg debriscfg = 1;
  inline int debriscfg_size() const;
  inline void clear_debriscfg();
  static const int kDebriscfgFieldNumber = 1;
  inline const ::com::cfg::vo::DebrisCfg& debriscfg(int index) const;
  inline ::com::cfg::vo::DebrisCfg* mutable_debriscfg(int index);
  inline ::com::cfg::vo::DebrisCfg* add_debriscfg();
  inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DebrisCfg >&
      debriscfg() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DebrisCfg >*
      mutable_debriscfg();

  // @@protoc_insertion_point(class_scope:com.cfg.vo.DebrisCfgSet)
 private:

  ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DebrisCfg > debriscfg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_DebrisCfg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_DebrisCfg_2eproto();
  #endif
  friend void protobuf_AssignDesc_DebrisCfg_2eproto();
  friend void protobuf_ShutdownFile_DebrisCfg_2eproto();

  void InitAsDefaultInstance();
  static DebrisCfgSet* default_instance_;
};
// ===================================================================


// ===================================================================

// DebrisCfg

// required uint32 DebrisID = 1;
inline bool DebrisCfg::has_debrisid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DebrisCfg::set_has_debrisid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DebrisCfg::clear_has_debrisid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DebrisCfg::clear_debrisid() {
  debrisid_ = 0u;
  clear_has_debrisid();
}
inline ::google::protobuf::uint32 DebrisCfg::debrisid() const {
  return debrisid_;
}
inline void DebrisCfg::set_debrisid(::google::protobuf::uint32 value) {
  set_has_debrisid();
  debrisid_ = value;
}

// required string DebrisName = 2;
inline bool DebrisCfg::has_debrisname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DebrisCfg::set_has_debrisname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DebrisCfg::clear_has_debrisname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DebrisCfg::clear_debrisname() {
  if (debrisname_ != &::google::protobuf::internal::kEmptyString) {
    debrisname_->clear();
  }
  clear_has_debrisname();
}
inline const ::std::string& DebrisCfg::debrisname() const {
  return *debrisname_;
}
inline void DebrisCfg::set_debrisname(const ::std::string& value) {
  set_has_debrisname();
  if (debrisname_ == &::google::protobuf::internal::kEmptyString) {
    debrisname_ = new ::std::string;
  }
  debrisname_->assign(value);
}
inline void DebrisCfg::set_debrisname(const char* value) {
  set_has_debrisname();
  if (debrisname_ == &::google::protobuf::internal::kEmptyString) {
    debrisname_ = new ::std::string;
  }
  debrisname_->assign(value);
}
inline void DebrisCfg::set_debrisname(const char* value, size_t size) {
  set_has_debrisname();
  if (debrisname_ == &::google::protobuf::internal::kEmptyString) {
    debrisname_ = new ::std::string;
  }
  debrisname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DebrisCfg::mutable_debrisname() {
  set_has_debrisname();
  if (debrisname_ == &::google::protobuf::internal::kEmptyString) {
    debrisname_ = new ::std::string;
  }
  return debrisname_;
}
inline ::std::string* DebrisCfg::release_debrisname() {
  clear_has_debrisname();
  if (debrisname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = debrisname_;
    debrisname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DebrisCfg::set_allocated_debrisname(::std::string* debrisname) {
  if (debrisname_ != &::google::protobuf::internal::kEmptyString) {
    delete debrisname_;
  }
  if (debrisname) {
    set_has_debrisname();
    debrisname_ = debrisname;
  } else {
    clear_has_debrisname();
    debrisname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 DebrisColor = 3;
inline bool DebrisCfg::has_debriscolor() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DebrisCfg::set_has_debriscolor() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DebrisCfg::clear_has_debriscolor() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DebrisCfg::clear_debriscolor() {
  debriscolor_ = 0u;
  clear_has_debriscolor();
}
inline ::google::protobuf::uint32 DebrisCfg::debriscolor() const {
  return debriscolor_;
}
inline void DebrisCfg::set_debriscolor(::google::protobuf::uint32 value) {
  set_has_debriscolor();
  debriscolor_ = value;
}

// required string DebrisIcon = 4;
inline bool DebrisCfg::has_debrisicon() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DebrisCfg::set_has_debrisicon() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DebrisCfg::clear_has_debrisicon() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DebrisCfg::clear_debrisicon() {
  if (debrisicon_ != &::google::protobuf::internal::kEmptyString) {
    debrisicon_->clear();
  }
  clear_has_debrisicon();
}
inline const ::std::string& DebrisCfg::debrisicon() const {
  return *debrisicon_;
}
inline void DebrisCfg::set_debrisicon(const ::std::string& value) {
  set_has_debrisicon();
  if (debrisicon_ == &::google::protobuf::internal::kEmptyString) {
    debrisicon_ = new ::std::string;
  }
  debrisicon_->assign(value);
}
inline void DebrisCfg::set_debrisicon(const char* value) {
  set_has_debrisicon();
  if (debrisicon_ == &::google::protobuf::internal::kEmptyString) {
    debrisicon_ = new ::std::string;
  }
  debrisicon_->assign(value);
}
inline void DebrisCfg::set_debrisicon(const char* value, size_t size) {
  set_has_debrisicon();
  if (debrisicon_ == &::google::protobuf::internal::kEmptyString) {
    debrisicon_ = new ::std::string;
  }
  debrisicon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DebrisCfg::mutable_debrisicon() {
  set_has_debrisicon();
  if (debrisicon_ == &::google::protobuf::internal::kEmptyString) {
    debrisicon_ = new ::std::string;
  }
  return debrisicon_;
}
inline ::std::string* DebrisCfg::release_debrisicon() {
  clear_has_debrisicon();
  if (debrisicon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = debrisicon_;
    debrisicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DebrisCfg::set_allocated_debrisicon(::std::string* debrisicon) {
  if (debrisicon_ != &::google::protobuf::internal::kEmptyString) {
    delete debrisicon_;
  }
  if (debrisicon) {
    set_has_debrisicon();
    debrisicon_ = debrisicon;
  } else {
    clear_has_debrisicon();
    debrisicon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string DebrisDesc = 5;
inline bool DebrisCfg::has_debrisdesc() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DebrisCfg::set_has_debrisdesc() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DebrisCfg::clear_has_debrisdesc() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DebrisCfg::clear_debrisdesc() {
  if (debrisdesc_ != &::google::protobuf::internal::kEmptyString) {
    debrisdesc_->clear();
  }
  clear_has_debrisdesc();
}
inline const ::std::string& DebrisCfg::debrisdesc() const {
  return *debrisdesc_;
}
inline void DebrisCfg::set_debrisdesc(const ::std::string& value) {
  set_has_debrisdesc();
  if (debrisdesc_ == &::google::protobuf::internal::kEmptyString) {
    debrisdesc_ = new ::std::string;
  }
  debrisdesc_->assign(value);
}
inline void DebrisCfg::set_debrisdesc(const char* value) {
  set_has_debrisdesc();
  if (debrisdesc_ == &::google::protobuf::internal::kEmptyString) {
    debrisdesc_ = new ::std::string;
  }
  debrisdesc_->assign(value);
}
inline void DebrisCfg::set_debrisdesc(const char* value, size_t size) {
  set_has_debrisdesc();
  if (debrisdesc_ == &::google::protobuf::internal::kEmptyString) {
    debrisdesc_ = new ::std::string;
  }
  debrisdesc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DebrisCfg::mutable_debrisdesc() {
  set_has_debrisdesc();
  if (debrisdesc_ == &::google::protobuf::internal::kEmptyString) {
    debrisdesc_ = new ::std::string;
  }
  return debrisdesc_;
}
inline ::std::string* DebrisCfg::release_debrisdesc() {
  clear_has_debrisdesc();
  if (debrisdesc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = debrisdesc_;
    debrisdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DebrisCfg::set_allocated_debrisdesc(::std::string* debrisdesc) {
  if (debrisdesc_ != &::google::protobuf::internal::kEmptyString) {
    delete debrisdesc_;
  }
  if (debrisdesc) {
    set_has_debrisdesc();
    debrisdesc_ = debrisdesc;
  } else {
    clear_has_debrisdesc();
    debrisdesc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 ComposeNeedCnt = 6;
inline bool DebrisCfg::has_composeneedcnt() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DebrisCfg::set_has_composeneedcnt() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DebrisCfg::clear_has_composeneedcnt() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DebrisCfg::clear_composeneedcnt() {
  composeneedcnt_ = 0u;
  clear_has_composeneedcnt();
}
inline ::google::protobuf::uint32 DebrisCfg::composeneedcnt() const {
  return composeneedcnt_;
}
inline void DebrisCfg::set_composeneedcnt(::google::protobuf::uint32 value) {
  set_has_composeneedcnt();
  composeneedcnt_ = value;
}

// required uint32 ComposeType = 7;
inline bool DebrisCfg::has_composetype() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DebrisCfg::set_has_composetype() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DebrisCfg::clear_has_composetype() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DebrisCfg::clear_composetype() {
  composetype_ = 0u;
  clear_has_composetype();
}
inline ::google::protobuf::uint32 DebrisCfg::composetype() const {
  return composetype_;
}
inline void DebrisCfg::set_composetype(::google::protobuf::uint32 value) {
  set_has_composetype();
  composetype_ = value;
}

// required uint32 ComposeCfgID = 8;
inline bool DebrisCfg::has_composecfgid() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DebrisCfg::set_has_composecfgid() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DebrisCfg::clear_has_composecfgid() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DebrisCfg::clear_composecfgid() {
  composecfgid_ = 0u;
  clear_has_composecfgid();
}
inline ::google::protobuf::uint32 DebrisCfg::composecfgid() const {
  return composecfgid_;
}
inline void DebrisCfg::set_composecfgid(::google::protobuf::uint32 value) {
  set_has_composecfgid();
  composecfgid_ = value;
}

// required uint32 CostCoin = 9;
inline bool DebrisCfg::has_costcoin() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DebrisCfg::set_has_costcoin() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DebrisCfg::clear_has_costcoin() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DebrisCfg::clear_costcoin() {
  costcoin_ = 0u;
  clear_has_costcoin();
}
inline ::google::protobuf::uint32 DebrisCfg::costcoin() const {
  return costcoin_;
}
inline void DebrisCfg::set_costcoin(::google::protobuf::uint32 value) {
  set_has_costcoin();
  costcoin_ = value;
}

// -------------------------------------------------------------------

// DebrisCfgSet

// repeated .com.cfg.vo.DebrisCfg debriscfg = 1;
inline int DebrisCfgSet::debriscfg_size() const {
  return debriscfg_.size();
}
inline void DebrisCfgSet::clear_debriscfg() {
  debriscfg_.Clear();
}
inline const ::com::cfg::vo::DebrisCfg& DebrisCfgSet::debriscfg(int index) const {
  return debriscfg_.Get(index);
}
inline ::com::cfg::vo::DebrisCfg* DebrisCfgSet::mutable_debriscfg(int index) {
  return debriscfg_.Mutable(index);
}
inline ::com::cfg::vo::DebrisCfg* DebrisCfgSet::add_debriscfg() {
  return debriscfg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DebrisCfg >&
DebrisCfgSet::debriscfg() const {
  return debriscfg_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::cfg::vo::DebrisCfg >*
DebrisCfgSet::mutable_debriscfg() {
  return &debriscfg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace vo
}  // namespace cfg
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DebrisCfg_2eproto__INCLUDED