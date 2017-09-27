/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idisplaycache.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback)();
				class ICacheInfoProxy : public EarthView::World::Spatial::Atlas::ICacheInfo
				{
				private:
					EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback* m_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback;
					EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback* m_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback;
					EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback* m_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback;
				public:
					ICacheInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : ICacheInfo(pList)
					{
						m_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(ICacheInfoProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap(EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope(EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool(EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void(EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback = pCallback;
					}
					virtual EarthView::World::Display::IBitmap* getCache() const
					{
						if(m_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->ICacheInfo::getCache();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getCacheExtent() const
					{
						if(m_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->ICacheInfo::getCacheExtent();
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ICacheInfo::isDirty();
					}
					virtual void setDirty()
					{
						if(m_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback();
						}
						else
							return this->ICacheInfo::setDirty();
					}
				};
				REGISTER_FACTORY_CLASS(ICacheInfoProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					if (dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::getCache();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getCache();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_Callback* pCallback )
				{
					ICacheInfoProxy* ptr = dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_getCache_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::getCache();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					if (dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::getCacheExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getCacheExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_Callback* pCallback )
				{
					ICacheInfoProxy* ptr = dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_getCacheExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::getCacheExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					if (dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::isDirty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDirty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_Callback* pCallback )
				{
					ICacheInfoProxy* ptr = dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_isDirty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::isDirty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					if (dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::setDirty();
					else
						ptrNativeObject->setDirty();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_Callback* pCallback )
				{
					ICacheInfoProxy* ptr = dynamic_cast<ICacheInfoProxy*>((EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ICacheInfo_setDirty_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::ICacheInfo* ptrNativeObject = (EarthView::World::Spatial::Atlas::ICacheInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ICacheInfo::setDirty();
				}
				typedef const EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback)();
				typedef const EarthView::World::Display::ICachedBitmap*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback)();
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback)();
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef const EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback)(_in ev_bool cached);
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback)();
				class IDisplayCacheProxy : public EarthView::World::Spatial::Atlas::IDisplayCache
				{
				private:
					EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback;
					EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback* m_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback;
				public:
					IDisplayCacheProxy(EarthView::World::Core::CNameValuePairList *pList) : IDisplayCache(pList)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IDisplayCacheProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo(EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap(EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer(EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo(EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer(EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo(EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool(EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool(EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer(EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer(EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void(EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Atlas::ICacheInfo* getMapCacheInfo() const
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback();
							return returnValue;
						}
						else
							return this->IDisplayCache::getMapCacheInfo();
					}
					virtual const EarthView::World::Display::ICachedBitmap* getCachedMap() const
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Display::ICachedBitmap* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback();
							return returnValue;
						}
						else
							return this->IDisplayCache::getCachedMap();
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfo(_in const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IDisplayCache::getLayerCacheInfo(layer);
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfo2()
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback();
							return returnValue;
						}
						else
							return this->IDisplayCache::getLayerCacheInfo2();
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfoWithoutResize(_in const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IDisplayCache::getLayerCacheInfoWithoutResize(layer);
					}
					virtual const EarthView::World::Spatial::Atlas::ICacheInfo* getSelectionCacheInfo()
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback();
							return returnValue;
						}
						else
							return this->IDisplayCache::getSelectionCacheInfo();
					}
					virtual ev_bool selectionCached() const
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDisplayCache::selectionCached();
					}
					virtual void setSelectionCached(_in ev_bool cached)
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback(cached);
						}
						else
							return this->IDisplayCache::setSelectionCached(cached);
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* addCache(_in const EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback(ref_layer);
							return returnValue;
						}
						else
							return this->IDisplayCache::addCache(ref_layer);
					}
					virtual void removeCache(_in const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback(layer);
						}
						else
							return this->IDisplayCache::removeCache(layer);
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback();
						}
						else
							return this->IDisplayCache::clear();
					}
				};
				REGISTER_FACTORY_CLASS(IDisplayCacheProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getMapCacheInfo();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getMapCacheInfo();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getMapCacheInfo_ICacheInfo_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getMapCacheInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Display::ICachedBitmap*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Display::ICachedBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getCachedMap();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Display::ICachedBitmap* objXXXX = ptrNativeObject->getCachedMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Display::ICachedBitmap*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getCachedMap_ICachedBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					const EarthView::World::Display::ICachedBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getCachedMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo(layer);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getLayerCacheInfo(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo2();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getLayerCacheInfo2();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfo2_ICacheInfo_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfo2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfoWithoutResize(layer);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getLayerCacheInfoWithoutResize(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getLayerCacheInfoWithoutResize(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getSelectionCacheInfo();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getSelectionCacheInfo();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_getSelectionCacheInfo_ICacheInfo_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::getSelectionCacheInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::selectionCached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->selectionCached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_selectionCached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::selectionCached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool(void *pObjectXXXX, _in ev_bool cached )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::setSelectionCached(cached);
					else
						ptrNativeObject->setSelectionCached(cached);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_setSelectionCached_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool cached )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::setSelectionCached(cached);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::addCache(ref_layer);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->addCache(ref_layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_addCache_ICacheInfo_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::addCache(ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::removeCache(layer);
					else
						ptrNativeObject->removeCache(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_removeCache_void_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::removeCache(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					if (dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::clear();
					else
						ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_Callback* pCallback )
				{
					IDisplayCacheProxy* ptr = dynamic_cast<IDisplayCacheProxy*>((EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IDisplayCache_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_IDisplayCache_clear_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Atlas::IDisplayCache* ptrNativeObject = (EarthView::World::Spatial::Atlas::IDisplayCache*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::IDisplayCache::clear();
				}
			}
		}
	}
}
