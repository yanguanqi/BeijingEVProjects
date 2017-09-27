#ifndef EV_DATASETINFO_TABLE___H
#define EV_DATASETINFO_TABLE___H
#include"mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
#include "cachemanager/cachedata.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			// <summary>
			// 创建、读写、维护EV_DATASET_INFO表格
			// </summary>
			class EV_CACHEMANAGER_DLL DatasetInfoTable : public CacheTable
			{
			public:
				DatasetInfoTable();

				~DatasetInfoTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);


				/// <summary>
				/// 获取一条数据集信息
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool read(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					_inout CacheDatasetInfo& datasetInfo);

			ev_private:
				/// <summary>
				/// 获取数据集类型集合
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool read(_in EarthView::World::Core::Database::CSqlDatabase* pdbcon, _in ev_int32 type,  _out vector<CacheDatasetInfo> datasetinfos);

			public:
				/// <summary>
				/// 写入一条数据集记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool write(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString&	datasetName, const CacheDatasetInfo& datasetinfo);

				/// <summary>
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
				ev_bool deleteCacheData(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& datasetname);
			protected:
			private:

			};
		}}}
#endif