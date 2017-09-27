/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/circlechord.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback)(_in const void* path);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback)(_in const void* path, _in ev_uint32 exteriorIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback)(_in ev_uint32 exteriorIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback)(_in ev_uint32 exteriorIndex, _in ev_uint32 interiorIndex);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback)(_in ev_uint32 exteriorIndex);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CCircleChordProxy : public EarthView::World::Spatial::Geometry::CCircleChord
				{
				private:
					EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CCircleChordProxy(EarthView::World::Core::CNameValuePairList *pList) : CCircleChord(pList)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing(EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32(EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32(EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32(EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32(EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32(EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_update_void(EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool(EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void(EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_real64 getArea() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::getArea();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::clone();
					}
					virtual ev_bool addExteriorRing(_in const EarthView::World::Spatial::Geometry::CCurveRing& path)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback(&path);
							return returnValue;
						}
						else
							return this->CCircleChord::addExteriorRing(path);
					}
					virtual ev_bool addInteriorRing(_in const EarthView::World::Spatial::Geometry::CCurveRing& path, _in ev_uint32 exteriorIndex)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback(&path, exteriorIndex);
							return returnValue;
						}
						else
							return this->CCircleChord::addInteriorRing(path, exteriorIndex);
					}
					virtual ev_bool removeExteriorRing(_in ev_uint32 exteriorIndex)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback(exteriorIndex);
							return returnValue;
						}
						else
							return this->CCircleChord::removeExteriorRing(exteriorIndex);
					}
					virtual ev_bool removeInteriorRing(_in ev_uint32 exteriorIndex, _in ev_uint32 interiorIndex)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback(exteriorIndex, interiorIndex);
							return returnValue;
						}
						else
							return this->CCircleChord::removeInteriorRing(exteriorIndex, interiorIndex);
					}
					virtual ev_uint32 clearInteriorRing(_in ev_uint32 exteriorIndex)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback(exteriorIndex);
							return returnValue;
						}
						else
							return this->CCircleChord::clearInteriorRing(exteriorIndex);
					}
					virtual ev_uint32 clearAllRing()
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::clearAllRing();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::isEmpty();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CCircleChord::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CCircleChord::makeM(m);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CCircleChord::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CCircleChord::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CCircleChord::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CCircleChord::projects(sr, sevenParam, count);
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CCircleChord::setSpatialReferenceRef(ref_sr);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback();
						}
						else
							return this->CCircleChord::update();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback();
						}
						else
							return this->CCircleChord::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CCircleChord::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CCircleChord::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCircleChord::deletePoint(point);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::getWKBGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleChord::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCircleChord::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CCircleChord::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCircleChord::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleChord::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CCircleChord::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleChord::resample(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCircleChord::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CCircleChordProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_setCircleChordRing_void_CCircleChordRing(void *pObjectXXXX, _in const void* ring )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ptrNativeObject->setCircleChordRing(*(EarthView::World::Spatial::Geometry::CCircleChordRing*)ring);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CCircleChordRing*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getCircleChordRingRef_CCircleChordRing(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CCircleChordRing* objXXXX = ptrNativeObject->getCircleChordRingRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getCircleChordRing_CCircleChordRing(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCircleChordRing objXXXX = ptrNativeObject->getCircleChordRing();
					EarthView::World::Spatial::Geometry::CCircleChordRing *pXXXX = new EarthView::World::Spatial::Geometry::CCircleChordRing(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getArcLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getArcLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getCircumference_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCircumference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getFromPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFromPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getFromPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getFromPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getToPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getToPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getToPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getToPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getCenterPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCenterPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getCenterPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getCenterPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getFromAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFromAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getToAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getToAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getCenterAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_setCircleChord_void_CPoint_CPoint_CPoint(void *pObjectXXXX, _in const void* firstPoint, _in const void* secondPoint, _in const void* thirdPoint )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ptrNativeObject->setCircleChord(*(EarthView::World::Spatial::Geometry::CPoint*)firstPoint, *(EarthView::World::Spatial::Geometry::CPoint*)secondPoint, *(EarthView::World::Spatial::Geometry::CPoint*)thirdPoint);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_setCircleChord_void_CPoint_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const void* centerPoint, _in ev_real64 radius, _in ev_real64 fromAngle, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ptrNativeObject->setCircleChord(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint, radius, fromAngle, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_setCircleChord_void_CPoint_CPoint_ev_real64(void *pObjectXXXX, _in const void* centerPoint, _in const void* fromPoint, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ptrNativeObject->setCircleChord(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint, *(EarthView::World::Spatial::Geometry::CPoint*)fromPoint, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::getArea();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getArea();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_getArea_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::getArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing(void *pObjectXXXX, _in const void* path )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::addExteriorRing(*(EarthView::World::Spatial::Geometry::CCurveRing*)path);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addExteriorRing(*(EarthView::World::Spatial::Geometry::CCurveRing*)path);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addExteriorRing_ev_bool_CCurveRing_NoVirtual(void *pObjectXXXX, _in const void* path )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::addExteriorRing(*(EarthView::World::Spatial::Geometry::CCurveRing*)path);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32(void *pObjectXXXX, _in const void* path, _in ev_uint32 exteriorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::addInteriorRing(*(EarthView::World::Spatial::Geometry::CCurveRing*)path, exteriorIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addInteriorRing(*(EarthView::World::Spatial::Geometry::CCurveRing*)path, exteriorIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_addInteriorRing_ev_bool_CCurveRing_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* path, _in ev_uint32 exteriorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::addInteriorRing(*(EarthView::World::Spatial::Geometry::CCurveRing*)path, exteriorIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 exteriorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::removeExteriorRing(exteriorIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeExteriorRing(exteriorIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_removeExteriorRing_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 exteriorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::removeExteriorRing(exteriorIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 exteriorIndex, _in ev_uint32 interiorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::removeInteriorRing(exteriorIndex, interiorIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeInteriorRing(exteriorIndex, interiorIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_removeInteriorRing_ev_bool_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 exteriorIndex, _in ev_uint32 interiorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::removeInteriorRing(exteriorIndex, interiorIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 exteriorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::clearInteriorRing(exteriorIndex);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clearInteriorRing(exteriorIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clearInteriorRing_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 exteriorIndex )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::clearInteriorRing(exteriorIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					if (dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::clearAllRing();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clearAllRing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clearAllRing_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleChord::clearAllRing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_clone2_CCircleChord(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleChord* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCircleChord objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CCircleChord *pXXXX = new EarthView::World::Spatial::Geometry::CCircleChord(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleChord_OperatorAssign_CCircleChord_CCircleChord(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CCircleChord& objXXXX = *((EarthView::World::Spatial::Geometry::CCircleChord*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CCircleChord*)obj;
					EarthView::World::Spatial::Geometry::CCircleChord *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_update_void_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_simplify_void_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCircleChordProxy* ptr = dynamic_cast<CCircleChordProxy*>((EarthView::World::Spatial::Geometry::CCircleChord*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleChord_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
