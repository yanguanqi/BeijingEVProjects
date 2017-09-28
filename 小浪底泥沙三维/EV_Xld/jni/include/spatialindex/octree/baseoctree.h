#ifndef EARTHVIEW_WORLD_SPATIAL_BASEOCTREE_H
#define EARTHVIEW_WORLD_SPATIAL_BASEOCTREE_H

#define TREE_NODE_LIST_EXPAND_SIZE 64	

#include "spatialindex/config.h"
#include "spatialindex/octree/baseoctreenode.h"
#include "mathengine/axisalignedbox.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Octree{
			
				
#define BASEOCTREE_SET_BOX(octreePtr, box) \
	if(NULL != octreePtr){\
	EarthView::World::Spatial::Math::CVector3 minMum = (box).getMinimum(); \
	EarthView::World::Spatial::Math::CVector3 maxMum = (box).getMaximum(); \
	(octreePtr)->mMinX = minMum.x; (octreePtr)->mMinY = minMum.y; (octreePtr)->mMinZ = minMum.z; \
	(octreePtr)->mMaxX = maxMum.x; (octreePtr)->mMaxY = maxMum.y; (octreePtr)->mMaxZ = maxMum.z;}

#define	BASEOCTREE_GET_BOX(octreePtr, box) \
	if(NULL != octreePtr){\
	(box).setMinimum((octreePtr)->mMinX, (octreePtr)->mMinY, (octreePtr)->mMinZ);\
	(box).setMaximum((octreePtr)->mMaxX, (octreePtr)->mMaxY, (octreePtr)->mMaxZ);}

				
				class CBaseOctreeManager;
				/// <summary>
				/// 八叉树的基类，提供八叉树基本数据结构
				/// </summary>
				class UNWARP_EXPORT_SPATIALINDEX CBaseOctree
				{
				ev_private:
					EarthView::World::Spatial::Octree::CBaseOctree* mChildren[2][2][2];
				public:
					/// <summary>
					/// setTreeNodeList(new YourNodeList)
					/// 在使用树之前调用
					/// 内部释放对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTreeNodeList(TreeBaseNodeList* pList)
					{
						if (NULL != mNodes)
						{
							delete mNodes;
						}
						mNodes = pList;
					}

					TreeBaseNodeList* getTreeNodeList()
					{
						return mNodes;
					}

					void expandCapacity(ev_int32 count){mNodes->expandCapacity(count);}; 
				private:
					EarthView::World::Spatial::Octree::CBaseOctree* mParent;
					
					ev_uint32 mNumNodes;  //包含子树里面的节点

					  //八叉树节点编码
					ev_char* mCode; 

					//八叉树包围盒
					//EarthView::World::Spatial::Math::CAxisAlignedBox mAABBox; 
					ev_real32 mMinX,mMinY,mMinZ,mMaxX,mMaxY,mMaxZ;

					//版本号
					ev_uint16 mVersion ;
					ev_bool mbNodesRecovered;

					//八叉树的节点集					
					TreeBaseNodeList* mNodes;
					ev_int32 mNodesCount;

					
					CBaseOctreeManager* mpTreeManager;  //用于寻找缓存路径

					ev_void _ref();					
					ev_void _unref();


					ev_bool mInitChildren;
				//ev_private:
				//	/// <summary>
				//	/// 构造函数
				//	/// </summary>
				//	/// <param name="pList">构造函数参数键值对表</param>
				//	/// <returns></returns>
				//	CBaseOctree(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CBaseOctree(CBaseOctreeManager* ref_Manager,CBaseOctree* ref_parent, const char* code);
					~CBaseOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Octree::CBaseOctree* clone(CBaseOctreeManager* treeManager);
					

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					 EarthView::World::Spatial::Octree::CBaseOctree* getParent() ;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Octree::CBaseOctree* getChild(int x, int y, int z);

					/// <summary>
					/// 获取子树中节点数量最多的节点个数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getChildMaxNodes();

					/// <summary>
					/// 获取节点数，包括子节点
					/// </summary>
					/// <returns></returns>
					ev_uint32 numNodes() const;								

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					ev_int32 recoverNodesFromCache();

					/// <summary>
					/// 节点是否已恢复
					/// </summary>
					/// <returns></returns>
					ev_bool nodesRecovered() const;

					/// <summary>
					/// 添加节点
					/// </summary>
					/// <param name="node">八叉树节点</param>
					/// <returns></returns>
					ev_void addNode(CBaseOctreeNode* pNode);

					/// <summary>
					/// 清除所有节点，不释放内存
					/// </summary>
					/// <param name="node">八叉树节点</param>
					/// <returns></returns>
					ev_void clearAllNodes();

					/// <summary>
					/// 获取节点数
					/// </summary>
					/// <param name="node">八叉树节点</param>
					/// <returns>ev_uint32</returns>
					ev_uint32 getNumNodes() const ;

					/// <summary>
					/// 获取节点
					/// </summary>
					/// <param name="index">下标</param>
					/// <returns></returns>
					CBaseOctreeNode* getNode(ev_uint32 index);

					/// <summary>
					/// 删除节点
					/// </summary>
					/// <param name="node">八叉树节点</param>
					/// <returns></returns>
					ev_bool removeNode(CBaseOctreeNode* node);


					/// <summary>
					/// 释放所有节点内存
					/// </summary>
					/// <param name="removeChildren">是否清空子树的节点</param>
					/// <returns></returns>
					ev_void removeAllNodes();
					ev_void removeAllNodes(ev_bool removeChildren);

					/// <summary>
					/// 判断八叉树的包围盒是否是传入的包围盒的2倍
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <returns>ev_bool</returns>
					ev_bool isTwiceSize(const EarthView::World::Spatial::Math::CAxisAlignedBox &box) const;

					/// <summary>
					/// 根据传入包围盒范围取出八叉树子树索引位置
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="x">x轴位置</param>
					/// <param name="y">y轴位置</param>
					/// <param name="z">z轴位置</param>
					/// <returns></returns>
					ev_void getChildIndexes( const EarthView::World::Spatial::Math::CAxisAlignedBox &box, int *x, int *y, int *z ) const;

					/// <summary>
					/// 获取裁剪的包围盒，松散八叉树的包围盒边缘会扩大一倍
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <returns></returns>
					ev_void getCullBounds( EarthView::World::Spatial::Math::CAxisAlignedBox *box ) const;

					/// <summary>
					/// 设置包围盒
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <returns></returns>
					ev_void setAABBox(const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CAxisAlignedBox getAABBox();

					/// <summary>
					/// 获取编码
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <returns></returns>
					const ev_char* getCode() const;

				
					
					ev_void copyOctree(EarthView::World::Spatial::Octree::CBaseOctree* srcOctree, EarthView::World::Spatial::Octree::CBaseOctree* dstTree);

					ev_void setInitChildren(ev_bool initChildren);

					ev_bool isInitChildren();
				private:
					ev_void _addNode(CBaseOctreeNode* pNode);
				};
			}
		}
	}
}
#endif
