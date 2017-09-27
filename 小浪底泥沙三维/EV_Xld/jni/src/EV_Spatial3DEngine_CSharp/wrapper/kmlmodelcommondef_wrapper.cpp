/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlmodelcommondef.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
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
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace KmlManager
			{
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback)();
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
				class CKmlModelProxy : public EarthView::World::Spatial3D::KmlManager::CKmlModel
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				public:
					CKmlModelProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlModel(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode(EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode(EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData(EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer(EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset(EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32(EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString(EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4(EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4(EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CKmlModel::setSelectable(selectable);
					}
					virtual ev_bool isLoaded()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::isLoaded();
					}
					virtual ev_bool update()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::update();
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::isAttached();
					}
					virtual ev_bool load()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::load();
					}
					virtual ev_bool unload()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::unload();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CKmlModel::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::detachFromNode();
					}
					virtual ev_bool attachToScene()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::attachToScene();
					}
					virtual ev_bool detachFromScene()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::detachFromScene();
					}
					virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback(&userData);
						}
						else
							return this->CKmlModel::setUserData(userData);
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getNode();
					}
					virtual ev_bool getSelectable()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getSelectable();
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getDataset();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getID();
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getName();
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CKmlModel::setMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CKmlModel::getMatrix();
					}
					virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CKmlModel::setPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CKmlModel::getPosition(latitude, longitude, altitude, scale, qua);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlModelProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getIsInit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsInit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::isLoaded();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLoaded();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::isLoaded();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::update();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_update_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::update();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::isAttached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAttached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::isAttached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::load();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_load_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::load();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::unload();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unload();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_unload_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::unload();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToNode(n);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToNode(n);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToNode(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::attachToScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->detachFromScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::detachFromScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					if (dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
					else
						ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModel::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getUserData_CFeatureUserData(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					const EarthView::World::Spatial3D::CFeatureUserData& objXXXX = ptrNativeObject->getUserData();
					const EarthView::World::Spatial3D::CFeatureUserData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_startEdit_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->startEdit();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_endEdit_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->endEdit();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_addListener_void_CMovableObjectListener(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* pListener )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->addListener(pListener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_removeListener_void_CMovableObjectListener(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* pListener )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->removeListener(pListener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_bandEditTool_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->bandEditTool(pSceneMgr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getModelObj_CMovableObject(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getModelObj();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getWorldBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getWorldBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getMaxnum_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMaxnum();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getMinnum_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMinnum();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getCenter_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCenter();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ptrNativeObject->setVisible(b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModel_getVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlModel* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getLayer_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CKmlModelProxy* ptr = dynamic_cast<CKmlModelProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModel*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModel_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				typedef ev_uint16  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				class CKmlModelFactoryProxy : public EarthView::World::Spatial3D::KmlManager::CKmlModelFactory
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
				public:
					CKmlModelFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlModelFactory(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
					}
					virtual ev_uint16 getFactoryType()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback();
							return returnValue;
						}
						else
							return this->CKmlModelFactory::getFactoryType();
					}
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
							return returnValue;
						}
						else
							return this->CKmlModelFactory::createRenderable(geoObj, scenemanager);
					}
					virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
						}
						else
							return this->CKmlModelFactory::destoryRenderable(visitObj);
					}
					virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
							return returnValue;
						}
						else
							return this->CKmlModelFactory::appendGeoObject(visibleObj, ref_geoObject);
					}
					virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
							return returnValue;
						}
						else
							return this->CKmlModelFactory::removeGeoObject(visibleObj, geoObject);
					}
					virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
						}
						else
							return this->CKmlModelFactory::removeAllGeoObjects(visibleObj);
					}
					virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
							return returnValue;
						}
						else
							return this->CKmlModelFactory::getGeoObject(visibleObj, index);
					}
					virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
							return returnValue;
						}
						else
							return this->CKmlModelFactory::getGeoObjectCount(visibleObj);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlModelFactoryProxy);
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*)ptrNativeObject) != NULL)
					{
						ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::getFactoryType();
						return objXXXX;
					}
					else
					{
						ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::getFactoryType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::createRenderable(geoObj, scenemanager);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX;
					if (dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::destoryRenderable(visitObj);
					else
						ptrNativeObject->destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlModelFactory* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlModelFactory::destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
				{
					CKmlModelFactoryProxy* ptr = dynamic_cast<CKmlModelFactoryProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlModelFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlModelFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
					}
				}
			}
		}
	}
}
