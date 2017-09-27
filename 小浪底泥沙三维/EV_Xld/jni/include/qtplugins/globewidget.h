#ifndef _GLOBEWIDGET_INCLUDE__
#define _GLOBEWIDGET_INCLUDE__

#include <QtGui/QWidget>
#include <QtGui/QTouchEvent>

#ifndef QDESIGNER_EXPORT_WIDGETS
#if defined(_DEBUG)
#pragma comment(lib, "globewidget_d.lib")
#else
#pragma comment(lib, "globewidget.lib")
#endif
#define GLOBEWIDGET_DLL Q_DECL_IMPORT
#else
#define GLOBEWIDGET_DLL Q_DECL_EXPORT
#endif

#ifdef _DEBUG
//#include "globewidgethelper.h"
#endif
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			struct FrameEvent;
			class RaySceneQueryResult;
		}
		namespace Spatial3D
		{
			class CGlobeSelection;
			class CGlobeCamera;
			namespace Controls
			{
				class CGlobeControl;
			}
			namespace Analysis
			{
				class IAnalysis3DTool;
			}
		}
	}
}

// using namespace EarthView::World::Graphic;
// using namespace EarthView::World::Spatial3D;
// using namespace EarthView::World::Spatial3D::Controls;
// using namespace EarthView::World::Spatial3D::Analysis;

class GlobeWidgetHelper;

class GlobeTouchListener
{
public:
	virtual ~GlobeTouchListener(){}

	/// <summary>
	/// 触摸开始。
	/// </summary>
	/// <param name="pointList">触摸点列表。</param>
	/// <param name="state">触摸点状态。</param>
	/// <returns>返回true使默认触摸处理失效。</returns>
	virtual bool onTouchBegin(const QList<QTouchEvent::TouchPoint>& pointList,
		Qt::TouchPointStates state) {return false;}

	/// <summary>
	/// 触摸点位置或状态更新。
	/// </summary>
	/// <param name="pointList">触摸点列表。</param>
	/// <param name="state">触摸点状态。</param>
	/// <returns>返回true使默认触摸处理失效。</returns>
	virtual bool onTouchUpdate(const QList<QTouchEvent::TouchPoint>& pointList,
		Qt::TouchPointStates state) {return false;}

	/// <summary>
	/// 触摸结束。
	/// </summary>
	/// <param name="pointList">触摸点列表。</param>
	/// <param name="state">触摸点状态。</param>
	/// <returns>返回true使默认触摸处理失效。</returns>
	virtual bool onTouchEnd(const QList<QTouchEvent::TouchPoint>& pointList,
		Qt::TouchPointStates state) {return false;}
};

class GLOBEWIDGET_DLL GlobeWidget : public QWidget
{
	Q_OBJECT

public:
	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <param name="parent">父QWidget对象。</param>
	/// <returns></returns>
	GlobeWidget(QWidget *parent = 0);

	~GlobeWidget();

	/// <summary>
	/// 打开场景。
	/// </summary>
	/// <param name="name">场景名称。</param>
	/// <returns></returns>
	void openGlobe(const QString& name);

	/// <summary>
	/// 关闭场景。
	/// </summary>
	/// <returns></returns>
	void closeGlobe();

	/// <summary>
	/// 获取场景名称，即在Qt Designer中设置的名称。
	/// </summary>
	/// <returns>QString字符串对象。</returns>
	QString getName() const;

	/// <summary>
	/// 注册触摸事件监听对象。
	/// </summary>
	/// <param name="listener">GlobeTouchListener对象。</param>
	/// <param name="autoDelete">设置true，监听对象会在GlobeWidget析构时被自动删除。
	/// 如果你想自己维护监听对象的生命周期，可以将此属性设为false。
	/// </param>
	/// <returns>QString字符串对象。</returns>
	void registerTouchListener(GlobeTouchListener* listener, bool autoDelete = true);

