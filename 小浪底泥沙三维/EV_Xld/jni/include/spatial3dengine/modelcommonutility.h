#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELCOMMONUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELCOMMONUTILITY_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "mathengine/axisalignedbox.h"
#include "mathengine/matrix4.h"
#include "spatialinterface/altitudemode.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D
		{
			namespace Dataset
			{
				class CEntityDataset;
			}
		}
		namespace Spatial{
			namespace GeoDataset{
				class IDataset;
				class IFeature;
				class IFeatureIterator;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class EV_Spatial3DEngine_DLL CModelDatasetSpatialUtility : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CModelDatasetSpatialUtility(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					CModelDatasetSpatialUtility(EarthView::World::Spatial3D::Dataset::CEntityDataset* ds);
					virtual ~CModelDatasetSpatialUtility();
				public:
					/*******一次性对数据集进行重建索引********************************/
					ev_bool rebuildSpatialIndex();

					/********分别对数据集每条记录重新计算索引，这种方式适合对需要进度条的情况********/

					//开始重建索引的准备工作
					ev_bool rebuildSpatialIndex_start();

					//返回是否还有下一条需要计算
					ev_bool rebuildSpatialIndex_hasNextRecord();

					//执行下一条记录的计算
					ev_bool rebuildSpatialIndex_execNextRecord();

					//保存到数据库，并重新开启事务
					ev_bool rebuildSpatialIndex_save();

					//停止计算
					ev_bool rebuildSpatialIndex_stop(ev_bool commitFlag);

					/********修改高度模式后，重新计算索引***************************************************/

					//一次性计算整个数据集
					ev_bool updateSpatialIndex(EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeVal);

					//分次计算数据集每条记录
					//开始重建索引的准备工作
					ev_bool updateSpatialIndex_start(EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeVal);

					//返回是否还有下一条需要计算
					ev_bool updateSpatialIndex_hasNextRecord();

					//执行下一条记录的计算
					ev_bool updateSpatialIndex_execNextRecord();

					//保存到数据库，并重新开启事务
					ev_bool updateSpatialIndex_save();

					//停止，事务结束
					ev_bool updateSpatialIndex_stop(ev_bool commitFlag);

					/**********获取把数据修改成某种高度模式时，需要的变换矩阵**********************/
					static void getTransformAfterChangeAltitude(const EarthView::World::Spatial::Math::CAxisAlignedBox& meshBound
																,const EarthView::World::Spatial::Math::CMatrix4& meshModelDBMatrix
																,const EarthView::World::Spatial::Math::CMatrix4& sceneMatrix
																,EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode
																,ev_real64 altitudeVal
																,ev_real64 dem
																,_out EarthView::World::Spatial::Math::CMatrix4& outSceneMatrix
																,_out EarthView::World::Spatial::Math::CMatrix4& outBoundMatrix
																);

				protected:
					ev_bool computerBoundForRecord(EarthView::World::Spatial::GeoDataset::IFeature* pFeature, EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeValue) ;
				private:
					EarthView::World::Spatial3D::Dataset::CEntityDataset* mpDataset;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* mpIter;
					EarthView::World::Spatial::GeoDataset::IFeature* mpFeature;
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
					ev_real64 mAltitudeVal;
				};

			}//namespace
		}
	}
}
#endif
