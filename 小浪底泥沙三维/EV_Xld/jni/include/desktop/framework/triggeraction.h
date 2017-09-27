// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// 类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2014/11/05		赵玻恩		类定义
//
#ifndef _TRIGGERACTION_INCLUDE__
#define _TRIGGERACTION_INCLUDE__

class ITriggerAction
{
public:
	virtual ~ITriggerAction(){}

	/// <summary>
	/// 按钮点击事件。
	/// </summary>
	/// <returns>
	/// </returns>
	virtual void onClicked(){}

	/// <summary>
	/// 按钮点击事件。
	/// </summary>
	/// <param name="checked">按钮的check状态。</param>
	/// <returns>
	/// </returns>
	virtual void onClicked(bool checked){}

	/// <summary>
	/// 按钮点击事件。
	/// </summary>
	/// <param name="name">按钮名称，当用一个ITriggerAction处理多个按钮点击事件时，
	/// 重写此函数通过名称区分不同的按钮。</param>
	/// <returns>
	/// </returns>
	virtual void onClicked(const char* name){}

	/// <summary>
	/// 按钮点击事件。
	/// </summary>
	/// <param name="name">按钮名称，当用一个ITriggerAction处理多个按钮点击事件时，
	/// 重写此函数通过名称区分不同的按钮。</param>
	/// <param name="checked">按钮的check状态。</param>
	/// <returns>
	/// </returns>
	virtual void onClicked(const char* name, bool checked){}
};

#endif // _TRIGGERACTION_INCLUDE__

