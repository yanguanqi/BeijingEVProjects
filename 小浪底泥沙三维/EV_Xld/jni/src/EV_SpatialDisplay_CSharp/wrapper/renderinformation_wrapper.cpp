/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/renderinformation.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback)();
				typedef const EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback)();
				class CRenderInformationProxy : public EarthView::World::Spatial2D::Atlas::CRenderInformation
				{
				private:
					EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback;
				public:
					CRenderInformationProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderInformation(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CRenderInformationProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool(EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer(EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType(EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback = pCallback;
					}
					virtual ev_bool isRendering() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRenderInformation::isRendering();
					}
					virtual const EarthView::World::Spatial::Atlas::ILayer* getRenderingLayer() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->CRenderInformation::getRenderingLayer();
					}
					virtual EarthView::World::Spatial::Atlas::EVVectorLayerRendererType getRenderingType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVVectorLayerRendererType returnValue = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)m_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback();
							return returnValue;
						}
						else
							return this->CRenderInformation::getRenderingType();
					}
				};
				REGISTER_FACTORY_CLASS(CRenderInformationProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRenderInformation* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX;
					if (dynamic_cast<CRenderInformationProxy*>((EarthView::World::Spatial2D::Atlas::CRenderInformation*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRenderInformation::isRendering();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRendering();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_Callback* pCallback )
				{
					CRenderInformationProxy* ptr = dynamic_cast<CRenderInformationProxy*>((EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRenderInformation* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRenderInformation::isRendering();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRenderInformation* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX;
					if (dynamic_cast<CRenderInformationProxy*>((EarthView::World::Spatial2D::Atlas::CRenderInformation*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingLayer();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getRenderingLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_Callback* pCallback )
				{
					CRenderInformationProxy* ptr = dynamic_cast<CRenderInformationProxy*>((EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRenderInformation* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRenderInformation* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX;
					if (dynamic_cast<CRenderInformationProxy*>((EarthView::World::Spatial2D::Atlas::CRenderInformation*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType objXXXX = ptrNativeObject->getRenderingType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback* pCallback )
				{
					CRenderInformationProxy* ptr = dynamic_cast<CRenderInformationProxy*>((EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CRenderInformation_getRenderingType_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRenderInformation* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRenderInformation*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRenderInformation::getRenderingType();
					return (int)objXXXX;
				}
			}
		}
	}
}
