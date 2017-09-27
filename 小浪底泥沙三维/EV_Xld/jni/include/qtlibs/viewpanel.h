//// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
/// All rights reserved.
///
/// ViewPanel类的声明。
///
/// ViewPanel在界面上显示球和地图。
///
/// 作 者：赵玻恩
/// 完成日期：-
///
/// 修改历史：
/// [修改序列]	[修改日期]		[修改者]		[修改内容]
/// 0			2013/04/12		赵玻恩		类定义
///
#ifndef _VIEWPANEL_INCLUDE__
#define _VIEWPANEL_INCLUDE__

#include "qtlibs/viewpanelexport.h"
#include <QWidget>
#include <QScopedPointer>

class QMainWindow;

namespace EarthView{namespace World{namespace Desktop{namespace QT{

class SplittedWorkspace;
class ViewPanelHelper;

class EXPORT_DLL ViewPanel : public QWidget
{
public:
	virtual ~ViewPanel();

	/// <summary>
	/// 打开三维渲染窗口。
	/// </summary>
	/// <param name="sceneName">窗口名称。</param>
	/// <returns>打开是否成功。</returns>
	bool openGlobe(const QString& sceneName);

	/// <summary>
	/// 打开二维渲染窗口。
	/// </summary>
	/// <param name="mapName">窗口名称。</param>
	/// <returns>打开是否成功。</returns>
	bool openMap(const QString& mapName);

	/// 打开布局窗口。
	/// </summary>
	/// <param name="layoutName">窗口名称</param>
	/// <returns>打开是否成功。</returns>
	bool openLayout(const QString& layoutName);

	/// <summary>
	/// 全屏显示。该函数会将当前选中的tab页设为全屏。
	/// </summary>
	/// <returns></returns>
	void showFullScreen();

	/// <summary>
	/// 判断有没有任何窗口是全屏状态。
	/// </summary>
	/// <returns></returns>
	bool isAnyViewFullScreen() const;

	/// <summary>
	/// 全屏状态下在输出框添加文字。
	/// </summary>
	/// <returns></returns>
	void appendText2FullScreen(const QString& text);

	/// <summary>
	/// 全屏状态下在输出框添加图形。
	/// </summary>
	/// <returns></returns>
	void appendPixmap2FullScreen(const QPixmap& pm);

	/// <summary>
	/// 关闭所有窗口。
	/// </summary>
	/// <returns></returns>
	void closeAll();

	/// <summary>
	/// 获取错误信息。
	/// </summary>
	/// <returns></returns>
	QString getLastErrorString() const;

	/// <summary>
	/// 获取workspace对象。
	/// workspace即主窗口中显示标签页的部分，一般情况下，workspace的行为都封装在了ViewPanel之中，
	/// 但是如果你想单独操作workspace（例如想添加自己的tab标签页），可以通过此函数获取workspace的对象。
	/// </summary>
	/// <returns>SplittedWorkspace对象指针。</returns>
	SplittedWorkspace* peekWorkspace() const;

	static ViewPanel* getInstancePtr();

protected:

	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <param name="parent">父QWidget。</param>
	/// <returns></returns>
	ViewPanel(QWidget* parent = 0);

	QScopedPointer<ViewPanelHelper> helper;
};

}}}}

#endif // _VIEWPANEL_INCLUDE__
