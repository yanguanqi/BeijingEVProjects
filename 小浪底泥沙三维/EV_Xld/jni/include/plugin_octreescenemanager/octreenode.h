#ifndef OCTREENODE_H
#define OCTREENODE_H
#include <graphic/scenenode.h>
#include "octreescenemanager.h"
#include "octreeprerequisites.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Specialized EarthView::World::Graphic::CSceneNode that is customized for working within an EarthView::World::Graphic::COctree. Each node
            * maintains its own bounding box, rather than merging it with all the children.
            *
            */
            class EV_OCTREEPLUGIN_DLL COctreeNode : public EarthView::World::Graphic::CSceneNode
            {
            public:
                /** Standard constructor */
                COctreeNode( EarthView::World::Graphic::CSceneManager *ref_creator );
                /** Standard constructor */
                COctreeNode( EarthView::World::Graphic::CSceneManager *ref_creator, const EVString &name );
            ev_private:
                COctreeNode(_in EarthView::World::Core::CNameValuePairList *pList);
                /** Standard destructor */
            public:
                ~COctreeNode();
                /** Overridden from EarthView::World::Graphic::CNode to remove any reference to octants */
                EarthView::World::Graphic::CNode *removeChild( ev_uint16 index );

                /** Overridden from EarthView::World::Graphic::CNode to remove any reference to octants */
                EarthView::World::Graphic::CNode *removeChild( const EVString &name );
                /** Overridden from EarthView::World::Graphic::CNode to remove any reference to octants */
                EarthView::World::Graphic::CNode *removeChild( EarthView::World::Graphic::CNode *child );
                /** Overridden from EarthView::World::Graphic::CNode to remove any reference to octants */
                void removeAllChildren();
                /** Returns the EarthView::World::Graphic::COctree in which this COctreeNode resides
                */
                EarthView::World::Graphic::COctree *getOctant();
                /** Sets the EarthView::World::Graphic::COctree in which this COctreeNode resides
                */
                void setOctant( EarthView::World::Graphic::COctree *ref_o );
                /** Determines if the center of this node is within the given box
                */
                ev_bool _isIn( EarthView::World::Spatial::Math::CAxisAlignedBox &box );
                /** Adds all the attached scenenodes to the render queue
                */
                virtual void _addToRenderQueue( EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *q, ev_bool onlyShadowCasters,
                                                EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds);
                /** Sets up the LegacyRenderOperation for rendering this scene node as geometry.
                @remarks
                This will render the scenenode as a bounding box.
                */
                virtual void getRenderOperation( EarthView::World::Graphic::CRenderOperation &op );
                /** Returns the local bounding box of this COctreeNode.
                @remarks
                This is used to render the bounding box, rather then the global.
                */
                EarthView::World::Spatial::Math::CAxisAlignedBox &_getLocalAABB();

				void _updateBounds();

            protected:               
                
                void _removeNodeAndChildren( );
                ////local bounding box
                EarthView::World::Spatial::Math::CAxisAlignedBox mLocalAABB;
                ////EarthView::World::Graphic::COctree this node is attached to.
                EarthView::World::Graphic::COctree *mOctant;
                ////preallocated corners for rendering
                Real mCorners[ 24 ];
                ////shared colors for rendering
                static ev_uint32 mColors[ 8 ];
                ////shared indexes for rendering
                static ev_uint16 mIndexes[ 24 ];

            };
        }
    }
}


#endif

