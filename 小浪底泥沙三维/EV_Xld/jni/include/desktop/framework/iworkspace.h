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
#ifndef _IPROJECT_INCLUDE__
#define _IPROJECT_INCLUDE__

#include "../interfacequerier.h"

class IWorkspace : public InterfaceUnknown
{
	PluginInterface(IWorkspace)
public:
	virtual ~IWorkspace() {}
	
	// 工程文件保存事件监听器。
	class ChangedWatcher
	{
	public:
		virtual ~ChangedWatcher(){}

		/// <summary>
		/// 保存事件。
		/// 当该函数被调用时，工程文件的保存操作已执行完毕。
		/// </summary>
		/// <param name="success">指出保存工程文件的操作是否成功。</param>
		/// <param name="path">指出保存的工程文件位置。</param>
		/// <returns></returns>
		virtual void onSaved(const bool success, const char* path){}

		/// <summary>
		/// 保存事件。
		/// 当该函数被调用时，工程文件的保存操作已执行完毕。
		/// </summary>
		/// <param name="success">指出保存工程文件的操作是否成功。</param>
		/// <param name="path">指出保存的工程文件位置。</param>
		/// <returns></returns>
		virtual void onOpened(const bool success, const char* path){}

		/// <summary>
		/// 工程文件创建事件。
		/// 当该函数被调用时，刚刚创建了一个新的工程文件。
		/// </summary>
		/// <param name="success">指出创建工程文件的操作是否成功。</param>
		/// <returns></returns>
		virtual void onCreated(const bool success){}

		/// <summary>
		/// 工程文件修改事件。
		/// 当该函数被调用时，工程文件刚进行过修改。
		/// </summary>
		/// <param name="path">指出当前打开的工程文件位置。</param>
		/// <returns></returns>
		virtual void onChanged(const char* path){}
	};

	/// <summary>
	/// 保存工作空间。如果当前没有已打开的工作空间，则弹出对话框选择文件保存位置。
	/// </summary>
	/// <returns></returns>
	virtual void save() = 0;

	/// <summary>
	/// 另存为工作空间。弹出对话框选择文件保存位置。
	/// </summary>
	/// <returns></returns>
	virtual void saveAs() = 0;

	/// <summary>
	/// 关闭工作空间。如果当前有已改动过的工作空间，则弹出对话框提示是否保存。
	/// </summary>
	/// <returns>
	/// 返回值指出关闭操作是否真的被执行，因为不是调用此函数工作空间就一定会被关闭，该操作可能被阻止。
	/// 例如如果在提示窗口中点击“取消”，则会返回false，点击“是”或“否”都会返回true。
	/// </returns>
	virtual bool close() = 0;

	/// <summary>
	/// 添加工程文件保存事件监听器。
	/// </summary>
	/// <param name="watcher">事件监听对象。</param>
	/// <returns></returns>
	virtual void addSaveWatcher(IWorkspace::ChangedWatcher* watcher) = 0;
};


#endif // _IPROJECT_INCLUDE__


