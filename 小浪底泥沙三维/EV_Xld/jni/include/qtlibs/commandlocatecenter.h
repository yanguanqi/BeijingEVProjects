#ifndef COMMAND_LOCATE_CENTER_H
#define COMMAND_LOCATE_CENTER_H
#include <QDialog>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <qtimer.h>
#include "mapcontrol/mapcommand.h"
#include "mapcontrol/trackinggeometryitem.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/trackinglayer.h"
#include "qtlibs/viewtoolbar_global.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
class ISpatialControl;
}}}}

namespace EarthView{
	namespace World{
		namespace Layout{
			namespace Controls{
				class CLayoutControl;
}}}}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class FrmLocate : public QDialog
{
	Q_OBJECT
public:
	FrmLocate( EarthView::World::Layout::Controls::CLayoutControl* ctrl, QWidget* parent );
	FrmLocate( EarthView::World::Spatial2D::Controls::CMapControl* ctrl, QWidget* parent );
	~FrmLocate();
	ev_bool getCloseState();
	private slots:
	void gotoMap();
	void clearTracking();
private:
	virtual void closeEvent ( QCloseEvent * e );
	virtual void showEvent ( QShowEvent * event );
	void drawSymbol();
	void init();
	EarthView::World::Spatial2D::Controls::CTrackingLayer *m_pTrackingLayer;
	EarthView::World::Spatial2D::Controls::CTrackingGeomsItem *m_pMarkerItem;
	EarthView::World::Spatial2D::Controls::CMapControl* mpCtrl;
	EarthView::World::Layout::Controls::CLayoutControl *m_pLayoutCtrl;
	QLineEdit *mpEditX, *mpEditY;
	QRect mRect;
	ev_bool mbClosed;
};
class VIEWTOOLBAR_EXPORT CCommandLocateCenter : public EarthView::World::Spatial2D::Controls::CMapCommand
{
public:
	CCommandLocateCenter();
	~CCommandLocateCenter();
public:
	/// <summary>
	/// 获取工具栏类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>工具栏类型</returns>
	ev_uint32 getToolBarType() const;

	/// <summary>
	/// 获取命令类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令类型</returns>
	ev_uint32 getType() const;

	/// <summary>
	/// 获取名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令名称</returns>
	EVString getName() const;

	/// <summary>
	/// 获取类别
	/// </summary>
	/// <param name=""></param>
	/// <returns>类别的名称</returns>
	EVString getCategory() const;

	/// <summary>
	/// 获取工具
	/// </summary>
	/// <param name=""></param>
	/// <returns>工具的名称</returns>
	EVString getToolTip() const;

	/// <summary>
	/// 获取图标
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令的图标</returns>
	EarthView::World::Display::IBitmap * getIcon() const;

	/// <summary>
	/// 是否可以选择
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
	ev_bool isCheckable() const;

	/// <summary>
	/// 点击命令
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );

	/// <summary>
	/// 点击命令
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void onClicked();
	ev_bool update( _in EarthView::World::Core::CEvent* e );
	ev_bool updateLayout(_in EarthView::World::Core::CEvent* e);
protected:
	C_DISABLE_COPY( CCommandLocateCenter )
//	ev_bool mbVisible;
	FrmLocate* mpFrmLocate;
	EarthView::World::Layout::Controls::CLayoutControl *m_pLayoutControl;
};
}
}
}
}
#endif
