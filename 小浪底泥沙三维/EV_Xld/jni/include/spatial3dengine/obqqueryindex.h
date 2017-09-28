#ifndef EV_BOQ_QUERYINDEX_H_H
#define EV_BOQ_QUERYINDEX_H_H

#include "core/thread.h"
#include "core/stdheaders.h"
#include "core/stringdefines.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
#include "mathengine/matrix4.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3dengine/obliquedbutility.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class OBQModelQuadRootTree;

				class EV_Spatial3DEngine_DLL OBQModelNode : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					OBQModelNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:

					OBQModelNode()
					{
						mMinRange = 0;
						mRadius = 0;
						mCenterX = 0;
						mCenterY = 0;
						mCenterZ = 0;
					}

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					OBQModelNode(ev_real64 minRange
						, ev_real64 radius
						, ev_real64 centerX
						, ev_real64 centerY
						, ev_real64 centerZ
						, const EVString& modelPath
						, const EVString& tileFileFolder);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~OBQModelNode();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getMinRange() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getRadius() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCenterX() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCenterY() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCenterZ() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getModelPath() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getTileFileFolder() const;
				protected:
				private:
					ev_real64 mMinRange;
					ev_real64 mRadius;
					ev_real64 mCenterX;
					ev_real64 mCenterY;
					ev_real64 mCenterZ;
					EVString mModelPath;
					EVString mTileFileFolder;
				};


				/// <summary>
				/// 4叉树
				/// </summary>
				class EV_Spatial3DEngine_DLL OBQModelQuadTree : public EarthView::World::Core::CAllocatedObject
				{
					friend class OBQModelQuadTreeCreator;
ev_private:
					OBQModelQuadTree(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					OBQModelQuadTree();

					/// <summary>
					/// 构造函数
					/// centerX、centerY、minx、miny、maxx、maxy的单位可以是原始xml文件中的数据值单位，也可以是经纬度。
					/// </summary>
					/// <param name="level">树级别</param>
					/// <param name="index">在父树种的序号（从左到右从上到下依次位 0、1、2、3）</param>
					/// <param name="parentCode">父树编码，编码是从根树到当前树序号构成的编码，第0级编码：0、1、2、3。第一级编码00、01、02、03、10、11、12、13、20、21、22、23、30、31、32、33</param>
					/// <param name="centerX">树的中心点x</param>
					/// <param name="centerY">树的中心点y</param>
					/// <param name="minx">树的最小x</param>
					/// <param name="miny">树的最小y</param>
					/// <param name="maxx">树的最大x</param>
					/// <param name="maxy">树的最大y</param>
					/// <returns></returns>
					OBQModelQuadTree(ev_int32 level
						, ev_int32 index
						, const EVString& parentCode
						, ev_real64 centerX
						, ev_real64 centerY
						, ev_real64 minx
						, ev_real64 miny
						, ev_real64 maxx
						, ev_real64 maxy);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~OBQModelQuadTree();

					/// <summary>
					/// 设置树的中心点位置
					/// </summary>
					/// <param name="centerX">树的中心点x</param>
					/// <param name="centerY">树的中心点y</param>
					/// <returns></returns>
					ev_void setCenter(ev_real64 centerX, ev_real64 centerY);

					/// <summary>
					/// 设置树的级别
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setLevle(ev_int32 level);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCenterX() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCenterY() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getMinX() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getMinY() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getMaxX() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getMaxY() const;

					/// <summary>
					/// 添加一个模型节点到指定级别
					/// </summary>
					/// <param name="modelNode">模型节点</param>
					/// <param name="level">级别</param>
					/// <returns></returns>
					ev_bool addOBQModelNode(const EarthView::World::Spatial3D::ModelManager::OBQModelNode& modelNode, ev_int32 level);

					/// <summary>
					/// 通过模型节点名称获取模型节点
					/// </summary>
					/// <param name="nodename">模型节点名称</param>
					/// <param name="node">模型节点对象</param>
					/// <returns></returns>
					ev_bool getNode(const EVString& nodename, EarthView::World::Spatial3D::ModelManager::OBQModelNode& node);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getModelFiles(ev_int32 level, ev_real64 minx, ev_real64 miny, ev_real64 maxx, ev_real64 maxy);

					/// <summary>
					/// 获取当前树编码
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getCode() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* child(ev_int32 index) const;

					/// <summary>
					/// 获取当前树拥有的模型路径名称，模型名称使用“：”分隔
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getMyModelPathList( const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree& tree) const;

					/// <summary>
					/// 获取当前树拥有的模型个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getMyModelCount() const;
				protected:
					/// <summary>
					/// 分裂当前树到指定级别
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void splitTree(ev_int32 maxLevel);

					/// <summary>
					/// 通过树编码获取树的所有模型节点集合
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getNodes(const EVString& treecode, list<EarthView::World::Spatial3D::ModelManager::OBQModelNode>& nodes);

					/// <summary>
					/// 获取当前树的子树集合
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getTreeList(list<EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*>& treeList);

					/// <summary>
					/// 获取指定级别的所有模型节点集合
					/// </summary>
					/// <param name="level">指定的级别</param>
					/// <param name="nodes">获取到的模型节点集合</param>
					/// <returns></returns>
					ev_int32 getNodes(ev_int32 level, list<EarthView::World::Spatial3D::ModelManager::OBQModelNode>& nodes);

					/// <summary>
					/// 获取指定级别行列号的模型节点集合
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getNodes(ev_int32 level, ev_int32 row, ev_int32 col, list<EarthView::World::Spatial3D::ModelManager::OBQModelNode>& nodes);
				protected:
					ev_int32 mLevel;
					ev_int32 mIndex;
					ev_real64 mCenterX;
					ev_real64 mCenterY;
					ev_real64 mMinX;
					ev_real64 mMinY;
					ev_real64 mMaxX;
					ev_real64 mMaxY;
					EVString mCode;

					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* mChild[4];

					list<EarthView::World::Spatial3D::ModelManager::OBQModelNode> mOBQModelNodeList;
				};


				/// <summary>
				/// 四叉树根树
				/// 根数不参与级别划分， 0级4棵树
				/// </summary>
				class EV_Spatial3DEngine_DLL OBQModelQuadRootTree : public EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree
				{
					friend class OBQModelQuadTreeCreator;
ev_private:
					OBQModelQuadRootTree(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					OBQModelQuadRootTree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~OBQModelQuadRootTree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setLocal(ev_real64 localX, ev_real64 localY, ev_real64 localZ, const EVString& srs);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getLocalX() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getLocalY() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getLocalZ() const;

					EVString getSRS() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool initTree(ev_real64 minCenterX, ev_real64 minCenterY, ev_real64 maxCenterX, ev_real64 maxCenterY, ev_int32 levelCount);

				protected:
				private:

					ev_real64 mLocalX;
					ev_real64 mLocalY;
					ev_real64 mLocalZ;
					EVString mModelOriginMode;
					EVString mSRS;
				};

                                class  OBQModelQuadTreeCreator;

				/// <summary>
				/// 用于管理转换Dae到mesh的多线程的类
				/// </summary>
				class MultiThreadDae2Mesh
				{
				private:
					class WorkThread : public EarthView::World::Core::CThread
					{
					public:
						MultiThreadDae2Mesh* mParent;
						ev_bool mbStop;
						ev_bool mbStartOK;
						ev_bool mbIsWaiting;
						EarthView::World::Core::CMutex mStartMtx;

						/// <summary>
						/// 用于在记录当前转换信息时互斥
						/// </summary>
						EarthView::World::Core::CMutex mWriteCurrentRecordMtx;

						WorkThread(MultiThreadDae2Mesh* p);

						~WorkThread();

						ev_void stop();
						ev_void initWork();
						ev_void startWork();
					private:
						ev_int32 run();
					};

				public:
					MultiThreadDae2Mesh(OBQModelQuadTreeCreator* p, 
										ev_bool& stopSig, 


										const EVString& srcFolder, 
										const EVString& desFolder, 
										ev_bool coverExistentMesh = false, 
										ev_int32 threadCount = 4);

					~MultiThreadDae2Mesh();

					/// <summary>
					/// 设置局部矩阵
					/// </summary>
					void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& localMatrix, ev_bool available);

					/// <summary>
					/// 初始化工作者线程
					/// </summary>
					ev_void initWorkThread();

					/// <summary>
					/// 开始转换
					/// </summary>
					ev_void convert();

					EVString getDaeFolder();

					ev_int32 getDaeIndexByName(EVString& daeFolderName);

					ev_int32 getCurrentConvertIndex();

					ev_uint32 getInitialDaeFolderCount();

				private:
					OBQModelQuadTreeCreator* mpParent;

					/// <summary>
					/// 停止标志
					/// </summary>
					ev_bool& mbStop;

					/// <summary>
					/// 源数据文件夹
					/// </summary>
					EVString mSrcFolder;

					/// <summary>
					/// 目标数据文件夹
					/// </summary>
					EVString mDesFolder;

					/// <summary>
					/// 是否覆盖已存在的mesh文件
					/// </summary>
					ev_bool mConverExistevtMesh;

					/// <summary>
					/// 当前在工作的线程的数量
					/// </summary>
					ev_int32 mWorkChreadCount;

					/// <summary>
					/// Dae文件夹路径组
					/// </summary>
					EarthView::World::Core::ev_stringArray mDaeFolderArr;

					/// <summary>
					/// Dae文件夹转换前的总的数量;
					/// </summary>
					ev_uint32 mInitialDaeFolderCount;

					/// <summary>
					/// 当前正在转换的索引号
					/// </summary>
					ev_int32 mCurrentConvertIndex;

					EarthView::World::Core::CMutex mGetDaeFolderMtx;

					/// <summary>
					/// 局部矩阵
					/// </summary>
					EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;

					/// <summary>
					/// 局部矩阵是否可用
					/// </summary>
					ev_bool mLocalMatrixAvailable;

					/// <summary>
					/// 当前正在工作的线程列表
					/// </summary>
					vector<WorkThread*> mWorkThreadList;

				};

				class OBQConvertHandler;

				class EV_Spatial3DEngine_DLL OBQModelQuadTreeCreator  : public EarthView::World::Core::CAllocatedObject
				{
					friend class MultiThreadDae2Mesh;
ev_private:
					OBQModelQuadTreeCreator(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					class EV_Spatial3DEngine_DLL InfoListener  : public EarthView::World::Core::CAllocatedObject
					{
ev_private:
						InfoListener(_in EarthView::World::Core::CNameValuePairList *pList){};
					public:
						InfoListener(){};

						virtual ~InfoListener(){};
						virtual ev_void printInfo(const EVString& info){printf("%s", info.getString());};
						virtual ev_void printProcess(ev_int32 process){printf("%d/100", process);};
						virtual ev_void setRange(int min,int max){};
						virtual ev_void renderSystemError(){};
					protected:
					private:
					};

				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					OBQModelQuadTreeCreator(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility);


					/// <summary>
					/// 
					//
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~OBQModelQuadTreeCreator();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//static OBQModelQuadTreeCreator& instance();

					ev_bool convertObqXmlToIndexDB(const EVString& strTileXml);
					EarthView::World::Core::StringVector queryMeshFilesByRegion( ev_int32 level, ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat);
					EarthView::World::Core::MemoryDataStreamPtr queryCpdStreamByRegion( ev_int32 level, ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat);
					EVString getCpdFileByRegion(ev_int32 level, ev_real64 minLon, ev_real64 minLat, ev_real64 maxLon, ev_real64 maxLat);
					void cpd2mesh(const EVString& cpdFilePath,const EVString& meshPath);
					///<summary>
					/// 查询此数据集中，最小级别，最大级别，以及数据集的经纬度范围
					///</summary>
					/// <returns>是否成功</returns>
					ev_bool getLevelRange(_out ev_int32& minLevel,_out ev_int32& maxLevel ,_out ev_real64& minLon,_out ev_real64& minLat,_out ev_real64& maxLon,_out ev_real64& maxLat);



					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addInfoListener(EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* pListener);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeInfoListener(EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener* pListener);

					/// <summary>
					/// 从倾斜摄影原始文件初始化一个四叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool initFromXMLSource(const EVString& xmlSourcePath, EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree& tree);

					/// <summary>
					/// 从一个四叉树数据库文件中初始化一个四叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool initFromQueryIndexDB(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree& tree);

					/// <summary>
					/// 将一个四叉树写入到一个四叉树数据库文件中
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool saveToQueryIndexDB(const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree& tree);

					/// <summary>
					/// 转换模型及纹理
					/// </summary>
					/// <param name="srcFolder"></param>
					/// <param name="desFolder"></param>
					/// <param name="texture2dds">是否需要将纹理转换成dds格式</param>
					/// <returns></returns>
					ev_int32 dae2mesh(const EVString& srcFolder, const EVString& desFolder, ev_bool coverExistentMesh);

					/// <summary>
					/// 创建DEM
					/// </summary>
					/// <param name="srcFolder"></param>
					/// <param name="desFolder"></param>
					/// <returns></returns>
					ev_void createDEM(const EVString& srcFolder, const EVString& desFolder);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void initDae2MeshThread(const EVString& srcFolder, const EVString& desFolder, ev_bool coverExistentMesh);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void startCreateQueryIndex(const EVString& srcFolder, const EVString& desFolder, ev_bool coverExistentMesh);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void stopCreateQueryIndex();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void printInfo(const EVString& info);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void printProcess(ev_int32 process);

					ev_void setRange(int min,int max);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void renderSystemError();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool dae2meshSdate() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& localMatrix, ev_bool available);

					/// <summary>
					///  是否删除临时文件;
					/// <summary>
					ev_void setIsDeleteTmpFile(ev_bool bDelete);

					/// <summary>
					///  设置高程精度
					/// <summary>
					ev_void setAltPrecision(ev_real32 altPrecision);

					ev_void setLastConvertInfo(OBQConvertHandler *pConvertRecord);

					OBQConvertHandler* getConvertRecord();

				private:
					list<EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*> mInfoListenerList;
					ev_bool mbStop;
					ev_bool mbDae2MeshState;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* mpDBUtility;
					EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;
					ev_bool mLocalMatrixAvailable;
					MultiThreadDae2Mesh* mpMultiThreadDae2Mesh;

					ev_bool mbDeleteTmpFile;		//是否删除临时文件
					ev_real32 mAltPrecision;		//高程精度;

					OBQConvertHandler *mpConvertRecord;
				};

				class EV_Spatial3DEngine_DLL OBQDetailedRecord : public EarthView::World::Core::CAllocatedObject
				{
				public:
					//一共多少个;
					ev_int32 mCount;
					//已经完成了多少个;
					ev_int32 mCompletedCount;
					//当前需要完成的序号;
					ev_int32 mNumber;

					//处理到的行和列值，只有处理DEM的时候用到;
					ev_int32 mRow;
					ev_int32 mCol;
					//文件名等信息;
					EVString mFileInfo;

					OBQDetailedRecord()
					{
						mCount = 0;
						mCompletedCount = -1;
						mNumber = -1;
						mRow = -1;
						mCol = -1;
						mFileInfo = "";
					}

ev_private:
					OBQDetailedRecord(_in EarthView::World::Core::CNameValuePairList *pList)
					{
						mCount = 0;
						mCompletedCount = -1;
						mNumber = -1;
						mRow = -1;
						mCol = -1;
						mFileInfo = "";
					}
				};

				/// <summary>
				/// 保存上一次和本次转换时的一些信息记录，用于下次续转
				/// </summary>
				class EV_Spatial3DEngine_DLL OBQConvertHistoryInfo : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					OBQConvertHistoryInfo(_in EarthView::World::Core::CNameValuePairList *pList)
					{
			
					}

				public:
					OBQConvertHistoryInfo()
					{
						mSrcDataPath.clear();
						mDestDataPath.clear();
						mDatasetName.clear();
						mAltPrecision = 0.2;

						mbIsCompletedCreateIndex = false;
						mbIsStartedQueryIndex = false;
						mbIsStartedInitQuadTree = false;
						mbIsCompletedAllTileFiles = false;
						mbIsWriteQuadTreeToDB = false;
						mbIsWriteAllTrees = false;
						mbIsStartedMutiThreadConvert = false;
						mbIsCompletedAllDae = false;
						mbIsStartedCreateDEM = false;
						mbIsStartedByLevel = false;
						mbIsCompletedAllDEM = false;
						mbIsCompletedBaleChildTilesIndex = false;
					}

					~OBQConvertHistoryInfo()
					{

					}

					EVString mSrcDataPath;
					EVString mDestDataPath;
					EVString mDatasetName;

					ev_real32 mAltPrecision;	//高程精度;

					//1.是否已完全【生成调度索引】以及未生成的调度索引的信息;
					ev_bool mbIsCompletedCreateIndex;
					OBQDetailedRecord unCreatedIndexInfo;
					
					//////////////////////////////////////////////////////////////////////////

					//2.是否已【开始查询索引】
					ev_bool mbIsStartedQueryIndex;

					//a.是否已开始初始化四叉树
					ev_bool mbIsStartedInitQuadTree;
					//是否已处理完所有瓦片文件以及未处理完的瓦片文件信息
					ev_bool mbIsCompletedAllTileFiles;
					OBQDetailedRecord mCompletedTileFilesInfo;
					
					//b.是否已开始将四叉树写入到数据库
					ev_bool mbIsWriteQuadTreeToDB;
					//是否已写入完了所有的树以及未写入的树的一些信息;
					ev_bool mbIsWriteAllTrees;
					OBQDetailedRecord mCompletedQuadTreeInfo;

					//c.是否已开始多线程转换
					ev_bool mbIsStartedMutiThreadConvert;
					//是否已将所有dea转换完成,包括三角面信息,以及未处理的dae文件的一些信息;
					ev_bool mbIsCompletedAllDae;
					OBQDetailedRecord mCompletedDaeFolderInfo;

					//d.是否已开始Builder的创建DEM
					ev_bool mbIsStartedCreateDEM;
					//是否已开始分级生成DEM数据
					ev_bool mbIsStartedByLevel;
					//是否已分级生成所有的DEM数据,以及未完成分级DEM的信息;
					ev_bool mbIsCompletedAllDEM;
					OBQDetailedRecord mCompletedDemLevelInfo;
					//////////////////////////////////////////////////////////////////////////

					//3.是否已完成【打包子瓦块索引】以及未完成打包的子瓦块索引信息;
					ev_bool mbIsCompletedBaleChildTilesIndex;
					OBQDetailedRecord mCompletedBaleChildTilesInfo;

					//////////////////////////////////////////////////////////////////////////
				};

				/// <summary>
				/// 倾斜摄影转换记录类，用于操作上次和本次转换的记录信息，主要用于续转。
				/// </summary>
				class EV_Spatial3DEngine_DLL OBQConvertHandler : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					OBQConvertHandler(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					OBQConvertHandler();
					~OBQConvertHandler();

				public:
					/// <summary>
					/// 检测上一次未转换完成时保存的xml文件的信息;
					/// </summary>
					/// <return>返回-1表示数据集重名，0-表示检测到历史转换信息，1表示没有历史记录，没有重名，可以直接从头开始</return>
					ev_int32 checkLastConvertHistory(EVString& srcPath, EVString& destPath, EVString& datasetName);

					/// <summary>
					/// 保存本次转换结果，按当前转换流程，每完成一步重要的转换就保存一次，防止出现死机、挂掉等蛋疼的情况发生。调用应给mLastConvertInfo赋值。
					/// </summary>
					ev_void saveCurrentConvertResult();

					/// <summary>
					/// 上一次的转换是否完成还是中途停止了
					/// </summary>
					ev_bool isLastCompleted();

				protected:
					/// <summary>
					/// 解析上一次的转换记录
					/// </summary>
					ev_int32 parseHistoryXml(EVString& srcPath, EVString& destPath, EVString& datasetName);

					/// <summary>
					/// 创建一个新的转换记录表
					/// </summary>
					ev_void createConvertXml(EarthView::World::Core::CXmlFile& xmlFile);

					ev_bool mbIsLastCompleted;

				protected:
					EVString mHistoryXmlDir;
					
				public:
					OBQConvertHistoryInfo *mpLastConvertInfo;
					OBQConvertHistoryInfo *mpCurrentConvertInfo;
				};
			}
		}
	}
}

#endif
