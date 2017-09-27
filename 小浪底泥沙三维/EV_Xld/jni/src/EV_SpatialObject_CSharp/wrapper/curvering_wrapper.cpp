/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/curvering.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::CCurve*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback)(_in ev_uint32 index);
				typedef const EarthView::World::Spatial::Geometry::CCurve*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback)(_in const void* curve, _in ev_int32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback)(_in ev_uint32 index, _in ev_int32 size);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback)(_in const void* curve, _in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CCurveRingProxy : public EarthView::World::Spatial::Geometry::CCurveRing
				{
				private:
					EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CCurveRingProxy(EarthView::World::Core::CNameValuePairList *pList) : CCurveRing(pList)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32(EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32(EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_update_void(EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void(EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_real64 getArea() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getArea();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::getEndPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::isClosed();
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::isRing();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CCurveRing::toLineString2(smooth);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::isEmpty();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::getBoundary();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::clone();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* pClipLine) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback(pClipLine);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::clip(pClipLine);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::snapToSegment(point, tolerance);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CCurveRing::addPointTo(cpy_point);
					}
					virtual ev_uint32 getCurveCount() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getCurveCount();
					}
					virtual EarthView::World::Spatial::Geometry::CCurve* getCurve(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCurve* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback(index);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::getCurve(index);
					}
					virtual const EarthView::World::Spatial::Geometry::CCurve* getCurveRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CCurve* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCurveRing::getCurveRef(index);
					}
					virtual ev_int32 add(_in const EarthView::World::Spatial::Geometry::CCurve& curve, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback(&curve, index);
							return returnValue;
						}
						else
							return this->CCurveRing::add(curve, index);
					}
					virtual ev_int32 remove(_in ev_uint32 index, _in ev_int32 size)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback(index, size);
							return returnValue;
						}
						else
							return this->CCurveRing::remove(index, size);
					}
					virtual ev_int32 clear()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::clear();
					}
					virtual ev_int32 replace(_in const EarthView::World::Spatial::Geometry::CCurve& curve, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback(&curve, index);
							return returnValue;
						}
						else
							return this->CCurveRing::replace(curve, index);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getStartPoint2();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::reverse();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::toLineString(smooth);
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CCurveRing::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CCurveRing::makeM(m);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CCurveRing::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CCurveRing::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CCurveRing::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(ref_sr, sevenParam, count);
						}
						else
							return this->CCurveRing::projects(ref_sr, sevenParam, count);
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CCurveRing::setSpatialReferenceRef(ref_sr);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback();
						}
						else
							return this->CCurveRing::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::mirror(line);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CCurveRing::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCurveRing::deletePoint(point);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::getWKBGeometryType();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback();
						}
						else
							return this->CCurveRing::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurveRing::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCurveRing::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CCurveRing::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCurveRing::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurveRing::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CCurveRing::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurveRing::resample(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCurveRing::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CCurveRingProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getArea();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getArea();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getArea_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clone2_CCurveRing(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCurveRing objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CCurveRing *pXXXX = new EarthView::World::Spatial::Geometry::CCurveRing(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getEndPoint();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getEndPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getEndPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getEndPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getEndPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isClosed();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClosed();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isClosed_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isClosed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isRing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isRing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isRing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::toLineString2(smooth);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_toLineString2_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::toLineString2(smooth);
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getBoundary();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_getBoundary_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::getBoundary();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::split(pSplitGeom);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_split_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::split(pSplitGeom);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pClipLine )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::clip(pClipLine);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clip(pClipLine);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_clip_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pClipLine )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::clip(pClipLine);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_smooth_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::snapToSegment(point, tolerance);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					if (dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::addPointTo(cpy_point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(cpy_point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CCurveRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurveRing::addPointTo(cpy_point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurveRing_OperatorAssign_CCurveRing_CCurveRing(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CCurveRing& objXXXX = *((EarthView::World::Spatial::Geometry::CCurveRing*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CCurveRing*)obj;
					EarthView::World::Spatial::Geometry::CCurveRing *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurveCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurve_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getCurveRef_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_add_ev_int32_CCurve_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_remove_ev_int32_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_clear_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_replace_ev_int32_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_update_void_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_simplify_void_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurveRingProxy* ptr = dynamic_cast<CCurveRingProxy*>((EarthView::World::Spatial::Geometry::CCurveRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurveRing_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
