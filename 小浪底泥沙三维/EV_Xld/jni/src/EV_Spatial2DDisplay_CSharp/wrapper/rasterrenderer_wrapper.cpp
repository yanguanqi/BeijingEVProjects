/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/rasterrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback)();
				class CRasterRendererProxy : public EarthView::World::Spatial2D::Renderer::CRasterRenderer
				{
				private:
					EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback* m_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback;
				public:
					CRasterRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterRenderer(pList)
					{
						m_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CRasterRendererProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType(EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if(m_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVRendererType returnValue = (EarthView::World::Spatial::Display::EVRendererType)m_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback();
							return returnValue;
						}
						else
							return this->CRasterRenderer::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CRasterRendererProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType_Callback* pCallback )
				{
					CRasterRendererProxy* ptr = dynamic_cast<CRasterRendererProxy*>((EarthView::World::Spatial2D::Renderer::CRasterRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType(pCallback);
					}
				}
			}
		}
	}
}
