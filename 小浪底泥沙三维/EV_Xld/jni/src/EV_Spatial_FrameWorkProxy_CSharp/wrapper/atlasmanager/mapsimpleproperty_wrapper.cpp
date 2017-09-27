/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/mapsimpleproperty.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CMapSimplePropertyProxy : public EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty
				{
				private:
					EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback;
				public:
					CMapSimplePropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapSimpleProperty(pList)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString(EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList(EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString(EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface(EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CMapSimpleProperty::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CMapSimpleProperty::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CMapSimpleProperty::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CMapSimpleProperty::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CMapSimpleProperty::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CMapSimplePropertyProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_map )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX;
					ptrNativeObject->setMap(ref_map);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CMapSimplePropertyProxy* ptr = dynamic_cast<CMapSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CMapSimplePropertyProxy* ptr = dynamic_cast<CMapSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CMapSimplePropertyProxy* ptr = dynamic_cast<CMapSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString_Callback* pCallback )
				{
					CMapSimplePropertyProxy* ptr = dynamic_cast<CMapSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CMapSimplePropertyProxy* ptr = dynamic_cast<CMapSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CMapSimpleProperty_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
