#ifndef EARTHVIEW_WORLD_SPATIAL_DATA_SETINFO_CACHE_ACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_DATA_SETINFO_CACHE_ACCESSOR_H
#include "cachemanager/cacheaccessor.h"
#include "cachemanager/cacheasynchronousaccessor.h"
#include "cachemanager/datasetinfotable.h"
namespace EarthView{
	namespace World{
		namespace Spatial{


			class EV_CACHEMANAGER_DLL DataSetInfoCacheAccessor : public EarthView::World::Spatial::CacheAccessor
			{
				friend class CacheAccessorManager;
			public:
				DataSetInfoCacheAccessor();

				~DataSetInfoCacheAccessor();

				/// <summary>
				/// 获取一条数据集信息, 用户填写datasetinfo中的数据集名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool read(const EVString& datasourceName,
					_inout EarthView::World::Spatial::CacheDatasetInfo& datasetinfo);

			ev_private :
				/// <summary>
				/// 获取数据集类型集合
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool read(const EVString& datasourceName, ev_int32 type,  _out vector<EarthView::World::Spatial::CacheDatasetInfo>& datasetinfos);

			public :
				/// <summary>
				/// 写入一条数据集记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool write(const EVString& datasourceName, 
					const EVString&	datasetName, 
					const EarthView::World::Spatial::CacheDatasetInfo& datasetinfo);

				ev_bool clearDatasetInfo(const EVString& datasourcename);
				ev_bool deleteDatasetInfo(const EVString& datasourcename, const EVString& datasetname);
			protected:
			private:
			};

			class EV_CACHEMANAGER_DLL DataSetInfoCacheSyncAccessor : public EarthView::World::Spatial::CacheSyncWriteAccessor
			{
			public:
				DataSetInfoCacheSyncAccessor();

				~DataSetInfoCacheSyncAccessor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 writeCacheFunc();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool write(const EVString& datasourceName, 
					const EVString&	datasetName,
					const CacheDatasetInfo& datasetinfo);
			protected:
			private:
				class Param : public EarthView::World::Spatial::CacheSyncWriteAccessor::PrivateData
				{
				public:
					EVString datasourceName;
					EVString	datasetName;
					EarthView::World::Spatial::CacheDatasetInfo datasetinfo;


					Param(const EVString& datasourceName, 
						const EVString&	datasetName,
						const EarthView::World::Spatial::CacheDatasetInfo& datasetinfo)
						: datasourceName(datasourceName),
						datasetName(datasetName),
						datasetinfo(datasetinfo)
					{

					}
					Param(){};
					~Param(){};
				};
			};
		}}}
#endif