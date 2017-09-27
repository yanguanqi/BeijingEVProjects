/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/layerselection3d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				class CLayerSelection3DProxy : public EarthView::World::Spatial3D::Atlas::CLayerSelection3D
				{
				private:
					EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback* m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback;
					EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback* m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback;
					EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback;
				public:
					CLayerSelection3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayerSelection3D(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLayerSelection3DProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol(EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol(EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* getSelection() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback();
							return returnValue;
						}
						else
							return this->CLayerSelection3D::getSelection();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSelectionSymbol() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLayerSelection3D::getSelectionSymbol();
					}
					virtual void setSelectionSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CLayerSelection3D::setSelectionSymbol(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(CLayerSelection3DProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayerSelection3D*) pObjectXXXX;
					if (dynamic_cast<CLayerSelection3DProxy*>((EarthView::World::Spatial3D::Atlas::CLayerSelection3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayerSelection3D::getSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->getSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_Callback* pCallback )
				{
					CLayerSelection3DProxy* ptr = dynamic_cast<CLayerSelection3DProxy*>((EarthView::World::Spatial3D::Atlas::CLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelection_IFeatureSelection_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayerSelection3D*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CLayerSelection3D::getSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelection_void_IFeatureSelection(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureSelection* selection )
				{
					EarthView::World::Spatial3D::Atlas::CLayerSelection3D* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CLayerSelection3D*) pObjectXXXX;
					ptrNativeObject->setSelection(selection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol_Callback* pCallback )
				{
					CLayerSelection3DProxy* ptr = dynamic_cast<CLayerSelection3DProxy*>((EarthView::World::Spatial3D::Atlas::CLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_getSelectionSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol_Callback* pCallback )
				{
					CLayerSelection3DProxy* ptr = dynamic_cast<CLayerSelection3DProxy*>((EarthView::World::Spatial3D::Atlas::CLayerSelection3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CLayerSelection3D_setSelectionSymbol_void_ISymbol(pCallback);
					}
				}
			}
		}
	}
}
