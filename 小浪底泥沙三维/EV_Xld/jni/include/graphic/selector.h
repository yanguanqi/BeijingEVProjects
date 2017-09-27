#ifndef __SELECTOR_H__
#define __SELECTOR_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "common.h"
#include "scenequery.h"
#include "graphic/manualobject.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /// <summary>
            /// 射线选择类
            /// 三角面精确选择            
            /// </summary>
            class EV_GRAPHIC_DLL CRaySelector : public EarthView::World::Graphic::CRaySceneQuery
            {
            public:
                CRaySelector(EarthView::World::Graphic::CSceneManager* ref_creator);
                ~CRaySelector();

            ev_private:
                CRaySelector(EarthView::World::Core::CNameValuePairList* pList);

            public:
                virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);
                virtual EarthView::World::Graphic::RaySceneQueryResult &execute();
                virtual void clearResults();

                ev_void setRenderSelected(ev_bool render);
                ev_bool getRenderSelected() const;

				ev_void setViewport(EarthView::World::Graphic::CViewport* viewport);
				const EarthView::World::Graphic::CViewport* getViewport()const{return mViewport;}
            protected:
                ev_bool mRender;
				EarthView::World::Graphic::CViewport* mViewport;
				EarthView::World::Graphic::CManualObject* mLasRenderSelection;
            };

            /// <summary>
            /// 盒选择类
            /// 盒与目标轴向包围盒求交            
            /// </summary>
            class EV_GRAPHIC_DLL CBoxSelector : public EarthView::World::Graphic::CAxisAlignedBoxSceneQuery
            {
            public:
                CBoxSelector(EarthView::World::Graphic::CSceneManager* ref_creator);
                ~CBoxSelector();

            ev_private:
                CBoxSelector(EarthView::World::Core::CNameValuePairList* pList);

            public:
                virtual void execute(EarthView::World::Graphic::CSceneQueryListener *listener);
                virtual EarthView::World::Graphic::SceneQueryResult &execute();
                virtual void clearResults();

                ev_void setRenderSelected(ev_bool render);
                ev_bool getRenderSelected() const;

            protected:
                ev_bool mRender;
            };

            /// <summary>
            /// 球选择类
            /// 球与目标轴向包围盒求交            
            /// </summary>
            class EV_GRAPHIC_DLL CSphereSelector : public EarthView::World::Graphic::CSphereSceneQuery
            {
            public:
                CSphereSelector(EarthView::World::Graphic::CSceneManager* ref_creator);
                ~CSphereSelector();

            ev_private:
                CSphereSelector(EarthView::World::Core::CNameValuePairList* pList);

            public:
                virtual void execute(EarthView::World::Graphic::CSceneQueryListener *listener);
                virtual EarthView::World::Graphic::SceneQueryResult &execute();
                virtual void clearResults();

                ev_void setRenderSelected(ev_bool render);
                ev_bool getRenderSelected() const;

            protected:
                ev_bool mRender;
            };

            /// <summary>
            /// 组件选择类
            /// 射线与三角面相交
            /// 选择到目标的某个组件
            /// </summary>
            class EV_GRAPHIC_DLL CComponentSelector : public EarthView::World::Graphic::CRaySceneQuery
            {
            public:
                CComponentSelector(EarthView::World::Graphic::CSceneManager* ref_creator);
                ~CComponentSelector();

            ev_private:
                CComponentSelector(EarthView::World::Core::CNameValuePairList* pList);

            public:
                virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);
                virtual EarthView::World::Graphic::RaySceneQueryResult &execute();
                virtual void clearResults();

                ev_void setRenderSelected(ev_bool render);
                ev_bool getRenderSelected() const;

				ev_void setViewport(EarthView::World::Graphic::CViewport* viewport);
				const EarthView::World::Graphic::CViewport* getViewport()const{return mViewport;}
            protected:
                ev_bool mRender;
				EarthView::World::Graphic::CViewport* mViewport;
            };
        }
    }
}

#endif
