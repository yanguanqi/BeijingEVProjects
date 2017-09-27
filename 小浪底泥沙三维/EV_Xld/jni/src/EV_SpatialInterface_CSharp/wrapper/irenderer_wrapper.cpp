/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback)();
				class IRendererProxy : public EarthView::World::Spatial::Display::IRenderer
				{
				private:
					EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback* m_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback;
				public:
					IRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : IRenderer(pList)
					{
						m_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const
					{
						if(m_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVRendererType returnValue = (EarthView::World::Spatial::Display::EVRendererType)m_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback();
							return returnValue;
						}
						else
							return this->IRenderer::getType();
					}
				};
				REGISTER_FACTORY_CLASS(IRendererProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::IRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::IRenderer*) pObjectXXXX;
					if (dynamic_cast<IRendererProxy*>((EarthView::World::Spatial::Display::IRenderer*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::IRenderer::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVRendererType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType( void *pObjectXXXX, EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Callback* pCallback )
				{
					IRendererProxy* ptr = dynamic_cast<IRendererProxy*>((EarthView::World::Spatial::Display::IRenderer*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::IRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::IRenderer*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::IRenderer::getType();
					return (int)objXXXX;
				}
			}
		}
	}
}
