#ifndef EV_WEB_DATASOURCE_CACHE_MANAGER_H
#define EV_WEB_DATASOURCE_CACHE_MANAGER_H
#include "core/memoryallocatedobject.h"
#include "core/stringvector.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "spatialframeworkproxy/datasourcemanager/datasourceurl.h"

namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{

				class EV_FRAMEWORKPROXY_DLL CWebDataSourceCacheManager : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">参数键值对</param>
					/// <returns></returns>					
					CWebDataSourceCacheManager(_in EarthView::World::Core::CNameValuePairList *pList);

				public:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static CWebDataSourceCacheManager& instance();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CWebDataSourceCacheManager();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CWebDataSourceCacheManager();

					/// <summary>
					/// 设置给定的url是否使用缓存，如果isUsingCache为true只用缓存中的元数据信息，否则从服务器端下载元数据信息。
					/// url格式  CDataSourceURL::getURL() 函数获取
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setUsingCacheURL(const EVString& url, ev_bool isUsingCache);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isUsingCacheURL(const EVString& url);

					/// <summary>
					/// 获取当前缓存路径下已经缓存过数据的web服务URL列表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Core::StringVector getCachedURLList();
				protected:
				private:
				};
			}
		}
	}
}
#endif