	/// <summary>
	/// 获取场景内部对象CGlobeControl，CGlobeControl可以对场景窗口进行更多的控制。
	/// 要使用CGlobeControl，
	///		头文件包含：
	///			#include "globecontrol/globecontrol.h"
	///		命名空间使用：
	///			// using namespace EarthView::World::Spatial3D::Controls;
	///		链接库：
	///			EV_GlobeControl.lib
	/// *** 要在程序完全启动后才能获取CGlobeControl，如果你想在程序启动时就获取
	/// CGlobeControl而无法确定是否能成功获取，可以使用signalGlobeOpened()信号。
	/// </summary>
	/// <returns>CGlobeControl对象指针，请判断是否为NULL。</returns>
	EarthView::World::Spatial3D::Controls::CGlobeControl* getGlobeControl() const;

	/// <summary>
	/// 获取渲染窗口，即实际用于渲染的QWidget，可以在需要的时候用于设置一些参数，例如上下文菜单等。
	/// *** 如果打开场景失败，该函数可能返回无效的对象，而在signalGlobeOpened中获取的渲染窗口对象都是有效的。
	/// </summary>
	/// <returns>画布对象。</returns>
	QWidget* renderWidget() const;

	/// <summary>
	/// 将GlobeWidget窗体嵌入到目标句柄的窗口中，如果传入的handle为0，则会创建一个新的窗体
	/// </summary>
	/// <param name="handle">GlobeWidget要嵌入到的目标窗口句柄</param>
	/// <returns></returns>
	void onCreate(WId handle);

signals:

	/// <summary>
	/// 场景成功打开的信号。此信号触发后，可以成功获取CGlobeControl对象。
	/// 例：
	///		void slotGlobeOpened(GlobeWidget* globe)
	///		{
	///			// 获取场景名称。
	///			QString name = globe->getName();		
	///			// 获取CGlobeControl对象。
	///			CGlobeControl* ctrl = globe->getGlobeControl();
	///		}
	/// </summary>
	/// <returns></returns>
	void signalGlobeOpened(GlobeWidget*);

	/// <summary>
	/// 场景鼠标移动事件，参数分别是鼠标坐标的xy值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <returns></returns>
	void signalMouseMove(qint32 x, qint32 y);

	/// <summary>
	/// 场景鼠标按下事件，参数分别是鼠标坐标的xy值，鼠标按下按钮的键值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标键值</param>
	/// <returns></returns>
	void signalMouseDown(qint32 x , qint32 y , qint32 key);

	/// <summary>
	/// 场景鼠标弹起事件，参数分别是鼠标坐标的xy值，鼠标弹起按钮的键值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标键值</param>
	/// <returns></returns>
	void signalMouseUp(qint32 x , qint32 y , qint32 key);

	/// <summary>
	/// 场景鼠标双击事件，参数分别是鼠标坐标的xy值，鼠标双击按钮的键值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标键值</param>
	/// <returns></returns>
	void signalMouseDblClick(qint32 x, qint32 y, qint32 key);

	/// <summary>
	/// 场景鼠标滚轮事件，参数分别是滚动时鼠标坐标的xy值，鼠标滚动值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标滚动值</param>
	/// <returns></returns>
	void signalMouseWheel(qint32 x, qint32 y, qreal v);

	/// <summary>
	/// 场景键盘按下事件，参数是键盘按下的键值。
	/// </summary>
	/// <param name="key">键盘键值</param>
	/// <returns></returns>
	void signalKeyDown(qint32 key);

	/// <summary>
	/// 场景键盘弹起事件，参数是键盘弹起的键值。
	/// </summary>
	/// <param name="key">键盘键值</param>
	/// <returns></returns>
	void signalKeyUp(qint32 key);

	/// <summary>
	/// 场景宽度高度改变事件，参数是场景的宽度与高度。
	/// </summary>
	/// <param name="width">场景宽度</param>
	/// <param name="height">场景高度</param>
	/// <returns></returns>
	void signalResize(qint32 width, qint32 height);

	/// <summary>
	/// 场景鼠标移动事件，参数分别是鼠标坐标的xy值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalMouseMove(qint32 x, qint32 y, bool& handled);

