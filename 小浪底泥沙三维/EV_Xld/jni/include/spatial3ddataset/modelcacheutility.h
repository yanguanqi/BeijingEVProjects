/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：modelcacheutility.h
* 摘    要：该文件是模型缓存通用工具接口的声明
*
* 当前版本：1.0
* 作    者：邹先涛
* 完成日期：2013年7月15日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2013-7-15		邹先涛   1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL3D_SPATIAL3DDATASET_MODELCACHEUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_SPATIAL3DDATASET_MODELCACHEUTILITY_H

#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/altitudemode.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CMeshTemplateDataset;
				class CEntityDataset;

				class EV_Spatial3DDataset_DLL CModelCacheUtility : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CModelCacheUtility(){}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelCacheUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					///  清除数据集缓存
					/// </summary>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool clearDataset(const EVString& datasourceName
												, const EVString& datasetName
												, ev_bool bTemplDataset);

					/// <summary>
					///  缓存实体数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool writeDatasetModel(const EVString& datasourceName
													, const EVString& datasetName
													, const EVString& octCode
													,const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& thumbTextures
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& origTextures
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& cubeTextures
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& materials
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& progs
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& gpus
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& skeletons
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& animation);

					/// <summary>
					///  缓存实体模型库数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool writeTemplDBModel(const EVString& datasourceName
													, const EVString& datasetName
													, const EVString& octCode
													,const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& thumbTextures
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& origTextures
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& cubeTextures
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& materials
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& progs
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& gpus
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& skeletons
													, const EarthView::World::Spatial3D::Dataset::FeatureVector& animation);

					/// <summary>
					///  缓存模型库模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool writeTemplEntity(const EVString& datasourceName
													,const EVString& datasetName
													,const EVString& code
													,const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature
													);

					/// <summary>
					/// 删除实体数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool deleteDatasetModel(const EVString& datasourceName
													, const EVString& datasetName
													, const EVString& octCode
													, ev_uint32 id);

					/// <summary>
					/// 删除实体模型库数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool deleteTemplDBModel(const EVString& datasourceName
																								, const EVString& datasetName
																								, const EVString& octCode
																								,ev_uint32 id);

					/// <summary>
					/// 删除模型库模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool deleteTemplEntity(const EVString& datasourceName
																				,const EVString& datasetName
																				,ev_uint32 id);

					/// <summary>
					/// 更新实体数据集场景信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool updateDatasetEntityInfo(const EVString& datasourceName
														, const EVString& datasetName
														, const EVString& octCode
														, const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 更新模板数据集场景信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool updateTemplDatasetEntityInfo(const EVString& datasourceName
															, const EVString& datasetName
															, const EVString& octCode
															, const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 更新模板库基础信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool updateTemplDBInfo(const EVString& datasourceName
													, const EVString& datasetName
													, const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 读取实体数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool readDatasetModel(EarthView::World::Spatial3D::Dataset::CEntityDataset* pDataset
												, const EVString& octCode
												, ev_uint32 id
												,_out EarthView::World::Spatial::GeoDataset::IFeature*& pMeshFeature
												, _out EarthView::World::Spatial3D::Dataset::FeatureVector& thumbTextures
												, _out EarthView::World::Spatial3D::Dataset::FeatureVector& origTextures
												, _out EarthView::World::Spatial3D::Dataset::FeatureVector& cubeTextures
												, _out EarthView::World::Spatial3D::Dataset::FeatureVector& materials
												, _out EarthView::World::Spatial3D::Dataset::FeatureVector& progs
												, _out EarthView::World::Spatial3D::Dataset::FeatureVector& gpus
												,_out EarthView::World::Spatial3D::Dataset::FeatureVector& skeletons
												,_out EarthView::World::Spatial3D::Dataset::FeatureVector& animation);


					/// <summary>
					/// 读取实体模型库数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool readTemplDBModel(CMeshTemplateDataset* pDataset
													, const EVString& datasourceName
													, const EVString& datasetName
													, const EVString& octCode
													, ev_uint32 id
													,_out EarthView::World::Spatial::GeoDataset::IFeature*& pMeshFeature
													, _out EarthView::World::Spatial3D::Dataset::FeatureVector& thumbTextures
													, _out EarthView::World::Spatial3D::Dataset::FeatureVector& origTextures
													, _out EarthView::World::Spatial3D::Dataset::FeatureVector& cubeTextures
													, _out EarthView::World::Spatial3D::Dataset::FeatureVector& materials
													, _out EarthView::World::Spatial3D::Dataset::FeatureVector& progs
													, _out EarthView::World::Spatial3D::Dataset::FeatureVector& gpus
													,_out EarthView::World::Spatial3D::Dataset::FeatureVector& skeletons
													,_out EarthView::World::Spatial3D::Dataset::FeatureVector& animatio);

					/// <summary>
					/// 读取模型库模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static EarthView::World::Spatial::GeoDataset::IFeature* readTemplEntity(EarthView::World::Spatial3D::Dataset::CEntityDataset* pDataset
																							, ev_uint32 id
																							, const EVString& code
																							);

					/// <summary>
					/// 读取实体数据集模型的大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool readDatasetModelOrigTexture(const EVString& datasourceName
																, const EVString& datasetName
																, const EVString& octCode
																, const EarthView::World::Spatial3D::Dataset::FeatureVector& origFeatureVec
																, _out EarthView::World::Spatial3D::Dataset::TextureStreamVector& imgTextures);

					/// <summary>
					/// 读取实体模型库数据集模型的大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool readTemplDatasetOrigTexture(const EVString& datasourceName
																,const EVString& datasetName
																,const EVString& octCode
																,const EarthView::World::Spatial3D::Dataset::FeatureVector& origFeatureVec
																,_out EarthView::World::Spatial3D::Dataset::TextureStreamVector& texStreams);


					static ev_uint32 readMeshTemplID(const EVString& datasourceName
													,const EVString& datasetName
													,ev_uint32 meshInstID);


					/// <summary>
					/// 读本地模型数据集ani feature
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static  ev_bool readDatasetAniDataStream(const EVString& datasourceName
															,const EVString& datasetName
															,const EVString& octCode
															,ev_uint32 meshID
															,_out EarthView::World::Core::MemoryDataStreamPtr& stream
															);

					/// <summary>
					/// 读取模型库的ani feature
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool readTemplAniDataStream(const EVString& datasourceName
															,const EVString& datasetName
															,ev_uint32 meshID
															,_out EarthView::World::Core::MemoryDataStreamPtr& stream);


					/// <summary>
					/// 缓存实体数据集大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool writeDatasetModelOrigTexture(const EVString& datasourceName
																,const EVString& datasetName
																,const EVString& octCode
																,const EarthView::World::Spatial3D::Dataset::FeatureVector& origFeatureVec);


					/// <summary>
					/// 缓存实体模型库数据集大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static ev_bool writeTemplDatasetOrigTexture(const EVString& datasourceName
																, const EVString& datasetName
																, const EVString& octCode
																, const EarthView::World::Spatial3D::Dataset::FeatureVector& origFeatureVec);

					/// <summary>
					/// 修改缓存中的高度模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					static void updateAltitudeMode(const EVString& datasourceName
													,const EVString& datasetName
													,EarthView::World::Spatial::GeoDataset::EVDatasetType type
													,EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode
													,ev_real64 altitudeValue);

				};

			}//end namespace
		}
	}
}
#endif