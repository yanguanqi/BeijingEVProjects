#ifndef  EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASMERGE_H
#define  EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASMERGE_H

#include "spatiallasproxy/lasoptimizetool.h"

namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			class EV_LASCONVERTPROXY_DLL CLasMerge : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasMerge(EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasMerge();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasMerge();
				/// <summary>
				/// 设置参数
				/// </summary>
				/// <returns></returns>
				ev_void setParam(CLasMergeQuadTreeParam& param);
				/// <summary>
				/// 获取参数
				/// </summary>
				/// <returns></returns>
				CLasMergeQuadTreeParam& getParam();
				/// <summary>
				/// 合并多个.evlas数据集生成.evlasxg数据集
				/// </summary>
				/// <returns></returns>
				ev_void merge(const EVString& srcFolder,LasRecordInfoList lasRecordInfoList);

			private:
				ev_void mergeLasToLasxg();
				EarthView::World::Spatial::Math::CAxisAlignedBox collectLasInfos(CLasDataCollection*& collection,ev_uint32& maxLevel,ev_real64& minMinRange);
				ev_void collectLasInfo(ev_uint32 EVID,
					EVString lasFile,
					ev_uint32& index,
					CLasDataCollection*& collection,
					ev_uint32& maxLevel,
					ev_real64& minMinRange,
					ev_real64& firstLat,
					ev_real64& firstLon,
					ev_real64& firstAlt,
					EarthView::World::Spatial::Math::CMatrix4& firstLocalMat);
				EarthView::World::Spatial::Math::CMatrix4 getInverseMatrix(
					ev_real64 srcLat,ev_real64 srcLon,ev_real64 srcAlt,EarthView::World::Spatial::Math::CMatrix4 srcLocalMat,
					ev_real64 dstLat,ev_real64 dstLon,ev_real64 dstAlt,EarthView::World::Spatial::Math::CMatrix4 dstLocalMat);
				ev_void _createDstFolder(const EVString grpName,EVString& dstFolder,EVString& oriDstFolder,EVString& fileName);
				ev_void buildLasMergeQuadTree(EarthView::World::Spatial::Math::CAxisAlignedBox box,
					CLasDataCollection* collection,
					EVString dstFolder,
					EVString dstBaseName,
					ev_uint32& maxLevel,
					EarthView::World::Spatial::Math::CAxisAlignedBox& maxLeafQuadBox);
				ev_void iterateBuildLasMergeQuadTree(CLasMergeQuadTree* tree,
					CLasDataCollection* collection,
					EVString dstFolder,
					EVString dstBaseName,
					EarthView::World::Spatial::Math::CVector3 lv0Center,
					ev_uint32& baseRowNum,
					ev_uint32& baseColNum ,
					ev_uint32& maxLevel,
					EarthView::World::Spatial::Math::CAxisAlignedBox& maxLeafQuadBox);
				ev_bool shouldDivided(CLasMergeQuadTree* tree,CLasDataCollection* collection);
				ev_void partitionCollection(ev_list<CLasMergeQuadTree*> treeList,
					CLasDataCollection* collection,
					CLasDataCollection*& subCollection0,
					CLasDataCollection*& subCollection1,
					CLasDataCollection*& subCollection2,
					CLasDataCollection*& subCollection3);
				ev_bool boundsInBounds(EarthView::World::Spatial::Math::CAxisAlignedBox srcBox,
					EarthView::World::Spatial::Math::CAxisAlignedBox dstBox,
					ev_real64& distanceToBounds);
				ev_void getMaxBounds(EarthView::World::Spatial::Math::CAxisAlignedBox box,EarthView::World::Spatial::Math::CAxisAlignedBox& resultBox);
				ev_void iterateLasMergeQuadTree(CLasMergeQuadTree* tree,
					ev_real32 minRangeCoefficient,
					ev_uint32& numNodes,
					EarthView::World::Core::CXmlElement& element,
					ev_bool& validElement,
					ev_map<EVString,CLasTileInfo*>& tileInfoMap);
				EarthView::World::Core::CXmlElement createTileElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath,EVString name);
				EarthView::World::Core::CXmlElement createNodeElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath);
				EarthView::World::Core::CXmlElement createStatsElement(ev_uint32 numTiles,ev_uint32 numNodes,ev_uint32 maxLevel,ev_uint32 maxNumChildren);
				ev_void createMetaData(const EVString dstFile);
				ev_void createLODTreeExportXML(const EVString dstFile,const EVString tileName,const EVString tilePath);
				ev_void _writeDBInfo(const EVString oriDstFolder,
					const EVString dstFolder,
					const EVString fileName,
					const ev_uint32 numNodes,
					const ev_uint32 maxLevel,
					EarthView::World::Core::CXmlElement& rootElement,
					const ev_map<EVString,CLasTileInfo*>& tileInfoMap);
				ev_bool updateTileModelBound(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
					const EVString tileName,
					const ev_map<EVString,CLasTileInfo*>& tileInfoMap);
				void traverseTileModel(EarthView::World::Spatial3D::ModelManager::LodIndex* parent,
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,
					const EVString tileName,					
					const ev_map<EVString,CLasTileInfo*>& tileInfoMap);
				ev_bool convertTileLodToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,
					const EVString tileName,
					const ev_map<EVString,CLasTileInfo*>& tileInfoMap);
				ev_void writeRecordDB(const EVString dbPath);

			private:
				EVString mSrcFolder;
				EVString mDstFolder;
				ev_real64 mLon;
				ev_real64 mLat;
				ev_real64 mAlt;
				CLasMergeQuadTree* mpRoot;
				CLasMergeQuadTreeParam mParam;
				LasRecordInfoList mLasRecordInfoList;
			};
		}
	}
}
#endif
