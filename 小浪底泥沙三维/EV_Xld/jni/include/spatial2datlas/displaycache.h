#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_DISPLAYCACHE_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_DISPLAYCACHE_H

#include "spatial2datlas/spatial2datlasconfig.h"
#include "spatialinterface/idisplaycache.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				///<summary>
				///缓存信息类
				///</summary>
				class EV_SPATIAL2DATLAS_DLL CCacheInfo : public EarthView::World::Spatial::Atlas::ICacheInfo
				{
				public:
					///<summary>
					///析构函数
					///</summary>
					~CCacheInfo();

				public:
					/// <summary>
					/// 获取缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns>图片缓存</returns>
					
					EarthView::World::Display::IBitmap * getCache() const;
					/// <summary>
					/// 获取缓存的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>缓存的范围</returns>
					
					const EarthView::World::Spatial::Geometry::IEnvelope * getCacheExtent() const;
					/// <summary>
					/// 检测缓存是否过期
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果过期,则返回true,反之则否</returns>
					
					ev_bool isDirty() const;
					/// <summary>
					/// 设置缓存过期
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void setDirty();
					ev_void lock();
					ev_bool locked() const;
					ev_void unLock();
				protected:
					ev_void resize( _in ev_int32 width, _in ev_int32 height );
					ev_void setExtent( _in const EarthView::World::Spatial::Geometry::IEnvelope *extent );

					EarthView::World::Display::IBitmap *m_pCache;
					EarthView::World::Spatial::Geometry::IEnvelope *m_pExtent;
					ev_bool mbDirty;
					ev_bool mbLocked;
				ev_private:
					CCacheInfo( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					CCacheInfo();
					CCacheInfo( _in ev_int32 width, _in ev_int32 height );

					C_DISABLE_COPY( CCacheInfo )

					friend class CDisplayCache;
					friend class CMap;
				};
				///<summary>
				///显示缓存类
				///</summary>
				class EV_SPATIAL2DATLAS_DLL CDisplayCache : public EarthView::World::Spatial::Atlas::IDisplayCache
				{
				public:
					~CDisplayCache();

				public:
					/// <summary>
					/// 获取地图的缓存信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>缓存信息</returns>
					
					const EarthView::World::Spatial::Atlas::ICacheInfo * getMapCacheInfo() const;
					/// <summary>
					/// 获取高速缓存位图
					/// </summary>
					/// <param name=""></param>
					/// <returns>高速缓存位图</returns>
					
					const EarthView::World::Display::ICachedBitmap *getCachedMap() const;
					/// <summary>
					/// 获取图层的缓存信息，返回的缓存位图宽高同窗口一致
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>缓存信息</returns>
					
					EarthView::World::Spatial::Atlas::ICacheInfo * getLayerCacheInfo( _in const EarthView::World::Spatial::Atlas::ILayer *layer );
					EarthView::World::Spatial::Atlas::ICacheInfo * getLayerCacheInfo2( );
					/// <summary>
					/// 直接获取图层的缓存信息，不检测其宽高是否与窗口一致
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>缓存信息</returns>

					EarthView::World::Spatial::Atlas::ICacheInfo * getLayerCacheInfoWithoutResize( _in const EarthView::World::Spatial::Atlas::ILayer *layer );
					/// <summary>
					/// 获取选择集的缓存信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>缓存信息</returns>
					
					const EarthView::World::Spatial::Atlas::ICacheInfo * getSelectionCacheInfo();
					/// <summary>
					/// 判断选择集是否做了缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果做了选择集的缓存则返回true,反之则否</returns>
					
					ev_bool selectionCached() const;
					/// <summary>
					/// 设置是否为选择集做缓存
					/// </summary>
					/// <param name="cached">如果为true,则为选择集做缓存,反之则否</param>
					/// <returns></returns>
					
					ev_void setSelectionCached( _in ev_bool cached );
					/// <summary>
					/// 为指定图层做缓存
					/// </summary>
					/// <param name="layer">待做缓存的图层</param>
					/// <returns>缓存信息</returns>
					
					EarthView::World::Spatial::Atlas::ICacheInfo * addCache( _in const EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					/// <summary>
					/// 移除指定图层的缓存信息
					/// </summary>
					/// <param name="layer">待移除缓存信息的图层</param>
					/// <returns></returns>
					
					ev_void removeCache( _in const EarthView::World::Spatial::Atlas::ILayer *layer );
					/// <summary>
					/// 清空所有缓存
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void clear();

				protected:
					ev_void resize( _in ev_int32 width, _in ev_int32 height );

					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
					EVString toXML() const;
					ev_void load( _in EarthView::World::Core::CDataStream &stream );
					ev_void load( _in const EVString &xml );

					CCacheInfo *m_pMapCacheInfo;
					EarthView::World::Display::ICachedBitmap *m_pCachedMap;
					CCacheInfo *m_pSelectionCacheInfo;
					ev_map<const EarthView::World::Spatial::Atlas::ILayer*, CCacheInfo*> *m_pLayerCacheInfo;
					ev_bool m_bSelectionCached;

					EarthView::World::Spatial::Geometry::IEnvelope *m_pDeviceExt;
				private:
					CCacheInfo *m_pLayerCacheInfo_2;
					EarthView::World::Core::CMutex mResizeMutex;
				ev_private:
					CDisplayCache( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					CDisplayCache();
					C_DISABLE_COPY( CDisplayCache )

					friend class CMap;
				};
			}
		}
	}
}
#endif


