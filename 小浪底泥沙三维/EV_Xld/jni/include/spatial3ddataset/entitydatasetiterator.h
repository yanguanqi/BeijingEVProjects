#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYDATASETITERATOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYDATASETITERATOR_H
 
#include "spatialinterface/idatasetiterator.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include"databaseutility/sqlquery.h"

namespace EarthView{
	namespace World{
		namespace Core{
			namespace Database{

			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelDataSource;

				class EV_Spatial3DDataset_DLL CEntityDatasetIterator : public EarthView::World::Spatial::GeoDataset::IDatasetIterator
				{
					friend class CModelDataSource;
				private:
					CModelDataSource* mpDatasource;
					EarthView::World::Core::Database::CSqlQuery mQuery;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEntityDatasetIterator();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEntityDatasetIterator(_in EarthView::World::Core::CNameValuePairList *pList);
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEntityDatasetIterator(CEntityDatasetIterator & iterator);
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEntityDatasetIterator();

					/// <summary>
					/// 下一个数据集对象，如果超出范围，这返回NULL
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset * next();

					/// <summary>
					/// 获取迭代器中数据集的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集的个数</returns>
					virtual ev_uint32 getSize() const;

					/// <summary>
					/// 获取迭代器中数据集的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;

				};
				

			}//namespace
		}
	}
}

#endif
