/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/ellipticarc.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CEllipticArcProxy : public EarthView::World::Spatial::Geometry::CEllipticArc
				{
				private:
					EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CEllipticArcProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipticArc(pList)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_update_void(EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void(EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString returnValue = *(EarthView::World::Spatial::Geometry::CLineString*)m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback(smooth);
							return returnValue;
						}
						else
							return this->CEllipticArc::toLineString2(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getStartPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::isClosed();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::reverse();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::isEmpty();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CEllipticArc::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CEllipticArc::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::clone();
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CEllipticArc::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CEllipticArc::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CEllipticArc::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CEllipticArc::projects(sr, sevenParam, count);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback();
						}
						else
							return this->CEllipticArc::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* splitLine) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback(splitLine);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::split(splitLine);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CEllipticArc::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CEllipticArc::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CEllipticArc::deletePoint(point);
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::getEndPoint();
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::isRing();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::toLineString(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::getBoundary();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CEllipticArc::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback();
						}
						else
							return this->CEllipticArc::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CEllipticArc::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEllipticArc::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CEllipticArc::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CEllipticArc::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEllipticArc::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CEllipticArc::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEllipticArc::smooth(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CEllipticArc::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CEllipticArcProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getFromPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getFromPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getFromPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getFromPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getToPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getToPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getToPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getToPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getCenterPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->getCenterPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getCenterPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->getCenterPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getFromAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFromAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getToAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getToAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getCenterAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCenterAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getSemiMajorAxe_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSemiMajorAxe();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getSemiMinorAxe_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSemiMinorAxe();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getSweepAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSweepAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getRotatedAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRotatedAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setEllipticArc_void_CPoint_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const void* centerPoint, _in ev_real64 semiMajorAxe, _in ev_real64 semiMinorAx, _in ev_real64 rotatedAngle, _in ev_real64 fromAngle, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setEllipticArc(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint, semiMajorAxe, semiMinorAx, rotatedAngle, fromAngle, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setEllipticArc_void_CPoint_CPoint_CPoint_ev_real64_ev_real64(void *pObjectXXXX, _in const void* centerPoint, _in const void* assistantPoint, _in const void* assistantPoint2, _in ev_real64 fromAngle, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setEllipticArc(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint, *(EarthView::World::Spatial::Geometry::CPoint*)assistantPoint, *(EarthView::World::Spatial::Geometry::CPoint*)assistantPoint2, fromAngle, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setEllipticArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy, _in ev_real64 semiMajorAxe, _in ev_real64 semiMinorAxe, _in ev_real64 rotatedAngle, _in ev_real64 fromAngle, _in ev_real64 sweepAngle )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setEllipticArc(cx, cy, semiMajorAxe, semiMinorAxe, rotatedAngle, fromAngle, sweepAngle);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::toLineString2(smooth);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_toLineString2_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::toLineString2(smooth);
					EarthView::World::Spatial::Geometry::CLineString *pXXXX = new EarthView::World::Spatial::Geometry::CLineString(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setCenterPoint_void_CPoint(void *pObjectXXXX, _in const void* centerPoint )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setCenterPoint(*(EarthView::World::Spatial::Geometry::CPoint*)centerPoint);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setSemiMajorAxe_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setSemiMajorAxe(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setSemiMinorAxe_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setSemiMinorAxe(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setRotatedAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setRotatedAngle(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setFromAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setFromAngle(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_setSweepAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->setSweepAngle(value);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::getStartPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::getStartPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::getEndPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::getEndPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isClosed();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClosed();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isClosed_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isClosed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::reverse();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->reverse();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_reverse_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::reverse();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::projects(sr, sevenParam, count);
					else
						ptrNativeObject->projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_update_void_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_update_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::update();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::mirror(line);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_mirror_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::mirror(line);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* splitLine )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::split(splitLine);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_split_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* splitLine )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::split(splitLine);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::clip(clipRegion);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clip_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::clip(clipRegion);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::snapToSegment(point, tolerance);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_movePointTo_ev_bool_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::movePointTo(frmPoint, cpy_toPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::addPointTo(cpy_point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(cpy_point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::addPointTo(cpy_point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					if (dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::deletePoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deletePoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_deletePoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CEllipticArc::deletePoint(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_clone2_CEllipticArc(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc* ptrNativeObject = (EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEllipticArc objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CEllipticArc *pXXXX = new EarthView::World::Spatial::Geometry::CEllipticArc(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CEllipticArc_OperatorAssign_CEllipticArc_CEllipticArc(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CEllipticArc& objXXXX = *((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CEllipticArc*)obj;
					EarthView::World::Spatial::Geometry::CEllipticArc *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CEllipticArcProxy* ptr = dynamic_cast<CEllipticArcProxy*>((EarthView::World::Spatial::Geometry::CEllipticArc*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CEllipticArc_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
