#ifndef EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CEARTHVIEWDATADRIVER2_H
#define EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CEARTHVIEWDATADRIVER2_H
#include "spatial2ddataexchange/datadriver.h"
#include "spatial2ddataexchange/earthviewdatadriver.h"
#include "spatialinterface/ifield.h"
#include "annotation/annofeatureclass.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// EarthView数据交换驱动2
				/// 继承自CEarthViewDataDriver
				/// 针对导入数据格式点线面在一个图层进行相应修改，导入时创建多个要素集
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CEarthViewDataDriver2 
					:public EarthView::World::Spatial::Convertor::CEarthViewDataDriver
				{
				public:
					virtual EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass*	
						parseFeatureClass(EarthView::World::Core::CDataStream& stream,ev_int64 skipedCount);
					virtual ev_int32 write(_in ev_uint32 index,_in EarthView::World::Core::CDataStream& stream);
					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					virtual ev_void close();
				protected:
					CEarthViewDataDriver2();
                ev_private:
					CEarthViewDataDriver2(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_void deleteFeatureClass(EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* pPointFeatureClass);
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* mpPointFeatureClass;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* mpLineFeatureClass;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* mpSurfaceFeatureClass;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* mpAnnoFeatureClass;
					friend class CDataDriverFactory;
				};
			}
		}
	}
}
#endif