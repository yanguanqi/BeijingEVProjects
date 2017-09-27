#ifndef EARTHVIEW_WORLD_SPATIAL3D_LAYER3DEDITORMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3D_LAYER3DEDITORMANAGER_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			class CLayer3DEditor;

			class EV_Spatial3DEngine_DLL CLayer3DEditorManager : public EarthView::World::Core::CAllocatedObject 
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对</param>
				/// <returns></returns>
				CLayer3DEditorManager(_in EarthView::World::Core::CNameValuePairList *pList);

			protected:
				EarthView::World::Spatial3D::CLayer3DEditor* mpModelLayerEditor;
				EarthView::World::Spatial3D::CLayer3DEditor* mpEffectLayerEditor;
				EarthView::World::Spatial3D::CLayer3DEditor* mpMeshxgLayerEditor;
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLayer3DEditorManager();

				static EarthView::World::Spatial3D::CLayer3DEditorManager* mpSingletonPtr;
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CLayer3DEditorManager();

				/// <summary>
				/// 获取单件对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>单件对象</returns>
				static EarthView::World::Spatial3D::CLayer3DEditorManager* getSingletonPtr();

				/// <summary>
				/// 释放单件对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void releaseSingleton();

				/// <summary>
				/// 获取模型图层编辑对象（获得默认的图层编辑器）
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				EarthView::World::Spatial3D::CLayer3DEditor* getModelLayerEditor();

				/// <summary>
				/// 获取特效图层编辑对象（获得默认的图层编辑器）
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				EarthView::World::Spatial3D::CLayer3DEditor* getEffectLayerEditor();

				/// <summary>
				/// 获取meshxg图层编辑对象（获得默认的图层编辑器）
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				EarthView::World::Spatial3D::CLayer3DEditor* getMeshxgLayerEditor();

				/// <summary>
				/// 创建模型图层编辑对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				EarthView::World::Spatial3D::CLayer3DEditor* createModelLayerEditor();

				/// <summary>
				/// 销毁模型图层编辑对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				void destoryModelLayerEditor(CLayer3DEditor* pEditor);


			};


		}
	}
}

#endif
