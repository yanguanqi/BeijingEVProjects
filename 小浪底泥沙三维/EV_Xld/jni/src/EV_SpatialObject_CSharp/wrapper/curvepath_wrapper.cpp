/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/curvepath.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::CCurve*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback)(_in ev_uint32 index);
				typedef const EarthView::World::Spatial::Geometry::CCurve*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback)(_in const void* curve, _in ev_int32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback)(_in ev_uint32 index, _in ev_int32 size);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback)(_in const void* curve, _in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CCurvePathProxy : public EarthView::World::Spatial::Geometry::CCurvePath
				{
				private:
					EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CCurvePathProxy(EarthView::World::Core::CNameValuePairList *pList) : CCurvePath(pList)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32(EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32(EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_update_void(EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void(EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_uint32 getCurveCount() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getCurveCount();
					}
					virtual EarthView::World::Spatial::Geometry::CCurve* getCurve(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCurve* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback(index);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::getCurve(index);
					}
					virtual const EarthView::World::Spatial::Geometry::CCurve* getCurveRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CCurve* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCurvePath::getCurveRef(index);
					}
					virtual ev_int32 add(_in const EarthView::World::Spatial::Geometry::CCurve& curve, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback(&curve, index);
							return returnValue;
						}
						else
							return this->CCurvePath::add(curve, index);
					}
					virtual ev_int32 remove(_in ev_uint32 index, _in ev_int32 size)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback(index, size);
							return returnValue;
						}
						else
							return this->CCurvePath::remove(index, size);
					}
					virtual ev_int32 clear()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::clear();
					}
					virtual ev_int32 replace(_in const EarthView::World::Spatial::Geometry::CCurve& curve, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback(&curve, index);
							return returnValue;
						}
						else
							return this->CCurvePath::replace(curve, index);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getStartPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::getEndPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::isClosed();
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::isRing();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::reverse();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::toLineString(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CCurvePath::toLineString2(smooth);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::isEmpty();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CCurvePath::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CCurvePath::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::clone();
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CCurvePath::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CCurvePath::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CCurvePath::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(ref_sr, sevenParam, count);
						}
						else
							return this->CCurvePath::projects(ref_sr, sevenParam, count);
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CCurvePath::setSpatialReferenceRef(ref_sr);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback();
						}
						else
							return this->CCurvePath::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CCurvePath::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CCurvePath::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCurvePath::deletePoint(point);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::getWKBGeometryType();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback();
						}
						else
							return this->CCurvePath::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurvePath::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCurvePath::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CCurvePath::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCurvePath::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurvePath::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CCurvePath::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurvePath::resample(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCurvePath::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CCurvePathProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getCurveCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCurveCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurveCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getCurveCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCurve*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CCurve* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getCurve(index);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCurve* objXXXX = ptrNativeObject->getCurve(index);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCurve*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurve_CCurve_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCurve* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getCurve(index);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CCurve*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::CCurve* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getCurveRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::CCurve* objXXXX = ptrNativeObject->getCurveRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CCurve*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getCurveRef_CCurve_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CCurve* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getCurveRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32(void *pObjectXXXX, _in const void* curve, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::add(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_add_ev_int32_CCurve_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* curve, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::add(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 index, _in ev_int32 size )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::remove(index, size);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->remove(index, size);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_remove_ev_int32_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_int32 size )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::remove(index, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::clear();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->clear();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clear_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::clear();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clone2_CCurvePath(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCurvePath objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CCurvePath *pXXXX = new EarthView::World::Spatial::Geometry::CCurvePath(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32(void *pObjectXXXX, _in const void* curve, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::replace(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->replace(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_replace_ev_int32_CCurve_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* curve, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::replace(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getStartPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getStartPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getStartPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getStartPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getStartPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getStartPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getStartPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getEndPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getEndPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getEndPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getEndPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getEndPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getEndPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getEndPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isClosed();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClosed();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isClosed_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isClosed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isRing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isRing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isRing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::reverse();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->reverse();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_reverse_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::reverse();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::toLineString(smooth);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->toLineString(smooth);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toLineString_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::toLineString(smooth);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::toLineString2(smooth);
						EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->toLineString2(smooth);
						EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_toLineString2_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::toLineString2(smooth);
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getBoundary();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getBoundary();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_getBoundary_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::getBoundary();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::projects(ref_sr, sevenParam, count);
					else
						ptrNativeObject->projects(ref_sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::projects(ref_sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::setSpatialReferenceRef(ref_sr);
					else
						ptrNativeObject->setSpatialReferenceRef(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_setSpatialReferenceRef_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::setSpatialReferenceRef(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_update_void_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_update_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::update();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::mirror(line);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->mirror(line);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_mirror_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::mirror(line);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::split(pSplitGeom);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->split(pSplitGeom);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_split_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::split(pSplitGeom);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::clip(clipRegion);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clip(clipRegion);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_clip_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::clip(clipRegion);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_smooth_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::snapToSegment(point, tolerance);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->snapToSegment(point, tolerance);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_movePointTo_ev_bool_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::movePointTo(frmPoint, cpy_toPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::addPointTo(cpy_point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(cpy_point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::addPointTo(cpy_point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					if (dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::deletePoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deletePoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_deletePoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CCurvePath* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurvePath::deletePoint(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurvePath_OperatorAssign_CCurvePath_CCurvePath(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CCurvePath& objXXXX = *((EarthView::World::Spatial::Geometry::CCurvePath*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CCurvePath*)obj;
					EarthView::World::Spatial::Geometry::CCurvePath *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_simplify_void_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurvePathProxy* ptr = dynamic_cast<CCurvePathProxy*>((EarthView::World::Spatial::Geometry::CCurvePath*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurvePath_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
