/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// 类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2013/12/29		赵玻恩		类定义
//
#ifndef _COMMANDSUBMESHSELECTOR_INCLUDE__
#define _COMMANDSUBMESHSELECTOR_INCLUDE__

#include "globecontrol/evglobecontrol_config.h"
#include "globecontrol/globecommand.h"

namespace EarthView{namespace World{namespace Spatial3D{namespace Controls{

	class EV_GLOBECONTROL_DLL CommandSubmeshSelector : public EarthView::World::Spatial3D::Controls::CGlobeCommand
	{
	public:
		CommandSubmeshSelector();
		~CommandSubmeshSelector();
		
		/// <summary>
		/// 获得命令的类型
		/// </summary>
		/// <param name=""></param>
		/// <returns>命令的类型EVCommandType枚举值</returns>
		virtual ev_uint32 getType() const;
		/// <summary>
		/// 获得按钮名称
		/// </summary>
		/// <param name=""></param>
		/// <returns>按钮名称</returns>
		virtual EVString getName() const;

		/// <summary>
		/// 获得按钮的目录名称
		/// </summary>
		/// <param name=""></param>
		/// <returns>按钮的目录名称</returns>
		virtual EVString getCategory() const;

		/// <summary>
		/// 获得按钮的提示
		/// </summary>
		/// <param name=""></param>
		/// <returns>按钮的提示</returns>
		virtual EVString getToolTip() const;

		/// <summary>
		/// 获得按钮的图标
		/// </summary>
		/// <param name=""></param>
		/// <returns>按钮的图标</returns>
		virtual EarthView::World::Display::IBitmap * getIcon() const;

		/// <summary>
		/// 判断按钮是否能按下
		/// </summary>
		/// <param name=""></param>
		/// <returns>能按下返回true,不能按下返回false</returns>
		virtual ev_bool isCheckable() const;

		/// <summary>
		/// 按钮单击处理
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		virtual ev_void onClicked();

		/// <summary>
		/// 判断按钮是否按下
		/// </summary>
		/// <param name=""></param>
		/// <returns>按下返回true,没按下返回false</returns>
		virtual ev_bool getChecked() const;

		/// <summary>
		/// 设置按钮状态
		/// </summary>
		/// <param name="checked">按钮状态</param>
		/// <returns></returns>
		virtual ev_void setChecked( _in ev_bool checked );

		/// <summary>
		/// 判断按钮是否可用
		/// </summary>
		/// <param name=""></param>
		/// <returns>可用返回true,不可用返回false</returns>
		virtual ev_bool getEnabled() const;

		/// <summary>
		/// 设置按钮是否可用
		/// </summary>
		/// <param name="enabled">是否可用</param>
		/// <returns></returns>
		virtual ev_void setEnabled( _in ev_bool enabled );

		/// <summary>
		/// 通知按钮更新
		/// </summary>
		/// <param name="e">事件</param>
		/// <returns>返回false</returns>
		virtual ev_bool update( _in EarthView::World::Core::CEvent* e );
ev_private:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="pList">构造函数参数键值对表</param>
		/// <returns></returns>	
		CommandSubmeshSelector( EarthView::World::Core::CNameValuePairList *pList );
	protected:
		C_DISABLE_COPY(CommandSubmeshSelector)
	};

}}}}

#endif // _COMMANDSUBMESHSELECTOR_INCLUDE__

