#ifndef EARTHVIEW_WORLD_LAYOUT_CONTROLS_TOOLPAGELAYOUT_H
#define EARTHVIEW_WORLD_LAYOUT_CONTROLS_TOOLPAGELAYOUT_H

#include "layoutcontrol/layoutcontrolconfig.h"
#include "layoutcontrol/layoutcontrol.h"
#include "spatialgui/itool.h"
#include "spatialinterface/ispatialdisplay.h"
#include "mapcontrol/mapcontrol.h"

namespace EarthView{
	namespace World{
		namespace Layout{
			namespace Controls{
				//class CMapControl;
				class EV_LAYOUTCONTROL_DLL CToolLayout : public EarthView::World::Spatial::SystemUI::ITool
				{
				public:

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CToolLayout( );

				public:

					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					ev_uint32 getToolBarType() const;

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
					/// 获取能不能被选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果能被选择，返回true,如果不能被选择，返回false</returns>
					ev_bool getChecked() const;

					/// <summary>
					///设置能不能被选择
					/// </summary>
					/// <param name="checked">能否被选择</param>
					/// <returns></returns>
					ev_void setChecked( _in ev_bool checked );

					/// <summary>
					/// 获取是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果有效，返回true,如果无效，返回false</returns>
					ev_bool getEnabled() const;

					/// <summary>
					///设置是否有效
					/// </summary>
					/// <param name="checked">是否有效</param>
					/// <returns></returns>
					ev_void setEnabled( _in ev_bool enabled );

					/// <summary>
					/// 创建工具
					/// </summary>
					/// <param name="ctrl">空间控制对象</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );


					/// <summary>
					/// 加载右键菜单
					/// </summary>
					/// <param name="ctrl"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void loadContextMenu() const;

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
					/// 点击工具
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void onClicked();

					/// <summary>
					/// 鼠标按下事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标滚轮滚动事件触发
					/// </summary>
					/// <param name="delta">滚动的幅度</param>        
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <param name="flag">标识位</param>  
					/// <returns></returns>
					ev_bool onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );

					/// <summary>
					/// 键盘按下事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns></returns>
					ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);

					/// <summary>
					/// 键盘弹起事件触发
					/// </summary>
					/// <param name="key">弹起的键</param>
					/// <param name="shift">shift键是否同时被释放</param>                    
					/// <returns></returns>
					ev_bool onKeyUp(ev_int32 keyCode,ev_int32 shift);

					/// <summary>
					/// 鼠标双击
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果鼠标双击，返回true,如果没有双击，返回false</returns>
					ev_bool onDoubleClick();

					ev_bool onTouchDown(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent);
					ev_bool onTouchUp(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent);
					ev_bool onTouchMove(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent);

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );

					ev_void setMapControl(EarthView::World::Spatial2D::Controls::CMapControl* pMapControl);

ev_internal:
					ev_bool m_bChecked;
					ev_bool m_bEnabled;
					CLayoutControl* m_pLayoutControl;
					EarthView::World::Spatial2D::Controls::CMapControl* m_pMapControl;
					EarthView::World::Spatial::Display::ISpatialDisplay* m_pDisplay;
					EarthView::World::Spatial::Display::ISpatialTransformer *m_pTransformer;

					//在派生类中使用
					EarthView::World::Display::IBitmap *m_pIcon;
					ev_int32 m_nStartX, m_nStartY;
ev_private:
					CToolLayout( EarthView::World::Core::CNameValuePairList *pList );
ev_internal:
					CToolLayout();
				};
			}
		}
	}
}
#endif
