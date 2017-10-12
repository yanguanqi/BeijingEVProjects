/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/layerrenderordercontroller.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback)(_in ev_bool bControl);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* pLayer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 oldIndex, _in ev_uint32 newIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback)();
				class LayerRenderOrderControllerProxy : public EarthView::World::Spatial::Atlas::LayerRenderOrderController
				{
				private:
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback;
				public:
					LayerRenderOrderControllerProxy(EarthView::World::Core::CNameValuePairList *pList) : LayerRenderOrderController(pList)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(LayerRenderOrderControllerProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool(EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool(EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer(EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer(EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32(EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer(EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void(EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32(EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList(EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void(EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual ev_bool isUseCustomOrder() const
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->LayerRenderOrderController::isUseCustomOrder();
					}
					virtual void setUseCustomOrder(_in ev_bool bControl)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback(bControl);
						}
						else
							return this->LayerRenderOrderController::setUseCustomOrder(bControl);
					}
					virtual void addLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback(layer);
						}
						else
							return this->LayerRenderOrderController::addLayer(layer);
					}
					virtual void insertLayer(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback(index, layer);
						}
						else
							return this->LayerRenderOrderController::insertLayer(index, layer);
					}
					virtual void removeLayer(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback(index);
						}
						else
							return this->LayerRenderOrderController::removeLayer(index);
					}
					virtual void removeLayer(_in EarthView::World::Spatial::Atlas::ILayer* pLayer)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback(pLayer);
						}
						else
							return this->LayerRenderOrderController::removeLayer(pLayer);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback();
						}
						else
							return this->LayerRenderOrderController::removeAll();
					}
					virtual void moveLayer(_in ev_uint32 oldIndex, _in ev_uint32 newIndex)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback(oldIndex, newIndex);
						}
						else
							return this->LayerRenderOrderController::moveLayer(oldIndex, newIndex);
					}
					virtual EarthView::World::Spatial::Atlas::LayerList getLayerList() const
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::LayerList returnValue = *(EarthView::World::Spatial::Atlas::LayerList*)m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback();
							return returnValue;
						}
						else
							return this->LayerRenderOrderController::getLayerList();
					}
					virtual void resetOrder()
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback();
						}
						else
							return this->LayerRenderOrderController::resetOrder();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->LayerRenderOrderController::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->LayerRenderOrderController::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(LayerRenderOrderControllerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::isUseCustomOrder();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isUseCustomOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_isUseCustomOrder_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::isUseCustomOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool(void *pObjectXXXX, _in ev_bool bControl )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::setUseCustomOrder(bControl);
					else
						ptrNativeObject->setUseCustomOrder(bControl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_setUseCustomOrder_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bControl )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::setUseCustomOrder(bControl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::addLayer(layer);
					else
						ptrNativeObject->addLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_addLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::addLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::insertLayer(index, layer);
					else
						ptrNativeObject->insertLayer(index, layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_insertLayer_void_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::insertLayer(index, layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(index);
					else
						ptrNativeObject->removeLayer(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* pLayer )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(pLayer);
					else
						ptrNativeObject->removeLayer(pLayer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* pLayer )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeLayer(pLayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::removeAll();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::moveLayer(oldIndex, newIndex);
					else
						ptrNativeObject->moveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_moveLayer_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::moveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::LayerList objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::getLayerList();
						EarthView::World::Spatial::Atlas::LayerList *pXXXX = new EarthView::World::Spatial::Atlas::LayerList(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::LayerList objXXXX = ptrNativeObject->getLayerList();
						EarthView::World::Spatial::Atlas::LayerList *pXXXX = new EarthView::World::Spatial::Atlas::LayerList(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_getLayerList_EarthView_World_Spatial_Atlas_LayerList_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::LayerList objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::getLayerList();
					EarthView::World::Spatial::Atlas::LayerList *pXXXX = new EarthView::World::Spatial::Atlas::LayerList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::resetOrder();
					else
						ptrNativeObject->resetOrder();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_resetOrder_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::resetOrder();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					if (dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_Callback* pCallback )
				{
					LayerRenderOrderControllerProxy* ptr = dynamic_cast<LayerRenderOrderControllerProxy*>((EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_LayerRenderOrderController_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::LayerRenderOrderController* ptrNativeObject = (EarthView::World::Spatial::Atlas::LayerRenderOrderController*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::LayerRenderOrderController::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
