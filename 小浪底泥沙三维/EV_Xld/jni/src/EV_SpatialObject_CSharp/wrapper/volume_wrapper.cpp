/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/volume.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef const void*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback)(_in const void* offset);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback)(_in const void* scale);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback)(_in const void* orientation);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback)(_in const void* matrix);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback)(_in ev_bool dirty);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_update_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* line);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout int& snap);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* point);
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback)();
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback)(_in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback)(_in ev_real64 m);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in char*& relateMatrix, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback)(_in ev_real64 tolerance, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback)(_in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in int dimension);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback)(_inout char*& wkt);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback)(_in EarthView::World::Spatial::Geometry::IGeometry* point);
				class CVolumeProxy : public EarthView::World::Spatial::Geometry::CVolume
				{
				private:
					EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback* m_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback;
					EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback* m_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback;
					EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CVolume_update_void_Callback* m_EarthView_World_Spatial_Geometry_CVolume_update_void_Callback;
					EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback;
					EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback* m_EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback* m_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback;
					EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback* m_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback;
					EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback* m_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback;
				public:
					CVolumeProxy(EarthView::World::Core::CNameValuePairList *pList) : CVolume(pList)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_update_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion(EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3(EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3(EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4(EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3(EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3(EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion(EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4(EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool(EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool(EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_update_void(EarthView_World_Spatial_Geometry_CVolume_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64(EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry(EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType(EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType(EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool(EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool(EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool(EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_simplify_void(EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry(EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64(EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64(EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference(EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry(EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType(EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream(EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString(EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream(EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32(EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry(EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Math::CQuaternion& getRotate() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getRotate();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getScale();
					}
					virtual const EarthView::World::Spatial::Math::CVector3& getTranslateX() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getTranslateX();
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getMatrix();
					}
					virtual void setTranslate(_in const EarthView::World::Spatial::Math::CVector3& offset)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback(&offset);
						}
						else
							return this->CVolume::setTranslate(offset);
					}
					virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback(&scale);
						}
						else
							return this->CVolume::setScale(scale);
					}
					virtual void setRotation(_in const EarthView::World::Spatial::Math::CQuaternion& orientation)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback(&orientation);
						}
						else
							return this->CVolume::setRotation(orientation);
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback(&matrix);
						}
						else
							return this->CVolume::setMatrix(matrix);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback();
							return returnValue;
						}
						else
							return this->CVolume::clone();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getEnvelopeRef();
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVWKBGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVWKBGeometryType)m_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CVolume::getWKBGeometryType();
					}
					virtual void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CVolume::setSpatialReferenceRef(ref_sr);
					}
					virtual ev_bool isEmpty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVolume::isEmpty();
					}
					virtual ev_bool isSimple() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVolume::isSimple();
					}
					virtual void simplify()
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback();
						}
						else
							return this->CVolume::simplify();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::buffer(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::getBoundary();
					}
					virtual void makeZ(_in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback(z);
						}
						else
							return this->CVolume::makeZ(z);
					}
					virtual void makeM(_in ev_real64 m)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback(m);
						}
						else
							return this->CVolume::makeM(m);
					}
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isContains(geom, dimension);
					}
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback(geom, tolerance, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isEquals(geom, tolerance, dimension);
					}
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isDisjoin(geom, dimension);
					}
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isIntersects(geom, dimension);
					}
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isWithin(geom, dimension);
					}
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isTouches(geom, dimension);
					}
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isCrosses(geom, dimension);
					}
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EVString relateMatrix, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							char* relateMatrix_Char = relateMatrix.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback(geom, relateMatrix_Char, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::isRelates(geom, relateMatrix, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback((int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::convexHull(dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::difference(geom, dimension);
					}
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							return returnValue;
						}
						else
							return this->CVolume::distance(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::intersects(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::overlaps(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::symDifference(geom, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback(geom, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::unions(geom, dimension);
					}
					virtual void toWKB(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback(&stream);
						}
						else
							return this->CVolume::toWKB(stream);
					}
					virtual void toWKT(_inout EVString& wkt) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* wkt_Char = wkt.makeBuffer();
							m_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback(wkt_Char);
							wkt = wkt_Char;
							if(wkt_Char != NULL){ delete[] wkt_Char;wkt_Char = NULL;}
						}
						else
							return this->CVolume::toWKT(wkt);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CVolume::toStream(stream);
					}
					virtual void translate(_in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback(x, y, z);
						}
						else
							return this->CVolume::translate(x, y, z);
					}
					virtual void rotate(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
						else
							return this->CVolume::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					virtual void scale(_in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(xRef, yRef, zRef, x, y, z);
						}
						else
							return this->CVolume::scale(xRef, yRef, zRef, x, y, z);
					}
					virtual void projects(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64* sevenParam, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback(sr, sevenParam, count);
						}
						else
							return this->CVolume::projects(sr, sevenParam, count);
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVolume::isDirty();
					}
					virtual void setDirty(_in ev_bool dirty)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback(dirty);
						}
						else
							return this->CVolume::setDirty(dirty);
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CVolume_update_void_Callback();
						}
						else
							return this->CVolume::update();
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::resample(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback(line);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::mirror(line);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback(pSplitGeom);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::split(pSplitGeom);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback(clipRegion);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::clip(clipRegion);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(_in ev_real64 tolerance, _in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback(tolerance, (int)dimension);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::smooth(tolerance, dimension);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance, _inout EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback(point, tolerance, (int&)snap);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::snapToPoint(point, tolerance, snap);
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point, _in ev_real64 tolerance) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback(point, tolerance);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVolume::snapToSegment(point, tolerance);
					}
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, _in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback(frmPoint, cpy_toPoint);
							return returnValue;
						}
						else
							return this->CVolume::movePointTo(frmPoint, cpy_toPoint);
					}
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback(cpy_point);
							return returnValue;
						}
						else
							return this->CVolume::addPointTo(cpy_point);
					}
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CVolume::deletePoint(point);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVolume::isValid();
					}
					virtual ev_bool getInteriorPoint(_in EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if(m_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback(point);
							return returnValue;
						}
						else
							return this->CVolume::getInteriorPoint(point);
					}
				};
				REGISTER_FACTORY_CLASS(CVolumeProxy);
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getRotate();
						const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getRotate();
						const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getRotate_CQuaternion_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getRotate();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getScale();
						const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getScale();
						const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getScale_CVector3_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getScale();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getTranslateX();
						const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getTranslateX();
						const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getTranslateX_CVector3_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getTranslateX();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3(void *pObjectXXXX, _in const void* offset )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setTranslate(*(EarthView::World::Spatial::Math::CVector3*)offset);
					else
						ptrNativeObject->setTranslate(*(EarthView::World::Spatial::Math::CVector3*)offset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setTranslate_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* offset )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setTranslate(*(EarthView::World::Spatial::Math::CVector3*)offset);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
					else
						ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setScale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion(void *pObjectXXXX, _in const void* orientation )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setRotation(*(EarthView::World::Spatial::Math::CQuaternion*)orientation);
					else
						ptrNativeObject->setRotation(*(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setRotation_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* orientation )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setRotation(*(EarthView::World::Spatial::Math::CQuaternion*)orientation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					else
						ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CVolume_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					if (dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CVolume_clone_IGeometry_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CVolume* ptrNativeObject = (EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CVolume::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_toCartesian_CCoordinate_ISpatialReference_CCoordinate(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = EarthView::World::Spatial::Geometry::CVolume::toCartesian(sr, *(EarthView::World::Spatial::Geometry::CCoordinate*)point);
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_fromCartesian_CCoordinate_ISpatialReference_CCoordinate(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* point )
				{
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = EarthView::World::Spatial::Geometry::CVolume::fromCartesian(sr, *(EarthView::World::Spatial::Geometry::CCoordinate*)point);
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CVolume_getAnApeakVector_CVector3_CVector3(_in const void* vector )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Geometry::CVolume::getAnApeakVector(*(EarthView::World::Spatial::Math::CVector3*)vector);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_setDirty_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_update_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_update_void_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_resample_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_mirror_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_split_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_clip_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_smooth_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_snapToSegment_IGeometry_IGeometry_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_movePointTo_ev_bool_IGeometry_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_addPointTo_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_deletePoint_ev_bool_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getWKBGeometryType_EVWKBGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isEmpty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isSimple_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_simplify_void( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_simplify_void_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_simplify_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getBoundary_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_makeZ_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_makeM_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_setSpatialReferenceRef_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isContains_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isDisjoin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isIntersects_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isWithin_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isTouches_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isCrosses_ev_bool_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_buffer_IGeometry_ev_real64_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_convexHull_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_difference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_distance_ev_real64_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_intersects_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_overlaps_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_symDifference_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_unions_IGeometry_IGeometry_EVDimensionType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_toWKB_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_toWKT_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_translate_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_projects_void_ISpatialReference_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry_Callback* pCallback )
				{
					CVolumeProxy* ptr = dynamic_cast<CVolumeProxy*>((EarthView::World::Spatial::Geometry::CVolume*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CVolume_getInteriorPoint_ev_bool_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
