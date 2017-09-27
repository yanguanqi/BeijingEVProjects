/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ifeaturerenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback)();
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback)(_in const EarthView::World::Display::IDisplay2D* display, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback)();
				class IFeatureRendererProxy : public EarthView::World::Spatial2D::Display::IFeatureRenderer
				{
				private:
					EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback* m_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback;
					EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback* m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback;
				public:
					IFeatureRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : IFeatureRenderer(pList)
					{
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme(EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme(EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature(EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType(EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->IFeatureRenderer::getTheme();
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getStatisticesTheme() const
					{
						if(m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->IFeatureRenderer::getStatisticesTheme();
					}
					virtual void draw(_in const EarthView::World::Display::IDisplay2D* display, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature) const
					{
						if(m_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback(display, feature);
						}
						else
							return this->IFeatureRenderer::draw(display, feature);
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if(m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVRendererType returnValue = (EarthView::World::Spatial::Display::EVRendererType)m_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback();
							return returnValue;
						}
						else
							return this->IFeatureRenderer::getType();
					}
				};
				REGISTER_FACTORY_CLASS(IFeatureRendererProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::IFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX;
					if (dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::IFeatureRenderer::getTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Callback* pCallback )
				{
					IFeatureRendererProxy* ptr = dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::IFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::IFeatureRenderer::getTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::IFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX;
					if (dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::IFeatureRenderer::getStatisticesTheme();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getStatisticesTheme();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Callback* pCallback )
				{
					IFeatureRendererProxy* ptr = dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Display::IFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Display::IFeatureRenderer::getStatisticesTheme();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature(void *pObjectXXXX, _in const EarthView::World::Display::IDisplay2D* display, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					const EarthView::World::Spatial2D::Display::IFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX;
					if (dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Display::IFeatureRenderer::draw(display, feature);
					else
						ptrNativeObject->draw(display, feature);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback* pCallback )
				{
					IFeatureRendererProxy* ptr = dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Display::IDisplay2D* display, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					const EarthView::World::Spatial2D::Display::IFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Display::IFeatureRenderer::draw(display, feature);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType_Callback* pCallback )
				{
					IFeatureRendererProxy* ptr = dynamic_cast<IFeatureRendererProxy*>((EarthView::World::Spatial2D::Display::IFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Display_IFeatureRenderer_getType_EVRendererType(pCallback);
					}
				}
			}
		}
	}
}
