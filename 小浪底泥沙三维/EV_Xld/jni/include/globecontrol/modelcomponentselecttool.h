#ifndef _MODEL_COMPONENT_SELECT_TOOL_H
#define _MODEL_COMPONENT_SELECT_TOOL_H

#include "core/memoryallocatedobject.h"

#include "spatialgui/itool.h"

#include "graphic/movableobject.h"
#include "graphic/selector.h"
#include "spatial3dengine/entitylayer.h"

#include "globecontrol/globequerylistener.h"
#include "graphic/scenemanager.h"
#include "spatialgui/guievent.h"
#include "graphic/scenequery.h"
#include "spatial3dengine/i3dlayer.h"
#include "spatial3dengine/entitylayer.h"
#include "spatial3dlayer/featuregrouplayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CGlobeControl;
			}
		}
	}
}


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				/// <summary>
				/// 组件选择类
				/// 射线与三角面相交
				/// 选择到目标的某个组件
				/// </summary>
				class EV_GLOBECONTROL_DLL CModelComponentSelector : public EarthView::World::Graphic::CRaySceneQuery
				{
				public:
					CModelComponentSelector(EarthView::World::Graphic::CSceneManager* ref_creator);
					~CModelComponentSelector();

ev_private:
					CModelComponentSelector(EarthView::World::Core::CNameValuePairList* pList);

				public:
					virtual void execute(EarthView::World::Graphic::CRaySceneQueryListener *listener);
					virtual EarthView::World::Graphic::RaySceneQueryResult &execute();
					virtual void clearResults();

					ev_void setRenderSelected(ev_bool render);
					ev_bool getRenderSelected() const;

					ev_void setViewport(EarthView::World::Graphic::CViewport* viewport);
					const EarthView::World::Graphic::CViewport* getViewport()const{return mViewport;}
				protected:
					ev_bool mRender;
					EarthView::World::Graphic::CViewport* mViewport;
					EarthView::World::Graphic::CSceneManager* mpSceneManger;
				private:
					typedef vector<	EarthView::World::Spatial3D::Atlas::IGlobeLayer *>CModelLayers;
					CModelLayers mModelLayers;
					void getFeatureLayers(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer *gl);
				};
				/// <summary>
				/// 模型部件选择工具类
				/// </summary>
				class EV_GLOBECONTROL_DLL CModelComponentSelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				protected:
					class CObjectListener : public EarthView::World::Graphic::CMovableObject::CMovableObjectListener
					{
					public:
						CObjectListener(CModelComponentSelectTool* parent)
							: mParent(parent)
						{
						}
					public:
						virtual void objectDestroyed(EarthView::World::Graphic::CMovableObject *pMovableObject);
					protected:
						CModelComponentSelectTool* mParent;
					};

					class CSelectionListener : public EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener
					{
					public:
						CSelectionListener(CModelComponentSelectTool* parent) : mParent(parent)
						{
						}
					public:
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::CGlobeSelection& result);

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResult& result);		

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::SceneQueryResult& result);
					protected:
						CModelComponentSelectTool* mParent;
					};

					friend class CObjectListener;
					friend class CSelectionListener;

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_ctrl">抽象三维场景控件</param>
					/// <returns></returns>	
					CModelComponentSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
					virtual ~CModelComponentSelectTool();				
ev_private:
					CModelComponentSelectTool(EarthView::World::Core::CNameValuePairList* pList);
				public:				
					/// <summary>
					/// 响应鼠标点击，执行命令
					/// </summary>
					/// <returns></returns>	
					virtual ev_void onClicked();

					/// <summary>
					/// 查看抽象三维场景控件是否使用当前工具类
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true,否返回false</returns>	
					virtual ev_bool getChecked() const;
					/// <summary>
					/// 查看抽象三维场景控件是否已设置好场景
					/// </summary>
					/// <param name=""></param>
					/// <returns>有返回true,没有返回false</returns>	
					virtual ev_bool getEnabled() const;					

					/// <summary>
					/// 设置是否按照到相机的距离排序
					/// </summary>
					/// <param name="sort">是否排序</param>
					/// <returns></returns>	
					void setSortByDistance(ev_bool sort);
					/// <summary>
					/// 设置是否按照到相机的距离排序和结果集大小
					/// </summary>
					/// <param name="sort">是否排序</param>
					/// <param name="maxresults">结果集大小</param>
					/// <returns></returns>	
					void setSortByDistance(ev_bool sort, ev_uint16 maxresults);
					/// <summary>
					/// 查看是否按照到相机的距离排序
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true,否返回false</returns>
					ev_bool getSortByDistance() const;
					/// <summary>
					/// 获得结果集大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>结果集大小</returns>	
					ev_uint16 getMaxResults() const;

					/// <summary>
					/// 获取选择时使用左键、中键或者右键
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask getSelectButton()const{return mSelectButton;}

					/// <summary>
					/// 设置选择时使用左键、中键或者右键
					/// </summary>
					/// <returns></returns>
					void setSelectButton(EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask button){ mSelectButton = button;}

					/// <summary>
					/// 重置结果集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					void resetResults();

					/// <summary>
					/// 返回当前类类型标识
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型标识</returns>	
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 鼠标按下处理
					/// </summary>
					/// <param name="button">鼠标按钮标识</param>
					/// <param name="shift">shift标识</param>
					/// <param name="x">鼠标按下的点在x轴上的位置</param>
					/// <param name="y">鼠标按下的点在y轴上的位置</param>
					/// <returns>处理完毕返回false,射线不与包围盒相交返回true</returns>	
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);					
					/// <summary>
					/// 鼠标释放处理
					/// </summary>
					/// <param name="button">鼠标按钮标识</param>
					/// <param name="shift">shift标识</param>
					/// <param name="x">鼠标按下的点在x轴上的位置</param>
					/// <param name="y">鼠标按下的点在y轴上的位置</param>
					/// <returns>返回false</returns>	
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);


				protected:	
					ev_void clearLayerSelection();
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;
					CModelComponentSelector mSelector;
					//EarthView::World::Graphic::CComponentSelector mSelector;
					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask mSelectButton;

					CObjectListener* mpObjectListener;
					CSelectionListener* mpSelectionListener;

					EV_AUTO_MUTEX;
				private:

					C_DISABLE_COPY( CModelComponentSelectTool );
				};


			}
		}
	}
}


#endif


