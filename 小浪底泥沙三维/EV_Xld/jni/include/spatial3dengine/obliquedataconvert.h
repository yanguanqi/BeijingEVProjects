#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEDATACONVERT_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEDATACONVERT_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "core/memoryallocatedobject.h"
#include "core/string_array.h"
#include "core/datastream.h"
#include "core/stringvector.h"
#include "graphic/mesh.h"
#include "spatial3dengine/obliquexmlparser.h"
#include "spatial3dengine/obliquedbutility.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager
			{
				class CObliqueDBUtility;
				class IObqDataset;

				class EV_Spatial3DEngine_DLL CObliqueDataConvert : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CObliqueDataConvert(_in EarthView::World::Core::CNameValuePairList *pList){}

				public:
					CObliqueDataConvert(){}
					virtual ~CObliqueDataConvert(){}
					static ev_bool convertObqXmlToIndexDB(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,const EVString& strTileXml);
					static EarthView::World::Core::StringVector queryMeshFilesByRegion(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, ev_int32 level, ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat);
					static EarthView::World::Core::MemoryDataStreamPtr queryCpdStreamByRegion(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, ev_int32 level, ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat);
					static EVString getCpdFileByRegion(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, ev_int32 level, ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat);
					/// <summary>
					/// 转换METADATA的信息到库
					/// </summary>
					/// <param name="strLodTreeExportXml">lodTreeExportXml文件路径</param>
					/// <returns></returns>
					static ev_bool convertLodTreeExportXmlToDatabase(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,const EVString& strLodTreeExportXml);
					
					/// <summary>
					/// 转换顶级索引到数据库
					/// </summary>
					/// <returns></returns>
					static ev_bool convertTopLodToDatabase(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility);

					/// <summary>
					/// 转换DEM METADATA的信息到库
					/// </summary>
					/// <returns></returns>
					static ev_bool convertDemMetaInfoToDatabase(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& strDemXml);

					/// <summary>
					/// 清除所有LOD表
					/// </summary>
					/// <returns></returns>
					static ev_bool clearAllLodTab(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility);

					/// <summary>
					/// 转换一个瓦块目录索引到数据库
					/// </summary>
					/// <param name="strTileXml">瓦块xml</param>
					/// <param name="destDBFile">输出数据库文件路径，一般会有多个瓦块目录，必须传同一个数据库输出路径</param>
					/// <returns>默认认为数据库在瓦块的上一级，数据库如果存在则直接写入，不存在则创建。重复写入会清空原来的</returns>
					static ev_bool convertLodXmlToDatabase(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,const EVString& strTileXml);

					/// <summary>
					/// 转换一个Data目录索引到数据库
					/// </summary>
					/// <param name="strDataFolder">Data目录</param>
					/// <param name="destDBFile">输出数据库文件路径，一般会有多个瓦块目录，必须传同一个数据库输出路径</param>
					/// <returns>默认认为数据库在瓦块的上一级，数据库如果存在则直接写入，不存在则创建。重复写入会清空原来的</returns>
					static ev_bool convertAllLodXmlToDatabase(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,const EVString& strTileXml);

					/// <summary>
					/// 在转完mesh后，把每个mesh的外框计算出来
					/// </summary>
					/// <param name="tileName">瓦块名称</param>
					/// <returns></returns>
					static ev_bool updateTileModelBound(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& tileName);
					/// <summary>
					/// 在转完mesh后，把每个mesh的外框计算出来
					/// </summary>
					/// <param name="tileName">瓦块名称</param>
					/// <returns></returns>
					static ev_bool updateTileModelBoundForMeshx(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
						const EVString& tileName,
						_out ev_real32& xmin, 
						_out ev_real32& xmax, 
						_out ev_real32& ymin, 
						_out ev_real32& ymax, 
						_out ev_real32& zmin, 
						_out ev_real32& zmax);
					/// <summary>
					/// 在转完mesh后，计算总外边框
					/// </summary>
					/// <param name="tileName">瓦块名称</param>
					/// <returns></returns>
					static ev_bool updateDatasetBound(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility);

					/// <summary>
					/// 计算mesh的外框，并入库
					/// </summary>
					/// <returns></returns>
					static ev_bool generalAndUpdateModelBound(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility
															,const EVString& tileName
															,const EVString& meshName
															,const EarthView::World::Graphic::CMeshPtr& meshPtr
															,_out ev_real32& xmin, _out ev_real32& xmax, _out ev_real32& zmin, _out ev_real32& zmax);

					/// <summary>
					/// 生成矢量与临时组的纹理坐标
					/// </summary>
					/// <returns></returns>
					static void generalTextureCoordinate(const EarthView::World::Graphic::CMeshPtr& meshPtr 
															,ev_real32 xmin, ev_real32 xmax, ev_real32 zmin, ev_real32 zmax
															);

					/// <summary>
					/// 更新变换矩阵
					/// </summary>
					/// <returns></returns>
					static ev_bool updateLocalMatrix(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility
													,ev_real64 posx, ev_real64 posy, ev_real64 posz
													,ev_real64 scalex, ev_real64 scaley, ev_real64 scalez
													,ev_real64 rotw, ev_real64 rotx, ev_real64 roty, ev_real64 rotz  );


					/// <summary>
					/// 打包索引到7z包
					/// </summary>
					/// <returns></returns>
					static ev_bool convertTileLodToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& tileName, const EVString& tileFolder);

					/// <summary>
					/// 产生模型与dem级别的映射表
					/// </summary>
					/// <returns></returns>
					static ev_bool generalLevelMapTable(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, ev_uint32 maxLevel, EarthView::World::Core::CStringArray& tileLodXmlVec);

					/// <summary>
					/// 把初始化元数据信息打包到本地
					/// </summary>
					/// <returns></returns>
					static ev_bool convertMetaInfoToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& destFolder);
					/// <summary>
					/// 把初始化元数据信息打包到本地
					/// </summary>
					/// <returns></returns>
					static ev_bool convertMetaInfoToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& destFolder,const EarthView::World::Core::MemoryDataStreamVector& sharedTextureVec, ev_uint8 maxLevel);
					/// <summary>
					/// 把初始化元数据信息打包到本地
					/// </summary>
					/// <returns></returns>
					static ev_bool convertMetaInfoToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,
						const EVString& destFolder,
						const EarthView::World::Core::MemoryDataStreamVector& sharedTextureVec, 
						ev_uint8 maxLevel,
						EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList recordInfoList);
				};

				/************************************************************************/
				/*            CUnifyMeshTool                                            */
				/************************************************************************/
				class EV_Spatial3DEngine_DLL CUnifyMeshTool : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CUnifyMeshTool(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CUnifyMeshTool();
					virtual ~CUnifyMeshTool();

					/// <summary>
					/// 设置初始化参数
					/// </summary>
					/// <param name="pDataset">数据集，只支持本地7z</param>
					/// <param name="terrainRevisors">推平参数</param>
					/// <returns></returns>
					void setWorkParam(IObqDataset* pDataset, const EarthView::World::Spatial3D::TerrainRevisorVector& terrainRevisors);

					/// <summary>
					/// 与所有顶级瓦块求交，获取求交的瓦块名字
					/// </summary>
					/// <param name="outTileNames">求交成功的瓦块名字</param>
					/// <returns></returns>
					void getIntersectTopTile(_out EarthView::World::Core::CStringArray& outTileNames, _out LodIndexVector& topLodIndexVec);

					/// <summary>
					/// 推平当前瓦块目录下所有需要推平的mesh
					/// </summary>
					/// <param name="tileName">瓦块名</param>
					/// <returns></returns>
					void unifyAllMeshInTile(const EVString& tileName, LodIndex* pTopLodIndex);

				protected:
					void clear();
				protected:
					IObqDataset* mpDataset;
					EarthView::World::Spatial3D::TerrainRevisorVector mTerrainRevisors;
					EarthView::World::Spatial::Math::CMatrix4 mWorldMatrix;
					EarthView::World::Spatial::Math::CMatrix4 mWorldMatrixWithoutHeight;
					LodIndexVector mTopLodIndexVec;
					EarthView::World::Core::CStringArray mTopTileNames;
				};

			}
		}
	}
}
#endif

