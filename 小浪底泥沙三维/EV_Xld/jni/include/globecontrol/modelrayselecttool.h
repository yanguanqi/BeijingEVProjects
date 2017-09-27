#ifndef _MODEL_RAY_QUERY_TOOL_H
#define _MODEL_RAY_QUERY_TOOL_H

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"

#include "spatialgui/itool.h"

#include "graphic/movableobject.h"
#include "graphic/editboundingbox.h"
#include "graphic/selector.h"

#include "core/ev_time.h"

#include "globecontrol/globequerylistener.h"

#include "spatialgui/guievent.h"
#include "graphic/scenemanager.h"





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
		namespace Spatial
		{
			namespace Utility
			{
				class CSpatialReference;
			}

			namespace GeoDataset
			{
				class IQueryFilter;
			}
		}

		namespace Spatial3D
		{
			namespace Atlas
			{
				class CFeatureGroupLayer;
			}

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
				/// 射线选择类
				/// 三角面精确选择            
				/// </summary>
				class EV_GLOBECONTROL_DLL CModelRaySelector : public EarthView::World::Graphic::CRaySceneQuery
				{
				public:
					CModelRaySelector(EarthView::World::Graphic::CSceneManager* ref_creator);
					~CModelRaySelector();

ev_private:
					CModelRaySelector(EarthView::World::Core::CNameValuePairList* pList);

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


				class EV_GLOBECONTROL_DLL CModelRaySelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				protected:
					class CObjectListener : public EarthView::World::Graphic::CMovableObject::CMovableObjectListener
					{
					public:
						CObjectListener(CModelRaySelectTool* parent)
							: mParent(parent)
						{
						}
					public:
						virtual void objectDestroyed(EarthView::World::Graphic::CMovableObject *pMovableObject);
					protected:
						CModelRaySelectTool* mParent;
					};

					class CSelectionListener : public EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener
					{
					public:
						CSelectionListener(CModelRaySelectTool* parent) : mParent(parent)
						{
						}
					public:
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::CGlobeSelection& result);

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResult& result);					

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::SceneQueryResult& result);
					protected:
						CModelRaySelectTool* mParent;
					};

					friend class CObjectListener;
					friend class CSelectionListener;

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_ctrl">抽象场景控件</param>
					/// <returns></returns>
					CModelRaySelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
					/// <summary>
					/// 析构函数
					/// </summary>
					virtual ~CModelRaySelectTool();
ev_private:
					CModelRaySelectTool(EarthView::World::Core::CNameValuePairList* pList);

				public:				
					/// <summary>
					/// 工具触发消息响应
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();

					/// <summary>
					/// 查询工具是否处于激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>激活返回true，否则返回false</returns>
					virtual ev_bool getChecked() const;
					/// <summary>
					/// 查询工具是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>可用返回true，否则返回false</returns>
					virtual ev_bool getEnabled() const;		

					/// <summary>
					/// 获取工具是否开启编辑功能(默认是开启的)
					/// </summary>
					/// <param name=""></param>
					/// <returns>开启则返回true，否则返回false</returns>
					ev_bool getEditable()const;

					/// <summary>
					/// 设置工具是否开启编辑功能
					/// </summary>
					/// <param name="editable">是否启用</param>
					/// <returns></returns>
					void setEditable(ev_bool editable);


					/// <summary>
					/// 设置是否按距离排序
					/// </summary>
					/// <param name="sort">是否排序</param>
					/// <returns></returns>
					void setSortByDistance(ev_bool sort);
					/// <summary>
					/// 设置是否按距离排序
					/// </summary>
					/// <param name="sort">是否排序</param>
					/// <param name="sort">最大的结果数量</param>
					/// <returns></returns>
					void setSortByDistance(ev_bool sort, ev_uint16 maxresults);
					/// <summary>
					/// 查询是否按距离排序
					/// </summary>
					/// <returns>是否按距离排序</returns>
					ev_bool getSortByDistance() const;
					/// <summary>
					/// 获得最大结果数量
					/// </summary>
					/// <returns>最大结果数量</returns>
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
					/// 清空结果集
					/// </summary>
					/// <returns></returns>
					void resetResults();

					/// <summary>
					/// 查询工具类型
					/// </summary>
					/// <returns>工具类型EVToolType</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 鼠标按下事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标双击事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标弹起事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标移动事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 键盘按下事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);
				protected:
					ev_bool pickEditableObjectFromResult(const EarthView::World::Spatial::Math::CRay& ray);
					ev_void updateSelectedObjectTo(ev_int32 key,ev_int32 x,ev_int32 y,EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type);

					EarthView::World::Spatial::Math::CVector3 inverseProject(const EarthView::World::Spatial::Math::CVector3& position);
					ev_bool isEditing()const;

					ev_void clearLayerSelection();
					ev_bool queryClampFeatureLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl,EarthView::World::Spatial::GeoDataset::IQueryFilter* qf,EarthView::World::Spatial3D::CGlobeSelection& selection);
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;
					CModelRaySelector mSelector;

					ev_int32 mDownX;
					ev_int32 mDownY;
					EarthView::World::Spatial::Math::CMatrix4 mDownMatrix;
					EarthView::World::Core::CCoreTime mDownTime;

					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask mSelectButton;

					ev_bool mDraging;
					ev_bool mDoubleClicked;

					EarthView::World::Graphic::CEditBoundingBox::TrackingType mTrackingType;					

					EarthView::World::Graphic::RaySceneQueryResultEntry* mPickingMovable;

					CObjectListener* mpObjectListener;
					CSelectionListener* mpSelectionListener;

					ev_bool mEditable;

					EV_AUTO_MUTEX;

					EarthView::World::Spatial::Utility::CSpatialReference* mWgsSR;
				private:
					C_DISABLE_COPY( CModelRaySelectTool );
				};
			}
		}
	}
}


#endif


