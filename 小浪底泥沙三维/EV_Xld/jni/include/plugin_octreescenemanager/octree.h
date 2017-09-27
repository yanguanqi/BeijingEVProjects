#ifndef OCTREE_H
#define OCTREE_H
#include <mathengine/axisalignedbox.h>
#include "graphic/wireboundingbox.h"
#include "plugin_octreescenemanager/octreeprerequisites.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CAxisAlignedBox;
				class CVector3;
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class COctreeNode;

            /** COctree datastructure for managing scene nodes.
            @remarks
            This is a loose octree implementation, meaning that each
            octant child of the octree actually overlaps it's siblings by a factor
            of .5.  This guarantees that any thing that is half the size of the parent will
            fit completely into a child, with no splitting necessary.
            */
            class EV_OCTREEPLUGIN_DLL COctree : public EarthView::World::Core::CAllocatedObject
            {
            public:
                COctree( COctree *ref_parent );
                ~COctree();
            ev_private:
                COctree(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Adds an EarthView::World::Graphic::COctree scene node to this octree level.
                @remarks
                This is called by the COctreeSceneManager after
                it has determined the correct EarthView::World::Graphic::COctree to insert the node into.
                */
                void _addNode( EarthView::World::Graphic::COctreeNode *ref_n);
                /** Removes an EarthView::World::Graphic::COctree scene node to this octree level.
                */
                void _removeNode( EarthView::World::Graphic::COctreeNode *n );
                /** Returns the number of scene nodes attached to this octree
                */
                int numNodes();
                /** The bounding box of the octree
                @remarks
                This is used for octant index determination and rendering, but not culling
                */
                EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
                EarthView::World::Graphic::CWireBoundingBox *mWireBoundingBox;

                /** Creates the wire frame bounding box for this octant
                */
                EarthView::World::Graphic::CWireBoundingBox *getWireBoundingBox();
                /** Vector containing the dimensions of this octree / 2
                */
                EarthView::World::Spatial::Math::CVector3 mHalfSize;

                /** Determines if this octree is twice as big as the given box.
                @remarks
                This method is used by the COctreeSceneManager to determine if the given
                box will fit into a child of this octree.
                */
                ev_bool _isTwiceSize( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &box ) const;
                /**  Returns the appropriate indexes for the child of this octree into which the box will fit.
                @remarks
                This is used by the COctreeSceneManager to determine which child to traverse next when
                finding the appropriate octree to insert the box.  Since it is a loose octree, only the
                center of the box is checked to determine the octant.
                */
                void _getChildIndexes( const EarthView::World::Spatial::Math::CAxisAlignedBox &box, int *x, int *y, int *z ) const;
                /** Creates the EarthView::World::Spatial::Math::CAxisAlignedBox used for culling this octree.
                @remarks
                Since it's a loose octree, the culling bounds can be different than the actual bounds of the octree.
                */
                void _getCullBounds( EarthView::World::Spatial::Math::CAxisAlignedBox *box ) const;

                ///typedef list< EarthView::World::Graphic::COctreeNode * > NodeList;
                class  EV_OCTREEPLUGIN_DLL OctreeNodeList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::COctreeNode *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::COctreeNode *const &t);
                    OctreeNodeList(EarthView::World::Core::CNameValuePairList *pList);
                private:
                    InternalList mList;
                public:
                    OctreeNodeList();

                    void push_back(EarthView::World::Graphic::COctreeNode *const &t);
                    void push_front(EarthView::World::Graphic::COctreeNode *const   &t);
                    void pop_back();

                    void pop_front();

                    EarthView::World::Graphic::COctreeNode*& front();
                    EarthView::World::Graphic::COctreeNode*& back();
                    EarthView::World::Graphic::COctreeNode*& at(ev_uint32 pos);
                    void insert(ev_uint32 pos, EarthView::World::Graphic::COctreeNode *const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void clear();
                };
                /** Public list of SceneNodes attached to this particular octree
                */
                EarthView::World::Graphic::COctree::OctreeNodeList mNodes;
            protected:
                /** Increments the overall node count of this octree and all its parents
                */
                void _ref();
                /** Decrements the overall node count of this octree and all its parents
                */
                void _unref();
                ////number of SceneNodes in this octree and all its children.
                int mNumNodes;
                ////parent octree
                EarthView::World::Graphic::COctree *mParent;
            ev_private:
                /** 3D array of children of this octree.
                @remarks
                Children are dynamically created as needed when nodes are inserted in the EarthView::World::Graphic::COctree.
                If, later, all the nodes are removed from the child, it is still kept around.
                */
                EarthView::World::Graphic::COctree *mChildren[ 2 ][ 2 ][ 2 ];
            };
        }
    }
}

#endif


