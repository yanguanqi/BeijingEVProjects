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
// 0			2014/10/16		赵玻恩		类定义
//
#ifndef _IFRAMEWORKAPP_INCLUDE__
#define _IFRAMEWORKAPP_INCLUDE__


#include "../interfacequerier.h"

class IApplication : public InterfaceUnknown
{
	PluginInterface(IApplication)
public:
	virtual ~IApplication() {}

	// 程序退出事件监听器。
	class ExitWatcher
	{
	public:
		/// <summary>
		/// 程序退出事件。
		/// 重写此函数来截获程序退出事件。
		/// 该函数调用时程序不一定会退出，退出过程可能被其他监听器阻止。
		/// </summary>
		/// <param name="exit">设置是否退出程序，
		/// 也可以通过该参数给出的值来判断程序是否已经被其他监听器阻止退出。</param>
		/// <returns></returns>
		virtual void onExitApp(bool& exit){}

		/// <summary>
		/// 程序退出事件。
		/// 重写此函数来截获程序退出事件。
		/// 与onExitApp的区别在于该函数无法阻止程序退出。
		/// </summary>
		/// <returns></returns>
		virtual void onAboutToExit(){}
	};

	/// <summary>
	/// 添加程序退出事件监听器。
	/// </summary>
	/// <param name="watcher">事件监听对象。</param>
	/// <returns></returns>
	virtual void addExitWatcher(IApplication::ExitWatcher* watcher) = 0;

	/// <summary>
	/// 判断程序是否已经退出。
	/// </summary>
	/// <returns>程序是否已经退出。</returns>
	virtual bool isAboutToQuit() const = 0;
};


#endif // _IFRAMEWORKAPP_INCLUDE__


