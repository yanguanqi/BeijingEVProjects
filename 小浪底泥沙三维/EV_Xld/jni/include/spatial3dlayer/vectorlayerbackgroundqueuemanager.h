#ifndef _VECTOR_LAYER_BACKGROUND_QUEUEMANAGER_H
#define _VECTOR_LAYER_BACKGROUND_QUEUEMANAGER_H

#include "spatial3dlayer/3dlayerconfig.h"

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <core/workqueue.h>
#include <core/defaultworkqueuestandard.h>
#include <graphic/framelistener.h>


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{		

				/// <summary>
				/// 矢量图层线程队列管理器
				/// 管理db库贴地矢量注记、非贴地矢量注记和扩展及网络矢量的注记的线程
				/// </summary>
				class EV_3DLAYER_DLL CVectorLayerBackgroundQueueManager : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 帧监听
					/// 
					/// </summary>
					class CLayer3dWorkQueueListener : public EarthView::World::Graphic::CFrameListener
					{
					private:
						EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* mpParent;
					public:
						CLayer3dWorkQueueListener(EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* pParent);
						virtual ~CLayer3dWorkQueueListener();
						/// <summary>
						/// 帧渲染之后被调用
						/// </summary>
						/// <param name="evt"></param>
						/// <returns></returns>
						virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
					};
				private:
					static EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* mpSingletonPtr;
					
					//数据流的工作队列
					EarthView::World::Core::CWorkQueue* mpDBLabelWorkQueue;
					EarthView::World::Core::CWorkQueue* mpWebOctreeLabelWorkQueue;
					EarthView::World::Core::CWorkQueue* mpWebLabelWorkQueue;
					EarthView::World::Core::CWorkQueue* mpExtensionWorkQueue;
					EarthView::World::Core::CWorkQueue* mpWebExtensionWorkQueue;
					CLayer3dWorkQueueListener* mpListener;

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CVectorLayerBackgroundQueueManager(_in EarthView::World::Core::CNameValuePairList *pList);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CVectorLayerBackgroundQueueManager(); 
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CVectorLayerBackgroundQueueManager();

					/// <summary>
					/// 获取单例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* getSingletonPtr();
					/// <summary>
					/// 释放单例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static ev_void releaseSingleton();

					/// <summary>
					/// 获取队列
					/// </summary>
					/// <returns></returns>
					EarthView::World::Core::CWorkQueue* getExtensionWorkQueue();
					EarthView::World::Core::CWorkQueue* getDBLabelWorkQueue();
					EarthView::World::Core::CWorkQueue* getWebOctreeLabelWorkQueue();
					EarthView::World::Core::CWorkQueue* getWebLabelWorkQueue();
					EarthView::World::Core::CWorkQueue* getWebExtensionWorkQueue();
				};
			}
		}
	}
}
#endif
