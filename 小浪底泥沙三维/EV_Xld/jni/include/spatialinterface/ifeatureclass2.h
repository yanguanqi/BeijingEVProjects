#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATURECLASS2_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATURECLASS2_H

#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class EV_INTERFACE_DLL ISpatialIndexParam:public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					ISpatialIndexParam(_in EarthView::World::Core::CNameValuePairList* pList){mSpatialIndexType = SIE_UNKNOWN;}
				public:
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexType(){return mSpatialIndexType;}
					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
				ev_internal:
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					ISpatialIndexParam(){mSpatialIndexType = SIE_UNKNOWN;}
				protected:
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum mSpatialIndexType;
				};
				/// <summary>
				/// 要素类接口
				/// </summary>
				class EV_INTERFACE_DLL IFeatureClass2 :
					public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
				public:	
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IFeatureClass2();
				public:
					/// <summary>
					/// 为数据集，创建指定空间索引
					/// </summary>
					/// <param name="spaIndex">指定空间索引类型</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param);
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IFeatureClass2( EarthView::World::Core::CNameValuePairList *pList );
					///
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IFeatureClass2();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					C_DISABLE_COPY(IFeatureClass2);
				};
			}
		}
	}
}

#endif
