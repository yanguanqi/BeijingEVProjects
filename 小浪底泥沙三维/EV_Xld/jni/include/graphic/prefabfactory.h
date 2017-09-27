#ifndef __PrefabFactory_H__
#define __PrefabFactory_H__
#pragma once
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CMesh;
            /**** A factory class that can create various mesh prefabs.
            @remarks
            	This class is used by EV_WorldMeshManager to offload the loading of various prefab types
            	to a central location.
            ****/
            class EV_GRAPHIC_DLL CPrefabFactory : public EarthView::World::Core::CBaseObject
            {
            public:
                /**** If the given mesh has a known prefab resource name (e.g "Prefab_Plane")
                    then this prefab will be created as a submesh of the given mesh.

                	@param mesh The mesh that the potential prefab will be created in.
                	@returns true if a prefab has been created, otherwise false.
                ****/
                CPrefabFactory();
                static ev_bool createPrefab(_in EarthView::World::Graphic::CMesh *mesh);
            private:
                //// Creates a plane as a submesh of the given mesh
                static void createPlane(_in EarthView::World::Graphic::CMesh *mesh);
                //// Creates a 100x100x100 cube as a submesh of the given mesh
                static void createCube(_in EarthView::World::Graphic::CMesh *mesh);
                //// Creates a sphere with a diameter of 100 units as a submesh of the given mesh
                static void createSphere(_in EarthView::World::Graphic::CMesh *mesh);
            ev_private:
                CPrefabFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            };

        }
    }
}
//// namespace EarthView_World_Graphic
#endif

