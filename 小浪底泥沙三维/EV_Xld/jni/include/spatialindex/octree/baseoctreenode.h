#ifndef EARTHVIEW_WORLD_SPATIAL_BASEOCTREENODE_H
#define EARTHVIEW_WORLD_SPATIAL_BASEOCTREENODE_H

#define BASEOCTREENODE_SET_BOX(nodePtr, box) \
	if(NULL != nodePtr){\
	CVector3 minMum = (box).getMinimum(); \
	CVector3 maxMum = (box).getMaximum(); \
	(nodePtr)->MinX = minMum.x; (nodePtr)->MinY = minMum.y; (nodePtr)->MinZ = minMum.z; \
	(nodePtr)->MaxX = maxMum.x; (nodePtr)->MaxY = maxMum.y; (nodePtr)->MaxZ = maxMum.z;}

#define	BASEOCTREENODE_GET_BOX(nodePtr, box) \
	if(NULL != nodePtr){\
	(box).setMinimum((nodePtr)->MinX, (nodePtr)->MinY, (nodePtr)->MinZ);\
	(box).setMaximum((nodePtr)->MaxX, (nodePtr)->MaxY, (nodePtr)->MaxZ);}

#include "core/global.h"
#include "spatialindex/config.h"
#include "core/variant.h"
#include "mathengine/axisalignedbox.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Octree{
				class CBaseOctree;


				/// <summary>
				/// 八叉树的节点类
				/// </summary>
				class UNWARP_EXPORT_SPATIALINDEX CBaseOctreeNode/* : public EarthView::World::Core::CBaseObject*/
				{
				ev_private:
					CBaseOctreeNode(EarthView::World::Core::CNameValuePairList* pList);
				public:
					ev_uint32 ID;  //对象ID
					ev_real32 MinX,MinY,MinZ,MaxX,MaxY,MaxZ;
					_extfree CBaseOctreeNode* clone();		
					CBaseOctreeNode();
					~CBaseOctreeNode();
				};

				class UNWARP_EXPORT_SPATIALINDEX TreeBaseNodeList/* : public EarthView::World::Core::CBaseObject*/
				{
ev_private:
					TreeBaseNodeList(EarthView::World::Core::CNameValuePairList* pList){}
				public:
					ev_int32 NodeCount;
					ev_int32 Capacity;

					TreeBaseNodeList(){};

					TreeBaseNodeList(ev_int32 capacity){};

					virtual ~TreeBaseNodeList(){};					

					virtual ev_bool expandCapacity(ev_int32 count){return false;};

					virtual void addNode(const CBaseOctreeNode& node){};

					virtual void removeNode(ev_int32 nodeID){};

					virtual CBaseOctreeNode* getNodeByID(ev_int32 nodeID){return NULL;};

					virtual CBaseOctreeNode* getNodeByIndex(ev_int32 index){return NULL;};

					virtual ev_void clear(){};

					virtual TreeBaseNodeList* clone(){return NULL;}

				};

				class UNWARP_EXPORT_SPATIALINDEX TreeNodeList : public TreeBaseNodeList
				{
ev_private:
					TreeNodeList(EarthView::World::Core::CNameValuePairList* pList){}
				public:
					CBaseOctreeNode* pNodeArray;					

					TreeNodeList();

					~TreeNodeList();
					TreeNodeList(ev_int32 capacity);

					ev_bool expandCapacity(ev_int32 count);

					void addNode(const CBaseOctreeNode& node);

					void removeNode(ev_int32 nodeID);

					CBaseOctreeNode* getNodeByID(ev_int32 nodeID);

					CBaseOctreeNode* getNodeByIndex(ev_int32 index);

					ev_void clear();

					TreeBaseNodeList* clone();			
				};

				/// <summary>
				/// 八叉树节点对象创建类
				/// </summary>
				class UNWARP_EXPORT_SPATIALINDEX CBaseOctreeNodeCreator
				{
				public:
					CBaseOctreeNodeCreator();

					virtual ~CBaseOctreeNodeCreator();

					virtual EarthView::World::Spatial::Octree::CBaseOctreeNode* createOctreeNode(ev_uint32 objectID,  const EarthView::World::Spatial::Math::CAxisAlignedBox& box);
					virtual ev_void destroyOctreeNode(EarthView::World::Spatial::Octree::CBaseOctreeNode* pNode);
					virtual TreeBaseNodeList* createTreeNodeList();
ev_private:
					CBaseOctreeNodeCreator(_in EarthView::World::Core::CNameValuePairList *pList);
				};
			}
		}
	}
}
#endif

