#ifndef _FactoryObj_H__
#define _FactoryObj_H__
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CParticleSystemRenderer;
            class EV_GRAPHIC_DLL CParticleSystemRendererFactoryObj : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CParticleSystemRendererFactoryObj(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CParticleSystemRendererFactoryObj();
                virtual ~CParticleSystemRendererFactoryObj() ;
                /** Returns the factory type.
                    @return
                        The factory type.
                */
                virtual EVString getType() const ;
                /** Creates a new object.
                @param name Name of the object to create
                @return
                    An object created by the factory. The type of the object depends on
                    the factory.
                */
                virtual EarthView::World::Graphic::CParticleSystemRenderer *createInstance( const EVString &name );
                /** Destroys an object which was created by this factory.
                @param ptr Pointer to the object to destroy
                */
                virtual void destroyInstance( EarthView::World::Graphic::CParticleSystemRenderer *renderer);
            };
        }
    }
}

#endif

