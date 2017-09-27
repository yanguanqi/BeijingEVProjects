/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/kmlplacemark.h"
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
		}
		namespace Graphic
		{
		}
		namespace Geometry3D
		{
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback)(_in Real reduceDis);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback)();
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback)(_in ev_bool isdraw);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback)(_inout void* subMeshData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback)(_in ev_bool dense);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback)(_in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* pCamera);
			typedef ev_real64  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback)(_in ev_real64 dis);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback)(_in Real angle);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback)(_in ev_bool useProjOffset);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback)(_in Real offset);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback)(_in ev_bool visible, _in const void* ids);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback)(_in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CKmlPlacemarkProxy : public EarthView::World::Geometry3D::CKmlPlacemark
			{
			private:
				EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CKmlPlacemarkProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlPlacemark(pList)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real(EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real(EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void(EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32(EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64(EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_build_void(EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector(EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_render_void(EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_derender_void(EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera(EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64(EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64(EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real(EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real(EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real(EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real(EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector(EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject(EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode(EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode(EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool(EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset(EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32(EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString(EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4(EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::unload();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::update();
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback();
					}
					else
						return this->CKmlPlacemark::build();
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback();
					}
					else
						return this->CKmlPlacemark::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback();
					}
					else
						return this->CKmlPlacemark::derender();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CKmlPlacemark::attachToNode(n);
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::attachToScene();
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::detachFromNode();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::detachFromScene();
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CKmlPlacemark::setUserData(userData);
				}
				virtual void setLabelVisibleDistance(_in ev_real64 dis)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback(dis);
					}
					else
						return this->CKmlPlacemark::setLabelVisibleDistance(dis);
				}
				virtual ev_bool setVisibilityFilter(_in ev_bool visible, _in const EarthView::World::Core::IntVector& ids)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback(visible, &ids);
						return returnValue;
					}
					else
						return this->CKmlPlacemark::setVisibilityFilter(visible, ids);
				}
				virtual ev_bool setObjectVisibility(_in ev_bool visible, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback(visible, ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlPlacemark::setObjectVisibility(visible, ref_geoObject);
				}
				virtual void updateByCamera(_in EarthView::World::Graphic::CCamera* pCamera)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback(pCamera);
					}
					else
						return this->CKmlPlacemark::updateByCamera(pCamera);
				}
				virtual void setLabelProjOffsetMaxAngle(_in Real angle)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback(angle);
					}
					else
						return this->CKmlPlacemark::setLabelProjOffsetMaxAngle(angle);
				}
				virtual Real getLabelProjOffsetMaxAngle() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getLabelProjOffsetMaxAngle();
				}
				virtual void setLabelProjOffsetEnable(_in ev_bool useProjOffset)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback(useProjOffset);
					}
					else
						return this->CKmlPlacemark::setLabelProjOffsetEnable(useProjOffset);
				}
				virtual ev_bool getLabelProjOffsetEnable() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getLabelProjOffsetEnable();
				}
				virtual void setLabelProjOffset(_in Real offset)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback(offset);
					}
					else
						return this->CKmlPlacemark::setLabelProjOffset(offset);
				}
				virtual Real getLabelProjOffset() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getLabelProjOffset();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::isAttached();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CKmlPlacemark::setVisible(visible);
				}
				virtual Real getReduceDistance() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getReduceDistance();
				}
				virtual void setReduceDistance(_in Real reduceDis)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback(reduceDis);
					}
					else
						return this->CKmlPlacemark::setReduceDistance(reduceDis);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback(ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlPlacemark::appendGeoObject(ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback(geoObject);
						return returnValue;
					}
					else
						return this->CKmlPlacemark::removeGeoObject(geoObject);
				}
				virtual void removeAllGeoObjects()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback();
					}
					else
						return this->CKmlPlacemark::removeAllGeoObjects();
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getGeoObject(index);
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getGeoObjectCount();
				}
				virtual ev_bool getDrawWireBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getDrawWireBoundingBox();
				}
				virtual void setDrawWireBoundingBox(_in ev_bool isdraw)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback(isdraw);
					}
					else
						return this->CKmlPlacemark::setDrawWireBoundingBox(isdraw);
				}
				virtual ev_bool isRendering() const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::isRendering();
				}
				virtual void setDenseInterpolation(_in ev_bool dense)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback(dense);
					}
					else
						return this->CKmlPlacemark::setDenseInterpolation(dense);
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CKmlPlacemark::setSelectable(selectable);
				}
				virtual void updateLabel(_in ev_bool resetTextStyle, _in ev_bool derenderTxt, _in ev_bool reCreate, _in ev_bool attachLabel, _in EarthView::World::Graphic::CCamera* pCamera)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
					}
					else
						return this->CKmlPlacemark::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
				}
				virtual ev_real64 getLabelVisibleDistance()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getLabelVisibleDistance();
				}
				virtual ev_bool updateMaterial()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::updateMaterial();
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CKmlPlacemark::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlacemark::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlPlacemark::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlPlacemark::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlPlacemarkProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlacemark* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX;
				if (dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlacemark::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlacemark_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlacemark* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlacemark::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlacemark* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX;
				if (dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlacemark::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlacemark_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlacemark* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlacemark::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlacemark* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX;
				if (dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlacemark::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlacemark_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlacemark* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlacemark::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getReduceDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setReduceDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_appendGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_removeGeoObject_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_removeAllGeoObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObject_CGeoObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getGeoObjectCount_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getDrawWireBoundingBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setDrawWireBoundingBox_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_build_void_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_build_void_CSubMeshDataVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_render_void_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_derender_void_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setDenseInterpolation_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateByCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelVisibleDistance_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelVisibleDistance_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetMaxAngle_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetMaxAngle_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffsetEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffsetEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setLabelProjOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLabelProjOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_updateMaterial_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setVisibilityFilter_ev_bool_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setObjectVisibility_ev_bool_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlPlacemarkProxy* ptr = dynamic_cast<CKmlPlacemarkProxy*>((EarthView::World::Geometry3D::CKmlPlacemark*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlacemark_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			class CKmlPlaceMarkFactoryProxy : public EarthView::World::Geometry3D::CKmlPlaceMarkFactory
			{
			private:
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
			public:
				CKmlPlaceMarkFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlPlaceMarkFactory(pList)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
				}
				virtual ev_uint16 getFactoryType()
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CKmlPlaceMarkFactory::getFactoryType();
				}
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
						return returnValue;
					}
					else
						return this->CKmlPlaceMarkFactory::createRenderable(geoObj, scenemanager);
				}
				virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
					}
					else
						return this->CKmlPlaceMarkFactory::destoryRenderable(visitObj);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlPlaceMarkFactory::appendGeoObject(visibleObj, ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
						return returnValue;
					}
					else
						return this->CKmlPlaceMarkFactory::removeGeoObject(visibleObj, geoObject);
				}
				virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
					}
					else
						return this->CKmlPlaceMarkFactory::removeAllGeoObjects(visibleObj);
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
						return returnValue;
					}
					else
						return this->CKmlPlaceMarkFactory::getGeoObject(visibleObj, index);
				}
				virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
				{
					if(m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
						return returnValue;
					}
					else
						return this->CKmlPlaceMarkFactory::getGeoObjectCount(visibleObj);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlPlaceMarkFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::getFactoryType();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::getFactoryType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::createRenderable(geoObj, scenemanager);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::createRenderable(geoObj, scenemanager);
				EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::destoryRenderable(visitObj);
				else
					ptrNativeObject->destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->appendGeoObject(visibleObj, ref_geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::appendGeoObject(visibleObj, ref_geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeGeoObject(visibleObj, geoObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::removeGeoObject(visibleObj, geoObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::removeAllGeoObjects(visibleObj);
				else
					ptrNativeObject->removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::removeAllGeoObjects(visibleObj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::getGeoObject(visibleObj, index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->getGeoObject(visibleObj, index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index )
			{
				const EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::getGeoObject(visibleObj, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::getGeoObjectCount(visibleObj);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getGeoObjectCount(visibleObj);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
			{
				CKmlPlaceMarkFactoryProxy* ptr = dynamic_cast<CKmlPlaceMarkFactoryProxy*>((EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CKmlPlaceMarkFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visibleObj )
			{
				const EarthView::World::Geometry3D::CKmlPlaceMarkFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlPlaceMarkFactory*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlPlaceMarkFactory::getGeoObjectCount(visibleObj);
				return objXXXX;
			}
		}
	}
}
