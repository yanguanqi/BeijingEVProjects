#ifndef __Pixel_Count_Lod_Strategy_H__
#define __Pixel_Count_Lod_Strategy_H__
#include "graphic/graphic_config.h"
#include "lodstrategy.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Level of detail strategy based on pixel count approximation from bounding sphere projection. */
            class EV_GRAPHIC_DLL CPixelCountLodStrategy : public EarthView::World::Graphic::CLodStrategy
            {
            ev_private:
                CPixelCountLodStrategy(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                static EarthView::World::Graphic::CPixelCountLodStrategy *ms_Singleton;
            ev_internal:
                //// @copydoc CLodStrategy::getValueImpl
                virtual Real getValueImpl(const EarthView::World::Graphic::CMovableObject *movableObject, const EarthView::World::Graphic::CCamera *camera) const;
            public:
                /** Default constructor. */
                CPixelCountLodStrategy();
                ~CPixelCountLodStrategy();
                //// @copydoc CLodStrategy::getBaseValue
                virtual Real getBaseValue() const;
                //// @copydoc CLodStrategy::transformBias
                virtual Real transformBias(Real factor) const;
                //// @copydoc CLodStrategy::getIndex
                virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList) const;
                //// @copydoc CLodStrategy::getIndex
                virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::LodValueList &materialLodValueList) const;
                //// @copydoc CLodStrategy::sort
                virtual void sort(EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList) const;
                //// @copydoc CLodStrategy::isSorted
                virtual ev_bool isSorted(const EarthView::World::Graphic::LodValueList &values) const;
                /** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                */
                static EarthView::World::Graphic::CPixelCountLodStrategy &getSingleton();
                /** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                */
                static EarthView::World::Graphic::CPixelCountLodStrategy *getSingletonPtr();
            };
        }
    }
}

#endif

