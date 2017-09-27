#ifndef _SCENEFACTORY_H_
#define _SCENEFACTORY_H_

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialinterface/iscenefactory.h"
#include "spatial3dengine/geoscenemanager.h"

namespace EarthView
{
    namespace World
    {
        namespace Spatial
        {
            namespace Atlas
            {
                class IScene;
            }
        }

        namespace Spatial3D
        {
            class CGeoSceneManagerFactory;
        }
    }
}


namespace EarthView{
    namespace World{
        namespace Spatial3D{
            namespace Atlas{               
                class EV_Spatial3DEngine_DLL CSceneFactory : public EarthView::World::Spatial::Atlas::ISceneFactory
                {
                public:
                    CSceneFactory();
                    ~CSceneFactory();

                public:
                    virtual EarthView::World::Spatial::Atlas::IScene * newScene(const EVString& strSceneName)  const;
					virtual EarthView::World::Spatial::Atlas::IScene * newScene(const EVString& strSceneName,EarthView::World::Spatial3D::SceneTileType type)  const;
                    virtual EarthView::World::Spatial::Atlas::IScene * createScene( _in EarthView::World::Core::CDataStream & stream ) const;
                    virtual EarthView::World::Spatial::Atlas::IScene * createScene( _in const EVString& xml ) const;
                    virtual ev_void destroyScene(EarthView::World::Spatial::Atlas::IScene* pScene)const;

                ev_private:
                    CSceneFactory( EarthView::World::Core::CNameValuePairList *pList );

                protected:
                    CGeoSceneManagerFactory* mpSceneMgrFactory;

                    C_DISABLE_COPY(CSceneFactory);
                
                };
            }
        }
    }
}
#endif


