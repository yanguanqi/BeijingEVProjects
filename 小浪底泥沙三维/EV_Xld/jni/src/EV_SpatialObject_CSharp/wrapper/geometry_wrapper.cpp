/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geometry.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CGeometryProxy : public EarthView::World::Spatial::Geometry::CGeometry
				{
				private:
					EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CGeometryProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometry(pList)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_update_void(EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool(EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_simplify_void(EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CGeometry::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::isEmpty();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback();
						}
						else
							return this->CGeometry::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::buffer(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CGeometry::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CGeometry::makeM(m);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::clone();
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isContains(geom, dimension);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isEquals(geom, tolerance, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CGeometry::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGeometry::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CGeometry::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CGeometry::toStream(stream);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CGeometry::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CGeometry::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CGeometry::projects(sr, sevenParam, count);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CGeometry::setDirty(dirty);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback();
						}
						else
							return this->CGeometry::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeometry::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CGeometry::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CGeometry::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CGeometry::deletePoint(point);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGeometry::isValid();
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CGeometry::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CGeometryProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVWKBGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getWKBGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVWKBGeometryType objXXXX = ptrNativeObject->getWKBGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getWKBGeometryType_EVWKBGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVWKBGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getWKBGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::setSpatialReferenceRef(ref_sr);
					else
						ptrNativeObject->setSpatialReferenceRef(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_setSpatialReferenceRef_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::setSpatialReferenceRef(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isEmpty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEmpty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isEmpty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isSimple();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSimple();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isSimple_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isSimple();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_simplify_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::simplify();
					else
						ptrNativeObject->simplify();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_simplify_void_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_simplify_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::simplify();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::buffer(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->buffer(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_buffer_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::buffer(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getBoundary();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getBoundary_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getBoundary();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::makeZ(z);
					else
						ptrNativeObject->makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_makeZ_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::makeZ(z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::makeM(m);
					else
						ptrNativeObject->makeM(m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_makeM_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 m )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::makeM(m);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isContains(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isContains(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isContains_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isContains(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isEquals(geom, tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isDisjoin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDisjoin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isDisjoin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isIntersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isIntersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isIntersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isWithin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isWithin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isWithin(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isTouches(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isTouches(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isTouches(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isCrosses(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCrosses(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isCrosses(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char* relateMatrix, _in int dimension )
				{
					EarthView::World::Core::ev_string relateMatrix1 = relateMatrix;
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isRelates(geom, relateMatrix1, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRelates(geom, relateMatrix1, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char* relateMatrix, _in int dimension )
				{
					EarthView::World::Core::ev_string relateMatrix1 = relateMatrix;
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isRelates(geom, relateMatrix1, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType(void *pObjectXXXX, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::convexHull((EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->convexHull((EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_convexHull_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::convexHull((EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::difference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->difference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_difference_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::difference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::distance(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->distance(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CGeometry_distance_ev_real64_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::distance(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::intersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->intersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_intersects_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::intersects(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::overlaps(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->overlaps(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::overlaps(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::symDifference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->symDifference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::symDifference(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::unions(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->unions(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_unions_IGeometry_IGeometry_EVDimensionType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::unions(geom, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::toWKB(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toWKB(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_toWKB_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::toWKB(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString(void *pObjectXXXX, _inout char*& wkt )
				{
					EarthView::World::Core::ev_string wkt1 = wkt;
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::toWKT(wkt1);
					else
						ptrNativeObject->toWKT(wkt1);
					wkt=wkt1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_toWKT_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& wkt )
				{
					EarthView::World::Core::ev_string wkt1 = wkt;
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::toWKT(wkt1);
					wkt=wkt1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::translate(x, y, z);
					else
						ptrNativeObject->translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_translate_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::translate(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					else
						ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::scale(xRef, yRef, zRef, x, y, z);
					else
						ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::projects(sr, sevenParam, count);
					else
						ptrNativeObject->projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::projects(sr, sevenParam, count);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isDirty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDirty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isDirty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool(void *pObjectXXXX, _in ev_bool dirty )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::setDirty(dirty);
					else
						ptrNativeObject->setDirty(dirty);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool dirty )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::setDirty(dirty);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_update_void_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_update_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::update();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::resample(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->resample(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::resample(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::mirror(line);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* line )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::mirror(line);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::split(pSplitGeom);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::split(pSplitGeom);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::clip(clipRegion);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::clip(clipRegion);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_NoVirtual(void *pObjectXXXX, _in ev_real64 tolerance, _in int dimension )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::smooth(tolerance, (EarthView::World::Spatial::Geometry::EVDimensionType)dimension);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::snapToPoint(point, tolerance, (EarthView::World::Spatial::Geometry::EVGeometrySnapType&)snap);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::snapToSegment(point, tolerance);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::snapToSegment(point, tolerance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->movePointTo(frmPoint, cpy_toPoint);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::movePointTo(frmPoint, cpy_toPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::addPointTo(cpy_point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addPointTo(cpy_point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::addPointTo(cpy_point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::deletePoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deletePoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::deletePoint(point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_hasZ_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_hasM_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_setZFlag_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool z, _in ev_bool isClear )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->setZFlag(z, isClear);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometry_setMFlag_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool m, _in ev_bool isClear )
				{
					EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ptrNativeObject->setMFlag(m, isClear);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_updateGeos_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateGeos();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					if (dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getInteriorPoint(point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getInteriorPoint(point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CGeometryProxy* ptr = dynamic_cast<CGeometryProxy*>((EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CGeometry_getInteriorPoint_ev_bool_IGeometry_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IGeometry* point )
				{
					const EarthView::World::Spatial::Geometry::CGeometry* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometry*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeometry::getInteriorPoint(point);
					return objXXXX;
				}
			}
		}
	}
}
