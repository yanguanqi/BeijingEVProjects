#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_TOOLEDITSELECT_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_TOOLEDITSELECT_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/tool2d.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class CRectangle;

			}}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CSimpleFillSymbol;

			}}}}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class CTrackingGeometryItem;
				class EV_MAPCONTROL_DLL CToolEditSelect : public CTool2D
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CToolEditSelect( );

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CToolEditSelect( );

				public:

					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					virtual ev_uint32 getToolBarType() const;

					/// <summary>
					/// 获取工具类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类型</returns>
					virtual ev_uint32 getType() const;

					/// <summary>
					/// 获取工具名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具名称</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 获取工具类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具类别名称</returns>
					virtual EVString getCategory() const;

					/// <summary>
					/// 获取工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具提示</returns>
					virtual EVString getToolTip() const;

					/// <summary>
					/// 获取图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令的图标</returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					virtual ev_bool isCheckable() const;

					/// <summary>
					/// 点击工具
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();

					/// <summary>
					/// 激活任务
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void activate();

					/// <summary>
					/// 取消任务的激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();

					/// <summary>
					/// 获取光标样式
					/// </summary>
					/// <param name=""></param>
					/// <returns>光标样式枚举</returns>
					virtual ev_int32 getCursor();

					/// <summary>
					/// 右键菜单事件触发
					/// </summary>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onContextMenu(ev_int32 x,ev_int32 y);

					/// <summary>
					/// 鼠标按下事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns></returns>
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
					/// 键盘按下事件触发
					/// </summary>
					/// <param name="key">按下的键</param>
					/// <param name="shift">shift键是否同时被按下</param>
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);

					/// <summary>
					/// 键盘弹起事件触发
					/// </summary>
					/// <param name="key">弹起的键</param>
					/// <param name="shift">shift键是否同时被释放</param>                    
					/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
					virtual ev_bool onKeyUp(ev_int32 keyCode,ev_int32 shift);

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					virtual ev_bool update( _in EarthView::World::Core::CEvent* e );

					/// <summary>
					/// 设置矩形框颜色
					/// </summary>
					/// <param name="pColor">矩形框框颜色</param>
					/// <returns></returns>
					ev_void setColor(EarthView::World::Spatial::Display::IColor *pColor);
				protected:
					ev_void init();
					CTrackingGeometryItem *mpItem;
					EarthView::World::Spatial::Display::CSimpleFillSymbol *m_pSymbol;
					EarthView::World::Spatial::Geometry::CRectangle* mpRectangle;
					ev_bool m_bKey_Ctrl_Press;
				ev_private:
					CToolEditSelect( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CToolEditSelect )
				};
			}
		}
	}
}
#endif