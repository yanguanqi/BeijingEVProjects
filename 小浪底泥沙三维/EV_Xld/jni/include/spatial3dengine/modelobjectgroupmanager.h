#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELOBJECTGROUPMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELOBJECTGROUPMANAGER_H

#include "spatial3dengine/spatial3dengineconfig.h" 
#include "spatial3dengine/spatial3denginecomdef.h"
#include "graphic/framelistener.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class CMutex;
			class CWorkQueue;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CModelObjectGroup;
				class CModelObjectManager;

				class  EV_Spatial3DEngine_DLL CModelObjectGroupManager : public EarthView::World::Core::CAllocatedObject
				{
					friend class CModelObjectManager;
				public:
					class CModelWorkQueueListener : public EarthView::World::Graphic::CFrameListener
					{
					private:
						EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* mpParent;
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pParent">模型管理器对象</param>
						/// <returns></returns>
						
						CModelWorkQueueListener(EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* pParent);

						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						
						virtual ~CModelWorkQueueListener();

						/// <summary>
						/// 帧渲染之后被调用
						/// </summary>
						/// <param name="evt">帧事件</param>
						/// <returns>成功返回true否则返回false</returns>
						virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
					};

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelObjectGroupManager(_in EarthView::World::Core::CNameValuePairList *pList);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CModelObjectGroupManager(); 
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CModelObjectGroupManager();

					/// <summary>
					/// 获取单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>单件对象</returns>
					
					static EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* getSingletonPtr();

					/// <summary>
					/// 是否单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static ev_void releaseSingleton();

					/// <summary>
					/// 创建可见对象组，此对象组与camera一 一对应，为了适应同一个scenemanager里的多个视口情况
					/// 为了线程安全，函数里会拷贝一个传入的camera对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <returns>对象组</returns>
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* createObjectManager(EarthView::World::Graphic::CSceneManager* ref_pSceneManager);

					/// <summary>
					/// 销毁可见对象组，不负责组内对象的销毁
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <returns></returns>
					ev_void destroyObjectManager(EarthView::World::Graphic::CSceneManager* pSceneManager);


					/// <summary>
					/// 销毁可见对象组，不负责组内对象的销毁
					/// </summary>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					ev_void destroyAllObjectManager();

					/// <summary>
					/// 获取管理器个数
					/// </summary>
					/// <returns>管理器个数</returns>
					ev_uint32 getNumObjectManager();

					/// <summary>
					/// 获取管理器
					/// </summary>
					/// <param name="index">管理器序号</param>
					/// <returns>管理器</returns>
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* getObjectManager(ev_uint32 index);

					/// <summary>
					/// 获加载的取流队列
					/// </summary>
					/// <returns>流队列</returns>
					EarthView::World::Core::CWorkQueue* getLoadWorkQueue();

					/// <summary>
					/// 获取没加载的流队列
					/// </summary>
					/// <returns>流队列</returns>
					EarthView::World::Core::CWorkQueue* getUnloadWorkQueue();

				private:
					static EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* mpSingletonPtr;

					//主线程camera与对象组映射表
					typedef map<EarthView::World::Graphic::CSceneManager*, EarthView::World::Spatial3D::ModelManager::CModelObjectManager*> SceneObjectManagerMap; 
					SceneObjectManagerMap mSceneObjectManagerMap;

					//数据流的工作队列
					EarthView::World::Core::CWorkQueue* mpLoadQueue;
					EarthView::World::Core::CWorkQueue* mpUnloadQueue;

					CModelWorkQueueListener* mpListener;

				};

			}//end namespace
		}
	}
}
#endif
