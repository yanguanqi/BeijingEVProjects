#ifndef _EDITOR_BUTTON_H_
#define _EDITOR_BUTTON_H_
#include "spatial2dproxy/spatial2dproxy_config.h"
#include "spatialgui/itoolbutton.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class CMapControl;
			}
		}
	}
}
/// <summary>
/// 编辑按钮类
/// 提供方法如下：
/// 获取 工具条类型、类型、名称、类别、工具、图标
/// 是否可以选择、点击命令、操作更新、使命令项与指定的控件相关联
/// 获取与设置 命令项是否被按下、命令项是否可用
/// 添加命令项、获取命令项个数、获取指定命令项
/// </summary>
class EV_2DPROXY_DLL CEditorButton : public EarthView::World::Spatial::SystemUI::IToolButton
{
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CEditorButton();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CEditorButton();

public:
	/// <summary>
	/// 获取工具条类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>工具条类型</returns>
	ev_uint32 getToolBarType() const;

	/// <summary>
	/// 获取类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>类型</returns>
	ev_uint32 getType() const;

	/// <summary>
	/// 获取名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令名称</returns>
	EVString getName() const;

	/// <summary>
	/// 获取类别
	/// </summary>
	/// <param name=""></param>
	/// <returns>类别的名称</returns>
	EVString getCategory() const;

	/// <summary>
	/// 获取工具
	/// </summary>
	/// <param name=""></param>
	/// <returns>工具的名称</returns>
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
	/// 点击命令
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
	/// <returns></returns>
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

	/// <summary>
	/// 添加命令项
	/// </summary>
	/// <param name="cmd">命令对象</param>
	/// <returns></returns>
	ev_void addCommand( _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd );

	/// <summary>
	/// 获取命令项个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>个数</returns>
	ev_uint32 getCount() const;

	/// <summary>
	/// 获取指定命令项
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>命令项</returns>
	EarthView::World::Spatial::SystemUI::ICommand* getCommand( _in ev_uint32 index ) const;
ev_private:
	CEditorButton( EarthView::World::Core::CNameValuePairList* pList );
protected:
	ev_bool mbEnabled;
	ev_vector<EarthView::World::Spatial::SystemUI::ICommand*> mCommands;
	EarthView::World::Spatial2D::Controls::CMapControl* mpMapControl;
	C_DISABLE_COPY( CEditorButton )
};
#endif

