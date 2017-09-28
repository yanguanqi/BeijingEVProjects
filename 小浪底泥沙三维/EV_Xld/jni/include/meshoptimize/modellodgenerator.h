#ifndef  _MESHQUADTREEMANAGERNEW_H
#define  _MESHQUADTREEMANAGERNEW_H
#include "core/memoryallocatedobject.h"
#include "meshoptimize/meshoptimize.h"
#include "core/thread.h"
#include "core/object.h"
#include "core/event.h"
#include "core/xml.h"
#include "core/string_array.h"
#include "core/core_common.h"
#include "spatial3ddataset/entitydataset.h"
#include "meshoptimize/meshoptimizeconfig.h"
#include "tileutility/meshstream.h"
#include "graphic/aniserializer.h"
#include "graphic/mesh.h"
#include "spatial3dengine/obliquedbutility.h"
#include "spatial3ddataset/mesheffectref.h"

namespace EarthView
{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager
			{
				class IObqDataset;
			}
			namespace Dataset{
				class CMeshTemplateDataset;
			}
		}
	}
	namespace MeshOptimize
	{
		class CObqTileInfo;
		class CMeshQuadTree;
		class CSubMeshCustom;
		class CCustomRecordInfo;
		class CCustomNodeSerializer;
		class CCustomSubMeshSerializer;
		class CCustomBoxSizeStat;
		class CCustomTriDensityStat;
		class CCustomInstancePathStat;
		class CAniInfo;
		class CModelDataSetAccessor;
		class CMeshOptimizeCompositor;
		class CSharedMeshKey;
		class EV_MESHOPTIMIZE_DLL CMeshOptimizeData:  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CMeshOptimizeData(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CMeshOptimizeData();
			~CMeshOptimizeData();
			EarthView::World::Graphic::CMeshPtr MeshData;
			EarthView::World::Core::DataStreamPtr AniData;
			EarthView::World::Spatial::Math::CMatrix4 LocalMat;
		};

		class EV_MESHOPTIMIZE_DLL MeshOptimizeDataList : public EarthView::World::Core::CBaseObject         		
		{
ev_private:
			typedef list<CMeshOptimizeData> InternalList;
			typedef InternalList::iterator iterator;
			typedef InternalList::const_iterator const_iterator;
			typedef InternalList::reverse_iterator reverse_iterator;
			typedef InternalList::const_reverse_iterator const_reverse_iterator;
			typedef InternalList::reference reference;
			typedef InternalList::const_reference const_reference;
			typedef InternalList::value_type value_type;
			RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
			iterator insert(iterator pos, CMeshOptimizeData const &t)
			{
				return mList.insert(pos, t);
			}

		private:
			InternalList mList;
ev_private:

			MeshOptimizeDataList(_in EarthView::World::Core::CNameValuePairList *pList) 
			{

			}
		public:
			MeshOptimizeDataList() {}
			void push_back(CMeshOptimizeData const &t)
			{
				mList.push_back(t);
			}
			void push_front(CMeshOptimizeData const   &t)
			{
				mList.push_front(t);
			}
			void pop_back()
			{
				mList.pop_back();
			}

			void pop_front()
			{
				mList.pop_front();
			}

			CMeshOptimizeData &front()
			{
				return mList.front();
			}
			CMeshOptimizeData &back()
			{
				return mList.back();
			}
			CMeshOptimizeData &at(ev_uint32 pos)
			{
				iterator it = begin();
				for(ev_uint32 i = 0; i < pos; i++)
					it++;
				return *it;
			}
			void insert(ev_uint32 pos, CMeshOptimizeData const &t)
			{
				iterator it = begin();
				for(ev_uint32 i = 0; i < pos; i++)
					it++;
				mList.insert(it, t);
			}
			void remove(ev_size_t pos)
			{
				iterator it = begin();
				for(ev_uint32 i = 0; i < pos; i++)
					it++;
				mList.erase(it);
			}
			ev_bool empty() const
			{
				return mList.empty();
			}

			ev_size_t size() const
			{
				return mList.size();
			}
			void resize(ev_size_t newSize)
			{
				mList.resize(newSize);
			}
			void clear()
			{
				mList.clear();
			}
		};

		class EV_MESHOPTIMIZE_DLL CMeshOptimizeDataSource:  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CMeshOptimizeDataSource(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CMeshOptimizeDataSource();
			~CMeshOptimizeDataSource();

			EVString ExportName;
			MeshOptimizeDataList MeshDataList;
		};

		class EV_MESHOPTIMIZE_DLL CModelLODGenerateListener:  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CModelLODGenerateListener(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CModelLODGenerateListener();
			~CModelLODGenerateListener();
			virtual ev_void processMsg(EVString msg);
			virtual ev_void paused();
			virtual ev_void finished();
			virtual ev_void processProgress(ev_uint32 total,ev_uint32 current);
		};
		//
		class EV_MESHOPTIMIZE_DLL CModelLODParam :  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CModelLODParam(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CModelLODParam();
			~CModelLODParam();
			/// <summary>
			/// 纹理渲染的类型
			/// </summary>
			enum CompositeType 
			{
				CT_EffectFirst, //渲染效果优先
				CT_EfficiencyFirst, //渲染效率优先
			};

			//公共参数
			//设置是否分割四叉树
			ev_void setBuildQuadtree(ev_bool buildQuadTree);
			//获取是否分割四叉树
			ev_bool getBuildQuadtree();
			//设置是否使用双面光照
			ev_void setUseDoubleSideLight(ev_bool useDoubleSideLight);
			//获取是否使用双面光照
			ev_bool getUseDoubleSideLight();
			//设置是否insance方式处理相同的模型
			ev_void setUseInstance(ev_bool useInstance);
			//获取是否insance方式处理相同的模型
			ev_bool getUseInstance();
			////设置是否重建三角面拓补关系
			//ev_void setTriReBuild(ev_bool triReBuild);
			////获取是否重建三角面拓补关系(不重建会影响简化效果，建议采用默认值)
			//ev_bool getTriReBuild();
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
			ev_bool  existLODParam(ev_uint8 level,EarthView::MeshOptimize::CMeshOptimizeParams& param);
			//更新该级别LODC参数
			ev_void updateLODParam(ev_uint8 level,EarthView::MeshOptimize::CMeshOptimizeParams param);
			//添加该级别LOD参数
			ev_void addLODParam(ev_uint8 level,EarthView::MeshOptimize::CMeshOptimizeParams param);
			//移除该级别LOD参数
			ev_void removeLODParam(ev_uint8 level);
			//获取该级别LOD参数
			EarthView::MeshOptimize::CMeshOptimizeParams getLODParam(ev_uint8 level);
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
			//设置目标局部变换参数,缩放，旋转(角度值),平移
			ev_void setLocalTranform(EarthView::World::Spatial::Math::CVector3 scale,EarthView::World::Spatial::Math::CVector3 rotate,EarthView::World::Spatial::Math::CVector3 translate);
			//获取目标局部变换参数,缩放，旋转(角度值),平移
			ev_void getLocalTransform(EarthView::World::Spatial::Math::CVector3& scale,EarthView::World::Spatial::Math::CVector3& rotate,EarthView::World::Spatial::Math::CVector3& translate);
			//设置纹理质量为默认（精度高），还是一般（节省内存）
			ev_void setTextureQuality(ev_bool quality);
			//获取纹理质量设置
			ev_bool getTextureQuality();
			//设置选择场景名称
			ev_void	setSelectedSceneName(EVString sceneName);
			//获取选择场景名称
			EVString getSelectedSceneName();

			//设置/获取纹理合并类型;
			ev_void setCompositeType(CompositeType type);
			CompositeType getCompositeType();
			//设置/获取合并图片的最大宽度;
			ev_void setMaxWidth(ev_uint32 uMaxWidth);
			ev_uint32 getMaxWidth();
			//设置/获取合并图片的最大高度;
			ev_void setMaxHeight(ev_uint32 uMaxHeight);
			ev_uint32 getMaxHeight();
			//设置获取边缘像素;
			ev_void setMargin(ev_uint32 uMargin);
			ev_uint32 getMargin();
			//设置纹理坐标范围阀值
			ev_void setTextureCoordScope(ev_uint32 uScope);
			ev_uint32 getTextureCoordScope();
			
			//设置共享submesh引用次数
			ev_void setSharedSubmeshReferenceCount(ev_uint32 referenceCount);
			ev_uint32 getSharedSubmeshReferenceCount();

		protected:
		private:
			ev_void iniVar();
		private:
			ev_map<ev_uint8, EarthView::MeshOptimize::CMeshOptimizeParams> OptimizeParamMap;

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

			ev_bool mbBuildQuadTree;
			ev_real64 mScaleX;
			ev_real64 mScaleY;
			ev_real64 mScaleZ;

			ev_real64 mRotateY;
			ev_real64 mRotateZ;
			ev_real64 mRotateX;

			ev_real64 mTranslationY;
			ev_real64 mTranslationZ;
			ev_real64 mTranslationX;
			//
			ev_uint8 mMergeMaxMatrixNum;
			//使用双面光照
			ev_bool mbUseDoubleSideLight;
			//构建三角面拓补关系
			ev_bool mbTriReBuild;
			//合并submesh
			ev_bool mbCombineSubMesh;
			//转换纹理为dds
			ev_bool mbToDDS;
			//压缩7z
			ev_bool mbEncode7z;
			//共享材质
			ev_bool mUseShareMaterial;
			//参数版本
			EVString mVersion;
			//使用instance方式处理相同的数据,仅instance图层可用
			ev_bool mbUseInstance;
			//设置纹理质量，为true时设置为一般（节省内存），false时设置为默认（精度高）
			ev_bool mbTextureQuality;
			//设置选择的SceneName，用于从选中的Scene中获取高程值
			EVString mSceneName;

			CompositeType  mCompositeType;             // 纹理合并的类型 

			ev_uint32      mMaxWidth;            // 合并图片的最大宽度
			ev_uint32      mMaxHeight;           // 合并图像的最大高度
			ev_uint32      mMargin;              // 边沿像素
			
			//纹理坐标范围阀值。选择渲染效果优先时，当纹理寻址模式为wrap或者mirror的时候，纹理坐标值小于这个值的时候合并，否则不合并。合法值是大于或等于1的整形值。默认为1;
			ev_uint32		m_TextureCoordScope;

			ev_uint32 mSharedSubmeshReferenceCount;
		};
		//
		class EV_MESHOPTIMIZE_DLL CModelLODGenerator :  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CModelLODGenerator(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CModelLODGenerator();
			~CModelLODGenerator();
			friend class CMeshTool;
		private:
			struct CModelLODInstanceData
			{
				//经纬度
				ev_real64 Lat;
				ev_real64 Lon;
				ev_real64 Alt;
				//局部矩阵
				EarthView::World::Spatial::Math::CMatrix4 LocalTrans;
				//meshxFile
				EVString MeshxFilePath;
			};
			//
			enum EVSourceType
			{
				ST_Local,
				ST_Dataset,
				ST_MEMDATA,
				ST_UNKNOWN
			};
			//按照级别从最高级别开始优化模型并分块
			ev_bool start();
			ev_void _notifyProcessMsg(EVString msg);
			ev_void _notifyPaused();
			ev_void _notifyFinished();
			ev_void _notityProcessProgress(ev_uint32 total,ev_uint32 current);
			ev_void saveChild(CMeshQuadTree* child,
				EarthView::MeshOptimize::CMeshOptimizeParams& params,
				ev_uint32& numNodes,
				EarthView::World::Core::CStringArray& tileNames,
				EarthView::World::Spatial::MeshStream& meshStream);
			//临时修改
			ev_void collectInfo();
			ev_void collectInfoNew();
			ev_void calTriDensityValues(CCustomNodeSerializer* nodeSerialzier, ev_map<EVString, CCustomTriDensityStat>& triDensityMap);//根据记录信息，计算三角面密度值
			EarthView::World::Spatial::Math::CAxisAlignedBox  collectLocalData(const EVString& file,CCustomRecordInfo* recInfo,EVString& dstFolder,EVString& oriDstFolder,EVString& fileName,EVString& outBaseName,EarthView::World::Spatial::Math::CMatrix4 localTrans);
			EarthView::World::Spatial::Math::CAxisAlignedBox  collectTotalDataset(ev_list<CCustomRecordInfo*>& recordInfo);
			EarthView::World::Spatial::Math::CAxisAlignedBox  collectCurrentRecord(
				ev_list<CCustomRecordInfo*>& recordInfos ,
				ev_uint32 id,
				EVString& grpName,
				EVString& dstFolder,
				EVString& oriDstFolder,
				EVString& fileName,
				ev_bool& validDataSet,
				EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList& obqRecordInfoList,
				ev_map<ev_uint32,CModelLODGenerator::CModelLODInstanceData>& instanceDatasetInfo);
			EarthView::World::Spatial::Math::CAxisAlignedBox  collectMemData(ev_list<CCustomRecordInfo*>& recordInfo,MeshOptimizeDataList MeshDataList);
			
			ev_void  boxSizeStat(CCustomBoxSizeStat* stat,EarthView::World::Spatial::Math::CAxisAlignedBox box,ev_uint32 triNum);
			ev_void  optimizeAddDiscardModel(CCustomRecordInfo* recInfo,EarthView::MeshOptimize::CMeshOptimizeParams params,ev_uint32& triNum);
			ev_void  optimizeAddDiscardSubMesh(CCustomNodeSerializer* nodeSerialzier,EarthView::MeshOptimize::CMeshOptimizeParams params,ev_uint32& triNum,EVString dstFolder);
			ev_void  calculateSubmeshReferenceCountByQuad(CCustomRecordInfo* recInfo,ev_list<CMeshQuadTree*>& childTrees, ev_map<CSubMeshCustom*, ev_uint32>& SubmeshReferenceCountMap);
			ev_void  iterateCalculateSubmeshReferenceCountByQuad(CCustomRecordInfo* recInfo,CCustomNodeSerializer* nodeSerialzier,ev_list<CMeshQuadTree*>& childTrees,ev_list<CCustomNodeSerializer*>& nodeSerialzierList, ev_map<CSubMeshCustom*, ev_uint32>& SubmeshReferenceCountMap);
			ev_void  calculateSubmeshReference(CCustomRecordInfo* recInfo,ev_list<CMeshQuadTree*>& childTrees,CAniInfo* aniInfo,ev_list<CCustomNodeSerializer*>& nodeSerialzierList,ev_set<CCustomNodeSerializer*>& disposeList,ev_bool& isAllSubMeshDiscard, ev_map<CSubMeshCustom*, ev_uint32>& SubmeshReferenceCountMap);

			ev_void  saveSharedMesh(ev_int8 level, EVString dstBaseName, ev_uint32 meshID);
			//ev_void  partitionSharedMesh();

			ev_void  partitionModel(CCustomRecordInfo* recInfo,ev_list<CMeshQuadTree*>& childTrees);
			ev_void  iteratePartitionModel(CCustomRecordInfo* recInfo,CCustomNodeSerializer* nodeSerialzier,ev_list<CMeshQuadTree*>& childTrees,ev_list<CCustomNodeSerializer*>& nodeSerialzierList);
			ev_void  partitionSubEntity(CCustomRecordInfo* recInfo,ev_list<CMeshQuadTree*>& childTrees,CAniInfo* aniInfo,ev_list<CCustomNodeSerializer*>& nodeSerialzierList,ev_set<CCustomNodeSerializer*>& disposeList,ev_bool& isAllSubMeshDiscard );
			ev_bool  checkInQuad(CCustomSubMeshSerializer* sub,CMeshQuadTree* child);
			ev_void  getIntersectTrees(EarthView::World::Spatial::Math::CAxisAlignedBox box,ev_list<CMeshQuadTree*>& srcChildTrees,ev_list<CMeshQuadTree*>& dstChildTrees);
			CCustomNodeSerializer* getSubTree(ev_list<CCustomNodeSerializer*>& nodeSerialzierList,CCustomNodeSerializer*& currentNode);
			//按照级别进行对整个数据集包围盒的切割
			ev_void initQuadTree(EarthView::World::Spatial::Math::CAxisAlignedBox box,EVString dstFolder,EVString dstBaseName);
			//创建倾斜摄影LODTree信息
			ev_void createLODTreeExportXML(const EVString& dstFile,EarthView::World::Core::CStringArray tileNames,EarthView::World::Core::CStringArray tilePaths);
			//创建倾斜摄影源数据
			ev_void createMetaData(const EVString& dstFile);
			//生成倾斜摄影xml文档节点
			EarthView::World::Core::CXmlElement createTileElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath,EVString name);
			EarthView::World::Core::CXmlElement createNodeElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath);
			EarthView::World::Core::CXmlElement createStatsElement(ev_uint32 numTiles,ev_uint32 numNodes,ev_uint32 maxLevel,ev_uint32 maxNumChildren);
			//
			ev_void getChildByLevel(CMeshQuadTree* tree, ev_uint32 level ,ev_list<CMeshQuadTree*>& child);
			//
			ev_void getChildByLevel(CMeshQuadTree* tree, ev_uint32 level ,ev_map<EVString,CMeshQuadTree*>& childMap);
			//
			ev_void mergeMeshByTree(ev_list<CMeshQuadTree*> children,
				EarthView::MeshOptimize::CMeshOptimizeParams params,
				EarthView::World::Spatial::Math::CMatrix4 localTransform,
				ev_uint32& numNodes,
				EarthView::World::Core::CStringArray& tileNames);

			ev_void saveSharedMeshToFile(EVString& dstFolder, ev_uint32 meshID, EarthView::MeshOptimize::CMeshOptimizeParams params);

			ev_void saveSharedMeshTreeToFile(EVString& dstFolder, ev_uint32 currentLevel, EarthView::MeshOptimize::CMeshOptimizeParams params);

			ev_void saveSharedTextureToFile(ev_list<CMeshQuadTree*> children, EVString& dstFolder, EarthView::MeshOptimize::CMeshOptimizeParams params, ev_uint32 currentLevel);
			//四叉树根节点
			CMeshQuadTree* m_pRoot;
			//
			// <summary>       
			// 创建线程类
			// </summary>
			class CModelLODGeneratorWorkerFunc : public EarthView::World::Core::CThreadFunc
			{
			public:
				~CModelLODGeneratorWorkerFunc()
				{
					m_meshQuadTreeMgr = NULL;
				}
				CModelLODGenerator *m_meshQuadTreeMgr;
				CModelLODGeneratorWorkerFunc(CModelLODGenerator *q)
					: m_meshQuadTreeMgr(q) {/*mpThread=NULL;*/}
				//CThread* mpThread;
				ev_void run();
			};
			//
			ev_void initVar();
			//
			ev_void _processDatasetSource();
			
			ev_void _processLocalSource();
			ev_void _processMemData();
			//
			ev_void _createDstFolder(const EVString& grpName,EVString& dstFolder,EVString& oriDstFolder,EVString& fileName);
			ev_void _createGroupAddDstFolder(const EVString& grpPath,const EVString& grpName,const EVString& grpType,EVString& dstFolder,EVString& oriDstFolder,EVString& fileName);
			ev_void _writeDBInfo(const EVString& dstFolder,
				const EVString& fileName,
				const EVString oriDstFolder,
				const ev_uint32& numNodes);
			//
			ev_void _writeIoslatedDBInfo(const EVString& dstFolder,
				const EVString& fileName,
				const EVString oriDstFolder,
				EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,
				EVString& tileName,
				EVString& tilePath);
			//
			EarthView::World::Spatial::Math::CMatrix4 computeLocalTransform();
			//
			ev_void saveCommonMat(EVString matFilePath);
			//
			ev_void _processCSubMeshCustomData(ev_vector<CSubMeshCustom*>& subMeshCusSet,
				ev_list<CCustomBoxSizeStat*>& boxStatVec,
				ev_list<CCustomInstancePathStat*>& instancePathStat,
				EarthView::World::Spatial::Math::CMatrix4 localTrans,
				EarthView::World::Spatial::Math::CAxisAlignedBox& bounds,
				CCustomNodeSerializer* rootNodeCustom,
				ev_uint32& triNum,
				ev_bool hasAni);
			
			//
			ev_void loadModelFromDataset(
				ev_uint32 entID,
				EVString& grpName,
				EVString& dstFolder,
				EVString& oriDstFolder,
				EVString& fileName,
				EarthView::World::Core::DataStreamPtr& aniStream,
				EarthView::World::Graphic::CMeshPtr& mesh,
				EarthView::World::Spatial::Math::CMatrix4& localTrans,
				EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList& obqRecordInfoList,
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector& bindsInfo,
				ev_map<ev_uint32,CModelLODGenerator::CModelLODInstanceData>& instanceDatasetInfo);
			//
			ev_void getBindDataByIndex(EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ds,
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector& bindsInfo,
				ev_uint32 index,
				EarthView::World::Core::DataStreamPtr& aniStream,
				EarthView::World::Graphic::CMeshPtr& mesh,
				EarthView::World::Spatial::Math::CMatrix4& localTrans,
				EVString grpName);
			//
			ev_void generateRecordInfoFromMeshData(CCustomRecordInfo* recordInfo ,
				EarthView::World::Graphic::CMeshPtr mesh,
				EarthView::World::Core::DataStreamPtr aniStream,
				EarthView::World::Spatial::Math::CMatrix4 localTrans,
				EarthView::World::Spatial::Math::CAxisAlignedBox& box,
				ev_uint32 id,
				EVString grpName,
				ev_uint32& totalTriNum);
			//
			ev_void copyModelLODData(CModelLODGenerator::CModelLODInstanceData& srcInfo,CModelLODGenerator::CModelLODInstanceData& dstInfo);
			//
			ev_void traverseRenameLODIndex(EarthView::World::Spatial3D::ModelManager::IObqDataset* obqDataset,
				EarthView::World::Spatial3D::ModelManager::LodIndex* parent,
				EVString srcName,
				EVString replaceName,
				EVString tileName,
				EVString dstFolder);
			//
			ev_void getModelLocation(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& recordInfo,
				EarthView::World::Spatial::Math::CMatrix4& localTrans,
				ev_uint32 entID,
				CModelLODGenerator::CModelLODInstanceData srcInfo);
			//
			ev_void attachIsolatedTree(EarthView::World::Core::CXmlElement& parentElement);
			//
			ev_void dispose();
			//
			ev_void saveShareTexToFile(const EVString& texDir);
			//
			ev_bool updateTileModelBoundForMeshx(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
				const EVString& tileName,
				_out ev_real32& xmin, 
				_out ev_real32& xmax, 
				_out ev_real32& ymin, 
				_out ev_real32& ymax, 
				_out ev_real32& zmin, 
				_out ev_real32& zmax);
			//
			void traverseTileModel2(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, 
				const EVString& tileName, 
				EarthView::World::Spatial3D::ModelManager::LodIndex* parent,
				_out ev_real32& xmin, 
				_out ev_real32& xmax, 
				_out ev_real32& ymin, 
				_out ev_real32& ymax, 
				_out ev_real32& zmin, 
				_out ev_real32& zmax);
			//
			ev_void collectCategoryMap(const EarthView::World::Graphic::CCategorySerializerList& categoryList);
		public:
			//优化本地源,isAsyn == true则内部开启线程采用异步处理
			ev_void generate(const EVString& localFolderSource,const EVString& dstFolder,ev_bool isAsyn);
			//优化数据集源,isAsyn == true则内部开启线程采用异步处理
			ev_void generate(EarthView::World::Spatial3D::Dataset::CEntityDataset* datasetSource,const EVString& dstFolder,ev_bool isAsyn);
			//优化数据集源,isAsyn == true则内部开启线程采用异步处理,附加一个EntID集合
			ev_void generate(EarthView::World::Spatial3D::Dataset::CEntityDataset* datasetSource,const EVString& dstFolder, const EarthView::World::Core::IntVector& vec ,ev_bool isAsyn);
			//优化内存源,isAsyn == true则内部开启线程采用异步处理
			ev_void generate(CMeshOptimizeDataSource memDataSource,const EVString& dstFolder,ev_bool isAsyn);
			//设置是否仅收集信息
			ev_void setCollectInfo(ev_bool collect);
			//添加监听
			ev_void addListener(CModelLODGenerateListener* observer);
			//移除监听
			ev_void removeListener(CModelLODGenerateListener* observer);
			//设置参数
			ev_void setParam(CModelLODParam param);
			//获取参数
			CModelLODParam& getParam();
			//获取拷贝参数
			CModelLODParam getCopyParam();
			//停止线程
			ev_void stop();
		private:
			EV_MUTEX(mInitMutex)                                          //EV_MUTEX据说此宏的作用是定义个
				//mutable EarthView::World::Core::CRecursiveMutex mInitMutex
				EV_THREAD_SYNCHRONISER(mInitSync)
				virtual ev_void startup(/*bool forceRestart = true*/);
			void _threadMain();
			ev_bool mAbort;      
			// 停止导入时用的 
			ev_bool mCollectInfo;
			// 开始标记，默认为false
			CModelLODGeneratorWorkerFunc *mWorkerFunc;
			EarthView::World::Core::CThread *mpThread;
			//
			ev_list<CModelLODGenerateListener*> mObservers;
			//公共材质名称
			EVString mCommonMatName;
			EVString mCommonMatGrpName;
			//参数
			CModelLODParam mParam;
			//源类型
			CModelLODGenerator::EVSourceType mSourceType;
			//数据集源
			EarthView::World::Spatial3D::Dataset::CEntityDataset* mpDataset;
			//内存源
			CMeshOptimizeDataSource mOptimizeDataInfo;
			//本地源
			EVString mSrcFolder;
			//目标文件夹
			EVString mDstFolder;
			//EntID集合
			EarthView::World::Core::IntVector vec;			

			//孤立的Mesh树集合;
			ev_map<ev_uint32,CMeshQuadTree*> mIsolatedTreeMap;

			//共享Mesh
			CMeshQuadTree* mSharedQuadTree;

			EarthView::World::Graphic::CMeshPtr mSharedMeshTree[21];

			//大块中引用次数
			ev_map<CSubMeshCustom*, ev_uint32> m_submeshReferenceCountMap;

			//引用的块
			ev_map<CSubMeshCustom*, ev_set<CMeshQuadTree*> > m_submeshToMeshQuadMap;

			//引用的共享第三级块(16)
			ev_map<CSubMeshCustom*, ev_set<ev_uint16> > m_submeshQuadIndexSet;

			//对应的共享submesh数据info
			ev_map<CSubMeshCustom*, CSharedMeshKey> m_submeshToSharedDataInfo;



			//ev_map<ev_uint32,ev_set<ev_uint16> > m_submeshIDToSharedQuadIndexMap;

			CMeshOptimizeCompositor* mCurrentLvSharedTextureCompositor[21];

			ev_vector<EarthView::World::Graphic::CSubMesh*> mSharedSubmeshVec;
			//
			set<EVString> mShareTexSet;
			EarthView::World::Core::MemoryDataStreamVector mSharedTexVec;
			//
			ev_map<EVString,CObqTileInfo*> mTileBoundsMap;
			ev_list<CCustomRecordInfo*> mRecordInfos;
			EVString mGrpName;
			//
			ev_list<CCustomNodeSerializer*> mNodeTreeVec;
			//
			ev_map<EVString,EarthView::World::Graphic::CCategory> mCategoryMap;
			//
			EarthView::World::Spatial::Math::CVector3 mCurrentLv0Center;

			//当前级别是否需要简化;
			ev_bool mNeedOptimizedCurrentLevel;

			//当前操作级别;
			ev_uint16 mCurrentProcessLevel;
		};
	}
}
#endif