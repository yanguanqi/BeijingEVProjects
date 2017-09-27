#ifndef EARTHVIEW_WORLD_SPATIAL_OCTREE_CACHE_UPDATE_PROXY_H
#define EARTHVIEW_WORLD_SPATIAL_OCTREE_CACHE_UPDATE_PROXY_H
#include "cacheupdateproxy.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			class EV_CACHEMANAGER_DLL OctreeCacheUpdateProxy : public CacheUpdateProxy
			{
			public:
				OctreeCacheUpdateProxy();

				~OctreeCacheUpdateProxy();
			protected:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool queryUpdateInfo(const _in CacheInfo& inCacheInfo, _out CacheInfo& outCacheInfo);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void updateCacheImp(CacheInfo& newCacheInfo);
			private:
			};
		}}}
#endif