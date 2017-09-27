#ifndef _ISCENEFACTORY_H_
#define _ISCENEFACTORY_H_

#include "spatialinterface/config.h"
namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Atlas{
                class IScene;
                class EV_INTERFACE_DLL ISceneFactory : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    ~ISceneFactory();

                public:
                    virtual EarthView::World::Spatial::Atlas::IScene * newScene(const EVString& strSceneName)  const;
                    virtual EarthView::World::Spatial::Atlas::IScene * createScene( _in EarthView::World::Core::CDataStream & stream ) const;
                    virtual EarthView::World::Spatial::Atlas::IScene * createScene( _in const EVString& xml ) const;

                    virtual ev_void destroyScene(EarthView::World::Spatial::Atlas::IScene* pScene)const;

                ev_private:
                    ISceneFactory( EarthView::World::Core::CNameValuePairList *pList );
                protected:
                    ISceneFactory();
                    C_DISABLE_COPY( ISceneFactory )
                };
            }
        }
    }
}
#endif


