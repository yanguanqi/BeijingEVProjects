/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/column.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback)(_in const void* axis);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback)(_in const void* geometry);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback)(_in const void* degree);
				typedef const void*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback)(_in const void* offset);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback)(_in const void* scale);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback)(_in const void* orientation);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback)(_in const void* matrix);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CColumnProxy : public EarthView::World::Spatial::Geometry::CColumn
				{
				private:
					EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CColumn_update_void_Callback* m_EarthView_World_Spatial_Geometry_CColumn_update_void_Callback;
					EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CColumnProxy(EarthView::World::Core::CNameValuePairList *pList) : CColumn(pList)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay(EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString(EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree(EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion(EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3(EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3(EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4(EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3(EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3(EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion(EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4(EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_update_void(EarthView_World_Spatial_Geometry_CColumn_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool(EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_simplify_void(EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry(EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual ev_bool setAxis(_in const EarthView::World::Spatial::Math::CRay& axis)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback(&axis);
							return returnValue;
						}
						else
							return this->CColumn::setAxis(axis);
					}
					virtual ev_bool setGeneratrix(_in const EarthView::World::Spatial::Geometry::CLineString& geometry)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback(&geometry);
							return returnValue;
						}
						else
							return this->CColumn::setGeneratrix(geometry);
					}
					virtual void update() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_update_void_Callback();
						}
						else
							return this->CColumn::update();
					}
					virtual ev_bool setAngle(_in const EarthView::World::Spatial::Math::CDegree& degree)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback(&degree);
							return returnValue;
						}
						else
							return this->CColumn::setAngle(degree);
					}
					virtual const EarthView::World::Spatial::Math::CQuaternion& getRotate() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getRotate();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getScale();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getTranslateX() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getTranslateX();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getMatrix();
					}
					virtual void setTranslate(_in const EarthView::World::Spatial::Math::CVector3& offset)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback(&offset);
						}
						else
							return this->CColumn::setTranslate(offset);
					}
					virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback(&scale);
						}
						else
							return this->CColumn::setScale(scale);
					}
					virtual void setRotation(_in const EarthView::World::Spatial::Math::CQuaternion& orientation)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback(&orientation);
						}
						else
							return this->CColumn::setRotation(orientation);
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback(&matrix);
						}
						else
							return this->CColumn::setMatrix(matrix);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CColumn::clone();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CColumn::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CColumn::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CColumn::isEmpty();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CColumn::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback();
						}
						else
							return this->CColumn::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::buffer(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CColumn::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CColumn::makeM(m);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isContains(geom, dimension);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isEquals(geom, tolerance, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CColumn::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CColumn::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CColumn::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CColumn::toStream(stream);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CColumn::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CColumn::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CColumn::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CColumn::projects(sr, sevenParam, count);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CColumn::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CColumn::setDirty(dirty);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColumn::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CColumn::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CColumn::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CColumn::deletePoint(point);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CColumn::isValid();
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CColumn::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CColumnProxy);
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CColumn_getCircle_CCircle(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CCircle& objXXXX = ptrNativeObject->getCircle();
					const EarthView::World::Spatial::Geometry::CCircle *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CColumn_setCircle_void_CCircle(void *pObjectXXXX, _in const void* centerPoint )
				{
					EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					ptrNativeObject->setCircle(*(EarthView::World::Spatial::Geometry::CCircle*)centerPoint);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CColumn_getHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CColumn_setHeight_void_ev_real64(void *pObjectXXXX, _in ev_real64 height )
				{
					EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					ptrNativeObject->setHeight(height);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay(void *pObjectXXXX, _in const void* axis )
				{
					EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					if (dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CColumn::setAxis(*(EarthView::World::Spatial::Math::CRay*)axis);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setAxis(*(EarthView::World::Spatial::Math::CRay*)axis);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CColumn_setAxis_ev_bool_CRay_NoVirtual(void *pObjectXXXX, _in const void* axis )
				{
					EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CColumn::setAxis(*(EarthView::World::Spatial::Math::CRay*)axis);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString(void *pObjectXXXX, _in const void* geometry )
				{
					EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					if (dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CColumn::setGeneratrix(*(EarthView::World::Spatial::Geometry::CLineString*)geometry);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setGeneratrix(*(EarthView::World::Spatial::Geometry::CLineString*)geometry);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CColumn_setGeneratrix_ev_bool_CLineString_NoVirtual(void *pObjectXXXX, _in const void* geometry )
				{
					EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CColumn::setGeneratrix(*(EarthView::World::Spatial::Geometry::CLineString*)geometry);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CColumn_update_void(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					if (dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CColumn::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_update_void_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CColumn_update_void_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CColumn* ptrNativeObject = (EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CColumn::update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setAngle_ev_bool_CDegree(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getRotate_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getScale_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getTranslateX_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setTranslate_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setScale_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setRotation_void_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_simplify_void_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CColumnProxy* ptr = dynamic_cast<CColumnProxy*>((EarthView::World::Spatial::Geometry::CColumn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CColumn_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
