#ifndef EARTHVIEW_WORLD_SPATIAL_CACHE_UPDATE_PROXY_H
#define EARTHVIEW_WORLD_SPATIAL_CACHE_UPDATE_PROXY_H

#include "cacheinfo.h"
#include "cachemanagerglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			class CacheAccessor;

			class EV_CACHEMANAGER_DLL CacheUpdateProxy : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CacheUpdateProxy();

				virtual ~CacheUpdateProxy();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setName(EVString& name);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				const EVString& getName() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setCacheAccessor(CacheAccessor* pcacheaccessor);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void doUpdate();

			protected:

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool queryUpdateInfo(const _in CacheInfo& inCacheInfo, _out CacheInfo& outCacheInfo);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_void updateCacheImp(CacheInfo& newCacheInfo);

			private:
				CacheAccessor* mCacheAccessor;
				EVString mName;
			};
		}}}
#endif
