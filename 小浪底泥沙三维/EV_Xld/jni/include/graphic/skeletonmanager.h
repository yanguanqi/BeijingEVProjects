#ifndef __SkeletonManager_H__
#define __SkeletonManager_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Handles the management of skeleton resources.
                @remarks
                    This class deals with the runtime management of
                    skeleton data; like other resource managers it handles
                    the creation of resources (in this case skeleton data),
                    working within a fixed memory budget.
            ****/
            class EV_GRAPHIC_DLL CSkeletonManager: public EarthView::World::Graphic::CResourceManager
            {
            private:
                static EarthView::World::Graphic::CSkeletonManager *ms_Singleton;
            ev_private:
                CSkeletonManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Constructor
                CSkeletonManager();
                ~CSkeletonManager();
                static EarthView::World::Graphic::CSkeletonManager &getSingleton(void);
                static EarthView::World::Graphic::CSkeletonManager *getSingletonPtr(void);
            ev_internal:
                //// @copydoc CResourceManager::createImpl
                EarthView::World::Graphic::CResource *createImpl(_in const EVString &name, _in ResourceHandle handle,
                                      _in const EVString &group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                      _in const EarthView::World::Core::NameValuePairList *createParams);
            };
        }
    }
}


#endif

