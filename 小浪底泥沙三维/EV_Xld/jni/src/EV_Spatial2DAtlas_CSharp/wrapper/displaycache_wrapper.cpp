/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/displaycache.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback)();
				class CCacheInfoProxy : public EarthView::World::Spatial2D::Atlas::CCacheInfo
				{
				private:
					EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback* m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback;
					EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback* m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback;
					EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback* m_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback;
				public:
					CCacheInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CCacheInfo(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCacheInfoProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap(EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope(EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool(EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void(EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback = pCallback;
					}
					virtual EarthView::World::Display::IBitmap* getCache() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCacheInfo::getCache();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getCacheExtent() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CCacheInfo::getCacheExtent();
					}
					virtual ev_bool isDirty() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCacheInfo::isDirty();
					}
					virtual void setDirty()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback();
						}
						else
							return this->CCacheInfo::setDirty();
					}
				};
				REGISTER_FACTORY_CLASS(CCacheInfoProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					if (dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::getCache();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getCache();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_Callback* pCallback )
				{
					CCacheInfoProxy* ptr = dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_getCache_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::getCache();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					if (dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::getCacheExtent();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getCacheExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_Callback* pCallback )
				{
					CCacheInfoProxy* ptr = dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_getCacheExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::getCacheExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					if (dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::isDirty();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDirty();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_Callback* pCallback )
				{
					CCacheInfoProxy* ptr = dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_isDirty_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::isDirty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					if (dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::setDirty();
					else
						ptrNativeObject->setDirty();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_Callback* pCallback )
				{
					CCacheInfoProxy* ptr = dynamic_cast<CCacheInfoProxy*>((EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_setDirty_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CCacheInfo::setDirty();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_lock_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					ptrNativeObject->lock();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_locked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->locked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CCacheInfo_unLock_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CCacheInfo* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CCacheInfo*) pObjectXXXX;
					ptrNativeObject->unLock();
				}
				typedef const EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback)();
				typedef const EarthView::World::Display::ICachedBitmap*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback)();
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback)();
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef const EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback)(_in ev_bool cached);
				typedef EarthView::World::Spatial::Atlas::ICacheInfo*  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* ref_layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback)(_in const EarthView::World::Spatial::Atlas::ILayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback)();
				class CDisplayCacheProxy : public EarthView::World::Spatial2D::Atlas::CDisplayCache
				{
				private:
					EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback* m_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback;
				public:
					CDisplayCacheProxy(EarthView::World::Core::CNameValuePairList *pList) : CDisplayCache(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CDisplayCacheProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo(EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap(EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer(EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo(EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer(EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo(EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool(EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool(EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer(EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer(EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void(EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Atlas::ICacheInfo* getMapCacheInfo() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback();
							return returnValue;
						}
						else
							return this->CDisplayCache::getMapCacheInfo();
					}
					virtual const EarthView::World::Display::ICachedBitmap* getCachedMap() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Display::ICachedBitmap* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback();
							return returnValue;
						}
						else
							return this->CDisplayCache::getCachedMap();
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfo(_in const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CDisplayCache::getLayerCacheInfo(layer);
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfo2()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback();
							return returnValue;
						}
						else
							return this->CDisplayCache::getLayerCacheInfo2();
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* getLayerCacheInfoWithoutResize(_in const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CDisplayCache::getLayerCacheInfoWithoutResize(layer);
					}
					virtual const EarthView::World::Spatial::Atlas::ICacheInfo* getSelectionCacheInfo()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback();
							return returnValue;
						}
						else
							return this->CDisplayCache::getSelectionCacheInfo();
					}
					virtual ev_bool selectionCached() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDisplayCache::selectionCached();
					}
					virtual void setSelectionCached(_in ev_bool cached)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback(cached);
						}
						else
							return this->CDisplayCache::setSelectionCached(cached);
					}
					virtual EarthView::World::Spatial::Atlas::ICacheInfo* addCache(_in const EarthView::World::Spatial::Atlas::ILayer* ref_layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ICacheInfo* returnValue = m_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback(ref_layer);
							return returnValue;
						}
						else
							return this->CDisplayCache::addCache(ref_layer);
					}
					virtual void removeCache(_in const EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback(layer);
						}
						else
							return this->CDisplayCache::removeCache(layer);
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback();
						}
						else
							return this->CDisplayCache::clear();
					}
				};
				REGISTER_FACTORY_CLASS(CDisplayCacheProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getMapCacheInfo();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getMapCacheInfo();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getMapCacheInfo_ICacheInfo_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getMapCacheInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Display::ICachedBitmap*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Display::ICachedBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getCachedMap();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Display::ICachedBitmap* objXXXX = ptrNativeObject->getCachedMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Display::ICachedBitmap*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getCachedMap_ICachedBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					const EarthView::World::Display::ICachedBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getCachedMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getLayerCacheInfo(layer);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getLayerCacheInfo(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo_ICacheInfo_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getLayerCacheInfo(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getLayerCacheInfo2();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getLayerCacheInfo2();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfo2_ICacheInfo_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getLayerCacheInfo2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getLayerCacheInfoWithoutResize(layer);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getLayerCacheInfoWithoutResize(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getLayerCacheInfoWithoutResize_ICacheInfo_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getLayerCacheInfoWithoutResize(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getSelectionCacheInfo();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->getSelectionCacheInfo();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_getSelectionCacheInfo_ICacheInfo_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					const EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::getSelectionCacheInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::selectionCached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->selectionCached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_selectionCached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::selectionCached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool(void *pObjectXXXX, _in ev_bool cached )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::setSelectionCached(cached);
					else
						ptrNativeObject->setSelectionCached(cached);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_setSelectionCached_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool cached )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::setSelectionCached(cached);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::addCache(ref_layer);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->addCache(ref_layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ICacheInfo*  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_addCache_ICacheInfo_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ICacheInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::addCache(ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::removeCache(layer);
					else
						ptrNativeObject->removeCache(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_removeCache_void_ILayer_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::removeCache(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					if (dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::clear();
					else
						ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_Callback* pCallback )
				{
					CDisplayCacheProxy* ptr = dynamic_cast<CDisplayCacheProxy*>((EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CDisplayCache_clear_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CDisplayCache* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CDisplayCache*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CDisplayCache::clear();
				}
			}
		}
	}
}
