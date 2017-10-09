#ifndef EARTHVIEW_WORLD_SPATIAL_CWEBDATAMETAINFOS_H
#define EARTHVIEW_WORLD_SPATIAL_CWEBDATAMETAINFOS_H
#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/idatametainfos.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/idatametainfos.h"
// using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 网络数据集元数据类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebDataMetaInfo
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWebDataMetaInfo();
				
			protected:
				CWebDataMetaInfo();
			private:
				CWebDataMetaInfo(_in CWebDataMetaInfo & obj);
			ev_private:
				CWebDataMetaInfo(_in EarthView::World::Core::CNameValuePairList* pList);	
			
			};

			/// <summary>
            /// 网络数据集元数据集合类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWebDataMetaInfos
				:public EarthView::World::Spatial::GeoDataset::IDataMetaInfos
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVWebDataMetaInfos();

				/// <summary>
                /// 获取元数据数目
                /// </summary>
                /// <returns></returns>
				virtual ev_uint32 getCount() const;

				/// <summary>
                /// 获取指定索引的元数据
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>元数据对象指针</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const;
				
				/// <summary>
                /// 添加元数据
                /// </summary>
				/// <param name="info">元数据</param>
                /// <returns>剩余元数据数目</returns>
				virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info);/////只实现了wmts
				
				/// <summary>
                /// 移除指定索引的元数据
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>剩余元数据数目</returns>
				virtual ev_uint32 remove(_in ev_uint32 index);
				
				/// <summary>
                /// 清空所含元数据
                /// </summary>
                /// <returns>0</returns>
				virtual ev_uint32 clear();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CEVWebDataMetaInfos* clone() const;
			protected:
				CEVWebDataMetaInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* source);
			ev_private:
				CEVWebDataMetaInfos(_in EarthView::World::Core::CNameValuePairList* pList);	
			private:
				EarthView::World::Spatial::GeoDataset::IDataSource* mpServer;
				ev_uint32 mnCount;
				vector<EVString> mlistLayerName;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mnType;
				friend class CEVSpatialServer;
			};
		}
	}
}
#endif


