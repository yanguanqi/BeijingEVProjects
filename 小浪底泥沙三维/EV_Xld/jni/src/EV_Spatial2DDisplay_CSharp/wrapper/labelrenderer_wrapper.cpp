/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/labelrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback)();
				class CLabelRendererProxy : public EarthView::World::Spatial2D::Renderer::CLabelRenderer
				{
				private:
					EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback* m_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback;
				public:
					CLabelRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CLabelRenderer(pList)
					{
						m_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLabelRendererProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType(EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if(m_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVRendererType returnValue = (EarthView::World::Spatial::Display::EVRendererType)m_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback();
							return returnValue;
						}
						else
							return this->CLabelRenderer::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CLabelRendererProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Renderer_CLabelRenderer_getRendererType_EVRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVRendererType objXXXX = ptrNativeObject->getRendererType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CLabelRenderer_startDraw_void_ISpatialDisplay_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					ptrNativeObject->startDraw(ref_display, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CLabelRenderer_draw_void_CLabelElement(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CLabelElement* element )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					ptrNativeObject->draw(element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CLabelRenderer_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CLabelRenderer_setRotation_void_ev_real64(void *pObjectXXXX, _in ev_real64 rotation )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					ptrNativeObject->setRotation(rotation);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall Get_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpDisplay( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->mpDisplay;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpDisplay( void *pObjectXXXX, EarthView::World::Spatial::Display::ISpatialDisplay*  value )
				{
					((EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjectXXXX)->mpDisplay = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialTransformer*  _stdcall Get_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpTransformer( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->mpTransformer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpTransformer( void *pObjectXXXX, EarthView::World::Spatial::Display::ISpatialTransformer*  value )
				{
					((EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjectXXXX)->mpTransformer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CSymbolRenderer*  _stdcall Get_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpSymbolRenderer( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSymbolRenderer* objXXXX = ptrNativeObject->mpSymbolRenderer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpSymbolRenderer( void *pObjectXXXX, EarthView::World::Spatial::Display::CSymbolRenderer*  value )
				{
					((EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjectXXXX)->mpSymbolRenderer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall Get_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpSymbol( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->mpSymbol;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Renderer_CLabelRenderer_mpSymbol( void *pObjectXXXX, EarthView::World::Spatial::Display::ISymbol*  value )
				{
					((EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjectXXXX)->mpSymbol = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial2D_Renderer_CLabelRenderer_m_fRotation( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->m_fRotation;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Renderer_CLabelRenderer_m_fRotation( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial2D::Renderer::CLabelRenderer*)pObjectXXXX)->m_fRotation = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType_Callback* pCallback )
				{
					CLabelRendererProxy* ptr = dynamic_cast<CLabelRendererProxy*>((EarthView::World::Spatial2D::Renderer::CLabelRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CLabelRenderer_getType_EVRendererType(pCallback);
					}
				}
			}
		}
	}
}
