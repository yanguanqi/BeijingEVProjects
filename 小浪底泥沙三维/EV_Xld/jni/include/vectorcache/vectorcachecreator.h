#ifndef EARTHVIEW_WORLD_SPATIAL_VECTORCACHE_VECTORCACHECREATOR_H
#define EARTHVIEW_WORLD_SPATIAL_VECTORCACHE_VECTORCACHECREATOR_H
#include "vectorcache/evvectorcache_api.h"
#include "core/memoryallocatedobject.h"
#include "vectorcache/vectorcacheinfo.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorCache
			{
				/// <summary>
				/// 具体矢量缓存操作类，不对外
				/// </summary>
				class CVectorCache;

				/// <summary>
				/// 矢量缓存制作类
				/// </summary>
				class EVVECTORCACHE_API CVectorCacheCreator
					:public EarthView::World::Core::CAllocatedObject
				{
				private:
					CVectorCache* mpCache;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* mpParam;
					ev_vector<EarthView::World::Spatial::GeoDataset::IDataset*> mlistDataset;
					ev_vector<EarthView::World::Spatial::VectorCache::CCacheProcessInfo*> mlistProcessInfo;
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage mnMessageInfo;
				ev_private:
					CVectorCacheCreator(_in EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CVectorCacheCreator();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CVectorCacheCreator();

					/// <summary>
					/// 设置切割参数
					/// </summary>
					/// <param name="param">切割参数对象</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setBasicParam(_in const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* param);

					/// <summary>
					/// 字符转换
					/// </summary>
					/// <param name="param">转换之前的字符</param>
					/// <returns></returns>
					EVString nameSwitch(EVString& beforeName);

					/// <summary>
					/// 获取切割参数
					/// </summary>
					/// <returns>切割参数对象指针</returns>
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* getBasicParamRef()const;

					//ev_bool setDataSource(_in const IDataSource* datasource);//引用
					//const IDataSource* getDataSource();

					/// <summary>
					/// 添加切割信息
					/// </summary>
					/// <param name="dataset">切割数据集</param>
					/// <param name="info">切割信息</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool addCreateDatasetInfo(_in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset,_in const EarthView::World::Spatial::VectorCache::CCacheProcessInfo* info);
					
					/// <summary>
					/// 生成缓存
					/// </summary>
					/// <returns>处理结果，0正确</returns>
					EarthView::World::Spatial::VectorCache::EVVectorCacheProcessResult makeCache();

					/// <summary>
					/// 获取切割进程信息
					/// </summary>
					/// <returns>切割进程对象指针</returns>
					const EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* getProcessMessageRef() const;

					/// <summary>
					/// 终止程序
					/// </summary>
					/// <returns></returns>
					void stopProcess();

					/// <summary>
					/// 检测是否可用传入的名称创建数据库表
					/// </summary>
					/// <param name="tableNameList">待检测名称列表</param>
					/// <param name="errorNameList">错误名称列表</param>
					/// <returns>检测成功返回true，否则返回false</returns>
					static ev_bool checkValidTableName(_in EarthView::World::Core::StringVector &  tableNameList, _out EarthView::World::Core::StringVector& errorNameList );
				protected:
					//写配置文件
					ev_bool writeETM();
				};
			}
		}
	}
}
#endif


