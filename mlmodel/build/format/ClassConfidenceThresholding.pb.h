// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClassConfidenceThresholding.proto

#ifndef PROTOBUF_ClassConfidenceThresholding_2eproto__INCLUDED
#define PROTOBUF_ClassConfidenceThresholding_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "DataStructures.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace CoreML {
namespace Specification {
class ArrayFeatureType;
class ArrayFeatureTypeDefaultTypeInternal;
extern ArrayFeatureTypeDefaultTypeInternal _ArrayFeatureType_default_instance_;
class ArrayFeatureType_EnumeratedShapes;
class ArrayFeatureType_EnumeratedShapesDefaultTypeInternal;
extern ArrayFeatureType_EnumeratedShapesDefaultTypeInternal _ArrayFeatureType_EnumeratedShapes_default_instance_;
class ArrayFeatureType_Shape;
class ArrayFeatureType_ShapeDefaultTypeInternal;
extern ArrayFeatureType_ShapeDefaultTypeInternal _ArrayFeatureType_Shape_default_instance_;
class ArrayFeatureType_ShapeRange;
class ArrayFeatureType_ShapeRangeDefaultTypeInternal;
extern ArrayFeatureType_ShapeRangeDefaultTypeInternal _ArrayFeatureType_ShapeRange_default_instance_;
class ClassConfidenceThresholding;
class ClassConfidenceThresholdingDefaultTypeInternal;
extern ClassConfidenceThresholdingDefaultTypeInternal _ClassConfidenceThresholding_default_instance_;
class DictionaryFeatureType;
class DictionaryFeatureTypeDefaultTypeInternal;
extern DictionaryFeatureTypeDefaultTypeInternal _DictionaryFeatureType_default_instance_;
class DoubleFeatureType;
class DoubleFeatureTypeDefaultTypeInternal;
extern DoubleFeatureTypeDefaultTypeInternal _DoubleFeatureType_default_instance_;
class DoubleRange;
class DoubleRangeDefaultTypeInternal;
extern DoubleRangeDefaultTypeInternal _DoubleRange_default_instance_;
class DoubleVector;
class DoubleVectorDefaultTypeInternal;
extern DoubleVectorDefaultTypeInternal _DoubleVector_default_instance_;
class FeatureType;
class FeatureTypeDefaultTypeInternal;
extern FeatureTypeDefaultTypeInternal _FeatureType_default_instance_;
class FloatVector;
class FloatVectorDefaultTypeInternal;
extern FloatVectorDefaultTypeInternal _FloatVector_default_instance_;
class ImageFeatureType;
class ImageFeatureTypeDefaultTypeInternal;
extern ImageFeatureTypeDefaultTypeInternal _ImageFeatureType_default_instance_;
class ImageFeatureType_EnumeratedImageSizes;
class ImageFeatureType_EnumeratedImageSizesDefaultTypeInternal;
extern ImageFeatureType_EnumeratedImageSizesDefaultTypeInternal _ImageFeatureType_EnumeratedImageSizes_default_instance_;
class ImageFeatureType_ImageSize;
class ImageFeatureType_ImageSizeDefaultTypeInternal;
extern ImageFeatureType_ImageSizeDefaultTypeInternal _ImageFeatureType_ImageSize_default_instance_;
class ImageFeatureType_ImageSizeRange;
class ImageFeatureType_ImageSizeRangeDefaultTypeInternal;
extern ImageFeatureType_ImageSizeRangeDefaultTypeInternal _ImageFeatureType_ImageSizeRange_default_instance_;
class Int64FeatureType;
class Int64FeatureTypeDefaultTypeInternal;
extern Int64FeatureTypeDefaultTypeInternal _Int64FeatureType_default_instance_;
class Int64Range;
class Int64RangeDefaultTypeInternal;
extern Int64RangeDefaultTypeInternal _Int64Range_default_instance_;
class Int64Set;
class Int64SetDefaultTypeInternal;
extern Int64SetDefaultTypeInternal _Int64Set_default_instance_;
class Int64ToDoubleMap;
class Int64ToDoubleMapDefaultTypeInternal;
extern Int64ToDoubleMapDefaultTypeInternal _Int64ToDoubleMap_default_instance_;
class Int64ToDoubleMap_MapEntry;
class Int64ToDoubleMap_MapEntryDefaultTypeInternal;
extern Int64ToDoubleMap_MapEntryDefaultTypeInternal _Int64ToDoubleMap_MapEntry_default_instance_;
class Int64ToStringMap;
class Int64ToStringMapDefaultTypeInternal;
extern Int64ToStringMapDefaultTypeInternal _Int64ToStringMap_default_instance_;
class Int64ToStringMap_MapEntry;
class Int64ToStringMap_MapEntryDefaultTypeInternal;
extern Int64ToStringMap_MapEntryDefaultTypeInternal _Int64ToStringMap_MapEntry_default_instance_;
class Int64Vector;
class Int64VectorDefaultTypeInternal;
extern Int64VectorDefaultTypeInternal _Int64Vector_default_instance_;
class PrecisionRecallCurve;
class PrecisionRecallCurveDefaultTypeInternal;
extern PrecisionRecallCurveDefaultTypeInternal _PrecisionRecallCurve_default_instance_;
class SequenceFeatureType;
class SequenceFeatureTypeDefaultTypeInternal;
extern SequenceFeatureTypeDefaultTypeInternal _SequenceFeatureType_default_instance_;
class SizeRange;
class SizeRangeDefaultTypeInternal;
extern SizeRangeDefaultTypeInternal _SizeRange_default_instance_;
class StateFeatureType;
class StateFeatureTypeDefaultTypeInternal;
extern StateFeatureTypeDefaultTypeInternal _StateFeatureType_default_instance_;
class StringFeatureType;
class StringFeatureTypeDefaultTypeInternal;
extern StringFeatureTypeDefaultTypeInternal _StringFeatureType_default_instance_;
class StringToDoubleMap;
class StringToDoubleMapDefaultTypeInternal;
extern StringToDoubleMapDefaultTypeInternal _StringToDoubleMap_default_instance_;
class StringToDoubleMap_MapEntry;
class StringToDoubleMap_MapEntryDefaultTypeInternal;
extern StringToDoubleMap_MapEntryDefaultTypeInternal _StringToDoubleMap_MapEntry_default_instance_;
class StringToInt64Map;
class StringToInt64MapDefaultTypeInternal;
extern StringToInt64MapDefaultTypeInternal _StringToInt64Map_default_instance_;
class StringToInt64Map_MapEntry;
class StringToInt64Map_MapEntryDefaultTypeInternal;
extern StringToInt64Map_MapEntryDefaultTypeInternal _StringToInt64Map_MapEntry_default_instance_;
class StringVector;
class StringVectorDefaultTypeInternal;
extern StringVectorDefaultTypeInternal _StringVector_default_instance_;
}  // namespace Specification
}  // namespace CoreML

