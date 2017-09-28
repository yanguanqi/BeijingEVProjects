#ifndef  _OBQMERGE_H
#define  _OBQMERGE_H
#include "meshoptimize/meshoptimizeconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/thread.h"
#include "core/object.h"
#include "core/event.h"
#include "core/xml.h"
#include "core/string_array.h"
#include "core/threaddefines.h"

#include "mathengine/axisalignedbox.h"
#include "spatial3dengine/obliquedbutility.h"

namespace EarthView
{
	namespace MeshOptimize
	{
		class CObqDataCollection;
		class CObqQuadTree;
		class CObqTileInfo;

		class EV_MESHOPTIMIZE_DLL CObqQuadTreeParam :  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CObqQuadTreeParam(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CObqQuadTreeParam();
			~CObqQuadTreeParam();
			//设置单个块中obq数目下限,超过下限就不再分割
			ev_void setObqCountLowerLimit(ev_uint32 obqCountLowerLimit);
			//获取单个块中obq数目下限
			ev_uint32 getObqCountLowerLimit();
			//设置单个块最小包围盒大小(仅x,z平面对角线长度)
			ev_void setMinDivideBoundsSize(ev_real32 minDivideSize);
			//获取单个块最小包围盒大小
			ev_real32 getMinDivideBoundsSize();
			//设置单个块最大包围盒大小(仅x,z平面对角线长度)
			ev_void setMaxDivideBoundsSize(ev_real32 maxDivideSize);
			//获取单个块最大包围盒大小
			ev_real32 getMaxDivideBoundsSize();
			//设置合并后名字
			ev_void setMergeName(EVString mergeName);
			//获取合并后名字
			EVString getMergeName();
			//获取压缩7z
			ev_bool getEncode7z();
			//
			ev_void setTileVisibleMultiplier(ev_real32 multiplier);
			ev_real32 getTileVisibleMultiplier();
		private:
			ev_void initVar();
		private:
			ev_bool mbEncode7z;
			ev_uint32 mObqCountLowerLimit;
			ev_real32 mMinDivideBoundsSize;
			ev_real32 mMaxDivideBoundsSize;
			ev_real32 mTileVisibleMultiplier;
			EVString mMergeName;
		};
		//
		class EV_MESHOPTIMIZE_DLL CObqMergeListener:  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CObqMergeListener(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CObqMergeListener();
			~CObqMergeListener();
			virtual ev_void processMsg(EVString msg);
			virtual ev_void processProgress(ev_int32 percent);
			virtual ev_void paused();
			virtual ev_void finished();
		};
		//
		class EV_MESHOPTIMIZE_DLL CObqMergeInstanceData
		{
ev_private:
			CObqMergeInstanceData(EarthView::World::Core::CNameValuePairList *pList){Lat = 0;Lon = 0;Alt = 0;};
		public:
			CObqMergeInstanceData(){Lat = 0;Lon = 0;Alt = 0;EVID = 0;};
			~CObqMergeInstanceData(){};
			//经纬度
			ev_real64 Lat;
			ev_real64 Lon;
			ev_real64 Alt;
			//局部矩阵
			EarthView::World::Spatial::Math::CMatrix4 LocalTrans;
			//复用的meshx文件路径
			EVString MeshxFilePath;
			//
			ev_uint32 EVID;
		};
		//
		class EV_MESHOPTIMIZE_DLL CObqMergeInstanceDataList : public EarthView::World::Core::CAllocatedObject         		
		{
ev_private:
			typedef list<CObqMergeInstanceData> InternalList;
			typedef InternalList::iterator iterator;
			typedef InternalList::const_iterator const_iterator;
			typedef InternalList::reverse_iterator reverse_iterator;
			typedef InternalList::const_reverse_iterator const_reverse_iterator;
			typedef InternalList::reference reference;
			typedef InternalList::const_reference const_reference;
			typedef InternalList::value_type value_type;
			RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
			iterator insert(iterator pos, CObqMergeInstanceData const &t)
			{
				return mList.insert(pos, t);
			}

		private:
			InternalList mList;
ev_private:

			CObqMergeInstanceDataList(_in EarthView::World::Core::CNameValuePairList *pList) 
			{

			}
		public:
			CObqMergeInstanceDataList() {}
			void push_back(CObqMergeInstanceData const &t)
			{
				mList.push_back(t);
			}
			void push_front(CObqMergeInstanceData const   &t)
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

