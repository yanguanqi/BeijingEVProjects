#ifndef EAGLEEYEWIDGET_H
#define EAGLEEYEWIDGET_H

#include <QWidget>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "eagleeyewidget_d.lib")
#else
#pragma comment(lib, "eagleeyewidget.lib")
#endif
#define EAGLEEYEWIDGET_DLL Q_DECL_IMPORT
#else
#define EAGLEEYEWIDGET_DLL Q_DECL_EXPORT
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class CMapControl;
				class CEagleEyeControl;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class ISpatialDisplay;
			}
			namespace Geometry
			{
				class IEnvelope;
			}
		}
	}
}

class CEagleEyeWidegtInternal;
class EagleEyeWidgetHelper;

class EAGLEEYEWIDGET_DLL EagleEyeWidget : public QWidget
{
	Q_OBJECT

public:

	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <returns></returns>
	EagleEyeWidget(QWidget *parent = 0);

	/// <summary>
	/// 析构函数。
	/// </summary>
	/// <returns></returns>
	~EagleEyeWidget();

	/// <summary>
	/// 获取画布所在的QT控件
	/// </summary>
	/// <returns>画布所在的QT控件</returns>
	QWidget* canvasWidget() const;

	/// <summary>
	/// 打开鹰眼
	/// </summary>
	/// <returns></returns>
	void openEagleEye();
	/// <summary>
	/// 获取鹰眼内部控件
	/// </summary>
	/// <returns>鹰眼内部控件</returns>
	EarthView::World::Spatial2D::Controls::CEagleEyeControl* getEagleEyeControl();
	
signals:

	/// <summary>
	/// 地图成功打开的信号。此信号触发后，可以成功获取CMapControl对象。
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
	void signalEagleEyeOpened(EagleEyeWidget*);
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
	/// 鼠标按下信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalMouseDown(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY, bool& handled);
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
	/// 鼠标弹起信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalMouseUp(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY, bool& handled);
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
	/// 鼠标移动信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalMouseMove(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY, bool& handled);
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
	/// 鼠标双击信号触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalMouseDblClick(qint32 button, qint32 shift, qint32 x, qint32 y, qreal geoX, qreal geoY, bool& handled);
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
	/// 鼠标滚轮信号触发
	/// </summary>
	/// <param name="delta">滚轮转过的角度</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalMouseWheel(qint32 delta, qint32 x, qint32 y, qreal geoX, qreal geoY, qint32 flag, bool& handled );
	/// <summary>
	/// 键盘按下信号触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns></returns>
	void signalKeyDown(qint32 keyCode, qint32 shift);
	/// <summary>
	/// 键盘按下信号触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalKeyDown(qint32 keyCode, qint32 shift, bool& handled);
	/// <summary>
	/// 键盘弹起信号触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns></returns>
	void signalKeyUp(qint32 keyCode, qint32 shift);
	/// <summary>
	/// 键盘弹起信号触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给MapControl处理。设为false，表示事件处理后交给MapControl处理。</param>
	/// <returns></returns>
	void signalKeyUp(qint32 keyCode, qint32 shift, bool& handled);
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
public:
	void setName(const QString& name);
private:
	EagleEyeWidgetHelper  *helper;
protected:

	QString getName() const;
	void close();
	virtual void paintEvent(QPaintEvent* ev);
	virtual void resizeEvent(QResizeEvent* ev);
	virtual QSize sizeHint () const;
	Q_PROPERTY(QString layoutName READ getName WRITE setName)
};

#endif // MAPWIDGET_H