namespace CoreML {
namespace Specification {

namespace protobuf_ClassConfidenceThresholding_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_ClassConfidenceThresholding_2eproto

// ===================================================================

class ClassConfidenceThresholding : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.ClassConfidenceThresholding) */ {
 public:
  ClassConfidenceThresholding();
  virtual ~ClassConfidenceThresholding();

  ClassConfidenceThresholding(const ClassConfidenceThresholding& from);

  inline ClassConfidenceThresholding& operator=(const ClassConfidenceThresholding& from) {
    CopyFrom(from);
    return *this;
  }

  static const ClassConfidenceThresholding& default_instance();

  static inline const ClassConfidenceThresholding* internal_default_instance() {
    return reinterpret_cast<const ClassConfidenceThresholding*>(
               &_ClassConfidenceThresholding_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ClassConfidenceThresholding* other);

  // implements Message ----------------------------------------------

  inline ClassConfidenceThresholding* New() const PROTOBUF_FINAL { return New(NULL); }

  ClassConfidenceThresholding* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClassConfidenceThresholding& from);
  void MergeFrom(const ClassConfidenceThresholding& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClassConfidenceThresholding* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .CoreML.Specification.PrecisionRecallCurve precisionRecallCurves = 100;
  int precisionrecallcurves_size() const;
  void clear_precisionrecallcurves();
  static const int kPrecisionRecallCurvesFieldNumber = 100;
  const ::CoreML::Specification::PrecisionRecallCurve& precisionrecallcurves(int index) const;
  ::CoreML::Specification::PrecisionRecallCurve* mutable_precisionrecallcurves(int index);
  ::CoreML::Specification::PrecisionRecallCurve* add_precisionrecallcurves();
  ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::PrecisionRecallCurve >*
      mutable_precisionrecallcurves();
  const ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::PrecisionRecallCurve >&
      precisionrecallcurves() const;

  // @@protoc_insertion_point(class_scope:CoreML.Specification.ClassConfidenceThresholding)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::PrecisionRecallCurve > precisionrecallcurves_;
  mutable int _cached_size_;
  friend struct protobuf_ClassConfidenceThresholding_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ClassConfidenceThresholding

// repeated .CoreML.Specification.PrecisionRecallCurve precisionRecallCurves = 100;
inline int ClassConfidenceThresholding::precisionrecallcurves_size() const {
  return precisionrecallcurves_.size();
}
inline void ClassConfidenceThresholding::clear_precisionrecallcurves() {
  precisionrecallcurves_.Clear();
}
inline const ::CoreML::Specification::PrecisionRecallCurve& ClassConfidenceThresholding::precisionrecallcurves(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.ClassConfidenceThresholding.precisionRecallCurves)
  return precisionrecallcurves_.Get(index);
}
inline ::CoreML::Specification::PrecisionRecallCurve* ClassConfidenceThresholding::mutable_precisionrecallcurves(int index) {
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.ClassConfidenceThresholding.precisionRecallCurves)
  return precisionrecallcurves_.Mutable(index);
}
inline ::CoreML::Specification::PrecisionRecallCurve* ClassConfidenceThresholding::add_precisionrecallcurves() {
  // @@protoc_insertion_point(field_add:CoreML.Specification.ClassConfidenceThresholding.precisionRecallCurves)
  return precisionrecallcurves_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::PrecisionRecallCurve >*
ClassConfidenceThresholding::mutable_precisionrecallcurves() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.ClassConfidenceThresholding.precisionRecallCurves)
  return &precisionrecallcurves_;
}
inline const ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::PrecisionRecallCurve >&
ClassConfidenceThresholding::precisionrecallcurves() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.ClassConfidenceThresholding.precisionRecallCurves)
  return precisionrecallcurves_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ClassConfidenceThresholding_2eproto__INCLUDED