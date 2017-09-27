#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATAMETAINFOS_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATAMETAINFOS_H

#include "core/memoryallocatedobject.h"

#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 数据集元信息集合接口，用于记录数据集的相关信息
				/// </summary>
				class EV_INTERFACE_DLL IDataMetaInfos :
					public EarthView::World::Core::CAllocatedObject
				{
				public:		
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDataMetaInfos();
				public:
					/// <summary>
					/// 获取元信息数目
					/// </summary>
					/// <returns>数据集元信息的数目</returns>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引的数据集元信息
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>按照指定索引范围对象，如果索引超出范围，则抛出异常</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(ev_uint32 index) const;
					/// <summary>
					/// 添加指定数据集元信息
					/// </summary>
					/// <param name="info">数据集元信息对象</param>
					/// <returns>添加后的索引</returns>
					virtual ev_uint32 add(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
					/// <summary>
					/// 移除指定索引的对象
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_uint32 remove(ev_uint32 index);
					/// <summary>
					/// 清楚所有对象
					/// </summary>
					/// <returns>清除对象的个数</returns>
					virtual ev_uint32 clear();
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IDataMetaInfos( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IDataMetaInfos();
				private:
					C_DISABLE_COPY(IDataMetaInfos);
				};
			}
		}
	}
}

#endif
