/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/featurerenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback)();
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback)(_in const EarthView::World::Display::IDisplay2D* display, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback)();
				class CFeatureRendererProxy : public EarthView::World::Spatial2D::Renderer::CFeatureRenderer
				{
				private:
					EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback* m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback;
					EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback* m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback;
					EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback* m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback;
					EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback* m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback;
				public:
					CFeatureRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CFeatureRenderer(pList)
					{
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CFeatureRendererProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme(EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme(EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature(EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType(EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback = pCallback;
					}
					virtual void draw(_in EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback(feature);
						}
						else
							return this->CFeatureRenderer::draw(feature);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const
					{
						if(m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CFeatureRenderer::getTheme();
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getStatisticesTheme() const
					{
						if(m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CFeatureRenderer::getStatisticesTheme();
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if(m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVRendererType returnValue = (EarthView::World::Spatial::Display::EVRendererType)m_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback();
							return returnValue;
						}
						else
							return this->CFeatureRenderer::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CFeatureRendererProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getRendererType_EVRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Renderer::CFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVRendererType objXXXX = ptrNativeObject->getRendererType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_startDraw_void_ISpatialDisplay_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX;
					ptrNativeObject->startDraw(display, theme);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX;
					if (dynamic_cast<CFeatureRendererProxy*>((EarthView::World::Spatial2D::Renderer::CFeatureRenderer*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Renderer::CFeatureRenderer::draw(feature);
					else
						ptrNativeObject->draw(feature);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Callback* pCallback )
				{
					CFeatureRendererProxy* ptr = dynamic_cast<CFeatureRendererProxy*>((EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Renderer::CFeatureRenderer::draw(feature);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CFeatureRenderer_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CFeatureRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX;
					ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme_Callback* pCallback )
				{
					CFeatureRendererProxy* ptr = dynamic_cast<CFeatureRendererProxy*>((EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme_Callback* pCallback )
				{
					CFeatureRendererProxy* ptr = dynamic_cast<CFeatureRendererProxy*>((EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature_Callback* pCallback )
				{
					CFeatureRendererProxy* ptr = dynamic_cast<CFeatureRendererProxy*>((EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType_Callback* pCallback )
				{
					CFeatureRendererProxy* ptr = dynamic_cast<CFeatureRendererProxy*>((EarthView::World::Spatial2D::Renderer::CFeatureRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType(pCallback);
					}
				}
			}
		}
	}
}
