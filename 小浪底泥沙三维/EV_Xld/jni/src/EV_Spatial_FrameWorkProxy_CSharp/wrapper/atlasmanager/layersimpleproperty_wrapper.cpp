/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/layersimpleproperty.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CLayerSimplePropertyProxy : public EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty
				{
				private:
					EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback;
				public:
					CLayerSimplePropertyProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayerSimpleProperty(pList)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString(EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList(EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString(EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface(EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CLayerSimpleProperty::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CLayerSimpleProperty::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CLayerSimpleProperty::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CLayerSimpleProperty::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CLayerSimpleProperty::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CLayerSimplePropertyProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_updateLayerVisible_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX;
					ptrNativeObject->updateLayerVisible();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CLayerSimplePropertyProxy* ptr = dynamic_cast<CLayerSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CLayerSimplePropertyProxy* ptr = dynamic_cast<CLayerSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CLayerSimplePropertyProxy* ptr = dynamic_cast<CLayerSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString_Callback* pCallback )
				{
					CLayerSimplePropertyProxy* ptr = dynamic_cast<CLayerSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CLayerSimplePropertyProxy* ptr = dynamic_cast<CLayerSimplePropertyProxy*>((EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_AtlasManager_CLayerSimpleProperty_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
