#ifndef EARTHVIEW_WORLD_SPATIAL_CEVWEBDATASETITER_H
#define EARTHVIEW_WORLD_SPATIAL_CEVWEBDATASETITER_H

#include "spatialinterface/idatasetiterator.h"
#include "spatialserverclient/spatialserverclientexports.h"
// using namespace EarthView::World::Spatial::GeoDataset;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 网络数据集迭代器类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebDatasetIterator
				:public EarthView::World::Spatial::GeoDataset::IDatasetIterator
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CWebDatasetIterator();

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
			ev_private:
				CWebDatasetIterator(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWebDatasetIterator();

				CWebDatasetIterator(_in CWebDatasetIterator & iterator);

				vector<EVString> mlistName;
				ev_uint32 mnIndex;
				ev_uint32 mnCount;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mnDatasetType;
				EarthView::World::Spatial::GeoDataset::IDataSource* mpServer;
			};

			/// <summary>
            /// EarthView网络数据集迭代器类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWebDatasetIterator
				:public EarthView::World::Spatial::CWebDatasetIterator
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVWebDatasetIterator();
				
				/// <summary>
				/// 下一个数据集对象，需要外部释放；如果超出范围，这返回NULL
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataset * next();
			ev_private:
				CEVWebDatasetIterator(_in EarthView::World::Core::CNameValuePairList* pList);		
			protected:
			
				CEVWebDatasetIterator();
				CEVWebDatasetIterator(_in CEVWebDatasetIterator & iterator);
			private:
				
				friend class CEVSpatialServer;
			};

			/// <summary>
            /// OGC WMS网络数据集迭代器类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSDatasetIterator
				:public EarthView::World::Spatial::CWebDatasetIterator
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CWMSDatasetIterator();

				/// <summary>
				/// 下一个数据集对象，需要外部释放；如果超出范围，这返回NULL
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataset * next();
			ev_private:
				CWMSDatasetIterator(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWMSDatasetIterator();
				CWMSDatasetIterator(_in CWMSDatasetIterator & iterator);
				
				friend class CWMSServer;
			};
			
			/// <summary>
            /// OGC WMTS网络数据集迭代器类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSDatasetIterator
				:public EarthView::World::Spatial::CWebDatasetIterator
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CWMTSDatasetIterator();

				/// <summary>
				/// 下一个数据集对象，需要外部释放；如果超出范围，这返回NULL
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataset * next();
			ev_private:
				CWMTSDatasetIterator(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWMTSDatasetIterator();
				CWMTSDatasetIterator(_in CWMTSDatasetIterator & iterator);
				friend class CWMTSServer;
			};
		}
	}
}
#endif


