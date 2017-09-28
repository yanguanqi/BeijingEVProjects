#ifndef  EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASLODGENERATOR_H
#define  EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASLODGENERATOR_H

#include "spatiallasproxy/lasoptimizetool.h"
#include "spatialobject/coordinatesystem/spatialreference.h"
#include "core/thread.h"

namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			class EV_LASCONVERTPROXY_DLL CLasLODGeneratorListener : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CLasLODGeneratorListener(EarthView::World::Core::CNameValuePairList *pList);
			public:
				CLasLODGeneratorListener();
				~CLasLODGeneratorListener();
				virtual ev_void processMsg(EVString msg);
				virtual ev_void processProgress(ev_real64 percent);
				virtual ev_void finished();
				virtual ev_void paused();
			};

			class CLasWorkQueueFrameListener;
			class EV_LASCONVERTPROXY_DLL CLasLODGenerator : public EarthView::World::Core::CBaseObject
			{
				friend class CLasWorkQueue;
				friend class CLasWorkQueueFrameListener;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasLODGenerator(EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasLODGenerator();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasLODGenerator();
				/// <summary>
				/// 设置las点云数据文件路径
				/// </summary>
				/// <param name="lasPaths">点云数据文件路径</param>
				/// <returns></returns>
				void setLASPaths(const EarthView::World::Core::StringVector& lasPaths);
				/// <summary>
				/// 静态函数：获取点云数据文件的源参考系
				/// </summary>
				/// <param name="lasPath">点云数据文件</param>
				/// <returns>点云文件的源参考系</returns>
				_extfree static EarthView::World::Spatial::Utility::CSpatialReference* getSpatialReference(const EVString& lasPath);				
				/// <summary>
				/// 添加监听
				/// </summary>
				/// <returns></returns>
				ev_void addListener(CLasLODGeneratorListener* observer);				
				/// <summary>
				/// 移除监听
				/// </summary>
				/// <returns></returns>
				ev_void removeListener(CLasLODGeneratorListener* observer);
				/// <summary>
				/// 设置参数,生成的所有.evlas数据集采用统一的参数
				/// </summary>
				/// <returns></returns>
				ev_void setParam(CLasLODParam* param);
				/// <summary>
				/// 终止转换
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void stopConvert();
				/// <summary>
				/// 把点云数据转换并生成LOD
				/// </summary>
				/// <param name="srcSr">源数据参考系</param>
				/// <param name="outPath">输出路径</param>
				/// <param name="name">生成的evlasxg数据集的名称</param>
				/// <param name="lasMergePerRegion">同一区域内的多个点云数据转换时是否合并</param>
				/// <returns></returns>
				ev_void convertLas(EarthView::World::Spatial::Utility::CSpatialReference* srcSr,const EVString& outPath,const EVString& evlasxgname,ev_bool lasMergePerRegion);

			private:
				ev_void _processLasFiles();
				ev_void _processMergeLasFiles();
				ev_void collectLasFileInfos();
				ev_bool boundsInBounds(EarthView::World::Spatial::Math::CAxisAlignedBox srcBox,EarthView::World::Spatial::Math::CAxisAlignedBox dstBox);
				ev_bool _processLasFile_inWorkThread(CLasFileInfo* lasFileInfo,ev_real64 percent,ev_int32 id);
				ev_bool _processMergeLasFile_inWorkThread(CLasMergedFileInfo* lasMergedFileInfo,ev_real64 percent,ev_int32 id);
				void coordinateConvert(
					EarthView::World::Spatial::Utility::CSpatialReference* srcSr,
					EarthView::World::Spatial::Utility::CSpatialReference* destSr,
					ev_real64 in_x,ev_real64 in_y,ev_real64 in_z,
					ev_real64& latitude,ev_real64& longitude,ev_real64& radius);
				EVString calcuLasBaseName(const EVString& firstName,const EVString& secondName);
				ev_void configDefaultParam(ev_int8 level,CLasLODParam* param);
				ev_void calcuLasQuadTreeLevel(CLasFileInfo* pLasFileInfo,CLasMergedFileInfo* pLasMergedFileInfo);
				ev_void iterateCalcuLasQuadTreeLevel(CLasFileInfo* pLasFileInfo,CLasMergedFileInfo* pLasMergedFileInfo);

				ev_bool generateLod(const EarthView::World::Core::StringVector& dataFiles,const EVString& lasBaseName,EarthView::World::Spatial::Math::CAxisAlignedBox box,
					CLasLODParam* param,ev_real64 percent,ev_real64 coefficient);
				ev_void _createDstFolder(const EVString& baseName,EVString& dstFolder,EVString& oriDstFolder);
				EarthView::World::Spatial::Math::CMatrix4 computeLocalTransform(CLasLODParam* param);
				CLasQuadTree* initQuadTree(EarthView::World::Spatial::Math::CAxisAlignedBox box,EVString dstFolder,EVString dstBaseName,CLasLODParam* param);
				ev_void buildLasChildTree(CLasQuadTree* parentTree,ev_uint32& baseRowNum,ev_uint32& baseColNum,EVString dstFolder,EVString dstBaseName,EarthView::World::Spatial::Math::CVector3 lv0Center);
				ev_void getChildByLevel(CLasQuadTree* tree, ev_uint32 level ,ev_list<CLasQuadTree*>& child);
				ev_bool optimizeLas(const EarthView::World::Core::StringVector& dataFiles,EarthView::World::Spatial::Math::CVector3 minPoint,ev_int8 level,ev_real32 lasOptimizePersent,ev_uint32 lasCountLowerLimit);
				ev_bool partitionLas(const EarthView::World::Core::StringVector& dataFiles,ev_list<CLasQuadTree*>& childTrees,CLasLODParam* param,ev_real64 coefficient);				
				ev_bool saveChildren(ev_list<CLasQuadTree*> children,CLasOptimizeParams params,ev_real64 coefficient,ev_uint32& numNodes,ev_map<EVString,EarthView::World::Spatial::Math::CAxisAlignedBox*>& tileBoundsMap);
				EarthView::World::Core::CXmlElement createTileElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath,EVString name);
				EarthView::World::Core::CXmlElement createNodeElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath);
				EarthView::World::Core::CXmlElement createStatsElement(ev_uint32 numTiles,ev_uint32 numNodes,ev_uint32 maxLevel,ev_uint32 maxNumChildren);
				ev_void createMetaData(CLasLODParam* param,const EVString& dstFile);
				ev_void createLODTreeExportXML(CLasLODParam* param,const EVString& dstFile,EarthView::World::Core::CStringArray tileNames,EarthView::World::Core::CStringArray tilePaths);
				ev_bool _writeDBInfo(CLasQuadTree* pRoot,CLasLODParam* param,const EVString& dstFolder,const EVString& fileName,const EVString oriDstFolder,const ev_uint32& numNodes,
					ev_map<EVString,EarthView::World::Spatial::Math::CAxisAlignedBox*>& tileBoundsMap);
				ev_bool updateTileModelBoundForLas(ev_map<EVString,EarthView::World::Spatial::Math::CAxisAlignedBox*>& tileBoundsMap,
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
					const EVString& tileName,
					_out ev_real32& xmin, 
					_out ev_real32& xmax, 
					_out ev_real32& ymin, 
					_out ev_real32& ymax, 
					_out ev_real32& zmin, 
					_out ev_real32& zmax);
				void traverseTileModel(ev_map<EVString,EarthView::World::Spatial::Math::CAxisAlignedBox*>& tileBoundsMap,
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
					const EVString& tileName, 
					EarthView::World::Spatial3D::ModelManager::LodIndex* parent,
					_out ev_real32& xmin, 
					_out ev_real32& xmax, 
					_out ev_real32& ymin, 
					_out ev_real32& ymax, 
					_out ev_real32& zmin, 
					_out ev_real32& zmax);
				ev_void saveCommonMat(EVString matFilePath);

				ev_void _notifyWorkDone();
				ev_void _notifyFailedDone();
				ev_void _notifyProcessMsg(EVString msg);
				ev_void _notityProcessProgress(ev_real64 percent);
				ev_void _notifyFinished();
				ev_void _notifyPaused();

			private:
				EarthView::World::Core::StringVector mLasPaths;
				EVString mDstFolder;
				EVString mLasXGName;
				EVString mGrpName;
				ev_int32 mLasRequestCount;
				ev_bool mbStopConvert;
				ev_bool mbLasMergePerRegion;
				EarthView::World::Spatial::Utility::CSpatialReference* mpSrcSr;
				EarthView::World::Spatial::Utility::CSpatialReference* mpTarSr;
				CLasWorkQueueFrameListener* mpFrameListener;
				ev_list<CLasLODGeneratorListener*> mObservers;
				ev_vector<CLasFileInfo*> mLasFileInfoVec;
				ev_vector<CLasMergedFileInfo*> mLasMergedFileInfoVec;
				ev_vector<CLasSegmentInfo*> mLasSegmentInfoVec;
				LasRecordInfoList mLasRecordInfoList;
				CLasLODParamMap mParamMap;
				CLasLODParam* mpParam;

			private:
				class CLasLODGeneratorWorkerFunc : public EarthView::World::Core::CThreadFunc
				{
				public:					
					CLasLODGeneratorWorkerFunc(CLasLODGenerator *parent) : mpLasLodGenerator(parent)
					{

					}

					~CLasLODGeneratorWorkerFunc()
					{
						mpLasLodGenerator = NULL;
					}

					ev_void run();
					CLasLODGenerator *mpLasLodGenerator;
				};

				ev_void startup();
				ev_void threadMain();
				ev_void start();
				EarthView::World::Core::CThread *mpThread;
				CLasLODGeneratorWorkerFunc *mpWorkerFunc;
				EV_MUTEX(mInitMutex)
				EV_THREAD_SYNCHRONISER(mInitSync)
			};
		}
	}
}
#endif
