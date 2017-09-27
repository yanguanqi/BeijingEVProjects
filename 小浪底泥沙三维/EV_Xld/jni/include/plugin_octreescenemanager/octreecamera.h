#ifndef OCTREECAMERA_H
#define OCTREECAMERA_H
#include "graphic/camera.h"
#include "graphic/hardwarebuffermanager.h"
#include "graphic/simplerenderable.h"
#include "plugin_octreescenemanager/octreeprerequisites.h"
/**
*@author Jon Anderson
*/
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class COctree;
            /** Specialized viewpoint from which an COctree can be rendered.
            @remarks
            This class contains several specializations of the EarthView::World::Graphic::CCamera class. It
            implements the getRenderOperation method in order to return displayable geometry
            for debugging purposes. It also implements a visibility function that is more granular
            than the default.
            */
            class EV_OCTREEPLUGIN_DLL COctreeCamera : public EarthView::World::Graphic::CCamera
            {
            public:
                /** EarthView::World::Graphic::COctreeCamera::Visibility types */
                enum Visibility
                {
                    NONE,
                    PARTIAL,
                    FULL
                };
                /* Standard constructor */
                COctreeCamera( const EVString &name, EarthView::World::Graphic::CSceneManager *ref_sm );
                /* Standard destructor */
                ~COctreeCamera();
                /** Returns the visiblity of the box
                */
                EarthView::World::Graphic::COctreeCamera::Visibility getVisibility( _in const EarthView::World::Spatial::Math::CAxisAlignedBox &bound ) const;
				virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CAxisAlignedBox &bound, EarthView::World::Graphic::FrustumPlane *culledBy) const;
				virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CAxisAlignedBox &bound) const;

				void operator = (_in const EarthView::World::Graphic::COctreeCamera& rhs);

				virtual _extfree EarthView::World::Graphic::CCamera* clone(const EVString& newName)const;

            ev_private:
                COctreeCamera(_in EarthView::World::Core::CNameValuePairList *pList);
            };
        }
    }
}

#endif

