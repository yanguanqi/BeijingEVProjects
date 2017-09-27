#ifndef CAMERANODETRAKSCENEMANAGER_H
#define CAMERANODETRAKSCENEMANAGER_H

#include "ga/evga_config.h"
#include "graphic/scenemanager.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class EV_GA_DLL CCameraNodeTrackSceneManagerListener:public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
				{
				public: 
					CCameraNodeTrackSceneManagerListener();

					CCameraNodeTrackSceneManagerListener(_in EarthView::World::Graphic::CCamera* camera);

					~CCameraNodeTrackSceneManagerListener();

					virtual ev_void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera);

					ev_void setCamera(_in EarthView::World::Graphic::CCamera *camera);

ev_private:
					CCameraNodeTrackSceneManagerListener(_in EarthView::World::Core::CNameValuePairList* pList);

				private:
					EarthView::World::Graphic::CCamera* mCamera;
				};
			}
		}
	}
}

#endif
