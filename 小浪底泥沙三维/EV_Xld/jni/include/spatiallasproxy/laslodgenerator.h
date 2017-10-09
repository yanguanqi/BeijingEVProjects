#ifndef  _LASLODGENERATOR_H
#define  _LASLODGENERATOR_H

#include "spatiallasproxy/lasoptimizetool.h"
#include "core/thread.h"
#include "spatial3dengine/obliquedbutility.h"

namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			class EV_LASCONVERTPROXY_DLL CLasLODGenerateListener : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CLasLODGenerateListener(EarthView::World::Core::CNameValuePairList *pList);
			public:
				CLasLODGenerateListener();
				~CLasLODGenerateListener();
				virtual ev_void processMsg(EVString msg);
				virtual ev_void paused();
				virtual ev_void finished();
				virtual ev_void processProgress(ev_uint32 total,ev_uint32 current);
			};

			class EV_LASCONVERTPROXY_DLL CLasLODParam : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasLODParam(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasLODParam();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasLODParam();
				//公共参数
				//设置是否分割四叉树
				ev_void setBuildQuadtree(ev_bool buildQuadTree);
				//获取是否分割四叉树
				ev_bool getBuildQuadtree();
				//设置是否使用双面光照
				ev_void setUseDoubleSideLight(ev_bool useDoubleSideLight);
				//获取是否使用双面光照
				ev_bool getUseDoubleSideLight();
				//设置是否按照四叉树分块合并mesh
				ev_void setCombineSubmesh(ev_bool combineSubMesh);
				//获取是否按照四叉树分块合并mesh
				ev_bool getCombineSubmesh();
				//设置是否转换图片为dds
				ev_void setToDDS(ev_bool toDDS);
				//获取是否转换图片为dds
				ev_bool getToDDS();
				//设置是否压缩7z
				ev_void setEncode7z(ev_bool encode7z);
				//获取是否压缩7z,发布服务器以及需要合并的obq必须压缩7z
				ev_bool getEncode7z();
				//设置是否使用公共材质(取某个submesh的材质对象值作为公共材质提高渲染效率)
				ev_void setUseShareMaterial(ev_bool useshareMaterial);
				//获取是否使用
				ev_bool getUseShareMaterial();
				//
				//获取是否存在该级别LOD参数
				ev_bool existLODParam(ev_uint8 level,CLasOptimizeParams& param);
				//更新该级别LODC参数
				ev_void updateLODParam(ev_uint8 level,CLasOptimizeParams param);
				//添加该级别LOD参数
				ev_void addLODParam(ev_uint8 level,CLasOptimizeParams param);
				//移除该级别LOD参数
				ev_void removeLODParam(ev_uint8 level);
				//获取该级别LOD参数
				CLasOptimizeParams getLODParam(ev_uint8 level);
				//获取LOD级别总数
				ev_int32 getLODParamSize();
				//清空参数容器
				ev_void clearLODParam();
				//解析参数
				ev_void fromXml(const EVString& filePath);
				//保存参数到xml文档
				ev_void toXml(const EVString& filePath);
				//设置目标定位点
				ev_void setLocation(ev_real64 lat,ev_real64 lon,ev_real64 alt);
				//获取目标定位点
				ev_void getLocation(ev_real64& lat,ev_real64& lon,ev_real64& alt);
				//设置目标旋转分量
				ev_void setRotation(ev_real64 rotW,ev_real64 rotX,ev_real64 rotY,ev_real64 rotZ);
				//获取目标旋转分量
				ev_void getRotation(ev_real64& rotW,ev_real64& rotX,ev_real64& rotY,ev_real64& rotZ);
				//设置目标局部变换参数,缩放，旋转(角度值),平移
				ev_void setLocalTranform(EarthView::World::Spatial::Math::CVector3 scale,EarthView::World::Spatial::Math::CVector3 rotate,EarthView::World::Spatial::Math::CVector3 translate);
				//获取目标局部变换参数,缩放，旋转(角度值),平移
				ev_void getLocalTransform(EarthView::World::Spatial::Math::CVector3& scale,EarthView::World::Spatial::Math::CVector3& rotate,EarthView::World::Spatial::Math::CVector3& translate);
				//设置目标最小最大高程
				ev_void setElevationMinMaxZ(ev_real64 elevationMinZ,ev_real64 elevationMaxZ);
				//获取目标最小最大高程
				ev_void getElevationMinMaxZ(ev_real64& elevationMinZ,ev_real64& elevationMaxZ);
			private:
				ev_void iniVar();

				ev_map<ev_uint8,CLasOptimizeParams> OptimizeParamMap;

				ev_real64 mLat;
				ev_real64 mLon;
				ev_real64 mAlt;

				ev_real64 mWScaleX;
				ev_real64 mWScaleY;
				ev_real64 mWScaleZ;

				ev_real64 mWRotW;
				ev_real64 mWRotX;
				ev_real64 mWRotY;
				ev_real64 mWRotZ;

				ev_real64 mElevationMinZ;
				ev_real64 mElevationMaxZ;
				
				ev_real64 mScaleX;
				ev_real64 mScaleY;
				ev_real64 mScaleZ;

				ev_real64 mRotateX;
				ev_real64 mRotateY;
				ev_real64 mRotateZ;

				ev_real64 mTranslationX;
				ev_real64 mTranslationY;
				ev_real64 mTranslationZ;

				ev_bool mbBuildQuadTree;
				ev_bool mbUseDoubleSideLight;
				ev_bool mbCombineSubMesh;
				ev_bool mbToDDS;
				ev_bool mbEncode7z;
				ev_bool mUseShareMaterial;

				EVString mVersion;
			};

			class EV_LASCONVERTPROXY_DLL CLasLODGenerator :  public EarthView::World::Core::CBaseObject
			{
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
				//isAsyn == true则内部开启线程采用异步处理
				ev_void generate(const EarthView::World::Core::StringVector& dataFiles,const EVString& outputPath,const EVString& name,const EVString& grpName,const EVString& matName,ev_bool isAsyn,EarthView::World::Spatial::Math::CAxisAlignedBox box);
				//添加监听
				ev_void addListener(CLasLODGenerateListener* observer);
				//移除监听
				ev_void removeListener(CLasLODGenerateListener* observer);
				//设置参数
				ev_void setParam(CLasLODParam& param);
				//获取参数
				CLasLODParam& getParam();
				//停止线程
				ev_void stop();

			private:
				ev_void _processLocalSource();				
				ev_void collectLocalData(EVString& dstFolder,EVString& oriDstFolder);
				ev_void _createDstFolder(EVString& dstFolder,EVString& oriDstFolder);
				EarthView::World::Spatial::Math::CMatrix4 computeLocalTransform();
				ev_void initQuadTree(EarthView::World::Spatial::Math::CAxisAlignedBox box,EVString dstFolder,EVString dstBaseName);
				ev_void buildLasChildTree(CLasQuadTree* parentTree,ev_uint32& baseRowNum,ev_uint32& baseColNum,CLasOptimizeParams& params,EVString dstFolder,EVString dstBaseName,EarthView::World::Spatial::Math::CVector3 lv0Center);
				ev_void getChildByLevel(CLasQuadTree* tree, ev_uint32 level ,ev_list<CLasQuadTree*>& child);
				ev_void partitionLas(EarthView::World::Core::StringVector& dataFiles,EarthView::World::Spatial::Math::CAxisAlignedBox& box,ev_list<CLasQuadTree*>& childTrees);
				ev_void getIntersectTrees(EarthView::World::Spatial::Math::CAxisAlignedBox box,ev_list<CLasQuadTree*>& srcChildTrees,ev_list<CLasQuadTree*>& dstChildTrees);
				ev_void saveChildren(ev_list<CLasQuadTree*> children,CLasOptimizeParams params,ev_uint32& numNodes);
				ev_void saveCommonMat(EVString matFilePath);
				//生成倾斜摄影xml文档节点
				EarthView::World::Core::CXmlElement createTileElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath,EVString name);
				EarthView::World::Core::CXmlElement createNodeElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath);
				EarthView::World::Core::CXmlElement createStatsElement(ev_uint32 numTiles,ev_uint32 numNodes,ev_uint32 maxLevel,ev_uint32 maxNumChildren);
				//创建倾斜摄影源数据
				ev_void createMetaData(const EVString& dstFile);
				//创建倾斜摄影LODTree信息
				ev_void createLODTreeExportXML(const EVString& dstFile,EarthView::World::Core::CStringArray tileNames,EarthView::World::Core::CStringArray tilePaths);
				ev_void _writeDBInfo(const EVString& dstFolder,const EVString& fileName,const EVString oriDstFolder,const ev_uint32& numNodes);
				ev_bool updateTileModelBoundForMeshx(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
					const EVString& tileName,
					_out ev_real32& xmin, 
					_out ev_real32& xmax, 
					_out ev_real32& ymin, 
					_out ev_real32& ymax, 
					_out ev_real32& zmin, 
					_out ev_real32& zmax);
				void traverseTileModel(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
					const EVString& tileName, 
					EarthView::World::Spatial3D::ModelManager::LodIndex* parent,
					_out ev_real32& xmin, 
					_out ev_real32& xmax, 
					_out ev_real32& ymin, 
					_out ev_real32& ymax, 
					_out ev_real32& zmin, 
					_out ev_real32& zmax);

			private:
				// <summary>       
				// 创建线程类
				// </summary>
				class CLasLODGeneratorWorkerFunc : public EarthView::World::Core::CThreadFunc
				{
				public:					
					CLasLODGeneratorWorkerFunc(CLasLODGenerator *parent)
						: mpLasLodGenerator(parent)
					{

					}

					~CLasLODGeneratorWorkerFunc()
					{
						mpLasLodGenerator = NULL;
					}

					ev_void run();
					CLasLODGenerator *mpLasLodGenerator;
				};

				ev_bool start();
				ev_void startup();
				ev_void _threadMain();
				ev_void initVar();
				ev_void dispose();
				ev_void _notifyProcessMsg(EVString msg);
				ev_void _notifyPaused();
				ev_void _notifyFinished();
				ev_void _notityProcessProgress(ev_uint32 total,ev_uint32 current);

				EarthView::World::Core::StringVector mSrcDataFiles;
				EVString mDstFolder;
				EVString mOutBaseName;
				EVString mGrpName;
				EVString mMatName;
				EarthView::World::Spatial::Math::CAxisAlignedBox mSrcBox;
				CLasQuadTree* mpRoot;
				CLasLODParam mParam;				
				ev_list<CLasLODGenerateListener*> mObservers;
				ev_map<EVString,EarthView::World::Spatial::Math::CAxisAlignedBox*> mTileBoundsMap;
				ev_bool mAbort; 
				CLasLODGeneratorWorkerFunc *mWorkerFunc;
				EarthView::World::Core::CThread *mpThread;
				EV_MUTEX(mInitMutex)
				EV_THREAD_SYNCHRONISER(mInitSync)
			};
		}
	}
}

#endif