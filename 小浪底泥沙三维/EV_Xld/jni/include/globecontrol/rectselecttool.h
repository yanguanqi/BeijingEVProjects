#ifndef _RECT_QUERY_TOOL_H
#define _RECT_QUERY_TOOL_H

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"
#include "graphic/colourvalue.h"
#include "spatialgui/itool.h"

#include "globecontrol/globequerylistener.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CManualObject;
		}

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
				class EV_GLOBECONTROL_DLL CRectSelectTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				protected:	
					class CSelectionListener : public IGlobeQueryListener
					{
					public:
						CSelectionListener(CRectSelectTool* parent) : mParent(parent)
						{
						}
					public:
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial3D::CGlobeSelection& result);

						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::RaySceneQueryResult& result);					
						virtual void onSelectionChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Graphic::SceneQueryResult& result);
					protected:
						CRectSelectTool* mParent;
					};
					
					friend class CSelectionListener;

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_ctrl">抽象场景控件</param>
					/// <returns></returns>
					CRectSelectTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_ctrl);
					virtual ~CRectSelectTool();
				ev_private:
					CRectSelectTool(EarthView::World::Core::CNameValuePairList* pList);

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
					/// 鼠标双击事件触发
					/// </summary>
					/// <param name=""></param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onDoubleClick();
				public:
					/// <summary>
					/// 获取拉框的线颜色
					/// </summary>
					/// <param name=""></param>					
					/// <returns>线颜色</returns>
					const EarthView::World::Graphic::CColourValue& getLineColor()const;
					/// <summary>
					/// 设置拉框的线颜色
					/// </summary>
					/// <param name="color">线颜色</param>					
					/// <returns></returns>
					void setLineColor(const EarthView::World::Graphic::CColourValue& color);

					/// <summary>
					/// 重置拉框相关参数
					/// </summary>
					/// <param name="color">线颜色</param>					
					/// <returns></returns>
					void resetLine();

				protected:
					ev_void clearLayerSelection();
					ev_bool queryClampFeatureLayer(EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer* gl,EarthView::World::Spatial::GeoDataset::IQueryFilter* qf,EarthView::World::Spatial3D::CGlobeSelection& selection);
				protected:					
					EarthView::World::Spatial3D::Controls::CGlobeControl* mControl;

					ev_int32 mDownX;
					ev_int32 mDownY;
					ev_int32 mLastX;
					ev_int32 mLastY;

					ev_bool mDraging;				
					
					CSelectionListener* mpSelectionListener;

					EarthView::World::Graphic::CManualObject* mLineObject;
					EarthView::World::Graphic::CColourValue mLineColor;

					EarthView::World::Spatial::Utility::CSpatialReference* mWgsSR;

				private:
					C_DISABLE_COPY( CRectSelectTool );
				};
			}
		}
	}
}


#endif


