#ifndef __SEPARATOR_COMMAND_H_
#define __SEPARATOR_COMMAND_H_

#include "spatialgui/icommand.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
class EV_SPATIALGUI_DLL CSeparatorCommand : public EarthView::World::Spatial::SystemUI::ICommand
{
public:
	CSeparatorCommand();
	~CSeparatorCommand();
public:
	/// <summary>
	/// 获取命令项所属的工具栏类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>工具栏类型</returns>
	ev_uint32 getToolBarType() const;
	/// <summary>
	/// 获取命令项的类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>类型</returns>
	ev_uint32 getType() const;
	/// <summary>
	/// 获取命令项的名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>名称</returns>
	EVString getName() const;
	/// <summary>
	/// 获取命令项所属类别
	/// </summary>
	/// <param name=""></param>
	/// <returns>类别</returns>
	EVString getCategory() const;
	/// <summary>
	/// 工具提示
	/// </summary>
	/// <param name=""></param>
	/// <returns>提示信息</returns>
	EVString getToolTip() const;
	/// <summary>
	/// 命令项的显示图标
	/// </summary>
	/// <param name=""></param>
	/// <returns>图标</returns>
	EarthView::World::Display::IBitmap * getIcon() const;
	/// <summary>
	/// 判断命令项是否支持"按下"状态
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果支持"按下"则返回true,反之则否</returns>
	ev_bool isCheckable() const;
	/// <summary>
	/// 当命令项按钮被点击的时候,调用该方法
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void onClicked();
	/// <summary>
	/// 获取命令项是否被按下
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果命令项被按下了则返回true,反之则否</returns>
	ev_bool getChecked() const;
	/// <summary>
	/// 设置命令项是否按下
	/// </summary>
	/// <param name="checked">如果为true,则命令项被按下,反之则否</param>
	ev_void setChecked( _in ev_bool checked );
	/// <summary>
	/// 获取命令项是否可用
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果命令项可用则返回true,反之则否</returns>
	ev_bool getEnabled() const;
	/// <summary>
	/// 设置命令项是否可用
	/// </summary>
	/// <param name="enabled">如果为true,则设置该命令项可用,反之则否</param>
	/// <returns></returns>
	ev_void setEnabled( _in ev_bool enabled );
	/// <summary>
	/// 使命令项与指定的控件相关联
	/// </summary>
	/// <param name="ctrl">待关联的控件</param>
	/// <returns></returns>
	ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );
	/// <summary>
	/// 当有事件被触发时,会调用该方法
	/// </summary>
	/// <param name="e">事件</param>
	/// <returns>如果状态发生变化则返回true,反之则否</returns>
	ev_bool update( _in EarthView::World::Core::CEvent* e );

ev_private:
	CSeparatorCommand( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY( CSeparatorCommand )
};

			}
		}
	}
}
#endif
