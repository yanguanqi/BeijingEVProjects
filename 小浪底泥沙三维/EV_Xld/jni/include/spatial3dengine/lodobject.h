#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_LODOBJECT_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_LODOBJECT_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Graphic{
			class CSceneManager;
			class CCamera;
			class CNode;
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{
				class CLodInternal;

				class EV_Spatial3DEngine_DLL CLodObject : public EarthView::World::Core::CAllocatedObject
				{
					friend class CLodObjectFactoryListener;
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
					CLodObject(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CLodObject(EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& file, const EVString& group);

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CLodObject();

					/// <summary>
					/// 获取meshx全路径
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getFile(){return mFile;}

					/// <summary>
					/// 获取资源组
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EVString getGroup(){return mGroup;}

					/// <summary>
					/// 获取场景管理器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Graphic::CSceneManager* getSceneManager(){return mpSceneManager;}

					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setVisible(ev_bool flag);

					/// <summary>
					/// 获取可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getVisible();

					/// <summary>
					/// 是否挂接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isAttached();

					/// <summary>
					/// 获取接节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CNode* getNode();

					/// <summary>
					/// 挂接节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

					/// <summary>
					/// 反挂接节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Graphic::CNode* detachFromNode();

					/// <summary>
					/// 应用meshx中存储的位置
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool applyScenePosition();

					/// <summary>
					/// 设置高亮
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setHighLight(ev_bool flag);

					/// <summary>
					/// 获取高亮状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getHighLight();
										
				protected:
					virtual void frame(EarthView::World::Graphic::CCamera *camera);

				protected:
					CLodInternal* mpInternal;

					EarthView::World::Graphic::CSceneManager* mpSceneManager;
					EVString mFile;
					EVString mGroup;

					ev_bool mIsVisible;
				};


			}//namespace
		}
	}
}
#endif
