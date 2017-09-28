#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_BINGMAPLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_BINGMAPLAYER_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CCamera;
			class CSceneManager;
		}
		namespace Spatial3D{
			namespace ModelManager{
				class CBingMapManager;
			}
			class CGlobeCamera;
		}
		namespace Spatial{
			namespace GeoDataset{
				class IDataset;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class EV_Spatial3DEngine_DLL CBingMapTree : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBingMapTree(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CBingMapTree(const EVString& rootQuadKey);
					~CBingMapTree();

					virtual void update(const EarthView::World::Graphic::CCamera* camera);

					void init(const EarthView::World::Graphic::CCamera* camera);

					void setSceneManager(EarthView::World::Graphic::CSceneManager* sceneManager);

					EarthView::World::Graphic::CSceneManager* getSceneManager();

					void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);

					EarthView::World::Spatial::GeoDataset::IDataset* getDataSet();

					EVString getRootQuadKey();

					ev_bool updateAltitudeValue(ev_real64 altitudeValue);

					static ev_real32 getCurrentLevel(CGlobeCamera* globeCamera);

				protected:
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;

				private:
					EVString mRootQuadKey;
					EarthView::World::Spatial3D::ModelManager::CBingMapManager* mpManager;
					ev_bool mIsInit;
					EarthView::World::Graphic::CSceneManager* mpSceneManager;

					static ev_uint32 gID;
				};
			}
		}
	}
}
#endif
