#ifndef __CustomCompositionPass_H__
#define __CustomCompositionPass_H__
#include "graphic/graphic_config.h"
#include "compositionpass.h"
#include "compositorinstance.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Interface for custom composition passes, allowing custom operations (in addition to
            *	the quad, scene and clear operations) in composition passes.
            *	@see CCompositorManager::registerCustomCompositionPass
            ****/
            class EV_GRAPHIC_DLL CCustomCompositionPass : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CCustomCompositionPass(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CCustomCompositionPass() {}
                /***** Create a custom composition operation.
                	@param pass The EarthView::World::Graphic::CCompositionPass that triggered the request
                	@param instance The compositor instance that this operation will be performed in
                	@remarks This call only happens once during creation. The CRenderSystemOperation will
                	get called each render.
                ****/
                virtual EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *createOperation(
                    EarthView::World::Graphic::CCompositorInstance *instance, const EarthView::World::Graphic::CCompositionPass *pass)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                virtual ~CCustomCompositionPass() {}
            };
        }
    }
}

#endif

