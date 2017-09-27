#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_LODOBJECTFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_LODOBJECTFACTORY_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CSceneManager;
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CLodObject;
				class CMeshxObject;
				class CLodObjectManager;

				class EV_Spatial3DEngine_DLL CLodObjectFactory : public EarthView::World::Core::CAllocatedObject
				{
					friend class CLodObjectManager;
					friend class CLodObjectFactoryListener;
				private:
					static EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* mpSingletonPtr;
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CLodObjectFactory(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CLodObjectFactory(EarthView::World::Graphic::CSceneManager* pSceneManager);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CLodObjectFactory();

					/// <summary>
					/// 获取工厂句柄
					/// </summary>
					/// <returns>失败则返回NULL</returns>
					static EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* getFactory(EarthView::World::Graphic::CSceneManager* pSceneManager);

					/// <summary>
					/// 释放工厂句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static void releaseFactory(CLodObjectFactory* factory);


					EarthView::World::Graphic::CSceneManager* getSceneManager(){return mpSceneManager;}

					/// <summary>
					/// 创建meshx对象
					/// </summary>
					/// <param name="file">.meshx文件</param>
					/// <param name="group">资源组</param>
					/// <returns></returns>
					CMeshxObject* createMeshxObject(const EVString& file, const EVString& group);

					/// <summary>
					/// 销毁对象
					/// </summary>
					/// <returns></returns>
					void destroyObject(CLodObject* obj);


				protected:
					static ev_uint64 getEntID();
					static ev_uint64 getMeshID();
					static ev_uint64 getMaterialID();

				protected:
					static ev_uint64 mEntID;
					static ev_uint64 mMeshID;
					static ev_uint64 mMatID;

					EarthView::World::Graphic::CSceneManager* mpSceneManager;
					set<CLodObject*> mObjects;

					CLodObjectFactoryListener* mpListener;

					static map<EarthView::World::Graphic::CSceneManager*, CLodObjectFactory*> mFactorys; 
				};


			}//namespace
		}
	}
}
#endif
