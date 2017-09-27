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
// 0			2014/10/14		赵玻恩		类定义
//
#ifndef _ISTATUSBAR_INCLUDE__
#define _ISTATUSBAR_INCLUDE__

#include "../interfacequerier.h"
#include "triggeraction.h"

class IStatusBar : public InterfaceUnknown
{
	PluginInterface(IStatusBar)
public:
	virtual ~IStatusBar() {}

	/// <summary>
	/// 设置状态栏文字。
	/// </summary>
	/// <param name="text">状态栏文字。</param>
	/// <returns></returns>
	virtual void setText(const char* text) = 0;

	/// <summary>
	/// 在状态栏上显示进度信息。
	/// </summary>
	/// <param name="n">进度（0-100）。</param>
	/// <param name="text">进度条旁的说明文字。</param>
	/// <returns></returns>
	virtual void setProgress(int n, const char* text) = 0;

	/// <summary>
	/// 设置状态栏显示等待状态。
	/// </summary>
	/// <returns></returns>
	virtual void setWaiting() = 0;

	/// <summary>
	/// 重置状态栏，清除文字、进度信息和等待状态。
	/// </summary>
	/// <returns></returns>
	virtual void reset() = 0;

	/// <summary>
	/// 在状态栏上添加工具按钮。
	/// </summary>
	/// <param name="text">按钮名称。</param>
	/// <param name="action">ITriggerAction对象，用于接收点击按钮的事件。</param>
	/// <returns></returns>
	virtual void addToolButton(const char* text, ITriggerAction* action) = 0;

	/// <summary>
	/// 设置工具按钮上显示的消息数量。
	/// </summary>
	/// <param name="text">按钮名称。</param>
	/// <param name="n">消息数量。</param>
	/// <returns></returns>
	virtual void setToolButtonMessageCount(const char* text, int n) = 0;

	/// <summary>
	/// 获取工具按钮上显示的消息数量。
	/// </summary>
	/// <param name="text">按钮名称。</param>
	/// <returns>消息数量。</returns>
	virtual int toolButtonMessageCount(const char* text) = 0;
};

#endif // _INAVIGATOR_INCLUDE__

