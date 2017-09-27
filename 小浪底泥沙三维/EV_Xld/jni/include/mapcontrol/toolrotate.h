#ifndef _TOOL_ROTATE_H_
#define _TOOL_ROTATE_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittool.h"
#include "mapcontrol/trackingtextitem.h"
#include "mapcontrol/trackinglayer.h"
#include "spatialobject/geometry/rectangle.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/trackinggeometryitem.h"
#include "core/event.h"
#include "spatialgui/itool.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class EV_MAPCONTROL_DLL CToolRotate : public CNewNonPointTypeTool
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CToolRotate();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CToolRotate();

				public:

					/// <summary>
					/// 获取工具类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类型</returns>
					ev_uint32 getType() const;

					/// <summary>
					/// 获取工具名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具名称</returns>
					EVString getName() const;

					/// <summary>
					/// 获取工具类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类别名称</returns>
					EVString getCategory() const;

					/// <summary>
					/// 获取工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具提示</returns>
					EVString getToolTip() const;

					/// <summary>
					/// 获取图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令的图标</returns>
					EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					ev_bool isCheckable() const;

					/// <summary>
					/// 激活任务
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void activate();

					/// <summary>
					/// 取消任务的激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void deactivate();

					/// <summary>
					/// 获取鼠标光标
					/// </summary>
					/// <param name=""></param>
					/// <returns>鼠标光标值</returns>
					ev_int32 getCursor();

					/// <summary>
					/// 鼠标左键按下 
					/// </summary>
					/// <param name="button">左键判定</param>
					/// <param name="shift">shift键判定</param>
					/// <param name="x">鼠标左键按下时的x坐标</param>
					/// <param name="y">鼠标左键按下时的y坐标</param>
					/// <returns>如果鼠标左键按下，返回true,如果没有按下，返回false</returns>
					ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标移动 
					/// </summary>
					/// <param name="button">左键判定</param>
					/// <param name="shift">shift键判定</param>
					/// <param name="x">鼠标移动时的x坐标</param>
					/// <param name="y">鼠标移动时的y坐标</param>
					/// <returns>如果鼠标移动，返回true,如果没有移动，返回false</returns>
					ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标抬起 
					/// </summary>
					/// <param name="button">左键判定</param>
					/// <param name="shift">shift键判定</param>
					/// <param name="x">鼠标抬起时的x坐标</param>
					/// <param name="y">鼠标抬起时的y坐标</param>
					/// <returns>如果鼠标抬起，返回true,如果没有抬起，返回false</returns>
					ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标双击
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果鼠标双击，返回true,如果没有双击，返回false</returns>
					ev_bool onDoubleClick();

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				private:
					void initData();
					void clearTracking();
				private:
					ev_real64 m_tempAngle;
					ev_real64 m_turnAngle;
					ev_bool m_bSketchFinished;
					EarthView::World::Spatial::SystemUI::EVToolType m_LastToolType;
					//点
					CTrackingGeomsItem* m_pPointGeomsItem;
					CTrackingGeometryItem* m_pRotatePointItem;
					//浮动层
					CTrackingLayer *m_pTrackingLayer;

					CRectangle* m_pRectangle;

					EarthView::World::Spatial::Geometry::CPoint *m_pCenterPoint;

					EarthView::World::Spatial::Geometry::CPoint *m_pStartPoint;

ev_private:
					CToolRotate( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CToolRotate )
				};
			}
		}
	}
}
#endif
