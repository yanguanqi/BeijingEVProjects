#ifndef _STREETVIEW_LAYER_WORKQUEUEMANAGER_H
#define _STREETVIEW_LAYER_WORKQUEUEMANAGER_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <core/workqueue.h>
#include <core/defaultworkqueuestandard.h>
#include <graphic/framelistener.h>

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			/// <summary>
			/// 街景图层线程队列管理器
			/// </summary>
			class EV_Spatial3DStreetView_DLL CStreetViewLayerWorkQueueManager : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 帧监听
				/// 
				/// </summary>
				class CStreetViewLayer3dWorkQueueListener : public EarthView::World::Graphic::CFrameListener
				{
				private:
					EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* mpParent;
				public:
					CStreetViewLayer3dWorkQueueListener(EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* pParent);
					virtual ~CStreetViewLayer3dWorkQueueListener();
					/// <summary>
					/// 帧渲染之后被调用
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
				};
			private:
				static EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* mpSingletonPtr;

				//数据流的工作队列
				EarthView::World::Core::CWorkQueue* mpStreetViewWorkQueue;
				CStreetViewLayer3dWorkQueueListener* mpListener;

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CStreetViewLayerWorkQueueManager(_in EarthView::World::Core::CNameValuePairList *pList);

			protected:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStreetViewLayerWorkQueueManager(); 
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CStreetViewLayerWorkQueueManager();

				/// <summary>
				/// 获取单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Spatial3D::CStreetViewLayerWorkQueueManager* getSingletonPtr();
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
				EarthView::World::Core::CWorkQueue* getStreetViewWorkQueue();
			};

		}
	}
}

#endif