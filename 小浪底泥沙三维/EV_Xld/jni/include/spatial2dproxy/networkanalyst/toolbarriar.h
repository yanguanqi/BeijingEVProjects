#ifndef _NETWORK_ANALYST_TOOL_BARRIAR_H_H_
#define _NETWORK_ANALYST_TOOL_BARRIAR_H_H_

#include "spatial2dproxy/spatial2dproxy_config.h"
#include "mapcontrol/tool2d.h"


//namespace EarthView{
//	namespace World{
//		namespace Spatial2D{
//			namespace Controls{

class CNetworkAnalystToolBar;
/// <summary>
/// 网络分析障碍点
/// </summary>

class EV_2DPROXY_DLL CNAToolBarriar :  public EarthView::World::Spatial2D::Controls::CTool2D
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="bar">工具条指针</param>
	/// <returns></returns>
	CNAToolBarriar(CNetworkAnalystToolBar *ref_bar);
	/// <summary>
	/// 析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CNAToolBarriar();
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
	/// 获取游标
	/// </summary>
	/// <param name=""></param>
	/// <returns>游标</returns>
    ev_int32 getCursor();
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
	/// <param name="enabled">是否有效</param>
	/// <returns></returns>
	ev_void setEnabled( _in ev_bool enabled );
	/// <summary>
	/// 键盘按下事件触发
	/// </summary>
	/// <param name="keyCode">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns></returns>
	ev_bool onKeyDown(ev_int32 keyCode,ev_int32 shift);
	/// <summary>
	/// 鼠标按下事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns>标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)</returns>
    ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
	/// <summary>
	/// 操作更新
	/// </summary>
	/// <param name="e">操作事件</param>
	/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
	ev_bool update( _in EarthView::World::Core::CEvent* e );

ev_private:
	CNAToolBarriar( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY(	CNAToolBarriar)

private:
	CNetworkAnalystToolBar *m_bar;
};


//}}}} //End of Namespace

#endif
