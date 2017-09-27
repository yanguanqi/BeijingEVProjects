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
// 0			2014/01/14		赵玻恩		类定义
//
#ifndef _INAVIGATOR_INCLUDE__
#define _INAVIGATOR_INCLUDE__

#include "../interfacequerier.h"
#include "frameworkdefs.h"
#include "triggeraction.h"

class NavigatorSection
{
public:
	virtual ~NavigatorSection() {}
	
	/// <summary>
	/// 添加action。
	/// </summary>
	/// <param name="actionName">action名称。</param>
	/// <param name="iconPath">action图标路径。</param>
	/// <param name="triggerAction">ITriggerAction对象，用于接收按钮点击事件。</param>
	/// <param name="checkable">设置按钮是否可以是选中状态，默认是不能选中。</param>
	/// <returns></returns>
	virtual void addAction(const char* actionName, const char* iconPath, 
							ITriggerAction* triggerAction, bool checkable = false) = 0;

	/// <summary>
	/// 往导航栏上添加控件。
	/// </summary>
	/// <param name="name">显示名称。</param>
	/// <param name="wid">控件窗口句柄。</param>
	/// <returns></returns>
	virtual void addWidget(const char* name, FrameworkDefines::WindowHandle wid) = 0;

	/// <summary>
	/// 添加一个分隔符。
	/// </summary>
	/// <returns></returns>
	virtual void addSeparator() = 0;
};

class INavigator : public InterfaceUnknown
{
	PluginInterface(INavigator)
public:
	virtual ~INavigator() {}

	class SelectChangeWatcher
	{
	public:
		virtual ~SelectChangeWatcher(){}

		virtual void onSelectChanged(const char* currentSelected) = 0;
	};

	/// <summary>
	/// 获取导航栏section，如指定导航栏不存在，则会创建一个。
	/// </summary>
	/// <param name="sectionName">导航栏名称。</param>
	/// <returns>NavigatorSection对象，用于操作导航栏。</returns>
	virtual NavigatorSection& section(const char* sectionName) = 0;

	/// <summary>
	/// 获取专用导航栏section，如指定导航栏不存在，则会创建一个。
	/// </summary>
	/// <param name="sectionName">导航栏名称。</param>
	/// <returns>NavigatorSection对象，用于操作导航栏。</returns>
	virtual NavigatorSection& featuredSection(const char* sectionName) = 0;

	/// <summary>
	/// 移除导航栏。
	/// </summary>
	/// <param name="text">导航栏名称。</param>
	/// <returns></returns>
	virtual void removeSection(const char* sectionName) = 0;

	/// <summary>
	/// 移除所有专用导航栏。
	/// </summary>
	/// <returns></returns>
	virtual void removeAllFeaturedSection() = 0;

	/// <summary>
	/// 设置导航栏专用按钮描述标题。
	/// </summary>
	/// <param name="text">描述文字。</param>
	/// <param name="color">描述颜色，例如"#0f0f0f"。</param>
	/// <returns></returns>
	virtual void setFeatruedTitle(const char* title, const char* color) = 0;

	/// <summary>
	/// 设置当前选中的按钮。
	/// </summary>
	/// <param name="sectionName">按钮文字。</param>
	/// <returns></returns>
	virtual void setSelectedSection(const char* sectionName) = 0;

	/// <summary>
	/// 获取当前选中的按钮的文字。
	/// </summary>
	/// <returns>按钮文字。</returns>
	virtual const char* selectedSection() const = 0;

	/// <summary>
	/// 添加监视导航栏标签页选择改变的监视器。
	/// </summary>
	/// <param name="watcher">监视器对象。</param>
	/// <returns></returns>
	virtual void addSelectChangeWatcher(SelectChangeWatcher* watcher) = 0;
};

#endif // _INAVIGATOR_INCLUDE__

