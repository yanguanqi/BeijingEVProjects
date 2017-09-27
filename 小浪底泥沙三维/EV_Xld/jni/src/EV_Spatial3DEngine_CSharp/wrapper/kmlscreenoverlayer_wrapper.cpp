/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlscreenoverlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback)();
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
				class CScreenOverlayerProxy : public EarthView::World::Spatial3D::Atlas::CScreenOverlayer
				{
				private:
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				public:
					CScreenOverlayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenOverlayer(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					virtual ev_bool isLoaded()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::isLoaded();
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::isAttached();
					}
					virtual ev_bool load()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::load();
					}
					virtual ev_bool unload()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::unload();
					}
					virtual ev_bool attachToScene()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::attachToScene();
					}
					virtual ev_bool detachFromScene()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::detachFromScene();
					}
					virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback(&userData);
						}
						else
							return this->CScreenOverlayer::setUserData(userData);
					}
					virtual ev_bool update()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::update();
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getNode();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CScreenOverlayer::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::detachFromNode();
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CScreenOverlayer::setSelectable(selectable);
					}
					virtual ev_bool getSelectable()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getSelectable();
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getDataset();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getID();
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getName();
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CScreenOverlayer::setMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayer::getMatrix();
					}
					virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CScreenOverlayer::setPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CScreenOverlayer::getPosition(latitude, longitude, altitude, scale, qua);
					}
				};
				REGISTER_FACTORY_CLASS(CScreenOverlayerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::isLoaded();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLoaded();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::isLoaded();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::isAttached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAttached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::isAttached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::load();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_load_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::load();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::unload();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unload();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_unload_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::unload();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::attachToScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::attachToScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::detachFromScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->detachFromScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::detachFromScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
					else
						ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getUserData_CFeatureUserData(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					const EarthView::World::Spatial3D::CFeatureUserData& objXXXX = ptrNativeObject->getUserData();
					const EarthView::World::Spatial3D::CFeatureUserData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::update();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayer_update_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayer* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayer::update();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getLayer_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CScreenOverlayerProxy* ptr = dynamic_cast<CScreenOverlayerProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayer_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				typedef ev_uint16  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				class CScreenOverlayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
				public:
					CScreenOverlayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenOverlayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
					}
					virtual ev_uint16 getFactoryType()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback();
							return returnValue;
						}
						else
							return this->CScreenOverlayerFactory::getFactoryType();
					}
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
							return returnValue;
						}
						else
							return this->CScreenOverlayerFactory::createRenderable(geoObj, scenemanager);
					}
					virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
						}
						else
							return this->CScreenOverlayerFactory::destoryRenderable(visitObj);
					}
					virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
							return returnValue;
						}
						else
							return this->CScreenOverlayerFactory::appendGeoObject(visibleObj, ref_geoObject);
					}
					virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
							return returnValue;
						}
						else
							return this->CScreenOverlayerFactory::removeGeoObject(visibleObj, geoObject);
					}
					virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
						}
						else
							return this->CScreenOverlayerFactory::removeAllGeoObjects(visibleObj);
					}
					virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
							return returnValue;
						}
						else
							return this->CScreenOverlayerFactory::getGeoObject(visibleObj, index);
					}
					virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
							return returnValue;
						}
						else
							return this->CScreenOverlayerFactory::getGeoObjectCount(visibleObj);
					}
				};
				REGISTER_FACTORY_CLASS(CScreenOverlayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*)ptrNativeObject) != NULL)
					{
						ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory::getFactoryType();
						return objXXXX;
					}
					else
					{
						ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory::getFactoryType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory::createRenderable(geoObj, scenemanager);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX;
					if (dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory::destoryRenderable(visitObj);
					else
						ptrNativeObject->destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory::destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
				{
					CScreenOverlayerFactoryProxy* ptr = dynamic_cast<CScreenOverlayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CScreenOverlayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CScreenOverlayerFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
					}
				}
			}
		}
	}
}
