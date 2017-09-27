#ifndef OCTREESCENEQUERY_H
#define OCTREESCENEQUERY_H
#include "octreeprerequisites.h"
#include <graphic/scenemanager.h>
#include <graphic/scenequery.h>
#include <graphic/defaultscenequeries.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** COctree implementation of CIntersectionSceneQuery. */
            class EV_OCTREEPLUGIN_DLL COctreeIntersectionSceneQuery :  public EarthView::World::Graphic::CDefaultIntersectionSceneQuery
            {
            public:
                COctreeIntersectionSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
            ev_private:
                COctreeIntersectionSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~COctreeIntersectionSceneQuery();
                /** See CIntersectionSceneQuery. */
                void execute(EarthView::World::Graphic::CIntersectionSceneQueryListener *listener);

            };
            /** COctree implementation of CRaySceneQuery. */
            class EV_OCTREEPLUGIN_DLL COctreeRaySceneQuery : public EarthView::World::Graphic::CDefaultRaySceneQuery
            {
            public:
                COctreeRaySceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
            ev_private:
                COctreeRaySceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~COctreeRaySceneQuery();
                /** See RayScenQuery. */
                void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);

            };
            /** COctree implementation of CSphereSceneQuery. */
            class EV_OCTREEPLUGIN_DLL COctreeSphereSceneQuery : public EarthView::World::Graphic::CDefaultSphereSceneQuery
            {
            public:
                COctreeSphereSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
            ev_private:
                COctreeSphereSceneQuery(_in EarthView::World::Core::CNameValuePairList *plist);
            public:
                ~COctreeSphereSceneQuery();
                /** See CSceneQuery. */
                void execute(EarthView::World::Graphic::CSceneQueryListener *listener);

            };
            /** COctree implementation of CPlaneBoundedVolumeListSceneQuery. */
            class EV_OCTREEPLUGIN_DLL COctreePlaneBoundedVolumeListSceneQuery : public EarthView::World::Graphic::CDefaultPlaneBoundedVolumeListSceneQuery
            {
            public:
                COctreePlaneBoundedVolumeListSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
            ev_private:
                COctreePlaneBoundedVolumeListSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~COctreePlaneBoundedVolumeListSceneQuery();
                /** See CSceneQuery. */
                void execute(EarthView::World::Graphic::CSceneQueryListener *listener);

            };
            /** COctree implementation of CAxisAlignedBoxSceneQuery. */
            class EV_OCTREEPLUGIN_DLL COctreeAxisAlignedBoxSceneQuery : public EarthView::World::Graphic::CDefaultAxisAlignedBoxSceneQuery
            {
            public:
                COctreeAxisAlignedBoxSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
            ev_private:
                COctreeAxisAlignedBoxSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~COctreeAxisAlignedBoxSceneQuery();
                /** See CRaySceneQuery. */
                void execute(EarthView::World::Graphic::CSceneQueryListener *listener);

            };

        }
    }
}

#endif


