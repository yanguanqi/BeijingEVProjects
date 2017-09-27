/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/layoutcontrol.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback)(_in ev_int32 value);
				class CLayoutControlAgentProxy : public EarthView::World::Layout::Controls::CLayoutControlAgent
				{
				private:
					EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback* m_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback;
					EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback* m_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback;
					EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback* m_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback;
				public:
					CLayoutControlAgentProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayoutControlAgent(pList)
					{
						m_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice(EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void(EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32(EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback = pCallback;
					}
					virtual EarthView::World::Display::IPaintDevice* onGetLayoutCanvas() const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback();
							return returnValue;
						}
						else
							return this->CLayoutControlAgent::onGetLayoutCanvas();
					}
					virtual void onRepaint()
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback();
						}
						else
							return this->CLayoutControlAgent::onRepaint();
					}
					virtual void onSetCursor(_in ev_int32 value)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback(value);
						}
						else
							return this->CLayoutControlAgent::onSetCursor(value);
					}
				};
				REGISTER_FACTORY_CLASS(CLayoutControlAgentProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControlAgent* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlAgentProxy*>((EarthView::World::Layout::Controls::CLayoutControlAgent*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControlAgent::onGetLayoutCanvas();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->onGetLayoutCanvas();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_Callback* pCallback )
				{
					CLayoutControlAgentProxy* ptr = dynamic_cast<CLayoutControlAgentProxy*>((EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onGetLayoutCanvas_IPaintDevice_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControlAgent* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControlAgent::onGetLayoutCanvas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlAgentProxy*>((EarthView::World::Layout::Controls::CLayoutControlAgent*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControlAgent::onRepaint();
					else
						ptrNativeObject->onRepaint();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_Callback* pCallback )
				{
					CLayoutControlAgentProxy* ptr = dynamic_cast<CLayoutControlAgentProxy*>((EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onRepaint_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControlAgent::onRepaint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlAgentProxy*>((EarthView::World::Layout::Controls::CLayoutControlAgent*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControlAgent::onSetCursor(value);
					else
						ptrNativeObject->onSetCursor(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_Callback* pCallback )
				{
					CLayoutControlAgentProxy* ptr = dynamic_cast<CLayoutControlAgentProxy*>((EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControlAgent_onSetCursor_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Layout::Controls::CLayoutControlAgent* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControlAgent*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControlAgent::onSetCursor(value);
				}
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* ref_element);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* element);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback)(_in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 srcIndex, _in ev_int32 destIndex);
				typedef int  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback)(_in EarthView::World::Spatial::IViewArgs* args);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* ref_externalListener);
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::IViewListener*  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback)(_in EarthView::World::Spatial::IViewListener* externalListener);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback)();
				class CLayoutControlProxy : public EarthView::World::Layout::Controls::CLayoutControl
				{
				private:
					EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback;
					EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback* m_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback;
				public:
					CLayoutControlProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayoutControl(pList)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback = NULL;
						m_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLayoutControlProxy)
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement(EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement(EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void(EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement(EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32(EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType(EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString(EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString(EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs(EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener(EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32(EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32(EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener(EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32(EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener(EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void(EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVSpatialControlType getType() const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVSpatialControlType returnValue = (EarthView::World::Spatial::Atlas::EVSpatialControlType)m_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback();
							return returnValue;
						}
						else
							return this->CLayoutControl::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayoutControl::getName();
					}
					virtual EVString getTypeString() const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayoutControl::getTypeString();
					}
					virtual void notifyViewChanged(_in EarthView::World::Spatial::IViewArgs* args)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback(args);
						}
						else
							return this->CLayoutControl::notifyViewChanged(args);
					}
					virtual void addElement(_in EarthView::World::Spatial::Carto::IElement* ref_element)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback(ref_element);
						}
						else
							return this->CLayoutControl::addElement(ref_element);
					}
					virtual void removeElement(_in EarthView::World::Spatial::Carto::IElement* element)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback(element);
						}
						else
							return this->CLayoutControl::removeElement(element);
					}
					virtual void removeSelectedElement()
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback();
						}
						else
							return this->CLayoutControl::removeSelectedElement();
					}
					virtual ev_bool replaceElement(_in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback(pOldElement, pNewElement);
							return returnValue;
						}
						else
							return this->CLayoutControl::replaceElement(pOldElement, pNewElement);
					}
					virtual ev_bool exchangeElement(_in ev_int32 srcIndex, _in ev_int32 destIndex)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback(srcIndex, destIndex);
							return returnValue;
						}
						else
							return this->CLayoutControl::exchangeElement(srcIndex, destIndex);
					}
					virtual ev_bool addViewListener(_in EarthView::World::Spatial::IViewListener* ref_externalListener)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback(ref_externalListener);
							return returnValue;
						}
						else
							return this->CLayoutControl::addViewListener(ref_externalListener);
					}
					virtual ev_uint32 getViewListenerCount() const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CLayoutControl::getViewListenerCount();
					}
					virtual EarthView::World::Spatial::IViewListener* getViewListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::IViewListener* returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CLayoutControl::getViewListener(index);
					}
					virtual ev_bool existViewListener(_in EarthView::World::Spatial::IViewListener* externalListener) const
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CLayoutControl::existViewListener(externalListener);
					}
					virtual ev_bool removeViewListener(_in ev_uint32 index)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CLayoutControl::removeViewListener(index);
					}
					virtual ev_bool removeViewListener(_in EarthView::World::Spatial::IViewListener* externalListener)
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback(externalListener);
							return returnValue;
						}
						else
							return this->CLayoutControl::removeViewListener(externalListener);
					}
					virtual void clearViewListeners()
					{
						if(m_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback();
						}
						else
							return this->CLayoutControl::clearViewListeners();
					}
				};
				REGISTER_FACTORY_CLASS(CLayoutControlProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getType_EVSpatialControlType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVSpatialControlType objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::getTypeString();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTypeString();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getTypeString_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::getTypeString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPage*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getPage_IPage(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPage* objXXXX = ptrNativeObject->getPage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_pMap )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setMap(ref_pMap);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getPageLayout_IPageLayout(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->getPageLayout();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getBackground_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setBackground_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setBackground(color);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getPageSize_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getPageSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setPageSize_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& width, _inout ev_real64& height )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setPageSize(width, height);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getPageUnits_EVPageUnits(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVPageUnits objXXXX = ptrNativeObject->getPageUnits();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setPageUnits_void_EVPageUnits(void *pObjectXXXX, _in int pageUnits )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setPageUnits((EarthView::World::Spatial::Carto::EVPageUnits)pageUnits);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapControl*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getMapControl_CMapControl(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* objXXXX = ptrNativeObject->getMapControl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setMapControl_void_CMapControl(void *pObjectXXXX, _in EarthView::World::Spatial2D::Controls::CMapControl* ref_pMapControl )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setMapControl(ref_pMapControl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_fullExtent_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->fullExtent();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_updateLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->updateLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setCurrentTool_void_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* ref_pTool )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setCurrentTool(ref_pTool);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getCurrentTool_ITool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->getCurrentTool();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getPreviousTool_ITool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->getPreviousTool();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setScaleAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 pX, _in ev_real64 pY, _in ev_real64 scale )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setScaleAt(pX, pY, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getCurrentScale_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCurrentScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setCurrentScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 dValue )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setCurrentScale(dValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* cx, _in ev_real64* cy )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->getCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 cx, _in ev_real64 cy )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setCenter(cx, cy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::notifyViewChanged(args);
					else
						ptrNativeObject->notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_notifyViewChanged_void_IViewArgs_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::IViewArgs* args )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::notifyViewChanged(args);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_previousView_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->previousView();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_nextView_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->nextView();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_isDrawing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDrawing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_freezeDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->freezeDraw();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getPageDisplay_ISpatialDisplay(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->getPageDisplay();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IMapFrame*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getMapFrame_IMapFrame(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IMapFrame* objXXXX = ptrNativeObject->getMapFrame();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onDoubleClick_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onDoubleClick(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onKeyDown_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onKeyDown(keyCode, shift);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onKeyUp_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onKeyUp(keyCode, shift);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMouseDown_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onMouseDown(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMouseMove_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onMouseMove(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMouseUp_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onMouseUp(button, shift, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMouseWheel_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onMouseWheel(delta, x, y, flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onResize_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->onResize(width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setProxy_void_CLayoutControlAgent(void *pObjectXXXX, _in EarthView::World::Layout::Controls::CLayoutControlAgent* ref_pxy )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setProxy(ref_pxy);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getLayoutCanvas_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getLayoutCanvas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_toMapPixelPoint_void_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& x, _out ev_real64& y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->toMapPixelPoint(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_repaint_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->repaint();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_setCursor_void_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->setCursor(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* ref_element )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::addElement(ref_element);
					else
						ptrNativeObject->addElement(ref_element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_addElement_void_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* ref_element )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::addElement(ref_element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* element )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::removeElement(element);
					else
						ptrNativeObject->removeElement(element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeElement_void_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* element )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::removeElement(element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::removeSelectedElement();
					else
						ptrNativeObject->removeSelectedElement();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_removeSelectedElement_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::removeSelectedElement();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::replaceElement(pOldElement, pNewElement);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->replaceElement(pOldElement, pNewElement);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_replaceElement_ev_bool_IElement_IElement_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IElement* pOldElement, _in EarthView::World::Spatial::Carto::IElement* pNewElement )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::replaceElement(pOldElement, pNewElement);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 srcIndex, _in ev_int32 destIndex )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					if (dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::exchangeElement(srcIndex, destIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->exchangeElement(srcIndex, destIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_exchangeElement_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 srcIndex, _in ev_int32 destIndex )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CLayoutControl::exchangeElement(srcIndex, destIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::CCacheBitmap*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getCacheBitmap_CCacheBitmap(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Display::CCacheBitmap* objXXXX = ptrNativeObject->getCacheBitmap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Layout::Controls::CLayoutOperationManager*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getOperationManager_CLayoutOperationManager(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Layout::Controls::CLayoutOperationManager* objXXXX = ptrNativeObject->getOperationManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CLayoutControl_notifyOtherView_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ptrNativeObject->notifyOtherView();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CWorkCommandManager*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_getViewportManager_CWorkCommandManager(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager* objXXXX = ptrNativeObject->getViewportManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMapPan_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMapPan(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMapPanBegin_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMapPanBegin(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CLayoutControl_onMapPanEnd_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->onMapPanEnd(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::CMetaFile*  _stdcall EarthView_World_Layout_Controls_CLayoutControl_exportViewToMetafile_CMetaFile_IEnvelope_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pDataEnv, _in ev_uint32 dpi )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					EarthView::World::Display::CMetaFile* objXXXX = ptrNativeObject->exportViewToMetafile(pDataEnv, dpi);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Layout_Controls_CLayoutControl_print_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CLayoutControl* ptrNativeObject = (EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->print();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_addViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getViewListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_getViewListener_IViewListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_existViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_removeViewListener_ev_bool_IViewListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void_Callback* pCallback )
				{
					CLayoutControlProxy* ptr = dynamic_cast<CLayoutControlProxy*>((EarthView::World::Layout::Controls::CLayoutControl*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CLayoutControl_clearViewListeners_void(pCallback);
					}
				}
			}
		}
	}
}
