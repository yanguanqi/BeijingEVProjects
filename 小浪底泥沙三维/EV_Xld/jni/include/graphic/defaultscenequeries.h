#ifndef __DefaultSceneQuery_H__
#define __DefaultSceneQuery_H__
#include "graphic/graphic_config.h"
#include "scenequery.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Default implementation of EarthView::World::Graphic::CIntersectionSceneQuery. */
            class EV_GRAPHIC_DLL CDefaultIntersectionSceneQuery : public EarthView::World::Graphic::CIntersectionSceneQuery
            {
            public:
                CDefaultIntersectionSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
                ~CDefaultIntersectionSceneQuery();
                /** See EarthView::World::Graphic::CIntersectionSceneQuery. */
                void execute(EarthView::World::Graphic::CIntersectionSceneQueryListener *listener);
            ev_private:
                CDefaultIntersectionSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Default implementation of EarthView::World::Graphic::CRaySceneQuery. */
            class EV_GRAPHIC_DLL CDefaultRaySceneQuery : public EarthView::World::Graphic::CRaySceneQuery
            {
            public:
                CDefaultRaySceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
                ~CDefaultRaySceneQuery();
                /** See RayScenQuery. */
                void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);
            ev_private:
                CDefaultRaySceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Default implementation of EarthView::World::Graphic::CSphereSceneQuery. */
            class EV_GRAPHIC_DLL CDefaultSphereSceneQuery : public EarthView::World::Graphic::CSphereSceneQuery
            {
            public:
                CDefaultSphereSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
                ~CDefaultSphereSceneQuery();
                /** See CSceneQuery. */
                void execute(EarthView::World::Graphic::CSceneQueryListener *listener);
            ev_private:
                CDefaultSphereSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Default implementation of EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery. */
            class EV_GRAPHIC_DLL CDefaultPlaneBoundedVolumeListSceneQuery : public EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery
            {
            public:
                CDefaultPlaneBoundedVolumeListSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
                ~CDefaultPlaneBoundedVolumeListSceneQuery();
                /** See CSceneQuery. */
                void execute(EarthView::World::Graphic::CSceneQueryListener *listener);
            ev_private:
                CDefaultPlaneBoundedVolumeListSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Default implementation of EarthView::World::Graphic::CAxisAlignedBoxSceneQuery. */
            class EV_GRAPHIC_DLL CDefaultAxisAlignedBoxSceneQuery : public EarthView::World::Graphic::CAxisAlignedBoxSceneQuery
            {
            public:
                CDefaultAxisAlignedBoxSceneQuery(EarthView::World::Graphic::CSceneManager *ref_creator);
                ~CDefaultAxisAlignedBoxSceneQuery();
                /** See RayScenQuery. */
                void execute(EarthView::World::Graphic::CSceneQueryListener *listener);
            ev_private:
                CDefaultAxisAlignedBoxSceneQuery(_in EarthView::World::Core::CNameValuePairList *pList);
            };
        }
    }
}

#endif

