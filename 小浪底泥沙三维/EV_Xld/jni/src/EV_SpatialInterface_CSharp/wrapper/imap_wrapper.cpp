/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/imap.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
			}
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
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback)(_in ev_int32 oldIndex, _in ev_int32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback)(_in ev_int32 oldIndex, _in ev_int32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type);
				class IMapListenerProxy : public EarthView::World::Spatial::Atlas::IMapListener
				{
				private:
					EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback;
					EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback;
				public:
					IMapListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapListener(pList)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer(EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer(EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer(EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer(EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32(EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32(EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void(EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback = pCallback;
					}
					virtual void onBeforeAddLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapListener::onBeforeAddLayer(layer);
					}
					virtual void onAfterAddLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapListener::onAfterAddLayer(layer);
					}
					virtual void onBeforeRemoveLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapListener::onBeforeRemoveLayer(layer);
					}
					virtual void onAfterRemoveLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback(layer);
						}
						else
							return this->IMapListener::onAfterRemoveLayer(layer);
					}
					virtual void onBeforeMoveLayer(_in ev_int32 oldIndex, _in ev_int32 newIndex)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback(oldIndex, newIndex);
						}
						else
							return this->IMapListener::onBeforeMoveLayer(oldIndex, newIndex);
					}
					virtual void onAfterMoveLayer(_in ev_int32 oldIndex, _in ev_int32 newIndex)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback(oldIndex, newIndex);
						}
						else
							return this->IMapListener::onAfterMoveLayer(oldIndex, newIndex);
					}
					virtual void onMapSelectionChanged()
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback();
						}
						else
							return this->IMapListener::onMapSelectionChanged();
					}
					virtual void onMapDraw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback(display, layer, (int)type);
						}
						else
							return this->IMapListener::onMapDraw(display, layer, type);
					}
				};
				REGISTER_FACTORY_CLASS(IMapListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onBeforeAddLayer(layer);
					else
						ptrNativeObject->onBeforeAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeAddLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onBeforeAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onAfterAddLayer(layer);
					else
						ptrNativeObject->onAfterAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterAddLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onAfterAddLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onBeforeRemoveLayer(layer);
					else
						ptrNativeObject->onBeforeRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeRemoveLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onBeforeRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onAfterRemoveLayer(layer);
					else
						ptrNativeObject->onAfterRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterRemoveLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onAfterRemoveLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onBeforeMoveLayer(oldIndex, newIndex);
					else
						ptrNativeObject->onBeforeMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onBeforeMoveLayer_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onBeforeMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onAfterMoveLayer(oldIndex, newIndex);
					else
						ptrNativeObject->onAfterMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onAfterMoveLayer_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 oldIndex, _in ev_int32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onAfterMoveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onMapSelectionChanged();
					else
						ptrNativeObject->onMapSelectionChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onMapSelectionChanged_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onMapSelectionChanged();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					if (dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onMapDraw(display, layer, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					else
						ptrNativeObject->onMapDraw(display, layer, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_Callback* pCallback )
				{
					IMapListenerProxy* ptr = dynamic_cast<IMapListenerProxy*>((EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMapListener_onMapDraw_void_ISpatialDisplay_ILayer_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in int type )
				{
					EarthView::World::Spatial::Atlas::IMapListener* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMapListener::onMapDraw(display, layer, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback)();
				typedef const EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback)();
				class IRenderInformationProxy : public EarthView::World::Spatial::Atlas::IRenderInformation
				{
				private:
					EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback;
				public:
					IRenderInformationProxy(EarthView::World::Core::CNameValuePairList *pList) : IRenderInformation(pList)
					{
						m_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IRenderInformationProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool(EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer(EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType(EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback = pCallback;
					}
					virtual ev_bool isRendering() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRenderInformation::isRendering();
					}
					virtual const EarthView::World::Spatial::Atlas::ILayer* getRenderingLayer() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IRenderInformation::getRenderingLayer();
					}
					virtual EarthView::World::Spatial::Atlas::EVVectorLayerRendererType getRenderingType() const
					{
						if(m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVVectorLayerRendererType returnValue = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)m_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback();
							return returnValue;
						}
						else
							return this->IRenderInformation::getRenderingType();
					}
				};
				REGISTER_FACTORY_CLASS(IRenderInformationProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRenderInformation* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX;
					if (dynamic_cast<IRenderInformationProxy*>((EarthView::World::Spatial::Atlas::IRenderInformation*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRenderInformation::isRendering();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isRendering();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_Callback* pCallback )
				{
					IRenderInformationProxy* ptr = dynamic_cast<IRenderInformationProxy*>((EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRenderInformation* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRenderInformation::isRendering();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRenderInformation* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX;
					if (dynamic_cast<IRenderInformationProxy*>((EarthView::World::Spatial::Atlas::IRenderInformation*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRenderInformation::getRenderingLayer();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getRenderingLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_Callback* pCallback )
				{
					IRenderInformationProxy* ptr = dynamic_cast<IRenderInformationProxy*>((EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingLayer_ILayer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRenderInformation* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRenderInformation::getRenderingLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRenderInformation* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX;
					if (dynamic_cast<IRenderInformationProxy*>((EarthView::World::Spatial::Atlas::IRenderInformation*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRenderInformation::getRenderingType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVVectorLayerRendererType objXXXX = ptrNativeObject->getRenderingType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_Callback* pCallback )
				{
					IRenderInformationProxy* ptr = dynamic_cast<IRenderInformationProxy*>((EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_IRenderInformation_getRenderingType_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IRenderInformation* ptrNativeObject = (EarthView::World::Spatial::Atlas::IRenderInformation*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IRenderInformation::getRenderingType();
					return (int)objXXXX;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback)(_in ev_bool isActive);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback)(_in char*& desc);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* background);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback)(_in const EarthView::World::Spatial::Geometry::IEnvelope* enve);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback)(_in ev_real64 rotation);
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback)(_in int units);
				typedef int  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback)(_in int units);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool ignore);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				typedef EarthView::World::Spatial::Atlas::ISpatialScale*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in char*& name);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* pLayer, _in ev_bool isAdd);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback)(_in ev_uint32 oldIndex, _in ev_uint32 newIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
				typedef EarthView::World::Spatial::Atlas::IMapSelection*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback)();
				typedef EarthView::World::Spatial::Atlas::IDisplayCache*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::IRenderInformation* info);
				typedef EarthView::World::Spatial::Carto::IPageLayout*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback)();
				typedef EarthView::World::Spatial::Carto::IPageLayout*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback)(_in EarthView::World::Spatial::Atlas::IMapListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback)(_in EarthView::World::Spatial::Atlas::IMapListener* listener);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IMapProxy : public EarthView::World::Spatial::Atlas::IMap
				{
				private:
					EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback* m_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback;
					EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback* m_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback;
					EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback* m_EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback;
					EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback* m_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback;
					EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback* m_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback;
					EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback* m_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback;
					EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback* m_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback;
					EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback* m_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback;
					EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback* m_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback;
					EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback* m_EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback;
					EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback;
					EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback* m_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback;
					EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback* m_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback;
					EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback* m_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback;
					EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback* m_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback;
					EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback* m_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback;
					EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback* m_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback;
					EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback* m_EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback;
					EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback;
				public:
					IMapProxy(EarthView::World::Core::CNameValuePairList *pList) : IMap(pList)
					{
						m_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IMapProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool(EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool(EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getName_EVString(EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString(EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString(EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString(EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor(EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor(EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_updateExtent_void(EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope(EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope(EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope(EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64(EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64(EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits(EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits(EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits(EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits(EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64(EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64(EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64(EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64(EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool(EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale(EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32(EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32(EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset(EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString(EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer(EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer(EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer(EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool(EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer(EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32(EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_removeAll_void(EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32(EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection(EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay(EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation(EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout(EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout(EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener(EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener(EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay(EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay(EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_clone_IMap(EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream(EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_toXML_EVString(EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream(EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMap::isActive();
					}
					virtual void setActive(_in ev_bool isActive)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback(isActive);
						}
						else
							return this->IMap::setActive(isActive);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMap::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IMap::setName(name);
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMap::getDescription();
					}
					virtual void setDescription(_in const EVString& desc)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* desc_Char = desc.makeBuffer();
							m_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback(desc_Char);
						}
						else
							return this->IMap::setDescription(desc);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackground() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback();
							return returnValue;
						}
						else
							return this->IMap::getBackground();
					}
					virtual void setBackground(_in const EarthView::World::Spatial::Display::IColor* background)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback(background);
						}
						else
							return this->IMap::setBackground(background);
					}
					virtual void updateExtent()
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback();
						}
						else
							return this->IMap::updateExtent();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IMap::getEnvelope();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getInterestEnvelope() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IMap::getInterestEnvelope();
					}
					virtual void setInterestEnvelope(_in const EarthView::World::Spatial::Geometry::IEnvelope* enve)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback(enve);
						}
						else
							return this->IMap::setInterestEnvelope(enve);
					}
					virtual ev_real64 getInterestRotation() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IMap::getInterestRotation();
					}
					virtual void setInterestRotation(_in ev_real64 rotation)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback(rotation);
						}
						else
							return this->IMap::setInterestRotation(rotation);
					}
					virtual EarthView::World::Spatial::Atlas::EVMapUnits getMapUnits() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVMapUnits returnValue = (EarthView::World::Spatial::Atlas::EVMapUnits)m_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback();
							return returnValue;
						}
						else
							return this->IMap::getMapUnits();
					}
					virtual void setMapUnits(_in EarthView::World::Spatial::Atlas::EVMapUnits units)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback((int)units);
						}
						else
							return this->IMap::setMapUnits(units);
					}
					virtual EarthView::World::Spatial::Atlas::EVMapUnits getShowUnits() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVMapUnits returnValue = (EarthView::World::Spatial::Atlas::EVMapUnits)m_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback();
							return returnValue;
						}
						else
							return this->IMap::getShowUnits();
					}
					virtual void setShowUnits(_in EarthView::World::Spatial::Atlas::EVMapUnits units)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback((int)units);
						}
						else
							return this->IMap::setShowUnits(units);
					}
					virtual ev_real64 getMinScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IMap::getMinScale();
					}
					virtual void setMinScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IMap::setMinScale(scale);
					}
					virtual ev_real64 getMaxScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IMap::getMaxScale();
					}
					virtual void setMaxScale(_in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback(scale);
						}
						else
							return this->IMap::setMaxScale(scale);
					}
					virtual ev_bool ignoreScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMap::ignoreScale();
					}
					virtual void setIgnoreScale(_in ev_bool ignore)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback(ignore);
						}
						else
							return this->IMap::setIgnoreScale(ignore);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->IMap::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->IMap::setSpatialReference(sr);
					}
					virtual EarthView::World::Spatial::Atlas::ISpatialScale* getSpatialScale() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ISpatialScale* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback();
							return returnValue;
						}
						else
							return this->IMap::getSpatialScale();
					}
					virtual ev_uint32 getLayerCount() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IMap::getLayerCount();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMap::getLayer(index);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* getRelatedLayer(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->IMap::getRelatedLayer(dataset);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset(_in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& name) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback(ds, name_Char);
							return returnValue;
						}
						else
							return this->IMap::getDataset(ds, name);
					}
					virtual ev_uint32 indexOfLayer(_in const EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IMap::indexOfLayer(layer);
					}
					virtual ev_bool isExist(_in const EarthView::World::Spatial::Atlas::ILayer* layer) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IMap::isExist(layer);
					}
					virtual void addLayer(_in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback(ref_layer);
						}
						else
							return this->IMap::addLayer(ref_layer);
					}
					virtual void updateLayerChanged(_in EarthView::World::Spatial::Atlas::ILayer* pLayer, _in ev_bool isAdd)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback(pLayer, isAdd);
						}
						else
							return this->IMap::updateLayerChanged(pLayer, isAdd);
					}
					virtual void insertLayer(_in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback(index, ref_layer);
						}
						else
							return this->IMap::insertLayer(index, ref_layer);
					}
					virtual void removeLayer(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback(index);
						}
						else
							return this->IMap::removeLayer(index);
					}
					virtual void removeAll()
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback();
						}
						else
							return this->IMap::removeAll();
					}
					virtual void moveLayer(_in ev_uint32 oldIndex, _in ev_uint32 newIndex)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback(oldIndex, newIndex);
						}
						else
							return this->IMap::moveLayer(oldIndex, newIndex);
					}
					virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
						}
						else
							return this->IMap::select(filter, type);
					}
					virtual EarthView::World::Spatial::Atlas::IMapSelection* getMapSelection() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMapSelection* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback();
							return returnValue;
						}
						else
							return this->IMap::getMapSelection();
					}
					virtual EarthView::World::Spatial::Atlas::IDisplayCache* getDisplayCache(_in EarthView::World::Spatial::Display::ISpatialDisplay* display) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IDisplayCache* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback(display);
							return returnValue;
						}
						else
							return this->IMap::getDisplayCache(display);
					}
					virtual void draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::IRenderInformation* info)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback(display, info);
						}
						else
							return this->IMap::draw(display, info);
					}
					virtual EarthView::World::Spatial::Carto::IPageLayout* getPageLayout() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IPageLayout* returnValue = m_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback();
							return returnValue;
						}
						else
							return this->IMap::getPageLayout();
					}
					virtual EarthView::World::Spatial::Carto::IPageLayout* createPageLayout()
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IPageLayout* returnValue = m_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback();
							return returnValue;
						}
						else
							return this->IMap::createPageLayout();
					}
					virtual void addMapListener(_in EarthView::World::Spatial::Atlas::IMapListener* ref_listener)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback(ref_listener);
						}
						else
							return this->IMap::addMapListener(ref_listener);
					}
					virtual void removeMapListner(_in EarthView::World::Spatial::Atlas::IMapListener* listener)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback(listener);
						}
						else
							return this->IMap::removeMapListner(listener);
					}
					virtual void registSpatialDisplay(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->IMap::registSpatialDisplay(display);
					}
					virtual void unRegistSpatialDisplay(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->IMap::unRegistSpatialDisplay(display);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* clone() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback();
							return returnValue;
						}
						else
							return this->IMap::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IMap::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMap::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IMap::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IMap::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IMap::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IMapProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMap_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool isActive )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setActive(isActive);
					else
						ptrNativeObject->setActive(isActive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isActive )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setActive(isActive);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IMap_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getName_EVString_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IMap_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IMap_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IMap_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setDescription(desc1);
					else
						ptrNativeObject->setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setDescription_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setDescription(desc1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Atlas_IMap_getBackground_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getBackground();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackground();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getBackground_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Atlas_IMap_getBackground_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getBackground();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* background )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setBackground(background);
					else
						ptrNativeObject->setBackground(background);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setBackground_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* background )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setBackground(background);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_updateExtent_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::updateExtent();
					else
						ptrNativeObject->updateExtent();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_updateExtent_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_updateExtent_void_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_updateExtent_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_updateExtent_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::updateExtent();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getEnvelope();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_IMap_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getInterestEnvelope();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getInterestEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_IMap_getInterestEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getInterestEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* enve )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setInterestEnvelope(enve);
					else
						ptrNativeObject->setInterestEnvelope(enve);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setInterestEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* enve )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setInterestEnvelope(enve);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getInterestRotation();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getInterestRotation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_IMap_getInterestRotation_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getInterestRotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64(void *pObjectXXXX, _in ev_real64 rotation )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setInterestRotation(rotation);
					else
						ptrNativeObject->setInterestRotation(rotation);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setInterestRotation_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 rotation )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setInterestRotation(rotation);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMapUnits();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->getMapUnits();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_IMap_getMapUnits_EVMapUnits_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMapUnits();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits(void *pObjectXXXX, _in int units )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setMapUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
					else
						ptrNativeObject->setMapUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setMapUnits_void_EVMapUnits_NoVirtual(void *pObjectXXXX, _in int units )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setMapUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getShowUnits();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->getShowUnits();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Atlas_IMap_getShowUnits_EVMapUnits_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getShowUnits();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits(void *pObjectXXXX, _in int units )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setShowUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
					else
						ptrNativeObject->setShowUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setShowUnits_void_EVMapUnits_NoVirtual(void *pObjectXXXX, _in int units )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setShowUnits((EarthView::World::Spatial::Atlas::EVMapUnits)units);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMinScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMinScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_IMap_getMinScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMinScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setMinScale(scale);
					else
						ptrNativeObject->setMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setMinScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setMinScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMaxScale();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getMaxScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_IMap_getMaxScale_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMaxScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setMaxScale(scale);
					else
						ptrNativeObject->setMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setMaxScale_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setMaxScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::ignoreScale();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->ignoreScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMap_ignoreScale_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::ignoreScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool(void *pObjectXXXX, _in ev_bool ignore )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setIgnoreScale(ignore);
					else
						ptrNativeObject->setIgnoreScale(ignore);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setIgnoreScale_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool ignore )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setIgnoreScale(ignore);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_IMap_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialScale*  _stdcall EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ISpatialScale* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getSpatialScale();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ISpatialScale* objXXXX = ptrNativeObject->getSpatialScale();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialScale*  _stdcall EarthView_World_Spatial_Atlas_IMap_getSpatialScale_ISpatialScale_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ISpatialScale* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getSpatialScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getLayerCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IMap_getLayerCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getLayer(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IMap_getLayer_ILayer_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getRelatedLayer(dataset);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getRelatedLayer(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_Atlas_IMap_getRelatedLayer_ILayer_IDataset_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getRelatedLayer(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getDataset(ds, name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset(ds, name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_Atlas_IMap_getDataset_IDataset_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getDataset(ds, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::indexOfLayer(layer);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->indexOfLayer(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_IMap_indexOfLayer_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::indexOfLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::isExist(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isExist(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMap_isExist_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::isExist(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::addLayer(ref_layer);
					else
						ptrNativeObject->addLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_addLayer_void_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::addLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* pLayer, _in ev_bool isAdd )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::updateLayerChanged(pLayer, isAdd);
					else
						ptrNativeObject->updateLayerChanged(pLayer, isAdd);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_updateLayerChanged_void_ILayer_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* pLayer, _in ev_bool isAdd )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::updateLayerChanged(pLayer, isAdd);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::insertLayer(index, ref_layer);
					else
						ptrNativeObject->insertLayer(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_insertLayer_void_ev_uint32_ILayer_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::insertLayer(index, ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::removeLayer(index);
					else
						ptrNativeObject->removeLayer(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_removeLayer_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::removeLayer(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::removeAll();
					else
						ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_removeAll_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_removeAll_void_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_removeAll_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_removeAll_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::removeAll();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::moveLayer(oldIndex, newIndex);
					else
						ptrNativeObject->moveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_moveLayer_void_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::moveLayer(oldIndex, newIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
					else
						ptrNativeObject->select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::select(filter, (EarthView::World::Spatial::Atlas::EVSelectionResultType)type);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMapSelection*  _stdcall EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMapSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMapSelection();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMapSelection* objXXXX = ptrNativeObject->getMapSelection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMapSelection*  _stdcall EarthView_World_Spatial_Atlas_IMap_getMapSelection_IMapSelection_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMapSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getMapSelection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IDisplayCache*  _stdcall EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IDisplayCache* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getDisplayCache(display);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IDisplayCache* objXXXX = ptrNativeObject->getDisplayCache(display);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IDisplayCache*  _stdcall EarthView_World_Spatial_Atlas_IMap_getDisplayCache_IDisplayCache_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IDisplayCache* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getDisplayCache(display);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::IRenderInformation* info )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::draw(display, info);
					else
						ptrNativeObject->draw(display, info);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_draw_void_ISpatialDisplay_IRenderInformation_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::IRenderInformation* info )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::draw(display, info);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getPageLayout();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->getPageLayout();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Atlas_IMap_getPageLayout_IPageLayout_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::getPageLayout();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::createPageLayout();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->createPageLayout();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Atlas_IMap_createPageLayout_IPageLayout_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::createPageLayout();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMapListener* ref_listener )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::addMapListener(ref_listener);
					else
						ptrNativeObject->addMapListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_addMapListener_void_IMapListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMapListener* ref_listener )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::addMapListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMapListener* listener )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::removeMapListner(listener);
					else
						ptrNativeObject->removeMapListner(listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_removeMapListner_void_IMapListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMapListener* listener )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::removeMapListner(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::registSpatialDisplay(display);
					else
						ptrNativeObject->registSpatialDisplay(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_registSpatialDisplay_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::registSpatialDisplay(display);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::unRegistSpatialDisplay(display);
					else
						ptrNativeObject->unRegistSpatialDisplay(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_unRegistSpatialDisplay_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::unRegistSpatialDisplay(display);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMap_clone_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_clone_IMap( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_clone_IMap_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_clone_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMap_clone_IMap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IMap_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_toXML_EVString_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_IMap_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_IMap_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					if (dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_Callback* pCallback )
				{
					IMapProxy* ptr = dynamic_cast<IMapProxy*>((EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IMap_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Atlas::IMap* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMap*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IMap::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
