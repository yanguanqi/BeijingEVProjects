/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：modelcommonutility.h
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

#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATASET_MODELDATASETUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATASET_MODELDATASETUTILITY_H

#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "databaseutility/sqldatabase.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFields;
			}
			namespace Geometry
			{
				class ISpatialReference;
				class CEnvelope;
			}
			namespace Math
			{
				class CVector3;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class EV_Spatial3DDataset_DLL CModelDatasetUtility :  public EarthView::World::Core::CAllocatedObject
				{
					friend class CEntityDataset;
					friend class CMeshTemplateDataset;
					friend class CMeshTemplateIterator;
					friend class CResourceDataset;
					friend class CResourceIterator;
					friend class CWebEntityDataset;
					friend class CWebMeshTemplateDataset;
				public:
					CModelDatasetUtility(){}
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelDatasetUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 获取表的结构
					/// </summary>
					/// <param name="db">数据库句柄</param>
					/// <param name="tab">表名</param>
					/// <param name="flds">传出的表结构</param>
					/// <returns>返回字段个数</returns>
					static ev_uint32 getTableFields(EarthView::World::Core::Database::CSqlDatabase& db, const EVString& tab, _out EarthView::World::Spatial::GeoDataset::IFields* flds);

					/// <summary>
					/// 清空数据库表记录
					/// </summary>
					/// <param name="db">数据库句柄</param>
					/// <param name="tab">表名</param>
					/// <returns>true成功，false失败</returns>
					static ev_bool clearTable(EarthView::World::Core::Database::CSqlDatabase& db,EVString& tab);

					/// <summary>
					/// 转到wgs84坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的包围盒</param>
					/// <param name="desEnvelope">投影后的包围盒</param>
					/// <returns></returns>
					static void convertToWgs84(const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, const EarthView::World::Spatial::Geometry::CEnvelope& resEnvelope, _out EarthView::World::Spatial::Geometry::CEnvelope& desEnvelope);

					/// <summary>
					/// 转到wgs84坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的点</param>
					/// <param name="desEnvelope">投影后的点</param>
					/// <returns></returns>
					static void convertToWgs84(const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, const EarthView::World::Spatial::Math::CVector3& resVector, _out EarthView::World::Spatial::Math::CVector3& desVector);

					/// <summary>
					/// 从wgs84转到投影坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的包围盒</param>
					/// <param name="desEnvelope">投影后的包围盒</param>
					/// <returns></returns>
					static void convertWgs84ToProjCoordinateData(const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, const EarthView::World::Spatial::Geometry::CEnvelope& resEnvelope, EarthView::World::Spatial::Geometry::CEnvelope& desEnvelope);

					/// <summary>
					/// 从wgs84转到投影坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的点</param>
					/// <param name="desEnvelope">投影后的点</param>
					/// <returns></returns>
					static void convertWgs84ToProjCoordinateData(const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, const EarthView::World::Spatial::Math::CVector3& resVector, EarthView::World::Spatial::Math::CVector3& desVector);

					/// <summary>
					/// 四元数转x,y,z三个轴旋转角度
					/// </summary>
					/// <param name="quter">x</param>
					/// <returns></returns>
					static EarthView::World::Spatial::Math::CVector3 QuaterToAngle(const EarthView::World::Spatial::Math::CQuaternion& quter);

					/// <summary>
					/// x,y,z三个轴旋转角度转四元数
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <param name="w">w</param>
					/// <returns></returns>
					static EarthView::World::Spatial::Math::CQuaternion AngleToQuater(const EarthView::World::Spatial::Math::CVector3& v3);

					/// <summary>
					/// 文件名是否是立方体纹理
					/// </summary>
					/// <param name="filename">文件名</param>
					/// <returns></returns>
					static ev_bool isCubeTexture(const EVString& filename);
				protected:
					/// <summary>
					/// 检查字段是否属于usertype表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkUserTypeField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于meshInst表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkMeshInstField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于mesh表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkMeshField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于entity表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkEntityField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于资源表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkResourceField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于资源关联表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkMeshRefField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于模板表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkMeshTmplField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于模板instance表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkMeshInstRefField(const EVString& fieldName);

					/// <summary>
					/// 检查字段是否属于模板属性表
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <returns>true是，false不是</returns>
					static ev_bool checkAttrRefField(const EVString& fieldName);

					/// <summary>
					/// 创建插入语句
					/// </summary>
					/// <param name="tab">表名</param>
					/// <param name="colNames">字段名</param>
					/// <param name="vals">字段值</param>
					/// <returns>返回语句</returns>
					static EVString makeInsertSql(const EVString& tab, const EVString& colNames, const EVString& vals);

					/// <summary>
					/// 创建更新语句
					/// </summary>
					/// <param name="tab">表名</param>
					/// <param name="vals">字段值</param>
					/// <param name="whereClause">条件</param>
					/// <returns>返回语句</returns>
					static EVString makeUpdateSql(const EVString& tab, const EVString& vals, const EVString& whereClause);

					static ev_bool appendFldNames(EVString& names, const EVString name);

					static ev_void copyFields(const EarthView::World::Spatial::GeoDataset::IFields* srcFlds, EarthView::World::Core::CStringArray& copyNames, _inout EarthView::World::Spatial::GeoDataset::IFields* dstFlds);

					static ev_void parseFieldNames(const EVString& fieldNames, EarthView::World::Core::CStringArray& fieldNameAry);

					static ev_void eraseAttFieldNames(const EVString& fieldNames, EVString& baseFieldNames);

					static ev_void parseWhereClause(const EVString& whereClause, EarthView::World::Core::CStringArray& condAry);

					static ev_uint32 existResourceData(EarthView::World::Core::Database::CSqlDatabase& db,
														const EVString& tab, 
														const EVString& resColumn,
														const EVString& idColumn,
														const EVString& fileName);

					static ev_bool existResourceRef(EarthView::World::Core::Database::CSqlDatabase& db,
													const EVString& tab,
													const EVString& meshRefColumn,
													ev_uint32 meshRefID,
													const EVString& resRefColumn,
													ev_uint32 resRefID);

					static ev_void setCantEditField(EarthView::World::Spatial::GeoDataset::IFields* fields, const EVString& name);

					static void getEntityDatasetFlds(EarthView::World::Core::Database::CSqlDatabase& db, ev_bool isTempl, const EVString& name, _out EarthView::World::Spatial::GeoDataset::IFields* flds);

					static void getWebEntityDatasetFlds(const EVString& name, ev_bool isTempl, _out EarthView::World::Spatial::GeoDataset::IFields* flds);

					static void getMeshTemplateDatasetFlds(_out EarthView::World::Spatial::GeoDataset::IFields* flds);

					static void getResourceDatasetFlds(ev_bool isTempl, _out EarthView::World::Spatial::GeoDataset::IFields* flds);
				};

			}//end namespace
		}
	}
}
#endif

