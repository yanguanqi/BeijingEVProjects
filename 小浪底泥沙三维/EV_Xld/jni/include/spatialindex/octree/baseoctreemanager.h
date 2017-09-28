#ifndef EARTHVIEW_WORLD_SPATIAL_BASEOCTREEMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL_BASEOCTREEMANAGER_H

#include "spatialindex/config.h"
#include "spatialindex/octree/baseoctree.h"
#include "spatialinterface/idataset.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			class OctreeCacheAccessor;
			namespace Octree{

				enum OctreeManagerType
				{
					OMT_NULL,
					OMT_DB,
					OMT_Web
				};

				class UNWARP_EXPORT_SPATIALINDEX CBaseOctreeNodeList 
				{
ev_private:
					typedef vector<EarthView::World::Spatial::Octree::CBaseOctreeNode> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">迭代器</param>
					/// <param name="t">Handle标识</param>
					/// <returns>插入后的键值对</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::Octree::CBaseOctreeNode const &t);

				private:
					InternalList mList;

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CBaseOctreeNodeList();

					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial::Octree::CBaseOctreeNode const &t);

					/// <summary>
					/// 删除最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回第一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>第一个元素值</returns>
					EarthView::World::Spatial::Octree::CBaseOctreeNode& front();

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial::Octree::CBaseOctreeNode& back();

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::Octree::CBaseOctreeNode& at(_in ev_uint32 pos);

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial::Octree::CBaseOctreeNode const &at(_in ev_uint32 pos) const;

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial::Octree::CBaseOctreeNode const &t);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>为空返回true，否则false</returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中元素数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器中元素数量大小</returns>
					ev_size_t size() const;

					/// <summary>
					/// 改变容器大小
					/// </summary>
					/// <param name="newSize">容器大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void reserve(ev_size_t count);
				};

				class EV_SPATIALINDEX_DLL COctreeManager : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COctreeManager(_in EarthView::World::Core::CNameValuePairList *pList){};

				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COctreeManager(){};


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COctreeManager(){};

