/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/imageoverlayerextension.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback)();
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
				class CImageOverlayerExtensionProxy : public EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension
				{
				private:
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				public:
					CImageOverlayerExtensionProxy(EarthView::World::Core::CNameValuePairList *pList) : CImageOverlayerExtension(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					virtual void setSelectable(_in ev_bool selectable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback(selectable);
						}
						else
							return this->CImageOverlayerExtension::setSelectable(selectable);
					}
					virtual ev_bool isLoaded()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::isLoaded();
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::isAttached();
					}
					virtual ev_bool load()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::load();
					}
					virtual ev_bool unload()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::unload();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::detachFromNode();
					}
					virtual ev_bool attachToScene()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::attachToScene();
					}
					virtual ev_bool detachFromScene()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::detachFromScene();
					}
					virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback(&userData);
						}
						else
							return this->CImageOverlayerExtension::setUserData(userData);
					}
					virtual ev_bool update()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::update();
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getNode();
					}
					virtual ev_bool getSelectable()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getSelectable();
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getDataset();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getID();
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getName();
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CImageOverlayerExtension::setMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtension::getMatrix();
					}
					virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CImageOverlayerExtension::setPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CImageOverlayerExtension::getPosition(latitude, longitude, altitude, scale, qua);
					}
				};
				REGISTER_FACTORY_CLASS(CImageOverlayerExtensionProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::setSelectable(selectable);
					else
						ptrNativeObject->setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::setSelectable(selectable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::isLoaded();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLoaded();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::isLoaded();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::isAttached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAttached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::isAttached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::load();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_load_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::load();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::unload();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unload();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_unload_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::unload();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::attachToNode(n);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToNode(n);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::attachToNode(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::detachFromNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::detachFromNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::attachToScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::attachToScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::detachFromScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->detachFromScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::detachFromScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
					else
						ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getUserData_CFeatureUserData(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					const EarthView::World::Spatial3D::CFeatureUserData& objXXXX = ptrNativeObject->getUserData();
					const EarthView::World::Spatial3D::CFeatureUserData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CImageOverlayer*  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getImageOverlayer_CImageOverlayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					EarthView::World::Geometry3D::CImageOverlayer* objXXXX = ptrNativeObject->getImageOverlayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::update();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_update_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension::update();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getLayer_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CImageOverlayerExtensionProxy* ptr = dynamic_cast<CImageOverlayerExtensionProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtension_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				typedef ev_uint16  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				class CImageOverlayerExtensionFactoryProxy : public EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
					EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
				public:
					CImageOverlayerExtensionFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CImageOverlayerExtensionFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
					}
					virtual ev_uint16 getFactoryType()
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							ev_uint16 returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback();
							return returnValue;
						}
						else
							return this->CImageOverlayerExtensionFactory::getFactoryType();
					}
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
							return returnValue;
						}
						else
							return this->CImageOverlayerExtensionFactory::createRenderable(geoObj, scenemanager);
					}
					virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
						}
						else
							return this->CImageOverlayerExtensionFactory::destoryRenderable(visitObj);
					}
					virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
							return returnValue;
						}
						else
							return this->CImageOverlayerExtensionFactory::appendGeoObject(visibleObj, ref_geoObject);
					}
					virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
							return returnValue;
						}
						else
							return this->CImageOverlayerExtensionFactory::removeGeoObject(visibleObj, geoObject);
					}
					virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
						}
						else
							return this->CImageOverlayerExtensionFactory::removeAllGeoObjects(visibleObj);
					}
					virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
							return returnValue;
						}
						else
							return this->CImageOverlayerExtensionFactory::getGeoObject(visibleObj, index);
					}
					virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
							return returnValue;
						}
						else
							return this->CImageOverlayerExtensionFactory::getGeoObjectCount(visibleObj);
					}
				};
				REGISTER_FACTORY_CLASS(CImageOverlayerExtensionFactoryProxy);
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*)ptrNativeObject) != NULL)
					{
						ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory::getFactoryType();
						return objXXXX;
					}
					else
					{
						ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory::getFactoryType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory::createRenderable(geoObj, scenemanager);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX;
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX;
					if (dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory::destoryRenderable(visitObj);
					else
						ptrNativeObject->destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
				{
					EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory::destoryRenderable(visitObj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
				{
					CImageOverlayerExtensionFactoryProxy* ptr = dynamic_cast<CImageOverlayerExtensionFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CImageOverlayerExtensionFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
					}
				}
			}
		}
	}
}
