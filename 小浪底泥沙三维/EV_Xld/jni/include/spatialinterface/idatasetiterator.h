#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETYR_IDATASETITERATOR_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETYR_IDATASETITERATOR_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				/// <summary>
				/// 数据集迭代器类，用于遍历数据集。
				/// </summary>
				class EV_INTERFACE_DLL IDatasetIterator :
					public EarthView::World::Core::CAllocatedObject
				{
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDatasetIterator();
					/// <summary>
					/// 下一个数据集对象，如果超出范围，这返回NULL
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
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
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
					///
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IDatasetIterator( EarthView::World::Core::CNameValuePairList *pList );
					///
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDatasetIterator();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					C_DISABLE_COPY(IDatasetIterator);
				};
			}
		}
	}
}

#endif