			CObqMergeInstanceData &front()
			{
				return mList.front();
			}
			CObqMergeInstanceData &back()
			{
				return mList.back();
			}
			CObqMergeInstanceData &at(ev_uint32 pos)
			{
				iterator it = begin();
				for(ev_uint32 i = 0; i < pos; i++)
					it++;
				return *it;
			}
			void insert(ev_uint32 pos, CObqMergeInstanceData const &t)
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
		//
		class EV_MESHOPTIMIZE_DLL CObqMerge:  public EarthView::World::Core::CBaseObject
		{
ev_private:
			CObqMerge(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CObqMerge();
			~CObqMerge();
			//开始合并,isAsyn == true则内部开启线程采用异步处理
			ev_void merge(const EVString& srcFolder,EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList obqRecordInfoList ,ev_bool isAsyn);
			//开始合并,isAsyn == true则内部开启线程采用异步处理
			ev_void merge(const EVString& dstFolder,CObqMergeInstanceDataList dataList,ev_bool isAsyn);
			//根据RecordInfoList记录，合并多个Meshxg中的meshx文件, isAsyn == true则内部开启线程采用异步处理
			ev_void merge(EarthView::World::Core::CStringArray& folders, const EVString& desFolder, const EVString& mergeName, ev_bool isAsyn, ev_bool keepSourceData,ev_bool samePath);

			
			//设置参数
			ev_void setParam(CObqQuadTreeParam& param);
			//获取参数
			CObqQuadTreeParam& getParam();
			//获取拷贝参数
			CObqQuadTreeParam getCopyParam();
			//添加监听
			ev_void addListener(CObqMergeListener* observer);
			//移除监听
			ev_void removeListener(CObqMergeListener* observer);
			//添加meshx复用
			ev_void addMeshxInstance(CObqMergeInstanceData instanceData);
			//停止进行obq合并的操作
			ev_void stopObqMerge();
			//判断当前线程是否在运行处理中
			ev_bool isRunning();

		private:
			// <summary>       
			// 创建线程类
			// </summary>
			class CObqMergeFunc : public EarthView::World::Core::CThreadFunc
			{
			public:
				~CObqMergeFunc()
				{
					m_obqMerge = NULL;
				}
				CObqMerge *m_obqMerge;
				CObqMergeFunc(CObqMerge *q)
					: m_obqMerge(q) {/*mpThread=NULL;*/}
				//CThread* mpThread;
				ev_void run();
			};
			ev_void _notifyProcessMsg(EVString msg);
			ev_void _notifyProcessProgress(ev_int32 percent);
			ev_void _notifyPaused();
			ev_void _notifyFinished();
			
			ev_bool start();
			ev_void stop();
			

			EV_MUTEX(mInitMutex)                                          //EV_MUTEX据说此宏的作用是定义个
				//mutable EarthView::World::Core::CRecursiveMutex mInitMutex
				EV_THREAD_SYNCHRONISER(mInitSync)

				virtual ev_void startup(/*bool forceRestart = true*/);
			void _threadMain();
			ev_bool mAbort;    
			// 开始标记，默认为false
			CObqMergeFunc *mWorkerFunc;
			EarthView::World::Core::CThread *mpThread;
			CObqQuadTree* m_pRoot;
			CObqQuadTreeParam mParam;
			ev_real64 mLat;
			ev_real64 mLon;
			ev_real64 mAlt;
			EarthView::World::Spatial::Math::CMatrix4 mLocalTrans;
			ev_list<CObqMergeListener*> mObservers;
			//
			EVString mSrcFolder;
			EVString mDstFolder;
			ev_bool	mbMergeFolders;//是否合并多个文件夹中的meshx
			EarthView::World::Core::CStringArray mMergeFolders;//参与合并的文件夹集合
			EVString mMergeDstFolder;//目标文件夹，用于存放合并的meshx
			EVString mMergeName;//合并之后，新的meshxg的名称
			ev_map<EVString, EVString> instanceMap;//合并meshxg时，判断同一meshxg中是否存在复用关系，存在则只拷贝一份数据
			ev_map<ev_uint32, CObqMergeInstanceData> instanceDataMap;//合并meshxg时，存放各个源meshxg的Instance数据，用于修改新的evid对应关系  
			ev_bool mKeepSourceData;//合并meshxg时，是否保留源数据
			ev_bool mIsSamePath;//合并meshxg时，源路径和目标路径是否一致
			set<EVString> mNewDirSet;

			//
			EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList mObqRecordInfoList;
			CObqMergeInstanceDataList mInstanceDataList;

			//
			set<EVString> mShareTexSet;
			EarthView::World::Core::MemoryDataStreamVector mSharedTexVec;
			//
			ev_uint8 mMaxLevel;
			//
			ev_bool mWriteRecordInfo;
		private:
			ev_void writeRecordDB(const EVString& dbPath);
			EarthView::World::Spatial::Math::CMatrix4 getInverseMatrix(ev_real64 srcLat,ev_real64 srcLon,ev_real64 srcAlt,
				EarthView::World::Spatial::Math::CMatrix4 srcLocalMat,ev_real64 dstLat,ev_real64 dstLon,ev_real64 dstAlt,
				EarthView::World::Spatial::Math::CMatrix4 dstLocalMat);
			ev_void iniVar();
			EarthView::World::Spatial::Math::CAxisAlignedBox collectObqInfo(CObqDataCollection*& collection,ev_real64& minMinRange);
			ev_void buildObqQuadTree(EarthView::World::Spatial::Math::CAxisAlignedBox box,CObqDataCollection* collection,EVString dstFolder,EVString dstBaseName,ev_uint32& maxLevel,EarthView::World::Spatial::Math::CAxisAlignedBox& maxLeafQuadBox);
			ev_void iterateBuildObqQuadTree(CObqQuadTree* tree,EarthView::World::Spatial::Math::CVector3 lv0Center,CObqDataCollection*& collection,ev_uint32& baseRowNum,ev_uint32& baseColNum ,ev_uint32& maxLevel,EVString dstFolder,EVString dstBaseName,EarthView::World::Spatial::Math::CAxisAlignedBox& maxLeafQuadBox);
			ev_bool shouldDivide(CObqDataCollection* collection,CObqQuadTree* tree);
			ev_void partitionCollection(ev_list<CObqQuadTree*> treeList,CObqDataCollection* collection,CObqDataCollection*& subCollection0,CObqDataCollection*& subCollection1,CObqDataCollection*& subCollection2,CObqDataCollection*& subCollection3);
			ev_bool boundsInBounds(EarthView::World::Spatial::Math::CAxisAlignedBox srcBox,EarthView::World::Spatial::Math::CAxisAlignedBox dstBox,ev_real64& distanceToBounds);
			ev_void getMaxBounds(EarthView::World::Spatial::Math::CAxisAlignedBox box,EarthView::World::Spatial::Math::CAxisAlignedBox& resultBox);
			ev_void iterateObqTree(CObqQuadTree* tree,ev_uint32& numNodes,ev_real32 minRangeCoefficient,EarthView::World::Core::CXmlElement& element,ev_bool& validElement,ev_map<EVString,CObqTileInfo*>& tileBoundsMap);
			//XML
			//创建倾斜摄影LODTree信息
			ev_void createLODTreeExportXML(const EVString& dstFile,const EVString& tileName,const EVString& tilePath);
			//创建倾斜摄影源数据
			ev_void createMetaData(const EVString& dstFile);
			//生成倾斜摄影xml文档节点
			EarthView::World::Core::CXmlElement createTileElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath,EVString name);
			EarthView::World::Core::CXmlElement createNodeElement(ev_real64 minRange,ev_real64 radius,EarthView::World::Spatial::Math::CVector3 center,EVString modelPath);
			EarthView::World::Core::CXmlElement createStatsElement(ev_uint32 numTiles,ev_uint32 numNodes,ev_uint32 maxLevel,ev_uint32 maxNumChildren);
			ev_void _writeDBInfo(const EVString& dstFolder,const EVString& fileName,const EVString oriDstFolder,const ev_uint32& numNodes,const ev_uint32& maxLevel,EarthView::World::Core::CXmlElement rootElement,const ev_map<EVString,CObqTileInfo*>& tileBoundsMap);
			ev_void _createDstFolder(const EVString& grpName,EVString& dstFolder,EVString& oriDstFolder,EVString& fileName);
			//
			/// <summary>
			/// 在转完mesh后，把每个mesh的外框计算出来
			/// </summary>
			/// <param name="tileName">瓦块名称</param>
			/// <returns></returns>
			ev_bool updateTileModelBound(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& tileName,const ev_map<EVString,CObqTileInfo*>& tileBoundsMap);
			void traverseTileModel(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& tileName, EarthView::World::Spatial3D::ModelManager::LodIndex* parent,const ev_map<EVString,CObqTileInfo*>& tileBoundsMap);
			/// <summary>
			/// 打包索引到7z包
			/// </summary>
			/// <returns></returns>
			ev_bool convertTileLodToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& tileName, const EVString& tileFolder,const ev_map<EVString,CObqTileInfo*>& tileBoundsMap);
			//
			ev_void collectMeshxInfo(EVString meshxFile,
				ev_uint32& index,
				CObqDataCollection*& collection,
				ev_real64& minMinRange,
				ev_real64& firstLat,
				ev_real64& firstLon,
				ev_real64& firstAlt,
				EarthView::World::Spatial::Math::CMatrix4& firstLocalMat,
				CObqMergeInstanceData& instanceData,
				ev_bool fromInstance,
				ev_uint32 EVID);


			//合并多个meshx文件为meshxg的具体实现
			ev_void mergeMeshx();

			//根据RecordInfoList记录，合并多个Meshxg中的meshx文件---具体实现接口
			ev_void mergeMeshxg();

			//计算合并后的meshxg的顶级瓦块乘数因子
		    ev_real32 computeAverageMergeTileMultiplier();

			//将Instance复用信息写到二进制文件中
			ev_void writeInstanceData(const EVString& instanceFile);

			//从二进制文件里读Instance复用信息，并存储在mInstanceDataList中
			ev_void readInstanceData(const EVString& instanceFile);

			//计算Instance数据的流大小
			ev_uint32 caclInstanceDataMemSize();

			//根据meshx源目录路径、源mesh相对路径，计算出meshx在目标目录中的绝对路径
			EVString getTargetModelPath(const EVString& srcPath, EVString srcModelPath, ev_int32 evid);
		};
	}
}

#endif