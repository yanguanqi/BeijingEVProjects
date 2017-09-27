/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/geometry3dex.h"
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
		namespace Geometry3D
		{
		}
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CGeometry3DExProxy : public EarthView::World::Geometry3D::CGeometry3DEx
			{
			private:
				EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CGeometry3DExProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometry3DEx(pList)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode(EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode(EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool(EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset(EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32(EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString(EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4(EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getNode();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CGeometry3DEx::setSelectable(selectable);
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::update();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::isLoaded();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::isAttached();
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CGeometry3DEx::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::detachFromScene();
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CGeometry3DEx::setUserData(userData);
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CGeometry3DEx::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DEx::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CGeometry3DEx::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CGeometry3DEx::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CGeometry3DExProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::getNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::getNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_startEdit_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->startEdit();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_endEdit_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->endEdit();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_refreshPosition_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _in const void* pos, _in const void* scale, _in const void* qua )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->refreshPosition(*(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->setVisible(b);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getMaxnum_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMaxnum();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getMinnum_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMinnum();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getVectorMovableObj_CMovableObject(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getVectorMovableObj();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_updateLocation_void_CGeoObjectExtension(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->updateLocation(geoObj);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_refreshPosition_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->refreshPosition();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_refreshMaterialRef_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->refreshMaterialRef();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DEx::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CGeometry3DEx_getUserData_CFeatureUserData(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CGeometry3DEx* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX;
				const EarthView::World::Spatial3D::CFeatureUserData& objXXXX = ptrNativeObject->getUserData();
				const EarthView::World::Spatial3D::CFeatureUserData *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CGeometry3DExProxy* ptr = dynamic_cast<CGeometry3DExProxy*>((EarthView::World::Geometry3D::CGeometry3DEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			class CGeometry3DExFactoryProxy : public EarthView::World::Geometry3D::CGeometry3DExFactory
			{
			private:
				EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
			public:
				CGeometry3DExFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeometry3DExFactory(pList)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16(EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
				}
				virtual ev_uint16 getFactoryType()
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CGeometry3DExFactory::getFactoryType();
				}
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
						return returnValue;
					}
					else
						return this->CGeometry3DExFactory::createRenderable(geoObj, scenemanager);
				}
				virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
					}
					else
						return this->CGeometry3DExFactory::destoryRenderable(visitObj);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
						return returnValue;
					}
					else
						return this->CGeometry3DExFactory::appendGeoObject(visibleObj, ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
						return returnValue;
					}
					else
						return this->CGeometry3DExFactory::removeGeoObject(visibleObj, geoObject);
				}
				virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
					}
					else
						return this->CGeometry3DExFactory::removeAllGeoObjects(visibleObj);
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
						return returnValue;
					}
					else
						return this->CGeometry3DExFactory::getGeoObject(visibleObj, index);
				}
				virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
				{
					if(m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
						return returnValue;
					}
					else
						return this->CGeometry3DExFactory::getGeoObjectCount(visibleObj);
				}
			};
			REGISTER_FACTORY_CLASS(CGeometry3DExFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DExFactory::getFactoryType();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CGeometry3DExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DExFactory::getFactoryType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CGeometry3DExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DExFactory::createRenderable(geoObj, scenemanager);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CGeometry3DExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DExFactory::createRenderable(geoObj, scenemanager);
				EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CGeometry3DExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX;
				if (dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DExFactory::destoryRenderable(visitObj);
				else
					ptrNativeObject->destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CGeometry3DExFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CGeometry3DExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CGeometry3DExFactory::destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
			{
				CGeometry3DExFactoryProxy* ptr = dynamic_cast<CGeometry3DExFactoryProxy*>((EarthView::World::Geometry3D::CGeometry3DExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CGeometry3DExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
				}
			}
		}
	}
}
