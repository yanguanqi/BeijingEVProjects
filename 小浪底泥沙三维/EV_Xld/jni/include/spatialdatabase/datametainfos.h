#ifndef EARTHVIEW_WORLD_SPATIALDATABASE_DATAMETAINFOS_H
#define EARTHVIEW_WORLD_SPATIALDATABASE_DATAMETAINFOS_H

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "spatialinterface/idatametainfos.h"


namespace EarthView{
    namespace World{
        namespace Spatial{
			namespace GeoDataset{
		   ///<summary>
		   ///数据集元信息集合
		   ///</summary>
            class EV_SPATIALDATABASE_DLL CDataMetaInfos : public EarthView::World::Spatial::GeoDataset::IDataMetaInfos
            {
            private:
                vector<EarthView::World::Spatial::GeoDataset::IDataMetaInfo*> mInfos;
ev_private:
				/// <summary>
				/// 用于封装的构造函数
				/// </summary>
				/// <param name="pList">参数健值对</param>
				/// <returns></returns>
				CDataMetaInfos(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ~CDataMetaInfos();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                CDataMetaInfos();
            public:
				/// <summary>
				/// 获取数据集元信息的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集元信息的个数</returns>
                virtual ev_uint32 getCount() const;
				/// <summary>
				/// 获取索引为index处的数据集元信息
				/// </summary>
				/// <param name="index">索引号</param>
				/// <returns>数据集元信息</returns>
                virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(ev_uint32 index) const;
				/// <summary>
				/// 添加数据集元信息
				/// </summary>
				/// <param name="info">索引信息对象</param>
				/// <returns>数据集元信息的个数</returns>
                virtual ev_uint32 add(const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
				/// <summary>
				/// 移除索引为index处的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集元信息的个数</returns>
                virtual ev_uint32 remove(ev_int32 index);
				/// <summary>
				/// 删除所有的数据集元信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>0</returns>
                virtual ev_uint32 clear();

            }; 
			} //end namespace
        }
    }
}

#endif
