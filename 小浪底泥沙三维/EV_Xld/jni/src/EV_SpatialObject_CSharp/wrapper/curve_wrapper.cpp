/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/curve.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback)();
				typedef EarthView::World::Spatial::Geometry::CPoint*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback)();
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback)(_in ev_uint32 smooth);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CCurveProxy : public EarthView::World::Spatial::Geometry::CCurve
				{
				private:
					EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_update_void_Callback* m_EarthView_World_Spatial_Geometry_CCurve_update_void_Callback;
					EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CCurveProxy(EarthView::World::Core::CNameValuePairList *pList) : CCurve(pList)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint(EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint(EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint(EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint(EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64(EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool(EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool(EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool(EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32(EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_update_void(EarthView_World_Spatial_Geometry_CCurve_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool(EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_simplify_void(EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry(EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::getStartPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getStartPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getStartPoint2();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::getEndPoint();
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getEndPoint2() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CPoint returnValue = *(EarthView::World::Spatial::Geometry::CPoint*)m_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getEndPoint2();
					}
					virtual ev_real64 getLength() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getLength();
					}
					virtual ev_bool isClosed() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::isClosed();
					}
					virtual ev_bool isRing() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::isRing();
					}
					virtual ev_bool reverse()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::reverse();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(_in ev_uint32 smooth) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback(smooth);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::toLineString(smooth);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::getBoundary();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CCurve::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CCurve::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::isEmpty();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback();
						}
						else
							return this->CCurve::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::buffer(tolerance, dimension);
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CCurve::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CCurve::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::clone();
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isContains(geom, dimension);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isEquals(geom, tolerance, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CCurve::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCurve::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CCurve::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCurve::toStream(stream);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CCurve::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CCurve::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CCurve::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CCurve::projects(sr, sevenParam, count);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CCurve::setDirty(dirty);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CCurve_update_void_Callback();
						}
						else
							return this->CCurve::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCurve::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CCurve::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CCurve::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCurve::deletePoint(point);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCurve::isValid();
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CCurve::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CCurveProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getStartPoint();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getStartPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getStartPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getStartPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getStartPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getStartPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getEndPoint();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPoint*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getEndPoint_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getEndPoint();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getEndPoint2();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getEndPoint2_CPoint_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getEndPoint2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getLength();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getLength();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCurve_getLength_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::isClosed();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClosed();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurve_isClosed_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::isClosed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::isRing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurve_isRing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::isRing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::reverse();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->reverse();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCurve_reverse_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::reverse();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::toLineString(smooth);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CCurve_toLineString_CLineString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 smooth )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::toLineString(smooth);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					if (dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getBoundary();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CCurve_getBoundary_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCurve* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CCurve::getBoundary();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_update_void_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_simplify_void_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CCurveProxy* ptr = dynamic_cast<CCurveProxy*>((EarthView::World::Spatial::Geometry::CCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CCurve_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
