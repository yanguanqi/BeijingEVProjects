//// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
/// All rights reserved.
///
/// 类的声明。
///
///
///
/// 作 者：赵玻恩
/// 完成日期：-
///
/// 修改历史：
/// [修改序列]	[修改日期]		[修改者]		[修改内容]
/// 0			2013/05/22		赵玻恩		类定义
///
#ifndef _VIEWTOOLBAR_INCLUDE__
#define _VIEWTOOLBAR_INCLUDE__

#include <QList>
#include <QScopedPointer>
#include "qtlibs/viewpanelexport.h"

class QToolBar;
class QMainWindow;

namespace EarthView{namespace World{namespace Desktop{namespace QT{

class EXPORT_DLL ViewToolbar
{
public:
	ViewToolbar();
	~ViewToolbar();
	
	/// <summary>
	/// 清空工具栏。
	/// </summary>
	/// <param name="toobarList">工具栏列表。</param>
	/// <returns></returns>
	void clearToolbars();
	
	/// <summary>
	/// 重新添加工具栏。
	/// </summary>
	/// <param name="toobarList">工具栏列表。</param>
	/// <returns></returns>
	void resetToolbars(const QList<QToolBar*>& toolbarList);

	/// <summary>
	/// 恢复工具栏。
	/// 从全屏状态退出时恢复隐藏的工具栏。
	/// </summary>
	/// <returns></returns>
	void restoreToolbars();
	
	/// <summary>
	/// 关联到主窗口，这样才能对主窗口的工具栏进行设置。
	/// </summary>
	/// <param name="mainWindow">主窗口对象指针。</param>
	/// <returns></returns>
	void associateMainWindow(QMainWindow* mainWindow);

	/// <summary>
	/// 获取当前工具栏。
	/// </summary>
	/// <returns>工具栏对象列表。</returns>
	QList<QToolBar*> getCurrentToolbars() const;

	/// <summary>
	/// 获取当前工具栏布局。
	/// </summary>
	/// <returns></returns>
	void saveCurrentLayout();

	/// <summary>
	/// 获取当前工具栏布局。
	/// </summary>
	/// <returns></returns>
	void saveLastLayout();

	/// <summary>
	/// 获取本类的单例。
	/// </summary>
	/// <returns>ViewToolbar对象。</returns>
	static ViewToolbar* getInstance();
	
protected:

	class ViewToolbarData;
	QScopedPointer<ViewToolbarData> privateData;
	
	static ViewToolbar* instance;
};

}}}}

#endif // _VIEWTOOLBAR_INCLUDE__
