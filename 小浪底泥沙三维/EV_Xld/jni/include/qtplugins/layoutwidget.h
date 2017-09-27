#ifndef LAYOUTWIDGET_H
#define LAYOUTWIDGET_H

#include <QWidget>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "layoutwidget_d.lib")
#else
#pragma comment(lib, "layoutwidget.lib")
#endif
#define LAYOUTWIDGET_DLL Q_DECL_IMPORT
#else
#define LAYOUTWIDGET_DLL Q_DECL_EXPORT
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				class ICommand;
			}
			namespace Display
			{
				class ISpatialDisplay;
			}
			namespace Geometry
			{
				class IEnvelope;
			}
			namespace Atlas
			{
				class ILayer;
			}
		}
		namespace Layout
		{
			namespace Controls
			{
				class CLayoutControl;
			//	class CInformationBarSettings;
			}
		}
	}
}

class LayoutWidgetHelper;

class LAYOUTWIDGET_DLL LayoutWidget : public QWidget
{
	Q_OBJECT

public:

	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <returns></returns>
	LayoutWidget(QWidget *parent = 0);

	/// <summary>
	/// 析构函数。
	/// </summary>
	/// <returns></returns>
	~LayoutWidget();

	/// <summary>
	/// 获取CMapControl对象。
	/// </summary>
	/// <returns>获取的CMapControl对象。</returns>
	EarthView::World::Layout::Controls::CLayoutControl* getLayoutControl() const;
	
	/// <summary>
	/// 打开地图。
	/// </summary>
	/// <param name="name">地图名称。</param>
	/// <returns></returns>
	void openLayout(const QString& name);

	/// <summary>
	/// 关闭地图。
	/// </summary>
	/// <returns></returns>
	void closeLayout();

	/// <summary>
	/// 获取画布对象，即实际用于绘制的QWidget，可以在需要的时候用于设置一些参数，例如上下文菜单等。
	/// *** 如果打开地图失败，该函数可能返回无效的对象，而在signalMapOpened中获取的画布对象都是有效的。
	/// </summary>
	/// <returns>画布对象。</returns>
	QWidget* canvasWidget() const;

signals:

	/// <summary>
	/// 布局成功打开的信号。此信号触发后，可以成功获取CMapControl对象。
	/// 例：
	///		void slotMapOpened(MapWidget* map)
	///		{
	///			// 获取地图名称。
	///			QString name = map->getName();		
	///			// 获取CMapControl对象。
	///			CMapControl* ctrl = map->getMapControl();
	///		}
	/// </summary>
	/// <returns></returns>
	void signalLayoutOpened(LayoutWidget*);
	/// <summary>
	/// 鼠标按下信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns></returns>
	void signalMouseDown(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY);
	/// <summary>
	/// 鼠标弹起信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns></returns>
	void signalMouseUp(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY);
	/// <summary>
	/// 鼠标移动信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns></returns>
	void signalMouseMove(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY);
	/// <summary>
	/// 鼠标双击信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns></returns>
	void signalMouseDblClick(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY);
	/// <summary>
	/// 鼠标滚轮信号触发
	/// </summary>
	/// <param name="delta">滚轮转过的角度</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns></returns>
	void signalMouseWheel(qint32 delta, qint32 x, qint32 y, qreal geoX, qreal geoY, qint32 flag );
	/// <summary>
	/// 键盘按下信号触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns></returns>
	void signalKeyDown(qint32 keyCode, qint32 shift);
	/// <summary>
	/// 键盘弹起信号触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns></returns>
	void signalKeyUp(qint32 keyCode, qint32 shift);
	/// <summary>
	/// 窗口大小发生变化
	/// </summary>
	/// <param name="width">窗口宽度</param>
	/// <param name="height">窗口高度</param>
	/// <returns></returns>
	void signalResize(qint32 width, qint32 height);
	/// <summary>
	/// 地图刷新之前的信号
	/// </summary>
	/// <param name="display">显示参数</param>
	/// <param name="viewportEnvelope">新的视口范围</param>
	/// <returns></returns>
	void signalBeforeRefresh(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope );
	/// <summary>
	/// 地图刷新之后的信号
	/// </summary>
	/// <param name="display">显示参数</param>
	/// <param name="viewportEnvelope">新的视口范围</param>
	/// <returns></returns>
	void signalAfterRefresh(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope );
	/// <summary>
	/// 地图绘制信号
	/// </summary>
	/// <param name="display">显示参数</param>
	/// <param name="layer">正在绘制的图层</param>
	/// <param name="type">正在绘制的类型</param>
	/// <returns></returns>
	void signalLayoutDraw(EarthView::World::Spatial::Display::ISpatialDisplay* display, EarthView::World::Spatial::Atlas::ILayer* layer, int type );
	/// <summary>
	/// 上下文菜单事件。
	/// 这里提供的坐标是鼠标在控件坐标系中的坐标，
	/// 如果需要弹出菜单，可使用QCursor::pos()获取屏幕坐标系中的坐标。
	/// 需要注意的是本事件在【鼠标按下 > 移动一段距离 > 释放鼠标】的情况下也会触发，
	/// 可能和点选等功能冲突，所以可能需要和signalMouseDown等事件配合使用。
	/// </summary>
	/// <param name="qint32">X坐标。</param>
	/// <param name="qint32">Y坐标。</param>
	/// <returns></returns>
	void signalContextMenu(qint32, qint32);
public:

	void setName(const QString& name);

	QScopedPointer<LayoutWidgetHelper> helper;

protected:

	QString getName() const;
	void close();
	virtual void paintEvent(QPaintEvent* ev);
	virtual void resizeEvent(QResizeEvent* ev);
	virtual QSize sizeHint () const;
	Q_PROPERTY(QString layoutName READ getName WRITE setName)
};

#endif // MAPWIDGET_H
