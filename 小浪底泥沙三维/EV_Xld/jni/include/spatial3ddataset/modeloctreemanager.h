#ifndef EV_MODEL_OCTREE_MANAGER_H_
#define EV_MODEL_OCTREE_MANAGER_H_
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatialindex/octree/baseoctreemanager.h"
#include "databaseutility/sqldatabase.h"
#include "spatialindex/octree/baseoctreenode.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class CEVSpatialServer;
			class CEVBaseModelDataset;
			class CEVBaseModelLayerInfo;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CCamera;
			class CSceneNode;
			class CWireBoundingBox;
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				class CModelOctreeNodeCreator;

				//class EV_Spatial3DDataset_DLL CModelOctreeNode : public EarthView::World::Spatial::Octree::CBaseOctreeNode
				//{
				//ev_private:
				//	CModelOctreeNode(EarthView::World::Core::CNameValuePairList* pList);
				//public:
				//	CModelOctreeNode();
				//	CModelOctreeNode(ev_uint32 objectID,  const EarthView::World::Spatial::Math::CAxisAlignedBox& box);
				//	virtual ~CModelOctreeNode();

				//	EarthView::World::Spatial::Octree::CBaseOctreeNode* clone();
				//public:
				//	EarthView::World::Spatial::Math::CAxisAlignedBox mInitAABBox;
				//};

				class EV_Spatial3DDataset_DLL CModelOctreeManager : public EarthView::World::Spatial::Octree::COctreeManager
				{
				public:
					/// 构造数据源八叉树管理对象
					static EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasourceModelOctreeManager(const EarthView::World::Core::Database::CSqlDatabase& db, 
						const EVString& datasourceName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						ev_bool autoInit);

					static EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasourceModelOctreeManagerWithCache(const EarthView::World::Core::Database::CSqlDatabase& db, 
						const EVString& datasourceName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						const EVString& cacheFolder,
						ev_bool autoInit);

					static EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasourceModelOctreeManager(const EVString& web, 
						const EVString& datasourceName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						ev_bool autoInit);

					static EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasourceModelOctreeManagerWithCache(const EVString& web, 
						const EVString& datasourceName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						const EVString& cacheFolder,
						ev_bool autoInit);

					/// 构造数据集八叉树管理对象
					static  EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasetModelOctreeManager(const EarthView::World::Core::Database::CSqlDatabase& db, 
						const EVString& datasetAliasName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						ev_bool autoInit);

					static  EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasetModelOctreeManagerWithCache(const EarthView::World::Core::Database::CSqlDatabase& db, 
						const EVString& datasetAliasName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						const EVString& cacheFolder,
						ev_bool autoInit);

					static  EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasetModelOctreeManager(const EVString& web, 
						const EVString& datasetAliasName, 
						const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
						ev_uint32 maxDepth,
						ev_bool autoInit);

					static  CModelOctreeManager* newDatasetModelOctreeManagerWithCache(const EVString& web, 
					EarthView::World::Spatial::CEVSpatialServer* pNetServer, 
					EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset,
					const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
					ev_uint32 maxDepth,
					const EVString& cacheFolder,
					ev_bool autoInit);

					static  EarthView::World::Spatial3D::Dataset::CModelOctreeManager* newDatasetModelOctreeManagerWithCache(const EVString& web, 
					EarthView::World::Spatial::CEVSpatialServer* pNetServer, 
					EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset,
					EarthView::World::Spatial::CEVBaseModelLayerInfo* pNetDatasetInfo,
					const EarthView::World::Spatial::Math::CAxisAlignedBox& box, 
					ev_uint32 maxDepth,
					const EVString& cacheFolder,
					ev_bool autoInit);
				private:
					EarthView::World::Spatial::Octree::COctreeManager* mImpl;
					EarthView::World::Core::CMutex mDataSourceMtx;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelOctreeManager(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CModelOctreeNodeCreator* mpCreator;
				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CModelOctreeManager();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CModelOctreeManager(const EarthView::World::Core::Database::CSqlDatabase& db, const EVString& octreeTable, const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CModelOctreeManager(const EVString& web, EarthView::World::Spatial::CEVSpatialServer* pNetServer, EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset, const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);
					CModelOctreeManager( const EVString& web, EarthView::World::Spatial::CEVSpatialServer* pNetServer, EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset, EarthView::World::Spatial::CEVBaseModelLayerInfo* pNetDatasetInfo, const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CModelOctreeManager();

ev_private:

					/// <summary>
					///  设置包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void setAABBox(const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					///  获取包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getAABBox();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getType() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool initOctree();
					virtual ev_bool initOctree(ev_bool recoverNodes);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setCacheFolder(const EVString& folder);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool restoreOctree(ev_int32 version);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool restoreOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* getRootOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* addOctree(EarthView::World::Spatial::Octree::CBaseOctree* parent, EVString code, EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void getCodeIndex(EVString& code,ev_uint32& x,ev_uint32& y,ev_uint32& z);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool deleteOctree();

					/// <summary>
					/// 清理内存中的八叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool clearMemoryOctree();

					/// <summary>
					/// 添加节点
					/// </summary>
					/// <param name="n">节点对象</param>
					/// <param name="octree">八叉树</param>
					/// <param name="depth">深度</param>
					/// <returns></returns>
					virtual ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *ref_n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth);
					virtual ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *ref_n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth, ev_bool bUpdateMaxBox);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getCodeByIndex(ev_uint32 x,ev_uint32 y, ev_uint32 z);

					/// <summary>
					/// 根据ID查找OCTREENODE
					/// <param name="parentTree">八叉树指针</param>
					/// </summary>
					virtual void findOctreeNode(EarthView::World::Spatial::Octree::CBaseOctree* tree, ev_uint32 id, EarthView::World::Spatial::Octree::CBaseOctreeNodeList& ns, EarthView::World::Spatial::Octree::CBaseOctree*& parent);

					/// <summary>
					/// 根据编码查询八叉树子树
					/// <param name="parentTree">八叉树指针</param>
					/// </summary>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* findOctreeByCode( const EVString& code, EarthView::World::Spatial::Octree::CBaseOctree* tree, ev_uint32 level);

					/// <summary>
					/// 删除节点
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::Octree::CBaseOctree*</returns>
					virtual ev_void removeOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *onode);

					/// <summary>
					/// 移除所有节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void removeAllNode();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeChildOctree(EarthView::World::Spatial::Octree::CBaseOctree* parentTree);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeChildOctree();

					/// <summary>
					/// 拷贝传入的八叉树管理器中的内容
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Octree::COctreeManager* clone() const;

					/// <summary>
					/// 返回版本号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ev_int32 dataVersion() const;

					/// <summary>
					/// 设置版本号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual void setVersion(ev_int32 version);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getDataVersionFromDataSource() const ;

					/// <summary>
					/// 获取所有八叉树节点最大包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getRealBoundingBox();

					/// <summary>
					/// 获取所有八叉树节点最大高度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_real64 getMaxHeight();

					/// <summary>
					/// 获取八叉树节尝深度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getMaxDepth() const;

					/// <summary>
					/// 获取挂在的最多的节点个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getMaxNodeCount();

					/// <summary>
					/// 设置最小八叉树包围盒边长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setMinAABBoxBorderLength(Real borderLength, ev_bool bUpdateTree);


					/// <summary>
					/// 获取最小八叉树包围盒边长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual Real getMinAABBoxBorderLength() const;

					/// <summary>
					/// 设置八叉树可挂载的接点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setMaxNodeCountLimit(ev_int32 maxNodeCount, ev_bool bUseMaxNodeCountLimit);

					/// <summary>
					/// 获取八叉树可挂载的节点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getMaxNodeCountLimit() const;

					/// <summary>
					/// 重新计算八叉树可分裂的深度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void reCalcMaxDepth();

					/// <summary>
					/// 是否包围盒内
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isContainOctreeManagerBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 重新定义八叉树包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void updateOctreeManagerBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool initOctreeFromCache(const ev_int32 dataversionInDatasource);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool writeOctreeCache(const EVString& nodecode,
						EarthView::World::Core::MemoryDataStreamPtr objs,
						Real minx, Real miny, Real minz, Real maxx, Real maxy, Real maxz, ev_int32 version);


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool deleteOctreeCache();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getDataVersionFromCache()const ;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void restoreOctreeToCache();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void storeTreeToCache( EarthView::World::Spatial::Octree::CBaseOctree* parentTree);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool insertOctreeToCache( EarthView::World::Spatial::Octree::CBaseOctree* tree );

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool rebuildDatasourceOctreeManager();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool rebuildDatasetOctreeManager(ev_int32 dataversion);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void updateOctreeManager(ev_uint32 datasetID, const EarthView::World::Spatial::Math::CAxisAlignedBox& box, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType oprType);
				protected:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool rebuildDatasourceOctreeManager_DB();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool rebuildDatasetOctreeManager_DB(ev_int32 dataversion);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void updateOctreeManager_DB(ev_uint32 datasetID, const EarthView::World::Spatial::Math::CAxisAlignedBox& box, EarthView::World::Spatial3D::Dataset::EntityDatasetOperType oprType);
					
				};

			}
		}
	}
}
#endif
