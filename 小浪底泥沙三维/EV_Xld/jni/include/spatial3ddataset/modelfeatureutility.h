/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：modelfeatureutility.h
* 摘    要：该文件是模型通用工具接口的声明
*
* 当前版本：1.0
* 作    者：邹先涛
* 完成日期：2013年6月28日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2012-10-16		邹先涛   1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELFEATUREUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELFEATUREUTILITY_H

#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatialinterface/altitudemode.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;
				class IDataset;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class ISpatialReference;
			}}}}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class  EV_Spatial3DDataset_DLL CModelFeatureUtility : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CModelFeatureUtility(){}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelFeatureUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					static ev_bool checkDDS(const EVString& filename);

					/// <summary>
					/// 释放feature容器内存
					/// </summary>
					/// <param name="featureVec">feature容器</param>
					/// <returns></returns>
					static void releaseFeatureVector(EarthView::World::Spatial3D::Dataset::FeatureVector& featureVec);

					/// <summary>
					/// 释放feature内存
					/// </summary>
					/// <param name="feature">feature</param>
					/// <returns></returns>
					static void releaseFeature(EarthView::World::Spatial::GeoDataset::IFeature* feature);

					/// <summary>
					/// 设置feature容器的流为空
					/// </summary>
					/// <param name="featureVec">feature容器</param>
					/// <returns></returns>
					static void setFeatureVectorDataStreamNull(const EarthView::World::Spatial3D::Dataset::FeatureVector& featureVec);

					/// <summary>
					/// 设置实体ID字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="entID">实体ID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityID(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, ev_uint32 entID);

					/// <summary>
					/// 获取实体ID字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回实体ID</returns>
					static ev_uint32 getEntityID(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置实体名称字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="entName">实体ID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityName(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EVString& entName);

					/// <summary>
					/// 获取实体名称字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回实体名称</returns>
					static EVString getEntityName(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置实体包围盒字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="box">实体包围盒</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityBound(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 获取实体包围盒字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回实体包围盒</returns>
					static EarthView::World::Spatial::Math::CAxisAlignedBox getEntityBound(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置指定坐标系统类型的位置值， 输入的是地理坐标（图层的feature）
					/// </summary>
					/// <param name="spatialRef">空间参考</param>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="pos">地理坐标</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityPos(EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CVector3& pos);
					static ev_bool setEntityPos(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CVector3& pos);

					/// <summary>
					/// 获取原始坐标系统的位置值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回位置值</returns>
					static EarthView::World::Spatial::Math::CVector3 getOriginalEntityPos(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 获取地理坐标系统的位置（图层的feature）
					/// </summary>
					/// <param name="spatialRef">空间参考</param>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回位置值</returns>
					static EarthView::World::Spatial::Math::CVector3 getWgs84EntityPos(EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置实体缩放（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="scale">缩放</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityScale(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CVector3& scale);

					/// <summary>
					/// 获取实体缩放（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回实体缩放</returns>
					static EarthView::World::Spatial::Math::CVector3 getEntityScale(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置实体旋转（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="qua">旋转</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityQuaternion(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 获取实体旋转（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回实体缩放</returns>
					static EarthView::World::Spatial::Math::CQuaternion getEntityQuaternion(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置是否从模型库字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="flag">true是模型库拖入的，false直接导入</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setEntityFromTemplate(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, ev_bool flag);

					/// <summary>
					/// 获取是否从模型库字段值（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>true是模型库拖入的，false直接导入</returns>
					static ev_bool getEntityFromTemplate(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);


					/// <summary>
					/// 设置实体的高度模式（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="altitudeMode">高度模式</param>
					/// <param name="altitudeVal">高度模式值</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setAltitude(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode, ev_real64 altitudeVal);

					/// <summary>
					/// 获取实体的高度模式（图层的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="altitudeMode">高度模式</param>
					/// <param name="altitudeVal">高度模式值</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool getAltitude(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _out EarthView::World::Spatial::Utility::EVAltitudeMode& altitudeMode, _out  ev_real64& altitudeVal);


					/// <summary>
					/// 设置实体关联的mesh的ID值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="meshID">meshID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshID(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, ev_uint32 meshID);

					/// <summary>
					/// 获取实体关联的mesh的ID值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回meshID</returns>
					static ev_uint32 getMeshID(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置模型库模型的ID值（模型库的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="meshTmplID">模型库中ID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshTmplID(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, ev_uint32 meshTmplID);

					/// <summary>
					/// 获取模型库模型的ID值（模型库的feature）
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>模型库数据集的ID</returns>
					static ev_uint32 getMeshTmplID(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh名称字段值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="meshName">mesh名称</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshName(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EVString& meshName);

					/// <summary>
					/// 获取mesh名称字段值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回mesh名称</returns>
					static EVString getMeshName(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh文件名称字段值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="meshFilename">mesh文件名称字段值</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshFilename(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EVString& meshFilename);

					/// <summary>
					/// 获取mesh文件名称字段值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回mesh文件名称字段值</returns>
					static EVString getMeshFilename(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh数据流字段值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="meshData">mesh数据流</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshData(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, EarthView::World::Core::MemoryDataStreamPtr meshData);

					/// <summary>
					/// 获取mesh数据流字段值
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回mesh数据流字段值</returns>
					static EarthView::World::Core::MemoryDataStreamPtr getMeshData(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh在模型库中偏移位置
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="pos">模型库中偏移位置</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshPos(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CVector3& pos);

					/// <summary>
					/// 获取esh在模型库中偏移位置
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回模型库中偏移位置</returns>
					static EarthView::World::Spatial::Math::CVector3 getMeshPos(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh在模型库中缩放
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="scale">模型库中缩放</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshScale(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CVector3& scale);

					/// <summary>
					/// 获取mesh在模型库中缩放
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回模型库中缩放</returns>
					static EarthView::World::Spatial::Math::CVector3 getMeshScale(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh在模型库中旋转
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="qua">模型库中旋转</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setMeshQuaternion(EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, const EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 获取mesh在模型库中旋转
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <returns>返回模型库中旋转</returns>
					static EarthView::World::Spatial::Math::CQuaternion getMeshQuaternion(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature);

					/// <summary>
					/// 设置mesh关联的资源ID
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="resID">资源ID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setResID(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, ev_uint32 resID);

					/// <summary>
					/// 获取mesh关联的资源ID
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回资源ID</returns>
					static ev_uint32 getResID(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 设置mesh关联的资源文件名
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="resFilename">资源文件名</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setResFilename(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, const EVString& resFilename);

					/// <summary>
					/// 获取mesh关联的资源文件名
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回资源文件名</returns>
					static EVString getResFilename(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 设置mesh关联的资源类别
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="type">资源类别</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setResType(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, EarthView::World::Spatial3D::Dataset::MaterialResourceType type);

					/// <summary>
					/// 获取mesh关联的资源类别
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回资源类别</returns>
					static EarthView::World::Spatial3D::Dataset::MaterialResourceType getResType(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 设置mesh关联的资源数据流
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="resData">资源数据流</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setResData(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, EarthView::World::Core::MemoryDataStreamPtr resData);

					/// <summary>
					/// 获取mesh关联的资源数据流
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回资源数据流</returns>
					static EarthView::World::Core::MemoryDataStreamPtr getResData(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 设置mesh与资源的关联表的资源ID
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="resID">关联表的资源ID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setRefResID(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, ev_uint32 resID);

					/// <summary>
					/// 获取mesh与资源的关联表的资源ID
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回mesh与资源的关联表的资源ID</returns>
					static ev_uint32 getRefResID(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 设置mesh与资源的关联表的meshID
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="meshID">关联表的meshID</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setRefMeshID(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, ev_uint32 meshID);

					/// <summary>
					/// 获取mesh与资源的关联表的meshID
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回mesh与资源的关联表的meshID</returns>
					static ev_uint32 getRefMeshID(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 设置mesh资源的引用计数
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <param name="refCount">引用计数</param>
					/// <returns>成功true，失败false</returns>
					static ev_bool setResRefCount(EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, ev_uint32 refCount);

					/// <summary>
					/// 获取mesh资源的引用计数
					/// </summary>
					/// <param name="pResFeature">mesh的资源feature</param>
					/// <returns>返回mesh资源的引用计数</returns>
					static ev_uint32 getResRefCount(const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature);

					/// <summary>
					/// 获取包围盒中心点
					/// </summary>
					/// <param name="pMeshFeature">mesh的feature</param>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高度</param>
					/// <returns>成功true，失败false</returns>
					static void getBoundCenter(const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude);

					/// <summary>
					/// 把pSrcFeature合并到pOutFeature中去
					/// </summary>
					/// <param name="pOutFeature"></param>
					/// <param name="pSrcFeature">纬度</param>
					/// <returns>成功true，失败false</returns>
					static void mergeFeature(_inout EarthView::World::Spatial::GeoDataset::IFeature*& pOutFeature, _in const EarthView::World::Spatial::GeoDataset::IFeature* pSrcFeature);
				};

			}//end namespace
		}
	}
}
#endif