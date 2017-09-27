#ifndef OCTREESCENEMANAGER_H
#define OCTREESCENEMANAGER_H
#include <mathengine/axisalignedbox.h>
#include <mathengine/vector3.h>
#include <mathengine/sphere.h>
#include "plugin_octreescenemanager/octreeprerequisites.h"
#include "graphic/scenemanager.h"
#include "graphic/renderoperation.h"
#include "plugin_octreescenemanager/octree.h"
#include <algorithm>


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CAxisAlignedBox;
				class CSphere;
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
            class COctreeCamera;
            class COctreeIntersectionSceneQuery;
            class COctreeRaySceneQuery;
            class COctreeSphereSceneQuery;
            class COctreeAxisAlignedBoxSceneQuery;
            class COctreePlaneBoundedVolumeListSceneQuery;

            ///typedef list< EarthView::World::Graphic::CWireBoundingBox * > BoxList;
            class EV_OCTREEPLUGIN_DLL BoxList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::CWireBoundingBox *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::CWireBoundingBox *const &t);

            private:
                InternalList mList;
            ev_private:
                BoxList( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                BoxList();
            public:
                void push_back(EarthView::World::Graphic::CWireBoundingBox *const &ref_t);
                void push_front(EarthView::World::Graphic::CWireBoundingBox *const &ref_t);
                void pop_back();
                void pop_front();
                EarthView::World::Graphic::CWireBoundingBox*& front();
                EarthView::World::Graphic::CWireBoundingBox*& back();
                EarthView::World::Graphic::CWireBoundingBox*& at(ev_uint32 pos);
                void insert(ev_uint32 pos, EarthView::World::Graphic::CWireBoundingBox *const &ref_t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void clear();
            };
            ///typedef list< ev_uint32 > ColorList;
            class EV_OCTREEPLUGIN_DLL ColorList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<ev_uint32> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, ev_uint32 const &t);
            private:
                InternalList mList;
            ev_private:
                ColorList( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                ColorList();
            public:
                void push_back(ev_uint32 const &t);
                void push_front(ev_uint32 const   &t);
                void pop_back();
                void pop_front();
                ev_uint32 &front();
                ev_uint32 &back();
                ev_uint32 &at(ev_uint32 pos);
                void insert(ev_uint32 pos, ev_uint32 const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void clear();
            };
            ///typedef list< EarthView::World::Graphic::CSceneNode * >::type SceneNodeList;
            class EV_OCTREEPLUGIN_DLL SceneNodes : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::CSceneNode *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EarthView::World::Graphic::CSceneNode *const &t);
            private:
                InternalList mList;
            ev_private:
                SceneNodes( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                SceneNodes();
            public:
                void push_back(EarthView::World::Graphic::CSceneNode *const &ref_t);
                void push_front(EarthView::World::Graphic::CSceneNode *const &ref_t) ;
                void pop_back();
                void pop_front();
                EarthView::World::Graphic::CSceneNode*& front();
                EarthView::World::Graphic::CSceneNode*& back();
                EarthView::World::Graphic::CSceneNode*& at(ev_uint32 pos);
                void insert(ev_uint32 pos, EarthView::World::Graphic::CSceneNode *const &ref_t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void clear();
            };

            /** Specialized EarthView::World::Graphic::CSceneManager that divides the geometry into an octree in order to facilitate spatial queries.
            @remarks
            */
            class EV_OCTREEPLUGIN_DLL COctreeSceneManager : public EarthView::World::Graphic::CSceneManager
            {
                friend class COctreeIntersectionSceneQuery;
                friend class COctreeRaySceneQuery;
                friend class COctreeSphereSceneQuery;
                friend class COctreeAxisAlignedBoxSceneQuery;
                friend class COctreePlaneBoundedVolumeListSceneQuery;
            private:
                ///static COctreeSceneManager* ms_Singleton;
            public:
                static int intersect_call;
                /** Standard Constructor.  Initializes the octree to -10000,-10000,-10000 to 10000,10000,10000 with a depth of 8. */
                COctreeSceneManager(const EVString &name);
                /** Standard Constructor */
                COctreeSceneManager(const EVString &name, EarthView::World::Spatial::Math::CAxisAlignedBox &box, int max_depth );
                /** Standard destructor */
                ~COctreeSceneManager();

                ///static COctreeSceneManager& getSingleton();
                ///static COctreeSceneManager* getSingletonPtr();
            ev_private:
                COctreeSceneManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// @copydoc CSceneManager::getTypeName
                virtual EVString getTypeName() const;
                /** Initializes the manager to the given box and depth.
                */
                void init( EarthView::World::Spatial::Math::CAxisAlignedBox &box, int d );
			ev_internal:
                /** Creates a specialized EarthView::World::Graphic::COctreeNode */
                virtual EarthView::World::Graphic::CSceneNode *createSceneNodeImpl ();
                /** Creates a specialized EarthView::World::Graphic::COctreeNode */
                virtual EarthView::World::Graphic::CSceneNode *createSceneNodeImpl ( const EVString &name );
			public:
                /** Creates a specialized EarthView::World::Graphic::COctreeCamera */
                virtual EarthView::World::Graphic::CCamera *createCamera( const EVString &name );
                /** Deletes a scene node */
                virtual void destroySceneNode( const EVString &name );

                /** Does nothing more */
                virtual void _updateSceneGraph( EarthView::World::Graphic::CCamera *cam );
                /** Recurses through the octree determining which nodes are visible. */
                virtual void _findVisibleObjects ( EarthView::World::Graphic::CCamera *cam,
                                                   EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds, ev_bool onlyShadowCasters );
                /** Alerts each unculled object, notifying it that it will be drawn.
                 * Useful for doing calculations only on nodes that will be drawn, prior
                 * to drawing them...
                 */
                virtual void _alertVisibleObjects( );
                /** Walks through the octree, adding any visible objects to the render queue.
                @remarks
                If any octant in the octree if completely within the view frustum,
                all subchildren are automatically added with no visibility tests.
                */
                void walkOctree( EarthView::World::Graphic::COctreeCamera *camera, EarthView::World::Graphic::CRenderQueue *queue, COctree *octant,
                                 EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds, ev_bool foundvisible,
                                 ev_bool onlyShadowCasters,ev_bool oceanDepthRendering);

				void walkOctree( EarthView::World::Graphic::COctreeCamera *camera, COctree *octant,ev_bool foundvisible);
                /** Checks the given EarthView::World::Graphic::COctreeNode, and determines if it needs to be moved
                * to a different octant.
                */
                void _updateOctreeNode( EarthView::World::Graphic::COctreeNode *onode);
                /** Removes the given octree node */
                void _removeOctreeNode( EarthView::World::Graphic::COctreeNode *onode);
                /** Adds the EarthView::World::Graphic::COctree CNode, starting at the given octree, and recursing at max to the specified depth.
                */
                void _addOctreeNode( EarthView::World::Graphic::COctreeNode *ref_n, COctree *ref_octree, int depth);
                void _addOctreeNode( EarthView::World::Graphic::COctreeNode *ref_n, COctree *ref_octree);
                /** Recurses the octree, adding any nodes intersecting with the box into the given list.
                It ignores the exclude scene node.
                */
                void findNodesIn( const EarthView::World::Spatial::Math::CAxisAlignedBox &box, EarthView::World::Graphic::SceneNodes &list, EarthView::World::Graphic::CSceneNode *exclude);
                void findNodesIn( const EarthView::World::Spatial::Math::CAxisAlignedBox &box, EarthView::World::Graphic::SceneNodes &list);
                /** Recurses the octree, adding any nodes intersecting with the sphere into the given list.
                It ignores the exclude scene node.
                */
                void findNodesIn( const EarthView::World::Spatial::Math::CSphere &sphere, EarthView::World::Graphic::SceneNodes &list, EarthView::World::Graphic::CSceneNode *exclude);
                void findNodesIn( const EarthView::World::Spatial::Math::CSphere &sphere, EarthView::World::Graphic::SceneNodes &list);
                /** Recurses the octree, adding any nodes intersecting with the volume into the given list.
                  It ignores the exclude scene node.
                  */
                void findNodesIn( const EarthView::World::Spatial::Math::CPlaneBoundedVolume &volume, EarthView::World::Graphic::SceneNodes &list, EarthView::World::Graphic::CSceneNode *exclude);
                void findNodesIn( const EarthView::World::Spatial::Math::CPlaneBoundedVolume &volume, EarthView::World::Graphic::SceneNodes &list);

                /** Recurses the octree, adding any nodes intersecting with the ray into the given list.
                  It ignores the exclude scene node.
                  */
                void findNodesIn( const EarthView::World::Spatial::Math::CRay &ray, EarthView::World::Graphic::SceneNodes &list, EarthView::World::Graphic::CSceneNode *exclude);
                void findNodesIn( const EarthView::World::Spatial::Math::CRay &ray, EarthView::World::Graphic::SceneNodes &list);
                /** Sets the box visibility flag */
                void setShowBoxes( ev_bool b );
                void setLooseOctree( ev_bool b );

                /** Resizes the octree to the given size */
                void resize( const EarthView::World::Spatial::Math::CAxisAlignedBox &box );
                /** Sets the given option for the EarthView::World::Graphic::CSceneManager
                           @remarks
                    Options are:
                    "Size", EarthView::World::Spatial::Math::CAxisAlignedBox *;
                    "Depth", int *;
                    "ShowOctree", ev_bool *;
                */
                virtual ev_bool setOption( const EVString &key, const void *val);
                /** Gets the given option for the Scene Manager.
                    @remarks
                    See setOption
                */
                virtual ev_bool getOption( const EVString &key, void *val);
                virtual ev_bool getOptionValues( const EVString &key, EarthView::World::Core::StringVector &refValueList );
                virtual ev_bool getOptionKeys( EarthView::World::Core::StringVector &refKeys );
                /** Overridden from EarthView::World::Graphic::CSceneManager */
                virtual void clearScene();
                virtual EarthView::World::Graphic::CAxisAlignedBoxSceneQuery *createAABBQuery(const EarthView::World::Spatial::Math::CAxisAlignedBox &box, ev_uint32 mask);
                virtual EarthView::World::Graphic::CSphereSceneQuery *createSphereQuery(const EarthView::World::Spatial::Math::CSphere &sphere, ev_uint32 mask);
                virtual EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery *createPlaneBoundedVolumeQuery(const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &volumes, ev_uint32 mask);
                virtual EarthView::World::Graphic::CRaySceneQuery *createRayQuery(const EarthView::World::Spatial::Math::CRay &ray, ev_uint32 mask);
                virtual EarthView::World::Graphic::CIntersectionSceneQuery *createIntersectionQuery(ev_uint32 mask);
            protected:
                COctree::OctreeNodeList mVisible;
                //// The root octree
                EarthView::World::Graphic::COctree *mOctree;
                //// list of boxes to be rendered
                BoxList mBoxes;
                //// Number of rendered objs
                int mNumObjects;
                //// Max depth for the tree
                int mMaxDepth;
                //// Size of the octree
                EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
                //// Boxes visibility flag
                ev_bool mShowBoxes;

                ev_bool mLoose;
                Real mCorners[ 24 ];
                static ev_uint32 mColors[ 8 ];
                static ev_uint16 mIndexes[ 24 ];
                EarthView::World::Spatial::Math::CMatrix4 mScaleFactor;
            };
            //// Factory for COctreeSceneManager
            class COctreeSceneManagerFactory : public CSceneManagerFactory
            {
            protected:
                void initMetaData() const;
            public:
                COctreeSceneManagerFactory();
                ~COctreeSceneManagerFactory();
                //// Factory type name
                static const EVString FACTORY_TYPE_NAME;
                EarthView::World::Graphic::CSceneManager *createInstance(const EVString &instanceName);
                void destroyInstance(EarthView::World::Graphic::CSceneManager *instance);
            };

        }
    }
}

#endif

