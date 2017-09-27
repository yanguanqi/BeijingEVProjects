#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MESHXOBJECT_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MESHXOBJECT_H

#include "spatial3dengine/lodobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CLodObjectFactory;

				class EV_Spatial3DEngine_DLL CMeshxObject : public CLodObject
				{
					friend class CLodObjectFactory;
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CMeshxObject(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CMeshxObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& file, const EVString& group);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CMeshxObject();

					

				protected:
					virtual void init();
				};


			}//namespace
		}
	}
}
#endif
