/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilabelrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback)();
				class ILabelRendererProxy : public EarthView::World::Spatial::Display::ILabelRenderer
				{
				private:
					EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback* m_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback;
				public:
					ILabelRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : ILabelRenderer(pList)
					{
						m_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(ILabelRendererProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType(EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if(m_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVRendererType returnValue = (EarthView::World::Spatial::Display::EVRendererType)m_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback();
							return returnValue;
						}
						else
							return this->ILabelRenderer::getType();
					}
				};
				REGISTER_FACTORY_CLASS(ILabelRendererProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_ILabelRenderer_getRendererType_EVRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ILabelRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVRendererType objXXXX = ptrNativeObject->getRendererType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelRenderer_startDraw_void_IDisplay2D_ISymbol(void *pObjectXXXX, _in EarthView::World::Display::IDisplay2D* ref_display, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Display::ILabelRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelRenderer*) pObjectXXXX;
					ptrNativeObject->startDraw(ref_display, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelRenderer_draw_void_CLabelElement(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CLabelElement* element )
				{
					EarthView::World::Spatial::Display::ILabelRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelRenderer*) pObjectXXXX;
					ptrNativeObject->draw(element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ILabelRenderer_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ILabelRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::ILabelRenderer*) pObjectXXXX;
					ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType( void *pObjectXXXX, EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType_Callback* pCallback )
				{
					ILabelRendererProxy* ptr = dynamic_cast<ILabelRendererProxy*>((EarthView::World::Spatial::Display::ILabelRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType(pCallback);
					}
				}
			}
		}
	}
}
