/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartlayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				class CChartLayerSelectionProxy : public EarthView::World::Spatial::Atlas::CChartLayerSelection
				{
				private:
					EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback;
				public:
					CChartLayerSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartLayerSelection(pList)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CChartLayerSelectionProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection(EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol(EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* getSelection() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback();
							return returnValue;
						}
						else
							return this->CChartLayerSelection::getSelection();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSelectionSymbol() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CChartLayerSelection::getSelectionSymbol();
					}
					virtual void setSelectionSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CChartLayerSelection::setSelectionSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getPointSelectionSymbol() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CChartLayerSelection::getPointSelectionSymbol();
					}
					virtual void setPointSelectionSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CChartLayerSelection::setPointSelectionSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getLineSelectionSymbol() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CChartLayerSelection::getLineSelectionSymbol();
					}
					virtual void setLineSelectionSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CChartLayerSelection::setLineSelectionSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getAreaSelectionSymbol() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CChartLayerSelection::getAreaSelectionSymbol();
					}
					virtual void setAreaSelectionSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CChartLayerSelection::setAreaSelectionSymbol(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(CChartLayerSelectionProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->getSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelection_IFeatureSelection_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelectionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSelectionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getSelectionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getSelectionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setSelectionSymbol(symbol);
					else
						ptrNativeObject->setSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setSelectionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getPointSelectionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getPointSelectionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getPointSelectionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getPointSelectionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setPointSelectionSymbol(symbol);
					else
						ptrNativeObject->setPointSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setPointSelectionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setPointSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getLineSelectionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getLineSelectionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getLineSelectionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getLineSelectionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setLineSelectionSymbol(symbol);
					else
						ptrNativeObject->setLineSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setLineSelectionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setLineSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getAreaSelectionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getAreaSelectionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_getAreaSelectionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::getAreaSelectionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setAreaSelectionSymbol(symbol);
					else
						ptrNativeObject->setAreaSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_Callback* pCallback )
				{
					CChartLayerSelectionProxy* ptr = dynamic_cast<CChartLayerSelectionProxy*>((EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayerSelection_setAreaSelectionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Atlas::CChartLayerSelection* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayerSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayerSelection::setAreaSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_OperatorAssign_NHChartClassControl_NHChartClassControl(void *pObjXXXX, _in const void* chartClassControl )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl& objXXXX = *((EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Atlas::NHChartClassControl*)chartClassControl;
					EarthView::World::Spatial::Atlas::NHChartClassControl *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_setUseChartClassControl_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ptrNativeObject->setUseChartClassControl(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_getUseChartClassControl_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getUseChartClassControl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_setHasSetColor_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ptrNativeObject->setHasSetColor(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_getHasSetColor_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHasSetColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_setScaleFactor_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ptrNativeObject->setScaleFactor(value);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_getScaleFactor_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getScaleFactor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_setCustomColor_void_CRgbColor(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ptrNativeObject->setCustomColor(*(EarthView::World::Spatial::Display::CRgbColor*)color);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_getCustomColor_CRgbColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CRgbColor& objXXXX = ptrNativeObject->getCustomColor();
					const EarthView::World::Spatial::Display::CRgbColor *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_getColorBlendMode_EVColorBlendOperation(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVColorBlendOperation objXXXX = ptrNativeObject->getColorBlendMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_NHChartClassControl_setColorBlendMode_void_EVColorBlendOperation(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Atlas::NHChartClassControl* ptrNativeObject = (EarthView::World::Spatial::Atlas::NHChartClassControl*) pObjectXXXX;
					ptrNativeObject->setColorBlendMode((EarthView::World::Spatial::Display::EVColorBlendOperation)mode);
				}
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback)();
				typedef const char*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback)(_in ev_uint32 index, _in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback)(_in char*& name, _in ev_bool value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback)(_in ev_uint32 index, _in ev_bool value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);
				typedef EarthView::World::Spatial::Display::IChartOption*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback)(_in const EarthView::World::Spatial::Display::IChartOption* uniformOption);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback)(_in char*& className, _in const ev_real64 scale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback)(_in char*& className, _inout ev_real64& minScale);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback)(_in char*& className, _in const ev_real64 scale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback)(_in char*& className, _inout ev_real64& maxScale);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback)(_in char*& className, _in const ev_bool classIgnore);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback)(_in char*& className);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback)(_in const ev_uint32 index, _in const ev_real64 scale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback)(_in const ev_uint32 index, _inout ev_real64& scale);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback)(_in const ev_uint32 index, _in const ev_real64 scale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback)(_in const ev_uint32 index, _inout ev_real64& scale);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback)(_in const ev_uint32 index, _in const ev_bool classIgnore);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback)(_in const ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback)(_in char*& className, _in ev_bool IsUse);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback)(_in char*& className);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback)(_in char*& className, _in ev_uint32 sizeFactor);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback)(_in char*& className, _inout ev_uint32& sizeFactor);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback)(_in char*& className, _in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback)(_in char*& className, _in EarthView::World::Spatial::Display::IColor*& pColor);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback)(_in char*& className, _in ev_bool useColor);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback)(_in char*& className);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback)(_in char*& className, _in int mode);
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback)(_in char*& className);
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
				typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback)(_in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CChartLayerProxy : public EarthView::World::Spatial::Atlas::CChartLayer
				{
				private:
					EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback;
				public:
					CChartLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartLayer(pList)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString(EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString(EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset(EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption(EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption(EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32(EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor(EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor(EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation(EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType(EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset(EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource(EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void(EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString(EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString(EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString(EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope(EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer(EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString(EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream(EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->CChartLayer::select(filter, type);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback();
						}
						else
							return this->CChartLayer::clearSelection();
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getLayerSelection();
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getDataset();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CChartLayer::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getDescription();
					}
					virtual void setDescription(_in const EVString& value)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* value_Char = value.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback(value_Char);
						}
						else
							return this->CChartLayer::setDescription(value);
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::isEditing();
					}
					virtual void setEditing(_in ev_bool editing)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback(editing);
						}
						else
							return this->CChartLayer::setEditing(editing);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::isValid();
					}
					virtual void setTransparentValue(_in ev_uint8 transparent)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
						}
						else
							return this->CChartLayer::setTransparentValue(transparent);
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getTransparentValue();
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CChartLayer::setVisible(visible);
					}
					virtual ev_bool isSelectable() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::isSelectable();
					}
					virtual void setSelectable(_in ev_bool selected)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback(selected);
						}
						else
							return this->CChartLayer::setSelectable(selected);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool bIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
						}
						else
							return this->CChartLayer::setIgnoreScale(bIgnore);
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getDisplayMaxScale();
					}
					virtual void setDisplayMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CChartLayer::setDisplayMaxScale(scale);
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getDisplayMinScale();
					}
					virtual void setDisplayMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->CChartLayer::setDisplayMinScale(scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CChartLayer::setSpatialReference(sr);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getExtent();
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
							return returnValue;
						}
						else
							return this->CChartLayer::draw(display, type);
					}
					virtual ev_uint32 getObjectClassNum() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getObjectClassNum();
					}
					virtual const EVString getObjectClassName(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EVString returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartLayer::getObjectClassName(index);
					}
					virtual ev_int32 getObjectClassType(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::getObjectClassType(name);
					}
					virtual void setClassVisible(_in ev_uint32 index, _in ev_bool value)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback(index, value);
						}
						else
							return this->CChartLayer::setClassVisible(index, value);
					}
					virtual void setClassVisible(_in const EVString& name, _in ev_bool value)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback(name_Char, value);
						}
						else
							return this->CChartLayer::setClassVisible(name, value);
					}
					virtual ev_bool isClassVisible(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartLayer::isClassVisible(index);
					}
					virtual ev_bool isClassVisible(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::isClassVisible(name);
					}
					virtual void setClassSelected(_in ev_uint32 index, _in ev_bool value)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback(index, value);
						}
						else
							return this->CChartLayer::setClassSelected(index, value);
					}
					virtual ev_bool isClassSelected(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartLayer::isClassSelected(index);
					}
					virtual ev_bool isClassSelected(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::isClassSelected(name);
					}
					virtual void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback(ref_dataset);
						}
						else
							return this->CChartLayer::setDataset(ref_dataset);
					}
					virtual EarthView::World::Spatial::Display::IChartOption* getOptionRef()
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IChartOption* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getOptionRef();
					}
					virtual void setEnvironment(_in const EarthView::World::Spatial::Display::IChartOption* uniformOption)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback(uniformOption);
						}
						else
							return this->CChartLayer::setEnvironment(uniformOption);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartLayer::clone();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CChartLayer::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::toXmlElement();
					}
					virtual void setClassDisplayMinScale(_in const EVString& className, _in const ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback(className_Char, scale);
						}
						else
							return this->CChartLayer::setClassDisplayMinScale(className, scale);
					}
					virtual ev_bool getClassDisplayMinScale(_in const EVString& className, _inout ev_real64& minScale) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback(className_Char, minScale);
							return returnValue;
						}
						else
							return this->CChartLayer::getClassDisplayMinScale(className, minScale);
					}
					virtual void setClassDisplayMaxScale(_in const EVString& className, _in const ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback(className_Char, scale);
						}
						else
							return this->CChartLayer::setClassDisplayMaxScale(className, scale);
					}
					virtual ev_bool getClassDisplayMaxScale(_in const EVString& className, _inout ev_real64& maxScale) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback(className_Char, maxScale);
							return returnValue;
						}
						else
							return this->CChartLayer::getClassDisplayMaxScale(className, maxScale);
					}
					virtual void setClassIgnoreScale(_in const EVString& className, _in const ev_bool classIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback(className_Char, classIgnore);
						}
						else
							return this->CChartLayer::setClassIgnoreScale(className, classIgnore);
					}
					virtual ev_bool getClassIgnoreScale(_in const EVString& className) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback(className_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::getClassIgnoreScale(className);
					}
					virtual void setClassDisplayMinScale(_in const ev_uint32 index, _in const ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback(index, scale);
						}
						else
							return this->CChartLayer::setClassDisplayMinScale(index, scale);
					}
					virtual ev_bool getClassDisplayMinScale(_in const ev_uint32 index, _inout ev_real64& scale) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback(index, scale);
							return returnValue;
						}
						else
							return this->CChartLayer::getClassDisplayMinScale(index, scale);
					}
					virtual void setClassDisplayMaxScale(_in const ev_uint32 index, _in const ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback(index, scale);
						}
						else
							return this->CChartLayer::setClassDisplayMaxScale(index, scale);
					}
					virtual ev_bool getClassDisplayMaxScale(_in const ev_uint32 index, _inout ev_real64& scale) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback(index, scale);
							return returnValue;
						}
						else
							return this->CChartLayer::getClassDisplayMaxScale(index, scale);
					}
					virtual void setClassIgnoreScale(_in const ev_uint32 index, _in const ev_bool classIgnore)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback(index, classIgnore);
						}
						else
							return this->CChartLayer::setClassIgnoreScale(index, classIgnore);
					}
					virtual ev_bool getClassIgnoreScale(_in const ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartLayer::getClassIgnoreScale(index);
					}
					virtual void setUseChartClassControl(_in const EVString& className, _in ev_bool IsUse)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback(className_Char, IsUse);
						}
						else
							return this->CChartLayer::setUseChartClassControl(className, IsUse);
					}
					virtual ev_bool getUseChartClassControl(_in const EVString& className) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback(className_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::getUseChartClassControl(className);
					}
					virtual void setChartClassControlSize(_in const EVString& className, _in ev_uint32 sizeFactor)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback(className_Char, sizeFactor);
						}
						else
							return this->CChartLayer::setChartClassControlSize(className, sizeFactor);
					}
					virtual ev_bool getChartClassControlSize(_in const EVString& className, _inout ev_uint32& sizeFactor) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback(className_Char, sizeFactor);
							return returnValue;
						}
						else
							return this->CChartLayer::getChartClassControlSize(className, sizeFactor);
					}
					virtual void setChartClassControlColor(_in const EVString& className, _in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback(className_Char, color);
						}
						else
							return this->CChartLayer::setChartClassControlColor(className, color);
					}
					virtual ev_bool getChartClassControlColor(_in const EVString& className, _in EarthView::World::Spatial::Display::IColor*& pColor) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback(className_Char, pColor);
							return returnValue;
						}
						else
							return this->CChartLayer::getChartClassControlColor(className, pColor);
					}
					virtual void setUseChartClassControlColor(_in const EVString& className, _in ev_bool useColor)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback(className_Char, useColor);
						}
						else
							return this->CChartLayer::setUseChartClassControlColor(className, useColor);
					}
					virtual ev_bool getUseChartClassControlColor(_in const EVString& className) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback(className_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::getUseChartClassControlColor(className);
					}
					virtual void setChartClassControlColorBlendMode(_in const EVString& className, _in EarthView::World::Spatial::Display::EVColorBlendOperation mode)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							m_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback(className_Char, (int)mode);
						}
						else
							return this->CChartLayer::setChartClassControlColorBlendMode(className, mode);
					}
					virtual EarthView::World::Spatial::Display::EVColorBlendOperation getChartClassControlColorBlendMode(_in const EVString& className) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* className_Char = className.makeBuffer();
							EarthView::World::Spatial::Display::EVColorBlendOperation returnValue = (EarthView::World::Spatial::Display::EVColorBlendOperation)m_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback(className_Char);
							return returnValue;
						}
						else
							return this->CChartLayer::getChartClassControlColorBlendMode(className);
					}
					virtual EVString getDatasetName()
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getDatasetName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CChartLayer::getDataSource();
					}
					virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
						}
						else
							return this->CChartLayer::setLayerSelection(selection);
					}
					virtual void setCanEdit(_in ev_bool can)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback(can);
						}
						else
							return this->CChartLayer::setCanEdit(can);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CChartLayer::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CChartLayer::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CChartLayerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getLayerSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->getLayerSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getLayerSelection_ILayerSelection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getLayerSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDescription(value1);
					else
						ptrNativeObject->setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDescription(value1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setEditing(editing);
					else
						ptrNativeObject->setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setEditing_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool editing )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setEditing(editing);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setTransparentValue(transparent);
					else
						ptrNativeObject->setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setTransparentValue_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setTransparentValue(transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getTransparentValue();
						return objXXXX;
					}
					else
					{
						ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getTransparentValue_ev_uint8_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setSelectable(selected);
					else
						ptrNativeObject->setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selected )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setSelectable(selected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setIgnoreScale(bIgnore);
					else
						ptrNativeObject->setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bIgnore )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setIgnoreScale(bIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMaxScale(scale);
					else
						ptrNativeObject->setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getDisplayMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getDisplayMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getDisplayMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMinScale(scale);
					else
						ptrNativeObject->setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDisplayMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDisplayMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassNum();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getObjectClassNum();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassNum_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassName(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						const EVString objXXXX = ptrNativeObject->getObjectClassName(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassName_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassName(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassType(name1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getObjectClassType(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getObjectClassType_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getObjectClassType(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 index, _in ev_bool value )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(index, value);
					else
						ptrNativeObject->setClassVisible(index, value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_bool value )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(index, value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool value )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(name1, value);
					else
						ptrNativeObject->setClassVisible(name1, value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassVisible_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool value )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassVisible(name1, value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClassVisible(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClassVisible(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassVisible_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassVisible(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 index, _in ev_bool value )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassSelected(index, value);
					else
						ptrNativeObject->setClassSelected(index, value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassSelected_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_bool value )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassSelected(index, value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClassSelected(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isClassSelected(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_isClassSelected_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::isClassSelected(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDataset(ref_dataset);
					else
						ptrNativeObject->setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setDataset_void_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IChartOption*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IChartOption* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getOptionRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IChartOption* objXXXX = ptrNativeObject->getOptionRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IChartOption*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getOptionRef_IChartOption_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::IChartOption* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getOptionRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IChartOption* uniformOption )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setEnvironment(uniformOption);
					else
						ptrNativeObject->setEnvironment(uniformOption);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setEnvironment_void_IChartOption_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IChartOption* uniformOption )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setEnvironment(uniformOption);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_clone_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64(void *pObjectXXXX, _in const char* className, _in const ev_real64 scale )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(className1, scale);
					else
						ptrNativeObject->setClassDisplayMinScale(className1, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in const char* className, _in const ev_real64 scale )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(className1, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64(void *pObjectXXXX, _in const char* className, _inout ev_real64& minScale )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(className1, minScale);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getClassDisplayMinScale(className1, minScale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in const char* className, _inout ev_real64& minScale )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(className1, minScale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64(void *pObjectXXXX, _in const char* className, _in const ev_real64 scale )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(className1, scale);
					else
						ptrNativeObject->setClassDisplayMaxScale(className1, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in const char* className, _in const ev_real64 scale )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(className1, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64(void *pObjectXXXX, _in const char* className, _inout ev_real64& maxScale )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(className1, maxScale);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getClassDisplayMaxScale(className1, maxScale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in const char* className, _inout ev_real64& maxScale )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(className1, maxScale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool(void *pObjectXXXX, _in const char* className, _in const ev_bool classIgnore )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(className1, classIgnore);
					else
						ptrNativeObject->setClassIgnoreScale(className1, classIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* className, _in const ev_bool classIgnore )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(className1, classIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(className1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getClassIgnoreScale(className1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(className1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64(void *pObjectXXXX, _in const ev_uint32 index, _in const ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(index, scale);
					else
						ptrNativeObject->setClassDisplayMinScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMinScale_void_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_uint32 index, _in const ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMinScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64(void *pObjectXXXX, _in const ev_uint32 index, _inout ev_real64& scale )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(index, scale);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getClassDisplayMinScale(index, scale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMinScale_ev_bool_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_uint32 index, _inout ev_real64& scale )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMinScale(index, scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64(void *pObjectXXXX, _in const ev_uint32 index, _in const ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(index, scale);
					else
						ptrNativeObject->setClassDisplayMaxScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassDisplayMaxScale_void_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_uint32 index, _in const ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassDisplayMaxScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64(void *pObjectXXXX, _in const ev_uint32 index, _inout ev_real64& scale )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(index, scale);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getClassDisplayMaxScale(index, scale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassDisplayMaxScale_ev_bool_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_uint32 index, _inout ev_real64& scale )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassDisplayMaxScale(index, scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool(void *pObjectXXXX, _in const ev_uint32 index, _in const ev_bool classIgnore )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(index, classIgnore);
					else
						ptrNativeObject->setClassIgnoreScale(index, classIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setClassIgnoreScale_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_uint32 index, _in const ev_bool classIgnore )
				{
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setClassIgnoreScale(index, classIgnore);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32(void *pObjectXXXX, _in const ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getClassIgnoreScale(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getClassIgnoreScale_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in const ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getClassIgnoreScale(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool(void *pObjectXXXX, _in const char* className, _in ev_bool IsUse )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControl(className1, IsUse);
					else
						ptrNativeObject->setUseChartClassControl(className1, IsUse);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControl_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* className, _in ev_bool IsUse )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControl(className1, IsUse);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControl(className1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getUseChartClassControl(className1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControl_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControl(className1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* className, _in ev_uint32 sizeFactor )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlSize(className1, sizeFactor);
					else
						ptrNativeObject->setChartClassControlSize(className1, sizeFactor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlSize_void_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* className, _in ev_uint32 sizeFactor )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlSize(className1, sizeFactor);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32(void *pObjectXXXX, _in const char* className, _inout ev_uint32& sizeFactor )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlSize(className1, sizeFactor);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChartClassControlSize(className1, sizeFactor);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlSize_ev_bool_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* className, _inout ev_uint32& sizeFactor )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlSize(className1, sizeFactor);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor(void *pObjectXXXX, _in const char* className, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColor(className1, color);
					else
						ptrNativeObject->setChartClassControlColor(className1, color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColor_void_EVString_IColor_NoVirtual(void *pObjectXXXX, _in const char* className, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColor(className1, color);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor(void *pObjectXXXX, _in const char* className, _in EarthView::World::Spatial::Display::IColor*& pColor )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColor(className1, pColor);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChartClassControlColor(className1, pColor);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColor_ev_bool_EVString_IColor_NoVirtual(void *pObjectXXXX, _in const char* className, _in EarthView::World::Spatial::Display::IColor*& pColor )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColor(className1, pColor);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool(void *pObjectXXXX, _in const char* className, _in ev_bool useColor )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControlColor(className1, useColor);
					else
						ptrNativeObject->setUseChartClassControlColor(className1, useColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setUseChartClassControlColor_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* className, _in ev_bool useColor )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setUseChartClassControlColor(className1, useColor);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControlColor(className1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getUseChartClassControlColor(className1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getUseChartClassControlColor_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getUseChartClassControlColor(className1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::NHChartClassControl*  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControl_NHChartClassControl_EVString(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::NHChartClassControl* objXXXX = ptrNativeObject->getChartClassControl(className1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation(void *pObjectXXXX, _in const char* className, _in int mode )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColorBlendMode(className1, (EarthView::World::Spatial::Display::EVColorBlendOperation)mode);
					else
						ptrNativeObject->setChartClassControlColorBlendMode(className1, (EarthView::World::Spatial::Display::EVColorBlendOperation)mode);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_setChartClassControlColorBlendMode_void_EVString_EVColorBlendOperation_NoVirtual(void *pObjectXXXX, _in const char* className, _in int mode )
				{
					EarthView::World::Core::ev_string className1 = className;
					EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::setChartClassControlColorBlendMode(className1, (EarthView::World::Spatial::Display::EVColorBlendOperation)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					if (dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVColorBlendOperation objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColorBlendMode(className1);
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVColorBlendOperation objXXXX = ptrNativeObject->getChartClassControlColorBlendMode(className1);
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_CChartLayer_getChartClassControlColorBlendMode_EVColorBlendOperation_EVString_NoVirtual(void *pObjectXXXX, _in const char* className )
				{
					EarthView::World::Core::ev_string className1 = className;
					const EarthView::World::Spatial::Atlas::CChartLayer* ptrNativeObject = (EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVColorBlendOperation objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::CChartLayer::getChartClassControlColorBlendMode(className1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_getDataSource_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setLayerSelection_void_ILayerSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_setCanEdit_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream_Callback* pCallback )
				{
					CChartLayerProxy* ptr = dynamic_cast<CChartLayerProxy*>((EarthView::World::Spatial::Atlas::CChartLayer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_CChartLayer_fromStream_void_CDataStream(pCallback);
					}
				}
			}
		}
	}
}
