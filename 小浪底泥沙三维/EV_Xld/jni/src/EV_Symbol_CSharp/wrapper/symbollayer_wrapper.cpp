/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbollayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback)(_in ev_bool lock);
				class CSymbolLayerProxy : public EarthView::World::Spatial::Display::CSymbolLayer
				{
				private:
					EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback;
				public:
					CSymbolLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbolLayer(pList)
					{
						m_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool(EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool(EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool(EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool(EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback = pCallback;
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSymbolLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CSymbolLayer::setVisible(visible);
					}
					virtual ev_bool isColorLock() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSymbolLayer::isColorLock();
					}
					virtual void setColorLock(_in ev_bool lock)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback(lock);
						}
						else
							return this->CSymbolLayer::setColorLock(lock);
					}
				};
				REGISTER_FACTORY_CLASS(CSymbolLayerProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_getSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					ptrNativeObject->setSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					if (dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CSymbolLayerProxy* ptr = dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					if (dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CSymbolLayerProxy* ptr = dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					if (dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::isColorLock();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isColorLock();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_Callback* pCallback )
				{
					CSymbolLayerProxy* ptr = dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_isColorLock_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::isColorLock();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool(void *pObjectXXXX, _in ev_bool lock )
				{
					EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					if (dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::setColorLock(lock);
					else
						ptrNativeObject->setColorLock(lock);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_Callback* pCallback )
				{
					CSymbolLayerProxy* ptr = dynamic_cast<CSymbolLayerProxy*>((EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolLayer_setColorLock_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool lock )
				{
					EarthView::World::Spatial::Display::CSymbolLayer* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolLayer::setColorLock(lock);
				}
			}
		}
	}
}
