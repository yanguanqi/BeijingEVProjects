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
// 0			2014/09/09		赵玻恩		类定义
//
#ifndef _IREMINDER_INCLUDE__
#define _IREMINDER_INCLUDE__

#include "../interfacequerier.h"

class IReminder : public InterfaceUnknown
{
	PluginInterface(IReminder)
public:
	virtual ~IReminder(){}

	enum ReminderType
	{
		Notice,		// 一般提醒，蓝色。
		Normal,		// 表示状态正常，绿色。
		Warning,	// 警告，黄色。
		Error		// 错误，红色。
	};

	/// <summary>
	/// 显示提醒。
	/// </summary>
	/// <param name="text">提醒文字。</param>
	/// <param name="type">提醒类型。</param>
	/// <param name="msKeep">提醒保持时间。</param>
	/// <returns></returns>
	virtual void showReminder(const char* text,
		IReminder::ReminderType type, int msKeep = 3000) = 0;

	/// <summary>
	/// 显示提醒。使用默认提醒类型（Notice）。
	/// </summary>
	/// <param name="text">提醒文字。</param>
	/// <param name="msKeep">提醒保持时间。</param>
	/// <returns></returns>
	virtual void showReminder(const char* text, int msKeep = 3000) = 0;
};

#endif // _IREMINDER_INCLUDE__

