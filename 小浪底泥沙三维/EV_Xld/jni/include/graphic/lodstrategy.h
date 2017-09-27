#ifndef __Lod_Strategy_H__
#define __Lod_Strategy_H__
#include "graphic/graphic_config.h"
#include "mesh.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CMovableObject;
            class CCamera;

            /***** Strategy for determining level of detail.
            @remarks
                Generally, to create a new lod strategy, all of the following will
                need to be implemented: getValueImpl, getBaseValue, transformBias,
                getIndex, sort, and isSorted.
                In addition, transformUserValue may be overridden.
            ****/
            class EV_GRAPHIC_DLL CLodStrategy : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                /***** Name of this strategy. ****/
                EVString mName;
            ev_internal:
                /***** Compute the lod value for a given movable object relative to a given camera. ****/
                virtual Real getValueImpl(const EarthView::World::Graphic::CMovableObject *movableObject, const EarthView::World::Graphic::CCamera *camera) const;
            ev_private:
                CLodStrategy(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Constructor accepting name. ****/
                CLodStrategy(const EVString &name);

                /***** Virtual destructor. ****/
                virtual ~CLodStrategy();
                /***** Get the value of the first (highest) level of detail. ****/
                virtual Real getBaseValue() const;
                /***** Transform lod bias so it only needs to be multiplied by the lod value. ****/
                virtual Real transformBias(Real factor) const;
                /***** Transforum user supplied value to internal value.
                @remarks
                    By default, performs no transformation.
                @remarks
                    Do not throw exceptions for invalid values here, as the lod strategy
                    may be changed such that the values become valid.
                ****/
                virtual Real transformUserValue(Real userValue) const;
                /***** Compute the lod value for a given movable object relative to a given camera. ****/
                Real getValue(const EarthView::World::Graphic::CMovableObject *movableObject, const EarthView::World::Graphic::CCamera *camera) const;
                /***** Get the index of the lod usage which applies to a given value. ****/
                virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList) const;
                /***** Get the index of the lod usage which applies to a given value. ****/
                virtual ev_uint16 getIndex(Real value, const EarthView::World::Graphic::LodValueList &materialLodValueList) const;
                /***** Sort mesh lod usage list from greatest to least detail ****/
                virtual void sort(EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList) const;
                /***** Determine if the lod values are sorted from greatest detail to least detail. ****/
                virtual ev_bool isSorted(const EarthView::World::Graphic::LodValueList &values) const;
                /***** Assert that the lod values are sorted from greatest detail to least detail. ****/
                void assertSorted(const EarthView::World::Graphic::LodValueList &values) const;
                /***** Get the name of this strategy. ****/
                const EVString &getName() const;
            protected:
                /***** Implementation of isSorted suitable for ascending values. ****/
                static ev_bool isSortedAscending(const EarthView::World::Graphic::LodValueList &values);
                /***** Implementation of isSorted suitable for descending values. ****/
                static ev_bool isSortedDescending(const EarthView::World::Graphic::LodValueList &values);
                /***** Implementation of sort suitable for ascending values. ****/
                static void sortAscending(EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList);
                /***** Implementation of sort suitable for descending values. ****/
                static void sortDescending(EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList);
                /***** Implementation of getIndex suitable for ascending values. ****/
                static ev_uint16 getIndexAscending(Real value, const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList);
                /***** Implementation of getIndex suitable for descending values. ****/
                static ev_uint16 getIndexDescending(Real value, const EarthView::World::Graphic::CMesh::MeshLodUsageList &meshLodUsageList);
                /***** Implementation of getIndex suitable for ascending values. ****/
                static ev_uint16 getIndexAscending(Real value, const EarthView::World::Graphic::LodValueList &materialLodValueList);
                /***** Implementation of getIndex suitable for descending values. ****/
                static ev_uint16 getIndexDescending(Real value, const EarthView::World::Graphic::LodValueList &materialLodValueList);
            };
        }
    }
}

#endif