	/// <summary>
	/// 场景鼠标弹起事件，参数分别是鼠标坐标的xy值，鼠标弹起按钮的键值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标键值</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalMouseDown(qint32 x, qint32 y, qint32 key, bool& handled);

	/// <summary>
	/// 场景鼠标弹起事件，参数分别是鼠标坐标的xy值，鼠标弹起按钮的键值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标键值</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalMouseUp(qint32 x, qint32 y, qint32 key, bool& handled);

	/// <summary>
	/// 场景鼠标双击事件，参数分别是鼠标坐标的xy值，鼠标双击按钮的键值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标键值</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalMouseDblClick(qint32 x, qint32 y, qint32 key, bool& handled);

	/// <summary>
	/// 场景鼠标滚轮事件，参数分别是滚动时鼠标坐标的xy值，鼠标滚动值。
	/// </summary>
	/// <param name="x">鼠标x轴坐标</param>
	/// <param name="y">鼠标y轴坐标</param>
	/// <param name="key">鼠标滚动值</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalMouseWheel(qint32 x, qint32 y, qreal v, bool& handled);

	/// <summary>
	/// 场景键盘按下事件，参数是键盘按下的键值。
	/// </summary>
	/// <param name="key">键盘键值</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalKeyDown(qint32 key, bool& handled);

	/// <summary>
	/// 场景键盘弹起事件，参数是键盘弹起的键值。
	/// </summary>
	/// <param name="key">键盘键值</param>
	/// <param name="handled">设为true,表示事件处理完毕，不再交给GlobeControl处理。设为false，表示事件处理后交给GlobeControl处理。</param>
	/// <returns></returns>
	void signalKeyUp(qint32 key, bool& handled);

	void signalFrameStarted(const EarthView::World::Graphic::FrameEvent&);

	void signalFrameRenderingQueued(const EarthView::World::Graphic::FrameEvent&);

	void signalFrameEnded(const EarthView::World::Graphic::FrameEvent&);

	/// <summary>
	/// 选择集变化通知函数
	/// </summary>
	/// <param name="globeSelection">变化之后的选择集</param>						
	/// <returns></returns>
	void signalSelectionChanged(EarthView::World::Spatial3D::CGlobeSelection*);

	/// <summary>
	/// 射线查询通知函数
	/// </summary>
	/// <param name="">射线查询结果</param>						
	/// <returns></returns>
	void signalRaySceneQueryResult(EarthView::World::Graphic::RaySceneQueryResult&);

	/// <summary>
	/// 三维分析开始通知函数
	/// </summary>
	/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
	/// <returns></returns>
	void signalAnalysisStart(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);

	/// <summary>
	/// 三维分析技术后结果通知函数
	/// </summary>
	/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
	/// <returns></returns>
	void signalAnalysisEnd(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);

	/// <summary>
	/// 取得鼠标在球上实时位置
	/// </summary>
	/// <param name="lat">纬度</param>
	/// <param name="lon">经度</param>
	/// <param name="alt">地形高度</param>
	/// <param name="isValid">经纬度值是否有效，与球相交时为true</param>
	/// <returns></returns>
	void signalMousePosition(qreal, qreal, qreal,bool);

	/// <summary>
	/// 视图发生变化，获得新的相机信息
	/// </summary>
	/// <param name="camera">相机</param>
	/// <returns></returns>
	void signalViewChanged(EarthView::World::Spatial3D::CGlobeCamera *);

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

	/// *** 以下是Qt控件相关的函数，直接使用可能会造成问题。***

	void setName(const QString& name);

	QScopedPointer<GlobeWidgetHelper> helper;

protected:
	void close();
	virtual void resizeEvent(QResizeEvent* ev);
	virtual void paintEvent(QPaintEvent* ev);
	virtual QSize sizeHint () const;
#ifndef _WIN32
	// virtual bool event ( QEvent * event );
#endif
	Q_PROPERTY(QString globeName READ getName WRITE setName)
};

#endif // _GLOBEWIDGET_INCLUDE__
