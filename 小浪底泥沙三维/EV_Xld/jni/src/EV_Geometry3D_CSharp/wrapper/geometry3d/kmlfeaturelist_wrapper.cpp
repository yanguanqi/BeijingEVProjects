/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/kmlfeaturelist.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
		}
	}
}
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
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geo);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CPlaceMarkListProxy : public EarthView::World::Geometry3D::CPlaceMarkList
			{
			private:
				EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CPlaceMarkListProxy(EarthView::World::Core::CNameValuePairList *pList) : CPlaceMarkList(pList)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject(EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode(EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode(EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool(EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset(EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32(EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString(EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4(EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CPlaceMarkList::setUserData(userData);
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CPlaceMarkList::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::detachFromScene();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::update();
				}
				virtual ev_bool update(_in EarthView::World::Spatial::CGeoObject* ref_geo)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback(ref_geo);
						return returnValue;
					}
					else
						return this->CPlaceMarkList::update(ref_geo);
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::isAttached();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::isLoaded();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CPlaceMarkList::setSelectable(selectable);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CPlaceMarkList::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CPlaceMarkList::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CPlaceMarkList::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CPlaceMarkList::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CPlaceMarkListProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setSelfAdaptGeoRange_void_CVector3_Real_Real(void *pObjectXXXX, _in void* center, _in Real r, _in Real targetSamplesPerDegrees )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->setSelfAdaptGeoRange(*(EarthView::World::Spatial::Math::CVector3*)center, r, targetSamplesPerDegrees);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_getVisibleObjects_CVisibleobjectVector_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleobjectVector objXXXX = ptrNativeObject->getVisibleObjects(ref_geo);
				EarthView::World::Geometry3D::CVisibleobjectVector *pXXXX = new EarthView::World::Geometry3D::CVisibleobjectVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::update(ref_geo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update(ref_geo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::update(ref_geo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->update(camera);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_update_void_CCamera_CDegree(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _inout void* rangeView )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->update(camera, *(EarthView::World::Spatial::Math::CDegree*)rangeView);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setVisible_void_CGeoObject_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->setVisible(ref_geo, visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setLabelVisibleDistance_void_Real(void *pObjectXXXX, _in Real val )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->setLabelVisibleDistance(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setReduceDistance_void_Real(void *pObjectXXXX, _in Real val )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->setReduceDistance(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				if (dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPlaceMarkList_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CPlaceMarkList* ptrNativeObject = (EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CPlaceMarkList::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CPlaceMarkListProxy* ptr = dynamic_cast<CPlaceMarkListProxy*>((EarthView::World::Geometry3D::CPlaceMarkList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPlaceMarkList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geo);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CPolylineListProxy : public EarthView::World::Geometry3D::CPolylineList
			{
			private:
				EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback* m_EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback;
				EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CPolylineListProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolylineList(pList)
				{
					m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject(EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getNode_CNode(EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool(EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool(EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_load_ev_bool(EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool(EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode(EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool(EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool(EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool(EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_update_ev_bool(EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset(EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32(EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getName_EVString(EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4(EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CPolylineList::setUserData(userData);
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CPolylineList::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::detachFromScene();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::update();
				}
				virtual ev_bool update(_in EarthView::World::Spatial::CGeoObject* ref_geo)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback(ref_geo);
						return returnValue;
					}
					else
						return this->CPolylineList::update(ref_geo);
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::isAttached();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::isLoaded();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CPolylineList::setSelectable(selectable);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CPolylineList::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CPolylineList::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CPolylineList::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CPolylineList::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CPolylineListProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_update_void_CCamera_CDegree(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _inout void* rangeView )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ptrNativeObject->update(camera, *(EarthView::World::Spatial::Math::CDegree*)rangeView);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_setSelfAdaptGeoRange_void_CVector3_Real_Real(void *pObjectXXXX, _in void* center, _in Real r, _in Real targetSamplesPerDegrees )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ptrNativeObject->setSelfAdaptGeoRange(*(EarthView::World::Spatial::Math::CVector3*)center, r, targetSamplesPerDegrees);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CPolylineList_getVisibleObjects_CVisibleobjectVector_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleobjectVector objXXXX = ptrNativeObject->getVisibleObjects(ref_geo);
				EarthView::World::Geometry3D::CVisibleobjectVector *pXXXX = new EarthView::World::Geometry3D::CVisibleobjectVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_load_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CPolylineList_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_update_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::update(ref_geo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update(ref_geo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_update_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::update(ref_geo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_setVisible_void_CGeoObject_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ptrNativeObject->setVisible(ref_geo, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolylineList_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				if (dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolylineList_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CPolylineList* ptrNativeObject = (EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CPolylineList::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getNode_CNode_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getName_EVString_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CPolylineListProxy* ptr = dynamic_cast<CPolylineListProxy*>((EarthView::World::Geometry3D::CPolylineList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolylineList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback)(_in EarthView::World::Spatial::CGeoObject* ref_geo);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CPolygonListProxy : public EarthView::World::Geometry3D::CPolygonList
			{
			private:
				EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback* m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback;
				EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback* m_EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback;
				EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CPolygonListProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolygonList(pList)
				{
					m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject(EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getNode_CNode(EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool(EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool(EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_load_ev_bool(EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool(EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode(EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool(EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool(EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool(EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_update_ev_bool(EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset(EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32(EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getName_EVString(EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4(EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CPolygonList::setUserData(userData);
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CPolygonList::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::detachFromScene();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::update();
				}
				virtual ev_bool update(_in EarthView::World::Spatial::CGeoObject* ref_geo)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback(ref_geo);
						return returnValue;
					}
					else
						return this->CPolygonList::update(ref_geo);
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::isAttached();
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::isLoaded();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CPolygonList::setSelectable(selectable);
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getNode();
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CPolygonList::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CPolygonList::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CPolygonList::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CPolygonList::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CPolygonListProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_setSelfAdaptGeoRange_void_CVector3_Real_Real(void *pObjectXXXX, _in void* center, _in Real r, _in Real targetSamplesPerDegrees )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ptrNativeObject->setSelfAdaptGeoRange(*(EarthView::World::Spatial::Math::CVector3*)center, r, targetSamplesPerDegrees);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CPolygonList_getVisibleObjects_CVisibleobjectVector_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleobjectVector objXXXX = ptrNativeObject->getVisibleObjects(ref_geo);
				EarthView::World::Geometry3D::CVisibleobjectVector *pXXXX = new EarthView::World::Geometry3D::CVisibleobjectVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_load_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CPolygonList_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_update_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::update(ref_geo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update(ref_geo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_update_ev_bool_CGeoObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::update(ref_geo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_update_void_CCamera_CDegree(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera, _inout void* rangeView )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ptrNativeObject->update(camera, *(EarthView::World::Spatial::Math::CDegree*)rangeView);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_setVisible_void_CGeoObject_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ptrNativeObject->setVisible(ref_geo, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CPolygonList_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				if (dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CPolygonList_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CPolygonList* ptrNativeObject = (EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CPolygonList::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getNode_CNode_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getName_EVString_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CPolygonListProxy* ptr = dynamic_cast<CPolygonListProxy*>((EarthView::World::Geometry3D::CPolygonList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CPolygonList_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			class CKmlFeatureListProxy : public EarthView::World::Geometry3D::CKmlFeatureList
			{
			private:
				EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback;
			public:
				CKmlFeatureListProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFeatureList(pList)
				{
					m_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback = pCallback;
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CKmlFeatureList::setSelectable(selectable);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlFeatureListProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CPlaceMarkList*  _stdcall Get_EarthView_World_Geometry3D_CKmlFeatureList_mpPlaceMarkList( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				EarthView::World::Geometry3D::CPlaceMarkList* objXXXX = ptrNativeObject->mpPlaceMarkList;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CKmlFeatureList_mpPlaceMarkList( void *pObjectXXXX, EarthView::World::Geometry3D::CPlaceMarkList*  value )
			{
				((EarthView::World::Geometry3D::CKmlFeatureList*)pObjectXXXX)->mpPlaceMarkList = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CPolylineList*  _stdcall Get_EarthView_World_Geometry3D_CKmlFeatureList_mpPolylineList( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				EarthView::World::Geometry3D::CPolylineList* objXXXX = ptrNativeObject->mpPolylineList;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CKmlFeatureList_mpPolylineList( void *pObjectXXXX, EarthView::World::Geometry3D::CPolylineList*  value )
			{
				((EarthView::World::Geometry3D::CKmlFeatureList*)pObjectXXXX)->mpPolylineList = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CPolygonList*  _stdcall Get_EarthView_World_Geometry3D_CKmlFeatureList_mpPolygonList( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				EarthView::World::Geometry3D::CPolygonList* objXXXX = ptrNativeObject->mpPolygonList;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CKmlFeatureList_mpPolygonList( void *pObjectXXXX, EarthView::World::Geometry3D::CPolygonList*  value )
			{
				((EarthView::World::Geometry3D::CKmlFeatureList*)pObjectXXXX)->mpPolygonList = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CKmlFeatureList_WorkState( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				EarthView::World::Spatial::Kml::CKmlWorkQueueState &objXXXX = ptrNativeObject->WorkState;
				EarthView::World::Spatial::Kml::CKmlWorkQueueState *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CKmlFeatureList_WorkState( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CKmlFeatureList*)pObjectXXXX)->WorkState = *(EarthView::World::Spatial::Kml::CKmlWorkQueueState*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setVisible_void_CGeoObject_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->setVisible(ref_geo, visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->setLayer(layer);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_getLayer_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_rebuild_void_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->rebuild(ref_geo);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				if (dynamic_cast<CKmlFeatureListProxy*>((EarthView::World::Geometry3D::CKmlFeatureList*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlFeatureList::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CKmlFeatureListProxy* ptr = dynamic_cast<CKmlFeatureListProxy*>((EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlFeatureList::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_getVisibleObjects_CVisibleobjectVector_CGeoObject(void *pObjectXXXX, _in EarthView::World::Spatial::CGeoObject* ref_geo )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleobjectVector objXXXX = ptrNativeObject->getVisibleObjects(ref_geo);
				EarthView::World::Geometry3D::CVisibleobjectVector *pXXXX = new EarthView::World::Geometry3D::CVisibleobjectVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setSelfAdaptGeoRange_void_CVector3_Real_Real(void *pObjectXXXX, _in void* center, _in Real r, _in Real targetSamplesPerDegrees )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->setSelfAdaptGeoRange(*(EarthView::World::Spatial::Math::CVector3*)center, r, targetSamplesPerDegrees);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_setIsRegionFeatureList_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ptrNativeObject->setIsRegionFeatureList(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlFeatureList_IsRegionFeatureList_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlFeatureList* ptrNativeObject = (EarthView::World::Geometry3D::CKmlFeatureList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->IsRegionFeatureList();
				return objXXXX;
			}
		}
	}
}
