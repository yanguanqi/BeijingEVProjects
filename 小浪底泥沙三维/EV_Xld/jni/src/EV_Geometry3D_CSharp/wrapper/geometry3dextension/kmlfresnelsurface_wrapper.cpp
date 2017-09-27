/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/kmlfresnelsurface.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Display
			{
			}
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback)(_in ev_bool isdraw);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback)(_inout void* subMeshData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback)(_in ev_bool dense);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback)(_in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* pCamera);
			typedef ev_real64  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback)(_in ev_real64 dis);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback)(_in Real angle);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback)(_in ev_bool useProjOffset);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback)(_in Real offset);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback)(_in ev_bool visible, _in const void* ids);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback)(_in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CKmlFresnelSurfaceProxy : public EarthView::World::Geometry3D::CKmlFresnelSurface
			{
			private:
				EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CKmlFresnelSurfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFresnelSurface(pList)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr(EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void(EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void(EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector(EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void(EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void(EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera(EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64(EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64(EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real(EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real(EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real(EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real(EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector(EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode(EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode(EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset(EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32(EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString(EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4(EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::load();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::update();
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback();
					}
					else
						return this->CKmlFresnelSurface::build();
				}
				virtual void build(_inout EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback(&subMeshDatas);
					}
					else
						return this->CKmlFresnelSurface::build(subMeshDatas);
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback();
					}
					else
						return this->CKmlFresnelSurface::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback();
					}
					else
						return this->CKmlFresnelSurface::derender();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::detachFromScene();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CKmlFresnelSurface::setVisible(visible);
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CKmlFresnelSurface::setUserData(userData);
				}
				virtual void updateLabel(_in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
					}
					else
						return this->CKmlFresnelSurface::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
				}
				virtual void updateByCamera(_in EarthView::World::Graphic::CCamera* pCamera)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback(pCamera);
					}
					else
						return this->CKmlFresnelSurface::updateByCamera(pCamera);
				}
				virtual void setLabelVisibleDistance(_in ev_real64 dis)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback(dis);
					}
					else
						return this->CKmlFresnelSurface::setLabelVisibleDistance(dis);
				}
				virtual void setLabelProjOffsetMaxAngle(_in Real angle)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback(angle);
					}
					else
						return this->CKmlFresnelSurface::setLabelProjOffsetMaxAngle(angle);
				}
				virtual void setLabelProjOffsetEnable(_in ev_bool useProjOffset)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback(useProjOffset);
					}
					else
						return this->CKmlFresnelSurface::setLabelProjOffsetEnable(useProjOffset);
				}
				virtual void setLabelProjOffset(_in Real offset)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback(offset);
					}
					else
						return this->CKmlFresnelSurface::setLabelProjOffset(offset);
				}
				virtual ev_bool updateMaterial()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::updateMaterial();
				}
				virtual EarthView::World::Graphic::CMeshPtr getMesh()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getMesh();
				}
				virtual ev_bool setVisibilityFilter(_in ev_bool visible, _in const EarthView::World::Core::IntVector& ids)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback(visible, &ids);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::setVisibilityFilter(visible, ids);
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::isAttached();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::unload();
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CKmlFresnelSurface::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getGeoObjectCount();
				}
				virtual ev_bool getDrawWireBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getDrawWireBoundingBox();
				}
				virtual void setDrawWireBoundingBox(_in ev_bool isdraw)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback(isdraw);
					}
					else
						return this->CKmlFresnelSurface::setDrawWireBoundingBox(isdraw);
				}
				virtual ev_bool isRendering() const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::isRendering();
				}
				virtual void setDenseInterpolation(_in ev_bool dense)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback(dense);
					}
					else
						return this->CKmlFresnelSurface::setDenseInterpolation(dense);
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CKmlFresnelSurface::setSelectable(selectable);
				}
				virtual ev_real64 getLabelVisibleDistance()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getLabelVisibleDistance();
				}
				virtual Real getLabelProjOffsetMaxAngle() const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getLabelProjOffsetMaxAngle();
				}
				virtual ev_bool getLabelProjOffsetEnable() const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getLabelProjOffsetEnable();
				}
				virtual Real getLabelProjOffset() const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getLabelProjOffset();
				}
				virtual ev_bool setObjectVisibility(_in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback(visible, ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::setObjectVisibility(visible, ref_geoObject);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CKmlFresnelSurface::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurface::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlFresnelSurface::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlFresnelSurface::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlFresnelSurfaceProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurface* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurface::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurface* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurface::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurface* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurface::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurface* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurface::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_render_void_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlFresnelSurfaceProxy* ptr = dynamic_cast<CKmlFresnelSurfaceProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurface*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			class CKmlFresnelSurfaceFactoryProxy : public EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory
			{
			private:
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
			public:
				CKmlFresnelSurfaceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFresnelSurfaceFactory(pList)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
				}
				virtual ev_uint16 getFactoryType()
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CKmlFresnelSurfaceFactory::getFactoryType();
				}
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurfaceFactory::createRenderable(geoObj, scenemanager);
				}
				virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
					}
					else
						return this->CKmlFresnelSurfaceFactory::destoryRenderable(visitObj);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurfaceFactory::appendGeoObject(visibleObj, ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurfaceFactory::removeGeoObject(visibleObj, geoObject);
				}
				virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
					}
					else
						return this->CKmlFresnelSurfaceFactory::removeAllGeoObjects(visibleObj);
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurfaceFactory::getGeoObject(visibleObj, index);
				}
				virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
				{
					if(m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
						return returnValue;
					}
					else
						return this->CKmlFresnelSurfaceFactory::getGeoObjectCount(visibleObj);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlFresnelSurfaceFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::getFactoryType();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::getFactoryType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::createRenderable(geoObj, scenemanager);
				EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::destoryRenderable(visitObj);
				else
					ptrNativeObject->destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::appendGeoObject(visibleObj, ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::removeGeoObject(visibleObj, geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::removeAllGeoObjects(visibleObj);
				else
					ptrNativeObject->removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::getGeoObject(visibleObj, index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(visibleObj, index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::getGeoObject(visibleObj, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::getGeoObjectCount(visibleObj);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount(visibleObj);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
			{
				CKmlFresnelSurfaceFactoryProxy* ptr = dynamic_cast<CKmlFresnelSurfaceFactoryProxy*>((EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory::getGeoObjectCount(visibleObj);
				return objXXXX;
			}
		}
	}
}
