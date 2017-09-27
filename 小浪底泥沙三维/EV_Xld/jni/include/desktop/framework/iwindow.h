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
// 0			2014/01/10		赵玻恩		类定义
//
#ifndef _WINDOWINTERFACE_INCLUDE__
#define _WINDOWINTERFACE_INCLUDE__

#include "../interfacequerier.h"
#include "frameworkdefs.h"

class FloatWindow
{
public:

	/// <summary>
	/// 显示浮动窗口。
	/// </summary>
	/// <returns></returns>
	virtual void show() = 0;

	/// <summary>
	/// 弹出浮动窗口。
	/// </summary>
	/// <returns></returns>
	virtual void eject() = 0;

	/// <summary>
	/// 获取浮动窗口的显示状态，因为该窗口可以被用户关闭。
	/// </summary>
	/// <returns>是否处于显示状态。</returns>
	virtual bool isVisible() const = 0;

	/// <summary>
	/// 获取窗口对象。
	/// </summary>
	/// <returns>窗口对象句柄。</returns>
	virtual FrameworkDefines::WindowHandle window() const = 0;
};

class IWindow : public InterfaceUnknown
{
	PluginInterface(IWindow)
public:
	virtual ~IWindow(){}

	/// <summary>
	/// 获取主窗口对象。
	/// </summary>
	/// <returns>主窗口对象。</returns>
	virtual FrameworkDefines::WindowHandle window() const = 0;

	/// <summary>
	/// 添加左边栏。
	/// </summary>
	/// <param name="widget">边栏QWidget。</param>
	/// <param name="name">边栏名称。</param>
	/// <param name="icon">边栏图标。</param>
	/// <returns></returns>
	virtual void addLeftSideBar(FrameworkDefines::WindowHandle wid, const char* name, const char* iconPath) = 0;

	/// <summary>
	/// 添加右边栏。
	/// </summary>
	/// <param name="widget">边栏QWidget。</param>
	/// <param name="name">边栏名称。</param>
	/// <param name="icon">边栏图标。</param>
	/// <returns></returns>
	virtual void addRightSideBar(FrameworkDefines::WindowHandle wid, const char* name, const char* iconPath) = 0;

	/// <summary>
	/// 显示侧边栏。
	/// </summary>
	/// <param name="name">边栏名称。</param>
	/// <returns></returns>
	virtual void showSideBar(const char* name) = 0;

	/// <summary>
	/// 设置主要的QWidget。
	/// </summary>
	/// <param name="widget">QWidget。</param>
	/// <returns></returns>
	virtual void setCentralWidget(FrameworkDefines::WindowHandle widget) = 0;

	/// <summary>
	/// </summary>
	/// <param name="widget"></param>
	/// <returns></returns>
	virtual FloatWindow& addFloatWindow(FrameworkDefines::WindowHandle wid, const char* title) = 0;
};

#endif // _WINDOWINTERFACE_INCLUDE__

