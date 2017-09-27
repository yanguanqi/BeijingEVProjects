#ifndef __ShadowCameraSetupPlaneOptimal_H__
#define __ShadowCameraSetupPlaneOptimal_H__
#include "graphic/graphic_config.h"
#include "shadowcamerasetup.h"
#include "camera.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /***** Implements the plane optimal shadow camera algorithm.
                @remarks
                    Given a plane of interest, it is possible to set up the shadow camera
            		matrix such that the mapping between screen and shadow map is the identity
            		(when restricted to pixels that view the plane of interest).  Therefore,
            		if the shadow map resolution matches the screen space resolution (of the
            		seen planar receiver), we can get pixel perfect shadowing on the plane.
            		Off the plane, the shadowing is not guaranteed to be perfect and will
            		likely exhibit the usual sampling artifacts associated with shadow mapping.
            	@note Important: this routine requires double-precision calculations. When you
            		are running under Direct3D, you must ensure that you set the floating
            		point mode to 'Consistent' rather than 'Fastest' to ensure this precision.
            		This does allegedly come with some performance cost but when measuring
            		it appears to be negligible in modern systems for normal usage.
            	@note Second important note: this projection also only works for lights with
            		a finite position. Therefore you cannot use it for directional lights
            		at this time.
            ****/
            class EV_GRAPHIC_DLL CPlaneOptimalShadowCameraSetup : public EarthView::World::Graphic::CShadowCameraSetup
            {
            private:
                EarthView::World::Graphic::CMovablePlane *m_plane;				////< pointer to plane of interest
            private:
                CPlaneOptimalShadowCameraSetup();				////< Default constructor is private
                //// helper function computing projection matrix given constraints
                EarthView::World::Spatial::Math::CMatrix4 computeConstrainedProjection( const EarthView::World::Spatial::Math::CVector4 &pinhole,
                                                       const EarthView::World::Spatial::Math::Vector4List &fpoint,
                                                       const vector<EarthView::World::Spatial::Math::CVector2>& constraint) const;
            public:
                //// Constructor -- requires a plane of interest
                CPlaneOptimalShadowCameraSetup(EarthView::World::Graphic::CMovablePlane *plane);

                //// Destructor
                virtual ~CPlaneOptimalShadowCameraSetup();
                //// Returns shadow camera configured to get 1-1 homography between screen and shadow map when restricted to plane
                virtual void getShadowCamera (const EarthView::World::Graphic::CSceneManager *sm, const EarthView::World::Graphic::CCamera *cam,
                                              const EarthView::World::Graphic::CViewport *vp, const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CCamera *texCam, ev_size_t iteration) const;
            ev_private:
                CPlaneOptimalShadowCameraSetup(_in EarthView::World::Core::CNameValuePairList *pList);
            };

        }
    }
}

#endif

