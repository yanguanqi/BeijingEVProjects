/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
/// All rights reserved.
///
/// DataSourceTree类的声明。
///
/// DataSourceTree类在界面上显示并管理一个数据源树。
///
/// 作 者：赵玻恩
/// 完成日期：-
///
/// 修改历史：
/// [修改序列]	[修改日期]		[修改者]		[修改内容]
/// 0			2013年愚人节		赵玻恩		类定义
///
#ifndef _DATASOURCETREE_INCLUDE__
#define _DATASOURCETREE_INCLUDE__

#include <QWidget>
#include "datasourcetreeexport.h"

namespace EarthView{namespace World{namespace Desktop{namespace QT{

class DataSourceTreeHelper;

class DATASOURCETREE_DLL DataSourceTree : public QWidget
{
	Q_OBJECT
public:

	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <param name="parent">父QWidget。</param>
	/// <returns></returns>
	DataSourceTree( QWidget* parent = 0 );

	virtual ~DataSourceTree();

	/// <summary>
	/// 获取辅助类对象。辅助类存放树的数据，一些不对外开放的类可以通过辅助类来访问树的数据，
	/// 而不用在本类中添加一些无关的访问接口。
	/// </summary>
	/// <returns></returns>
	DataSourceTreeHelper& helper();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setFileDataSourceTreeDisabled(ev_bool disabled);
	ev_void setFileDataSourceTreeVisiable(bool visiable);

	ev_void setDBDataSourceTreeDisabled(bool disabled);
	ev_void setDBDataSourceTreeVisiable(bool visiable);


	ev_void setWebDataSourceTreeDisabled(bool disabled);
	ev_void setWebDataSourceTreeVisiable(bool visiable);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void openDBDataSource();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void closeDBDataSource();
protected:

	/// <summary>
	/// Qt用于获取控件理想大小的函数，旨在为控件设定一个预想的初始大小，
	/// 不过该初始大小受限于所属layout的布局方式。
	/// </summary>
	/// <returns></returns>
	QSize sizeHint() const;

	// 辅助类对象，存放成员变量和操作树的接口。
	QScopedPointer<DataSourceTreeHelper> privateData;
};

}}}}

#endif // _DATASOURCETREE_INCLUDE__
