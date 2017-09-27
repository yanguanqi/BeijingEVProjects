/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace EffectManager
			{
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback)(_in const void* pos);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback)(_in const void* scale);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback)(_in const void* qua);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback)(_in ev_bool isVisiable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback)();
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
				class CEffectObjectProxy : public EarthView::World::Spatial3D::EffectManager::CEffectObject
				{
				private:
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				public:
					CEffectObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectObject(pList)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature(EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox(EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3(EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3(EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3(EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3(EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion(EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion(EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode(EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode(EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData(EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer(EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset(EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString(EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4(EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4(EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					virtual ev_bool load()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::load();
					}
					virtual ev_bool unload()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::unload();
					}
					virtual ev_bool isLoaded()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::isLoaded();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CEffectObject::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::detachFromNode();
					}
					virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CEffectObject::setPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CEffectObject::getPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getFeature();
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getLayer();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getID();
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getBound()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getBound();
					}
					virtual void setPos(_in const EarthView::World::Spatial::Math::CVector3& pos)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback(&pos);
						}
						else
							return this->CEffectObject::setPos(pos);
					}
					virtual EarthView::World::Spatial::Math::CVector3 getPos()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getPos();
					}
					virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3& scale)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback(&scale);
						}
						else
							return this->CEffectObject::setScale(scale);
					}
					virtual EarthView::World::Spatial::Math::CVector3 getScale()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getScale();
					}
					virtual void setQua(_in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback(&qua);
						}
						else
							return this->CEffectObject::setQua(qua);
					}
					virtual EarthView::World::Spatial::Math::CQuaternion getQua()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getQua();
					}
					virtual void setVisiable(_in ev_bool isVisiable)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback(isVisiable);
						}
						else
							return this->CEffectObject::setVisiable(isVisiable);
					}
					virtual ev_bool getVisiable()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getVisiable();
					}
					virtual ev_bool attachObject()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::attachObject();
					}
					virtual ev_bool detachObject()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::detachObject();
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::isAttached();
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback(&matrix);
						}
						else
							return this->CEffectObject::setMatrix(matrix);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getMatrix();
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getNode();
					}
					virtual ev_bool attachToScene()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::attachToScene();
					}
					virtual ev_bool detachFromScene()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::detachFromScene();
					}
					virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback(&userData);
						}
						else
							return this->CEffectObject::setUserData(userData);
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CEffectObject::setSelectable(selectable);
					}
					virtual ev_bool getSelectable()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getSelectable();
					}
					virtual ev_bool update()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::update();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getDataset();
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectObject::getName();
					}
				};
				REGISTER_FACTORY_CLASS(CEffectObjectProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getEffect_CEffect(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->getEffect();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::load();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_load_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::load();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::unload();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unload();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_unload_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::unload();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::isLoaded();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLoaded();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::isLoaded();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachToNode(n);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToNode(n);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachToNode(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachFromNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachFromNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _in const void* pos, _in const void* scale, _in const void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _out void* pos, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->getPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					else
						ptrNativeObject->setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					else
						ptrNativeObject->getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setAlt_void_EVAltitudeMode_ev_real64(void *pObjectXXXX, _in int altMode, _in ev_real64 altValue )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->setAlt((EarthView::World::Spatial::Utility::EVAltitudeMode)altMode, altValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getAlt_void_EVAltitudeMode_ev_real64(void *pObjectXXXX, _out int& altMode, _out ev_real64& altValue )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->getAlt((EarthView::World::Spatial::Utility::EVAltitudeMode&)altMode, altValue);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getFeature();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getFeature_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->getLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getLayer_IGlobeLayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getBound();
						EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getBound();
						EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getBound_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getBound();
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3(void *pObjectXXXX, _in const void* pos )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPos(*(EarthView::World::Spatial::Math::CVector3*)pos);
					else
						ptrNativeObject->setPos(*(EarthView::World::Spatial::Math::CVector3*)pos);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setPos_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* pos )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setPos(*(EarthView::World::Spatial::Math::CVector3*)pos);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPos();
						EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPos();
						EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getPos_CVector3_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getPos();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
					else
						ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setScale_void_CVector3_NoVirtual(void *pObjectXXXX, _in const void* scale )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getScale();
						EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScale();
						EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getScale_CVector3_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion(void *pObjectXXXX, _in const void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setQua(*(EarthView::World::Spatial::Math::CQuaternion*)qua);
					else
						ptrNativeObject->setQua(*(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setQua_void_CQuaternion_NoVirtual(void *pObjectXXXX, _in const void* qua )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setQua(*(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getQua();
						EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getQua();
						EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getQua_CQuaternion_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getQua();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool(void *pObjectXXXX, _in ev_bool isVisiable )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setVisiable(isVisiable);
					else
						ptrNativeObject->setVisiable(isVisiable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setVisiable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isVisiable )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setVisiable(isVisiable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getVisiable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getVisiable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getVisiable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getVisiable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachObject();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_attachObject_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::attachObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachObject();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->detachObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_detachObject_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::detachObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::isAttached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAttached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::isAttached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					else
						ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* matrix )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					if (dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getMatrix();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObject_getMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObject* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectObject::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_attachToScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_detachFromScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setUserData_void_CFeatureUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_update_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString_Callback* pCallback )
				{
					CEffectObjectProxy* ptr = dynamic_cast<CEffectObjectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectObject_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_push_back_void_CEffectObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffectObject*& t )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectObject*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_front_CEffectObject(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectObject*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_back_CEffectObject(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_insert_void_ev_uint32_CEffectObject(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::EffectManager::CEffectObject*& t )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectObject*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_OperatorIndex_CEffectObject_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector& objYYYY = *(EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectObject*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_at_CEffectObject_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffectObject* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectObjectVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectObjectVector* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectObjectVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
