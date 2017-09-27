/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/circlearc.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CCircleArcProxy : public EarthView::World::Spatial::Geometry::CCircleArc
				{
				private:
					EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CCircleArcProxy(EarthView::World::Core::CNameValuePairList *pList) : CCircleArc(pList)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_update_void(EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void(EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CCircleArc::toLineString2(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getStartPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::isClosed();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::reverse();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::isEmpty();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CCircleArc::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CCircleArc::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::clone();
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CCircleArc::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CCircleArc::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CCircleArc::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CCircleArc::projects(sr, sevenParam, count);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback();
						}
						else
							return this->CCircleArc::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* splitLine) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback(splitLine);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::split(splitLine);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, toPoint);
							return returnValue;
						}
						else
							return this->CCircleArc::movePointTo(frmPoint, toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCircleArc::addPointTo(point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCircleArc::deletePoint(point);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::getEndPoint();
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::isRing();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::toLineString(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::getBoundary();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CCircleArc::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback();
						}
						else
							return this->CCircleArc::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCircleArc::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCircleArc::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CCircleArc::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCircleArc::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCircleArc::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CCircleArc::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCircleArc::smooth(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCircleArc::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CCircleArcProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getFromPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFromPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getFromPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getFromPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getToPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getToPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getToPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getToPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getCenterPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCenterPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getCenterPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getCenterPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getFromAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFromAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getToAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getToAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getCenterAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getChordLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getChordLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getChordHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getChordHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCircleArcByControlPoint_void_CPoint_CPoint_CPoint(void *pObjectXXXX, _in const void* firstPoint, _in const void* secondPoint, _in const void* thirdPoint )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCircleArcByControlPoint(*(EarthView::World::Spatial::Geometry::CPoint*)firstPoint, *(EarthView::World::Spatial::Geometry::CPoint*)secondPoint, *(EarthView::World::Spatial::Geometry::CPoint*)thirdPoint);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCircleArcByControlPoint_void_CCoordinate_CCoordinate_CCoordinate(void *pObjectXXXX, _in const void* firstCoord, _in const void* secondCoord, _in const void* thirdCoord )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCircleArcByControlPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)firstCoord, *(EarthView::World::Spatial::Geometry::CCoordinate*)secondCoord, *(EarthView::World::Spatial::Geometry::CCoordinate*)thirdCoord);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCircleArc_void_CPoint_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const void* centerPoint, _in ev_real64 radius, _in ev_real64 fromAngle, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCircleArc(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint, radius, fromAngle, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCircleArc_void_CCoordinate_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const void* centerCoord, _in ev_real64 radius, _in ev_real64 fromAngle, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCircleArc(*(EarthView::World::Spatial::Geometry::CCoordinate*)centerCoord, radius, fromAngle, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCircleArc_void_CPoint_CPoint_ev_real64(void *pObjectXXXX, _in const void* centerPoint, _in const void* fromPoint, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCircleArc(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint, *(EarthView::World::Spatial::Geometry::CPoint*)fromPoint, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCircleArc_void_CCoordinate_CCoordinate_ev_real64(void *pObjectXXXX, _in const void* centerCoord, _in const void* fromCoord, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCircleArc(*(EarthView::World::Spatial::Geometry::CCoordinate*)centerCoord, *(EarthView::World::Spatial::Geometry::CCoordinate*)fromCoord, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::toLineString2(smooth);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_toLineString2_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::toLineString2(smooth);
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCenterPoint_void_CPoint(void *pObjectXXXX, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setCenterCoordinate_void_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setCenterCoordinate(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setFromAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setFromAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_setSweepAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 sweep )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->setSweepAngle(sweep);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::getStartPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::getStartPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::getEndPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::getEndPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isClosed();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClosed();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isClosed_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isClosed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::reverse();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->reverse();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_reverse_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::reverse();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::projects(sr, sevenParam, count);
					else
						ptrNativeObject->projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_update_void_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_update_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::update();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::mirror(line);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_mirror_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::mirror(line);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* splitLine )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::split(splitLine);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->split(splitLine);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_split_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* splitLine )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::split(splitLine);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::clip(clipRegion);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clip_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::clip(clipRegion);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::snapToSegment(point, tolerance);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* toPoint )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::movePointTo(frmPoint, toPoint);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->movePointTo(frmPoint, toPoint);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_movePointTo_ev_bool_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* toPoint )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::movePointTo(frmPoint, toPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::addPointTo(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::addPointTo(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					if (dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::deletePoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deletePoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_deletePoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCircleArc::deletePoint(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_OperatorAssign_CCircleArc_CCircleArc(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CCircleArc& objXXXX = *((EarthView::World::Spatial::Geometry::CCircleArc*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CCircleArc*)obj;
					EarthView::World::Spatial::Geometry::CCircleArc *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCircleArc_clone2_CCircleArc(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCircleArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCircleArc objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CCircleArc *pXXXX = new EarthView::World::Spatial::Geometry::CCircleArc(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_simplify_void_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCircleArcProxy* ptr = dynamic_cast<CCircleArcProxy*>((EarthView::World::Spatial::Geometry::CCircleArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCircleArc_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
