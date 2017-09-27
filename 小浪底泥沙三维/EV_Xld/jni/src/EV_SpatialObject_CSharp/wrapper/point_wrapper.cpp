/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/point.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CPointProxy : public EarthView::World::Spatial::Geometry::CPoint
				{
				private:
					EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CPoint_update_void_Callback* m_EarthView_World_Spatial_Geometry_CPoint_update_void_Callback;
					EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CPointProxy(EarthView::World::Core::CNameValuePairList *pList) : CPoint(pList)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_update_void(EarthView_World_Spatial_Geometry_CPoint_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool(EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_simplify_void(EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry(EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPoint::isValid();
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPoint::isEmpty();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CPoint::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CPoint::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::clone();
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isEquals(geom, tolerance, dimension);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CPoint::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CPoint::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CPoint::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CPoint::projects(sr, sevenParam, count);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CPoint::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CPoint::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CPoint::deletePoint(point);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CPoint::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CPoint::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CPoint::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CPoint::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CPoint::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPoint::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback();
						}
						else
							return this->CPoint::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::buffer(tolerance, dimension);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isContains(geom, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CPoint::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPoint::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CPoint::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPoint::toStream(stream);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPoint::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CPoint::setDirty(dirty);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CPoint_update_void_Callback();
						}
						else
							return this->CPoint::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPoint::smooth(tolerance, dimension);
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CPoint::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CPointProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CPoint_getX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CPoint_getY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CPoint_getZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CPoint_getM_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setZ(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setM_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setM(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setPoint_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setPoint(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setPoint_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setPoint(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_setPoint_void_CCoordinate(void *pObjectXXXX, _in const void* coord )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->setPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CPoint_getCoordinate_CCoordinate(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->getCoordinate();
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::getBoundary();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_getBoundary_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::getBoundary();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::projects(sr, sevenParam, count);
					else
						ptrNativeObject->projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CPoint_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::mirror(line);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_mirror_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::mirror(line);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::snapToSegment(point, tolerance);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CPoint_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_movePointTo_ev_bool_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::movePointTo(frmPoint, cpy_toPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::addPointTo(cpy_point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(cpy_point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::addPointTo(cpy_point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					if (dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::deletePoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deletePoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CPoint_deletePoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CPoint::deletePoint(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CPoint_clone2_CPoint(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CPoint* ptrNativeObject = (EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPoint objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = new EarthView::World::Spatial::Geometry::CPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CPoint_OperatorAssign_CPoint_CPoint(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CPoint& objXXXX = *((EarthView::World::Spatial::Geometry::CPoint*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CPoint*)obj;
					EarthView::World::Spatial::Geometry::CPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_update_void_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_simplify_void_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CPointProxy* ptr = dynamic_cast<CPointProxy*>((EarthView::World::Spatial::Geometry::CPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CPoint_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