ev_private:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getType() const{EV_ASSERT(false); return (0);};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool initOctree(){EV_ASSERT(false); return false;};
					virtual ev_bool initOctree(ev_bool recoverNodes){EV_ASSERT(false); return false;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setCacheFolder(const EVString& folder){EV_ASSERT(false)};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool restoreOctree(ev_int32 version){EV_ASSERT(false); return false;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool restoreOctree(){EV_ASSERT(false); return false;};


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* createNewOctree(){EV_ASSERT(false); return NULL;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* getRootOctree(){EV_ASSERT(false); return NULL;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* addOctree(EarthView::World::Spatial::Octree::CBaseOctree* parent, EVString code, EarthView::World::Spatial::Math::CAxisAlignedBox& box){EV_ASSERT(false); return NULL;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void getCodeIndex(EVString& code,ev_uint32& x,ev_uint32& y,ev_uint32& z){EV_ASSERT(false)};

					/// <summary>
					/// 删除八叉树数据，该函数会将八叉树数据从存储介质中删除。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool deleteOctree(){EV_ASSERT(false); return false;};

					/// <summary>
					/// 清理内存中的八叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool clearMemoryOctree(){EV_ASSERT(false); return false;};

					/// <summary>
					/// 添加节点
					/// </summary>
					/// <param name="n">节点对象</param>
					/// <param name="octree">八叉树</param>
					/// <param name="depth">深度</param>
					/// <returns></returns>
					virtual ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth){EV_ASSERT(false)};
					virtual ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth, ev_bool bUpdateMaxBox){EV_ASSERT(false)};
					virtual ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth, ev_bool bUpdateMaxBox, set<EVString>& changedOctreeCodeSet){EV_ASSERT(false)};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EVString getCodeByIndex(ev_uint32 x,ev_uint32 y, ev_uint32 z){EV_ASSERT(false); return "";};

					/// <summary>
					/// 根据ID查找OCTREENODE，返回所在树的指针
					/// <param name="parentTree">八叉树指针</param>
					/// </summary>
					virtual void findOctreeNode(EarthView::World::Spatial::Octree::CBaseOctree* tree, ev_uint32 id, EarthView::World::Spatial::Octree::CBaseOctreeNodeList& ns, EarthView::World::Spatial::Octree::CBaseOctree*& parent){EV_ASSERT(false)};

					/// <summary>
					/// 根据编码查询八叉树子树
					/// <param name="parentTree">八叉树指针</param>
					/// </summary>
					virtual EarthView::World::Spatial::Octree::CBaseOctree* findOctreeByCode(const EVString& code, EarthView::World::Spatial::Octree::CBaseOctree* tree, ev_uint32 level){EV_ASSERT(false); return NULL;};

					/// <summary>
					/// 删除节点
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::Octree::CBaseOctree*</returns>
					virtual ev_void removeOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *onode){EV_ASSERT(false); };

					/// <summary>
					/// 移除所有节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void removeAllNode(){EV_ASSERT(false);};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeChildOctree(EarthView::World::Spatial::Octree::CBaseOctree* parentTree){EV_ASSERT(false)};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeChildOctree(){EV_ASSERT(false)};

					/// <summary>
					/// 拷贝传入的八叉树管理器中的内容
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Octree::COctreeManager* clone() const{EV_ASSERT(false); return NULL;};

					/// <summary>
					/// 返回版本号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ev_int32 dataVersion() const{EV_ASSERT(false); return (0);};

					/// <summary>
					/// 设置版本号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual void setVersion(ev_int32 version){EV_ASSERT(false);};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getDataVersionFromDataSource() const {EV_ASSERT(false); return (0);};

					/// <summary>
					/// 获取所有八叉树节点最大包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getRealBoundingBox(){EV_ASSERT(false); static EarthView::World::Spatial::Math::CAxisAlignedBox a; return a;};

					/// <summary>
					/// 获取所有八叉树节点最大高度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_real64 getMaxHeight() {EV_ASSERT(false); return (0);};

					/// <summary>
					/// 获取八叉树节尝深度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getMaxDepth() const{EV_ASSERT(false); return (0);};

					/// <summary>
					/// 获取挂在的最多的节点个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getMaxNodeCount(){EV_ASSERT(false); return (0);};

					/// <summary>
					/// 设置最小八叉树包围盒边长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setMinAABBoxBorderLength(Real borderLength, ev_bool bUpdateTree){EV_ASSERT(false)};


					/// <summary>
					/// 获取最小八叉树包围盒边长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual Real getMinAABBoxBorderLength() const{EV_ASSERT(false); return 0.0;};

					/// <summary>
					/// 设置八叉树可挂载的接点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setMaxNodeCountLimit(ev_int32 maxNodeCount, ev_bool bUseMaxNodeCountLimit){EV_ASSERT(false)};

					/// <summary>
					/// 获取八叉树可挂载的节点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getMaxNodeCountLimit() const{EV_ASSERT(false); return (0);};

					/// <summary>
					/// 重新计算八叉树可分裂的深度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void reCalcMaxDepth(){EV_ASSERT(false)};

					/// <summary>
					/// 是否包围盒内
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isContainOctreeManagerBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box){EV_ASSERT(false); return false;};

					/// <summary>
					/// 重新定义八叉树包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void updateOctreeManagerBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box){EV_ASSERT(false)};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool initOctreeFromCache(const ev_int32 dataversionInDatasource){EV_ASSERT(false); return false;};
					virtual ev_bool initOctreeFromCache(const ev_int32 dataversionInDatasource, ev_bool recoverNodes){EV_ASSERT(false); return false;};
					virtual CBaseOctree*  initOctreeFromCache(const EVString& code, const ev_int32 dataversionInDatasource){EV_ASSERT(false); return false;};
					virtual CBaseOctree*  initOctreeFromCache(const EVString& code, const ev_int32 dataversionInDatasource, ev_bool recoverNodes){EV_ASSERT(false); return false;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool writeOctreeCache(const EVString& nodecode,
						EarthView::World::Core::MemoryDataStreamPtr objs,
						Real minx, Real miny, Real minz, Real maxx, Real maxy, Real maxz, ev_int32 version){EV_ASSERT(false); return false;};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool deleteOctreeCache(){EV_ASSERT(false); return false;};	

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 getDataVersionFromCache()const {EV_ASSERT(false); return (0);};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void restoreOctreeToCache(){EV_ASSERT(false)};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void storeTreeToCache( EarthView::World::Spatial::Octree::CBaseOctree* parentTree){EV_ASSERT(false)};

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool insertOctreeToCache( EarthView::World::Spatial::Octree::CBaseOctree* tree ){EV_ASSERT(false); return false;};		
										
				protected:
				private:
				};


				/// <summary>
				/// 八叉树基类，负责基本的对象管理
				/// </summary>
				class EV_SPATIALINDEX_DLL CBaseOctreeManager : public EarthView::World::Spatial::Octree::COctreeManager
				{
					friend class CBaseOctree;
				protected:
					ev_int32 mType;
					EVString mCacheOctreeDataFolder;
					ev_uint32 mMaxDepth; //最大深度
					Real mMinAABBoxBorderLength; //最小包围盒边长度
					ev_int32 mMaxNodeCountLimit; //一棵树上可以挂接的最多节点数量
					ev_bool mbUseMaxNodeCountLimit; //是否对挂接的节点数量进行限制，如果进行限制，这棵树会自动分裂，即使超过了深度范围。
					EarthView::World::Spatial::Math::CAxisAlignedBox mRealAABBox; //八叉树真实包围盒
					EarthView::World::Spatial::Octree::CBaseOctree* mRootOctant; //根八叉树
					ev_int32 mDataVersion;//缓存版本号，和对应的数据集一致
					ev_bool mCacheRealBox;
					ev_real64 mMaxHeight; //所有包围盒最大高度

					CBaseOctreeNodeCreator* mpOctreeNodeCreator;
					CBaseOctreeNodeCreator* mpDefaultOctreeNodeCreator;
					static map<void*, EVString> s_octreeCachePath; 
					static map<void*, CBaseOctreeNodeCreator*> s_octreeNodeCreator; 
					ev_bool mbRecoverNodesWhenInit;

					typedef map<EVString, ev_uint32> NodeListCapacity;
					NodeListCapacity mNodeListCapacity;
					EarthView::World::Spatial::OctreeCacheAccessor* mpCacheAccessor;
				private:
					/// <summary>
					/// 计算最小包围盒范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void calcMinAABBoxBorderLength();

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBaseOctreeManager(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CBaseOctreeManager();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="maxDepth">最大深度</param>
					/// <returns></returns>
					CBaseOctreeManager(const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CBaseOctreeManager();

ev_private:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setOctreeNodeCreator(EarthView::World::Spatial::Octree::CBaseOctreeNodeCreator* pCreator);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getType() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool initOctree();
					virtual ev_bool initOctree(ev_bool recoverNodes);
					virtual CBaseOctree* initOctree(const EVString& code);
					virtual CBaseOctree* initOctree(const EVString& code, ev_bool recoverNodes);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void recoverNodesWhenInit(ev_bool tag);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isRecoverNodesWhenInit() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setCacheFolder(const EVString& folder);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EVString getCacheFolder(void* pTreeManager);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static CBaseOctreeNodeCreator* getOctreeNodeCreator(void* pTreeManager);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool restoreOctree(ev_int32 version);

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
					EarthView::World::Spatial::Octree::CBaseOctree* createNewOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Octree::CBaseOctree* getRootOctree();
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Octree::CBaseOctree* addOctree(EarthView::World::Spatial::Octree::CBaseOctree* parent, EVString code, EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void getCodeIndex(EVString& code,ev_uint32& x,ev_uint32& y,ev_uint32& z);

					/// <summary>
					/// 删除八叉树数据，该函数会将八叉树数据从存储介质中删除。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool deleteOctree();

					/// <summary>
					/// 清理内存中的八叉树
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool clearMemoryOctree();

					/// <summary>
					/// 添加节点
					/// </summary>
					/// <param name="n">节点对象</param>
					/// <param name="octree">八叉树</param>
					/// <param name="depth">深度</param>
					/// <returns></returns>
					ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *ref_n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth);
					ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *ref_n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth, ev_bool bUpdateMaxBox);
					ev_void addOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *ref_n, EarthView::World::Spatial::Octree::CBaseOctree *octant, int depth, ev_bool bUpdateMaxBox, set<EVString>& changedOctreeCodeSet);


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getCodeByIndex(ev_uint32 x,ev_uint32 y, ev_uint32 z);

					/// <summary>
					/// 根据ID查找OCTREENODE，返回所在树的指针
					/// <param name="parentTree">八叉树指针</param>
					/// </summary>
					void findOctreeNode(EarthView::World::Spatial::Octree::CBaseOctree* tree, ev_uint32 id, EarthView::World::Spatial::Octree::CBaseOctreeNodeList& ns,EarthView::World::Spatial::Octree::CBaseOctree*& parent);

					/// <summary>
					/// 根据编码查询八叉树子树
					/// <param name="parentTree">八叉树指针</param>
					/// </summary>
					EarthView::World::Spatial::Octree::CBaseOctree* findOctreeByCode(const EVString& code, EarthView::World::Spatial::Octree::CBaseOctree* tree, ev_uint32 level);

					/// <summary>
					/// 删除节点
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::Octree::CBaseOctree*</returns>
					ev_void removeOctreeNode( EarthView::World::Spatial::Octree::CBaseOctreeNode *onode);

					/// <summary>
					/// 移除所有节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void removeAllNode();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeChildOctree(EarthView::World::Spatial::Octree::CBaseOctree* parentTree);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeChildOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeOctree(const EVString& code);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Octree::CBaseOctreeManager& operator = (const EarthView::World::Spatial::Octree::CBaseOctreeManager& pother);

					/// <summary>
					/// 拷贝传入的八叉树管理器中的内容
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Octree::COctreeManager* clone() const;

					/// <summary>
					/// 返回版本号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_int32 dataVersion() const;

					/// <summary>
					/// 设置版本号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					void setVersion(ev_int32 version);

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
					EarthView::World::Spatial::Math::CAxisAlignedBox getRealBoundingBox();

					/// <summary>
					/// 获取所有八叉树节点最大高度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getMaxHeight();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setMaxDepth(ev_uint32 depth);
					
					/// <summary>
					/// 获取八叉树节尝深度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_uint32 getMaxDepth() const;

					/// <summary>
					/// 获取挂在的最多的节点个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getMaxNodeCount() const ;

					/// <summary>
					/// 设置最小八叉树包围盒边长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setMinAABBoxBorderLength(Real borderLength, ev_bool bUpdateTree);


					/// <summary>
					/// 获取最小八叉树包围盒边长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					Real getMinAABBoxBorderLength() const;

					/// <summary>
					/// 设置八叉树可挂载的接点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setMaxNodeCountLimit(ev_int32 maxNodeCount, ev_bool bUseMaxNodeCountLimit);

					/// <summary>
					/// 获取八叉树可挂载的节点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getMaxNodeCountLimit() const;
					
					/// <summary>
					/// 重新计算八叉树可分裂的深度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void reCalcMaxDepth();

					/// <summary>
					/// 是否包围盒内
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isContainOctreeManagerBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 重新定义八叉树包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void updateOctreeManagerBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box);
					
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool existCacheDBFile()const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool initOctreeFromCache(const ev_int32 dataversionInDatasource);
					ev_bool initOctreeFromCache(const ev_int32 dataversionInDatasource, ev_bool recoverNodes);
					CBaseOctree* initOctreeFromCache(const EVString& code, const ev_int32 dataversionInDatasource);
					CBaseOctree* initOctreeFromCache(const EVString& code, const ev_int32 dataversionInDatasource, ev_bool recoverNodes);


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
					ev_int32 getDataVersionFromCache() const;

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

					
					void addTreeCapacity(const EVString& nodecode, ev_uint32 capacity);

					ev_uint32 getTreeCapacity(const EVString& nodecode);

					void removeTreeCapacity(const EVString& nodecode);
				};
			}
		}
	}
}
#endif
