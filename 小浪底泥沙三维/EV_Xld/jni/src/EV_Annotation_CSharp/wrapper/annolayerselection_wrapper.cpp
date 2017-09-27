/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "annotation/annolayerselection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				class CAnnoLayerSelectionProxy : public EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection
				{
				private:
					EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback;
					EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback;
				public:
					CAnnoLayerSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnnoLayerSelection(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CAnnoLayerSelectionProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection(EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol(EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol(EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* getSelection() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayerSelection::getSelection();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSelectionSymbol() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CAnnoLayerSelection::getSelectionSymbol();
					}
					virtual void setSelectionSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CAnnoLayerSelection::setSelectionSymbol(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(CAnnoLayerSelectionProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection::getSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->getSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_Callback* pCallback )
				{
					CAnnoLayerSelectionProxy* ptr = dynamic_cast<CAnnoLayerSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelection_IFeatureSelection_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection::getSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection::getSelectionSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSelectionSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_Callback* pCallback )
				{
					CAnnoLayerSelectionProxy* ptr = dynamic_cast<CAnnoLayerSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_getSelectionSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection::getSelectionSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX;
					if (dynamic_cast<CAnnoLayerSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection::setSelectionSymbol(symbol);
					else
						ptrNativeObject->setSelectionSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_Callback* pCallback )
				{
					CAnnoLayerSelectionProxy* ptr = dynamic_cast<CAnnoLayerSelectionProxy*>((EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CAnnoLayerSelection_setSelectionSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection::setSelectionSymbol(symbol);
				}
			}
		}
	}
}
