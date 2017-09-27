#ifndef __OverlayElementEmitterCommands_H__
#define __OverlayElementEmitterCommands_H__
#include "graphic/graphic_config.h"
#include "core/stringinterface.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            namespace OverlayElementCommands
            {

                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdLeft : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdLeft(_in EarthView::World::Core::CNameValuePairList *pLis) {}
                public:
                    CCmdLeft() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdTop : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdTop(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdTop() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdWidth : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdWidth(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdWidth() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdHeight : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdHeight(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdHeight() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdMaterial : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdMaterial(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdMaterial() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdCaption : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdCaption(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdCaption() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdMetricsMode : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdMetricsMode(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdMetricsMode() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdHorizontalAlign : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdHorizontalAlign(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdHorizontalAlign() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdVerticalAlign : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdVerticalAlign(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdVerticalAlign() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                //// Command object for COverlayElement  - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CCmdVisible : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdVisible(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdVisible() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
            }

        }
    }
}

#endif


