#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IDISPLAYCACHE_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IDISPLAYCACHE_H

#include "spatialinterface/config.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ibitmap.h"
#include "spatialinterface/icachedbitmap.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayer;
				/// <summary>
				/// 缓存信息基类
				/// </summary>
				class EV_INTERFACE_DLL ICacheInfo : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~ICacheInfo();

				public:
					/// <summary>
					/// 获取缓存位图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回缓存位图</returns>
					virtual EarthView::World::Display::IBitmap * getCache() const;
					/// <summary>
					/// 获取缓存包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回包围盒</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getCacheExtent() const;
					/// <summary>
					/// 是否过时无效
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是返回true；否则返回false</returns>
					virtual ev_bool isDirty() const;
					/// <summary>
					/// 设置过时无效
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setDirty();
				ev_private:
					ICacheInfo( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ICacheInfo();
					C_DISABLE_COPY( ICacheInfo )
				};

				class EV_INTERFACE_DLL IDisplayCache : public EarthView::World::Core::CAllocatedObject
				{
				public:
					IDisplayCache();
					~IDisplayCache(); 
				
				public:
					virtual const ICacheInfo * getMapCacheInfo() const;
					virtual const EarthView::World::Display::ICachedBitmap *getCachedMap() const;

					virtual ICacheInfo * getLayerCacheInfo( _in const EarthView::World::Spatial::Atlas::ILayer *layer );
					virtual ICacheInfo * getLayerCacheInfo2( );
					virtual ICacheInfo * getLayerCacheInfoWithoutResize( _in const EarthView::World::Spatial::Atlas::ILayer *layer );
					virtual const ICacheInfo * getSelectionCacheInfo();

					virtual ev_bool selectionCached() const;
					virtual ev_void setSelectionCached( _in ev_bool cached );

					virtual ICacheInfo * addCache( _in const EarthView::World::Spatial::Atlas::ILayer *ref_layer );
					virtual ev_void removeCache( _in const EarthView::World::Spatial::Atlas::ILayer *layer );
					virtual ev_void clear();

				ev_private:
					IDisplayCache( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IDisplayCache )
				};
			}
		}
	}
}
#endif

