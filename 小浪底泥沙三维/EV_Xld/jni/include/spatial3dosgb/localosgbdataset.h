#ifndef EARTHVIEW_WORLD_SPATIAL3D_LOCALOSGBDATASET
#define EARTHVIEW_WORLD_SPATIAL3D_LOCALOSGBDATASET

#include "spatial3dosgb/spatial3dosgbconfig.h"
#include "spatialserverclient/evdatasets.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			

			    class CLocalOSGBDataSource;
				class EV_Spatial3D_OSGB_DLL CLocalOSGBDataset : public EarthView::World::Spatial::IOSGBDataset
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLocalOSGBDataset(_in EarthView::World::Core::CNameValuePairList *pList);

				public:


					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">数据集的名字</param>
					/// <returns></returns>
					CLocalOSGBDataset(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataSource* ref_DataSource);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CLocalOSGBDataset();

					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;

					virtual ev_bool getMetaData(_out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata);
					

					virtual  ev_bool getOSGBData(const EVString& fileName,_out EarthView::World::Core::MemoryDataStreamPtr& osgbData);
				private:
					CLocalOSGBDataSource* mpDataSource;
					EVString mRealDatasetPath;
					EVString mDataPath;
					EVString mDataSetName;

				};
			
		}
	}
}
#endif
