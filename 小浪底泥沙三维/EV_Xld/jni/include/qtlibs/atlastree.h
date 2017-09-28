/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
/// All rights reserved.
///
/// AtlasTree类的声明。
///
/// AtlasTree类在界面上显示并管理一个工程管理树（图层）。
/// 但是AtlasTree本身并不是树控件，它只是包含了一个树控件，
/// 真正的树控件是AtlasTreeWidget类。
///
/// 作 者：赵玻恩
/// 完成日期：-
///
/// 修改历史：
/// [修改序列]	[修改日期]		[修改者]		[修改内容]
/// 0			2013.04.09		赵玻恩		类定义
///
#ifndef _ATLASTREE_INCLUDE__
#define _ATLASTREE_INCLUDE__

#include <QWidget>
#include "qtlibs/atlastreeexport.h"
#include <QCheckBox>
//class QCheckBox;
namespace EarthView{namespace World{namespace Desktop{namespace QT{

class AtlasTreeHelper;
class LayerOrderTreeHelper;
class CLayerOrderTreeInternal;
class CAtlasTreeInternal;
class ATLASTREE_DLL AtlasTree : public QWidget
{
	Q_OBJECT
public:

	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <param name="parent">父QWidget。</param>
	/// <returns></returns>
	AtlasTree(QWidget* parent = 0);

	/// <summary>
	/// 虚构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~AtlasTree();

	/// <summary>
	/// 设置是否能在界面上修改工程，比如删除地图或场景。
	/// </summary>
	/// <param name="b">是否允许修改工程操作。</param>
	/// <returns></returns>
	void setReadOnly(bool b);

	/// <summary>
	/// 设置是否支持内置KML树，默认为不支持
	/// </summary>
	/// <param name="b">bool型参数</param>
	/// <returns></returns>
	void useDefaultKML(bool b);

	/// <summary>
	/// 获取辅助类对象。辅助类存放树的数据，一些不对外开放的类可以通过辅助类来访问树的数据，
	/// 而不用在本类中添加一些无关的访问接口。
	/// </summary>
	/// <returns></returns>
	AtlasTreeHelper& helper() const;

protected:

	/// <summary>
	/// Qt用于获取控件理想大小的函数，旨在为控件设定一个预想的初始大小，
	/// 不过该初始大小受限于所属layout的布局方式。
	/// </summary>
	/// <returns></returns>
	QSize sizeHint() const;
private slots:
		void soltIsShowPanel();
private:
	void init(QWidget* parent);
	CLayerOrderTreeInternal* m_pLayerOrderInternal;
	CAtlasTreeInternal* m_pAtlasTreeInternal;
	QCheckBox *m_pCheckBoxIsShow;
};

class CAtlasTreeInternal : public QWidget
{

public:
	CAtlasTreeInternal(QWidget* parent = 0);
	~CAtlasTreeInternal();
	void setReadOnly(bool b);
	void useDefaultKML(bool b);
	AtlasTreeHelper& helper() const;
protected:
	QScopedPointer<AtlasTreeHelper> _helper;
};

class CLayerOrderTreeInternal : public QWidget
{
public:
	CLayerOrderTreeInternal(QWidget* parent = 0);
	~CLayerOrderTreeInternal();
	LayerOrderTreeHelper& helper() const;
private:
	QScopedPointer<LayerOrderTreeHelper> _helper;
};

}}}}

#endif // _ATLASTREE_INCLUDE__
