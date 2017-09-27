/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/trianglering.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::CCurve*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback)(_in ev_uint32 index);
				typedef const EarthView::World::Spatial::Geometry::CCurve*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback)(_in const void* curve, _in ev_int32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback)(_in ev_uint32 index, _in ev_int32 size);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback)(_in const void* curve, _in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CTriangleRingProxy : public EarthView::World::Spatial::Geometry::CTriangleRing
				{
				private:
					EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CTriangleRingProxy(EarthView::World::Core::CNameValuePairList *pList) : CTriangleRing(pList)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32(EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32(EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32(EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_update_void(EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void(EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::isEmpty();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getSecondPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::getSecondPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getSecondPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getSecondPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getThirdPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::getThirdPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getThirdPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getThirdPoint2();
					}
					virtual ev_real64 getArea() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getArea();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getLength();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::clone();
					}
					virtual ev_int32 remove(_in ev_uint32 index, _in ev_int32 size)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback(index, size);
							return returnValue;
						}
						else
							return this->CTriangleRing::remove(index, size);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::getEndPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getEndPoint2();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::isClosed();
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::isRing();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CTriangleRing::toLineString2(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::getBoundary();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* pClipLine) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback(pClipLine);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::clip(pClipLine);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::snapToSegment(point, tolerance);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CTriangleRing::addPointTo(cpy_point);
					}
					virtual ev_uint32 getCurveCount() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getCurveCount();
					}
					virtual EarthView::World::Spatial::Geometry::CCurve* getCurve(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CCurve* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback(index);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::getCurve(index);
					}
					virtual const EarthView::World::Spatial::Geometry::CCurve* getCurveRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::CCurve* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CTriangleRing::getCurveRef(index);
					}
					virtual ev_int32 add(_in const EarthView::World::Spatial::Geometry::CCurve& curve, _in ev_int32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback(&curve, index);
							return returnValue;
						}
						else
							return this->CTriangleRing::add(curve, index);
					}
					virtual ev_int32 clear()
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::clear();
					}
					virtual ev_int32 replace(_in const EarthView::World::Spatial::Geometry::CCurve& curve, _in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback(&curve, index);
							return returnValue;
						}
						else
							return this->CTriangleRing::replace(curve, index);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getStartPoint2();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::reverse();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::toLineString(smooth);
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CTriangleRing::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CTriangleRing::makeM(m);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CTriangleRing::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CTriangleRing::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CTriangleRing::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(ref_sr, sevenParam, count);
						}
						else
							return this->CTriangleRing::projects(ref_sr, sevenParam, count);
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CTriangleRing::setSpatialReferenceRef(ref_sr);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback();
						}
						else
							return this->CTriangleRing::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::mirror(line);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CTriangleRing::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CTriangleRing::deletePoint(point);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::getWKBGeometryType();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback();
						}
						else
							return this->CTriangleRing::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CTriangleRing::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CTriangleRing::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CTriangleRing::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CTriangleRing::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTriangleRing::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CTriangleRing::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CTriangleRing::resample(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CTriangleRing::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CTriangleRingProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_setTriangleRing_void_CCoordinate_CCoordinate_CCoordinate(void *pObjectXXXX, _in const void* coord1, _in const void* coord2, _in const void* coord3 )
				{
					EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ptrNativeObject->setTriangleRing(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord1, *(EarthView::World::Spatial::Geometry::CCoordinate*)coord2, *(EarthView::World::Spatial::Geometry::CCoordinate*)coord3);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_setTriangleRing_void_CPoint_CPoint_CPoint(void *pObjectXXXX, _in const void* point1, _in const void* point2, _in const void* point3 )
				{
					EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ptrNativeObject->setTriangleRing(*(EarthView::World::Spatial::Geometry::CPoint*)point1, *(EarthView::World::Spatial::Geometry::CPoint*)point2, *(EarthView::World::Spatial::Geometry::CPoint*)point3);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getFirstPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFirstPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getFirstPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getFirstPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getSecondPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getSecondPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getSecondPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getSecondPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getSecondPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getSecondPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getThirdPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getThirdPoint();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getThirdPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getThirdPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getThirdPoint2();
						EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getThirdPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getFirstLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFirstLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSecondLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getThirdLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getFirstCoordinateRef_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->getFirstCoordinateRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getFirstCoordinate_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->getFirstCoordinate();
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondCoordinateRef_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->getSecondCoordinateRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondCoordinate_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->getSecondCoordinate();
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CCoordinate*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdCoordinateRef_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CCoordinate* objXXXX = ptrNativeObject->getThirdCoordinateRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdCoordinate_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->getThirdCoordinate();
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getFirstAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFirstAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getSecondAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSecondAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getThirdAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getThirdAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getArea();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getArea();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getArea_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_uint32(void *pObjectXXXX, _in const void* curve, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCurve*)curve, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 index, _in ev_int32 size )
				{
					EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					if (dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::remove(index, size);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->remove(index, size);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_remove_ev_int32_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_int32 size )
				{
					EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CTriangleRing::remove(index, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_clone2_CTriangleRing(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CTriangleRing* ptrNativeObject = (EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CTriangleRing objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CTriangleRing *pXXXX = new EarthView::World::Spatial::Geometry::CTriangleRing(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CTriangleRing_OperatorAssign_CTriangleRing_CTriangleRing(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CTriangleRing& objXXXX = *((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CTriangleRing*)obj;
					EarthView::World::Spatial::Geometry::CTriangleRing *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurve_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getCurveRef_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_add_ev_int32_CCurve_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clear_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_replace_ev_int32_CCurve_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_update_void_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CTriangleRingProxy* ptr = dynamic_cast<CTriangleRingProxy*>((EarthView::World::Spatial::Geometry::CTriangleRing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CTriangleRing_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
