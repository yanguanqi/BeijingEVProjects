/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/drawcaduniqueentityvaluetheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in EarthView::World::Spatial::Theme::ITheme* ref_theme);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* featureClass, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in const EarthView::World::Spatial::Display::ISymbol* symbol, _in EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback)();
				class CDrawCADUniqueEntityValueThemeProxy : public EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme
				{
				private:
					EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback* m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback;
					EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback* m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback;
					EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback* m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback;
				public:
					CDrawCADUniqueEntityValueThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawCADUniqueEntityValueTheme(pList)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CDrawCADUniqueEntityValueThemeProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback = pCallback;
					}
					virtual void startDraw(_in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in EarthView::World::Spatial::Theme::ITheme* ref_theme)
					{
						if(m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback(ref_display, ref_theme);
						}
						else
							return this->CDrawCADUniqueEntityValueTheme::startDraw(ref_display, ref_theme);
					}
					virtual ev_bool draw(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* featureClass, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback(featureClass, filter);
							return returnValue;
						}
						else
							return this->CDrawCADUniqueEntityValueTheme::draw(featureClass, filter);
					}
					virtual void endDraw()
					{
						if(m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback();
						}
						else
							return this->CDrawCADUniqueEntityValueTheme::endDraw();
					}
				};
				REGISTER_FACTORY_CLASS(CDrawCADUniqueEntityValueThemeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in EarthView::World::Spatial::Theme::ITheme* ref_theme )
				{
					EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme::startDraw(ref_display, ref_theme);
					else
						ptrNativeObject->startDraw(ref_display, ref_theme);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_Callback* pCallback )
				{
					CDrawCADUniqueEntityValueThemeProxy* ptr = dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in EarthView::World::Spatial::Theme::ITheme* ref_theme )
				{
					EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme::startDraw(ref_display, ref_theme);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* featureClass, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme::draw(featureClass, filter);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->draw(featureClass, filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					CDrawCADUniqueEntityValueThemeProxy* ptr = dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* featureClass, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme::draw(featureClass, filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX;
					if (dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme::endDraw();
					else
						ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_Callback* pCallback )
				{
					CDrawCADUniqueEntityValueThemeProxy* ptr = dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme::endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Callback* pCallback )
				{
					CDrawCADUniqueEntityValueThemeProxy* ptr = dynamic_cast<CDrawCADUniqueEntityValueThemeProxy*>((EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(pCallback);
					}
				}
			}
		}
	}
}
