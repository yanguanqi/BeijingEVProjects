#ifndef EV_BOQ_QUERYINDEX_H_H
#define EV_BOQ_QUERYINDEX_H_H

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

				/// <summary>
				/// 
				/// </summary>
				class MultiThreadDae2Mesh ;
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
				protected:
				private:
					list<EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*> mInfoListenerList;
					ev_bool mbStop;
					ev_bool mbDae2MeshState;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* mpDBUtility;
					EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;
					ev_bool mLocalMatrixAvailable;
					MultiThreadDae2Mesh* mpMultiThreadDae2Mesh;
				};
			}
		}
	}
}
#endif