#ifndef EARTHVIEW_WORLD_SPATIAL3D_LAYER3DEDITOR_H
#define EARTHVIEW_WORLD_SPATIAL3D_LAYER3DEDITOR_H

#include "spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "geometry3d/visibleobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class CWorkCommand;
				class CWorkCommandManager;
			}
		}
		namespace Geometry3D
		{
			class CVisibleObject;
		}
		namespace Spatial3D{
			namespace Atlas{
				class IGlobeLayer;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class CLayer3DEditorListener;
			class CCmdDataBase;

			class EV_Spatial3DEngine_DLL CLayer3DEditor : public EarthView::World::Core::CAllocatedObject 
			{
			public:
				/// <summary>
				///  析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CLayer3DEditor();

				/// <summary>
				///  设置当前正在编辑的图层
				/// </summary>
				/// <returns></returns>
				virtual void setEditingLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);

				/// <summary>
				///  获取当前正在编辑的图层
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer();

				/// <summary>
				///  开始编辑
				/// </summary>
				/// <returns></returns>
				virtual ev_bool startEditing(ev_bool withUndo);

				/// <summary>
				///  停止编辑
				/// </summary>
				/// <returns></returns>
				virtual void stopEditing(ev_bool isSave);

				/// <summary>
				///  保存
				/// </summary>
				/// <returns></returns>
				virtual void saveEditing();

				/// <summary>
				///  是否在编辑
				/// </summary>
				/// <returns></returns>
				virtual ev_bool isEditing();


				/// <summary>
				///  回做
				/// </summary>
				/// <returns></returns>
				virtual ev_bool redo();

				/// <summary>
				///  撤消
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undo();

				/// <summary>
				///  可否回做
				/// </summary>
				/// <returns></returns>
				virtual ev_bool canRedo();

				/// <summary>
				///  可否撤消
				/// </summary>
				/// <returns></returns>
				virtual ev_bool canUndo();

				/// <summary>
				///  添加一个可见对象
				/// <param name="id">对象ID</param>
				/// <param name="matrix">在球上的世界变换</param>
				/// </summary>
				/// <returns></returns>
				virtual ev_uint32 addLayerObject(ev_uint32 id, const EarthView::World::Spatial::Math::CMatrix4& matrix);

				/// <summary>
				///  修改对象的位置
				/// </summary>
				/// <returns></returns>
				virtual ev_bool changeObjectPosition(EarthView::World::Geometry3D::CVisibleObjectPtr& objPtr, const EarthView::World::Spatial::Math::CMatrix4& nwMatrix);

				/// <summary>
				///  删除对象
				/// </summary>
				/// <param name="id">对象ID</param>
				/// <returns></returns>
				virtual ev_bool deleteLayerObject(ev_uint32 id);

				/// <summary>
				///  添加监听器
				/// </summary>
				/// <param name="lis">添加监听器</param>
				/// <returns></returns>
				virtual void addListener(CLayer3DEditorListener* lis);

				/// <summary>
				///  移除监听器
				/// </summary>
				/// <param name="lis">添加监听器</param>
				/// <returns></returns>
				virtual void removeListener(CLayer3DEditorListener* lis);

				/// <summary>
				///  获取监听器
				/// </summary>
				/// <param name="index">下标</param>
				/// <returns></returns>
				virtual CLayer3DEditorListener* getListener(ev_uint32 index);

				/// <summary>
				///  获取监听器个数
				/// </summary>
				/// <param name="index">下标</param>
				/// <returns></returns>
				virtual ev_uint32 getNumListener();

			protected:

				/// <summary>
				///  撤消添加
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undoAddOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  撤消修改位置操作
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undoChangePoseOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  撤消删除
				/// </summary>
				/// <returns></returns>
				virtual ev_bool undoDeleteOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  重做添加
				/// </summary>
				/// <returns></returns>
				virtual ev_bool redoAddOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  重做修改位置操作
				/// </summary>
				/// <returns></returns>
				virtual ev_bool redoChangePoseOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);

				/// <summary>
				///  重做删除
				/// </summary>
				/// <returns></returns>
				virtual ev_bool redoDeleteOperate(EarthView::World::Spatial::GeoDataset::CWorkCommand* cmd);


ev_private:
				CLayer3DEditor(_in EarthView::World::Core::CNameValuePairList *pList);
			protected:
				typedef vector<CLayer3DEditorListener*> Listeners;
				Listeners mListeners;
				ev_bool mWithUndo;
				ev_bool mIsEditing;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* mpLayer;

				EarthView::World::Spatial::GeoDataset::CWorkCommandManager* mpCmdManager;

				CLayer3DEditor();

			};


		}
	}
}

#endif

