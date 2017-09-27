#ifndef _EDITING_TASK_SET_H_
#define _EDITING_TASK_SET_H_
#include "spatial2dproxy/spatial2dproxy_config.h"
#include "spatialgui/ientrybox.h"
namespace EarthView{namespace World{namespace Spatial2D{namespace Controls{
				class CMapControl;
}}}}
/// <summary>
/// 编辑任务组类
/// 提供方法如下：
/// 获取 工具条类型、类型、名称、类别、工具、图标、获取组合项中条目的个数、获取指定的条目
/// 是否可以选择、点击命令、操作更新、使命令项与指定的控件相关联
/// 获取与设置 命令项是否被按下、命令项是否可用
/// 获取当前的索引、获取指定图层、当前的索引发生变化时,会调用该方法
/// </summary>
class EV_2DPROXY_DLL CEditingTaskSet : public EarthView::World::Spatial::SystemUI::IEntryBox
{
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CEditingTaskSet();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CEditingTaskSet();

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
	/// 获取组合项中条目的个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>条目数量</returns>
	ev_uint32 getEntryCount() const;

	/// <summary>
	/// 获取指定的条目
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns></returns>
	EVString getEntry( _in ev_uint32 index ) const;

	/// <summary>
	/// 获取当前的索引
	/// </summary>
	/// <param name=""></param>
	/// <returns>索引</returns>
	ev_int32 getCurrentIndex() const;

	/// <summary>
	/// 当前的索引发生变化时,会调用该方法
	/// </summary>
	/// <param name="index">新的当前索引</param>
	/// <returns></returns>
	ev_void currentIndexChanged( _in ev_uint32 index );

ev_private:
	CEditingTaskSet( EarthView::World::Core::CNameValuePairList* pList );
protected:
	ev_bool mbEnabled;
	EarthView::World::Spatial2D::Controls::CMapControl* mpMapControl;
	ev_vector<EVString> mTasks;
	ev_int32 mnCurrentIndex;

	C_DISABLE_COPY( CEditingTaskSet )
};

#endif
