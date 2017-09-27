#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODEL_DATASET_H_
#define EARTHVIEW_WORLD_SPATIAL3D_MODEL_DATASET_H_

#include "spatialinterface/ifeatureclass.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"



enum ModelDatasetRefreshState
{
	MODEL_DATASET_NO_NEED_REFRESH,
	MODEL_DATASET_REFRESH_OK,			
	MODEL_DATASET_REFRESH_FAILD		
};

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelOctreeManager;

				class EV_Spatial3DDataset_DLL CModelDataset : public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CModelDataset(const EVString& datasetname);


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CModelDataset();


					/// <summary>
					/// 获取资源数据集句柄
					/// </summary>
					/// <param name="bFromTemplate">TRUE获取模板库的资源数据集，FALSE获取本地模型资源数据集</param>
					/// <returns>IFeatureClass*，数据集句柄</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef();

					/// <summary>
					/// 数据集是否可编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool canEdit();

					/// <summary>
					/// 刷新数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>0:不需要刷新 1：刷新成功 2:刷新失败</returns>	
					virtual ev_int32 refreshDataset();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isTemplate() const {return mIsTempl;}
				public:
					/// <summary>
					/// 获取别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集别名</returns>
					virtual EVString getAliasName() const;
				protected:
					
					EVString mDatasetName;  ///数据集名称，对应的数据库的表名
					EVString mAliasName;       ///别名，用户定义的数据集的名字
					ev_int32 mSRID;//地理或投影坐标系ID
					ev_uint32 mID;
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;//坐标参考系
					
					ev_int32 mDatasetVersion;
					ev_bool mIsTempl;//数据集中的模型是否从模板中来


					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpLocalResDataset;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpTemplResDataset;
					EarthView::World::Spatial::GeoDataset::IFields* mpFlds;
					EarthView::World::Spatial::GeoDataset::IFields* mpAttrFlds;
					EarthView::World::Spatial::GeoDataset::IFields* mpCustomerFlds;

					EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelop;  //数据集的包围盒

					/******************
					八叉树索引
					******************/
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* mpOctreeMnger;
					ev_bool mIsDataDirty;  //数据集是否被更新过
ev_private:
					/// <summary>
					/// 获取八叉树管理器句柄
					/// </summary>
					/// <param name="camera">相机</param>
					/// <param name="objectIDs">可见的对象ID集</param>
					/// <returns>ev_bool，TURE成功，FALSE失败</returns>
					virtual EarthView::World::Spatial3D::Dataset::CModelOctreeManager* getSpatialIndex() const;

					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CModelDataset(_in EarthView::World::Core::CNameValuePairList* pList);
				};
			}
		}
	}
}
#endif 