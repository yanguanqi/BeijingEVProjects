#ifndef __Distance_Lod_Strategy_H__
#define __Distance_Lod_Strategy_H__
#include "graphic/graphic_config.h"
#include "lodstrategy.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Level of detail strategy based on distance from camera. */
            class EV_GRAPHIC_DLL CDistanceLodStrategy : public EarthView::World::Graphic::CLodStrategy
            {
            private:
                static EarthView::World::Graphic::CDistanceLodStrategy *ms_Singleton;
            ev_internal:
                //// @copydoc CLodStrategy::getValueImpl
                virtual Real getValueImpl(const EarthView::World::Graphic::CMovableObject *movableObject, const EarthView::World::Graphic::CCamera *camera) const;
            ev_private:
                CDistanceLodStrategy(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Default constructor. */
                CDistanceLodStrategy();
                ~CDistanceLodStrategy();
                //// @copydoc CLodStrategy::getBaseValue
                virtual Real getBaseValue() const;
                //// @copydoc CLodStrategy::transformBias
                virtual Real transformBias(Real factor) const;
                //// @copydoc CLodStrategy::transformUserValue
                virtual Real transformUserValue(Real userValue) const;
                //// @copydoc CLodStrategy::getIndex
                virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList) const;
                //// @copydoc CLodStrategy::getIndex
                virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::LodValueList &materialLodValueList) const;
                //// @copydoc CLodStrategy::sort
                virtual void sort(EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList) const;
                //// @copydoc CLodStrategy::isSorted
                virtual ev_bool isSorted(const EarthView::World::Graphic::LodValueList &values) const;
                /** Sets the reference view upon which the distances were based.
                @note
                    This automatically enables use of the reference view.
                @note
                    There is no corresponding get method for these values as
                    they are not saved, but used to compute a reference value.
                */
                void setReferenceView(Real viewportWidth, Real viewportHeight, EarthView::World::Spatial::Math::CRadian fovY);
                /** Enables to disables use of the reference view.
                @note Do not enable use of the reference view before setting it.
                */
                void setReferenceViewEnabled(ev_bool value);
                /** Determine if use of the reference view is enabled */
                ev_bool getReferenceViewEnabled() const;
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
                static EarthView::World::Graphic::CDistanceLodStrategy &getSingleton();
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
                static EarthView::World::Graphic::CDistanceLodStrategy *getSingletonPtr();
            private:
                ev_bool mReferenceViewEnabled;
                Real mReferenceViewValue;
            };
        }
    }
}

#endif

