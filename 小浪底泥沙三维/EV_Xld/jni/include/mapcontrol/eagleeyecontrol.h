#ifndef EAGLEEYECONTROL_H
#define EAGLEEYECONTROL_H

#include "mapcontrol/mapcontrol.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/imap.h"
#include "spatialgui/ispatialcontrol.h"
#include "display/cachebitmap.h"
#include "core/event.h"
#include "core/object.h"
#include "spatialinterface/icolor.h"
#include "mapcontrol/mapcontrolconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{

class CEagleEyeEventHandler;
class CEagleEyeDrawTimer;
class CResizeTimer;
class CEagleEyeDrawThread;

class  EV_MAPCONTROL_DLL CEagleEyeControlAgent : public EarthView::World::Core::CBaseObject
{
public:
	CEagleEyeControlAgent() {}

	/// <summary>
	/// 获取鹰眼画布
	/// </summary>
	/// <param name=""></param>
	/// <returns>鹰眼画布</returns>
	virtual EarthView::World::Display::IPaintDevice* getEagleEyeCanvas() const {
		EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
	}

	/// <summary>
	/// 重绘
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void	onRepaint(){
		EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
	}
ev_private:
	CEagleEyeControlAgent( EarthView::World::Core::CNameValuePairList *pList ) {}
};
/// <summary>
/// 地图控件的事件监听
/// </summary>
class EV_MAPCONTROL_DLL IEagleEyeControlListener : public  EarthView::World::Spatial::Atlas::IMapListener
{
	/// <summary>
	/// 自动化封闭构造函数
	/// </summary>
ev_private:
	IEagleEyeControlListener( EarthView::World::Core::CNameValuePairList *pList ) {}
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	IEagleEyeControlListener(){}
	/// <summary>
	/// 鼠标按下事件触发											
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onMouseDown( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// 鼠标弹起事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onMouseUp( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// 鼠标移动事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onMouseMove( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// 鼠标双击事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onDoubleClick( _in ev_int32 button,_in ev_int32 shift,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY ){return false;}
	/// <summary>
	/// 鼠标滚轮事件触发
	/// </summary>
	/// <param name="delta">滚轮转过的角度</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="geoX">地理位置x</param>
	/// <param name="geoY">地理位置y</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onMouseWheel( _in ev_int32 delta,_in ev_int32 x,_in ev_int32 y,_in ev_real64 geoX,_in ev_real64 geoY,_in ev_int32 flag ){return false;}
	/// <summary>
	/// 键盘按下事件触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onKeyDown( _in ev_int32 keyCode,_in ev_int32 shift ){return false;}
	/// <summary>
	/// 键盘弹起事件触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns>true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理</returns>
	virtual ev_bool onKeyUp( _in ev_int32 keyCode,_in ev_int32 shift ){return false;}
	/// <summary>
	/// 窗口大小发生变化
	/// </summary>
	/// <param name="width">窗口宽度</param>
	/// <param name="height">窗口高度</param>
	/// <returns></returns>
	virtual ev_bool onResize( _in ev_int32 width,_in ev_int32 height ){ return false;}
	/// <summary>
	/// 地图刷新之前的事件
	/// </summary>
	/// <param name="display">显示参数</param>
	/// <param name="viewportEnvelope">新的视口范围</param>
	/// <returns></returns>
	virtual ev_void onBeforeRefresh( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope ){}
	/// <summary>
	/// 地图刷新之后的事件
	/// </summary>
	/// <param name="display">显示参数</param>
	/// <param name="viewportEnvelope">新的视口范围</param>
	/// <returns></returns>
	virtual ev_void onAfterRefresh( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in const EarthView::World::Spatial::Geometry::IEnvelope* viewportEnvelope ){}
};
class CEagleEyeControlPrivateData;
class  EV_MAPCONTROL_DLL CEagleEyeControl : public EarthView::World::Core::CAllocatedObject
{
	friend class CEagleEyeControlPrivateData;
	friend class CEagleEyeDrawTimer;
	friend class CEagleEyeDrawThread;
	friend class CResizeTimer;
	friend class CEagleEyeEventHandler;
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CEagleEyeControl();

	/// <summary>
	/// 虚构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CEagleEyeControl();

	/// <summary>
	/// 获取鹰眼画布
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Display::IPaintDevice* getEagleEyeCanvas() const;

	/// <summary>
	/// 添加关联的地图控件
	/// </summary>
	/// <param name="pControl">地图控件对象</param>
	/// <returns></returns>
	void addMapControl(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// 移除关联的地图控件
	/// </summary>
	/// <param name="pControl">地图控件对象</param>
	/// <returns></returns>
	void removeMapControl(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// 获取关联的地图控件
	/// </summary>
	/// <param name="nIndex">地图控件对应的索引</param>
	/// <returns>nIndex索引对应的地图控件</returns>
	EarthView::World::Spatial2D::Controls::CMapControl* getMapControl(ev_int32 nIndex);

	/// <summary>
	/// 判断某个地图控件是否已经存在
	/// </summary>
	/// <param name="pControl">进行判断的控件</param>
	/// <returns>若存在返回true,否则返回false</returns>
	ev_bool isExist(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// 设置激活的地图控件
	/// </summary>
	/// <param name="pControl">正在激活的地图控件</param>
	/// <returns></returns>
	ev_bool setActiveControl(EarthView::World::Spatial2D::Controls::CMapControl* pControl);

	/// <summary>
	/// 设置所有地图控件为不激活状态（在场景激活的情况下）
	/// </summary>
	/// <param name="pControl"></param>
	/// <returns></returns>
	ev_void setAllControlUnActive();

	/// <summary>
	/// 获取关联的地图控件个数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMapControlCount();

	/// <summary>
	/// 添加关联的地图
	/// </summary>
	/// <param name="pControl">地图对象</param>
	/// <returns></returns>
	void addMap(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// 移除关联的地图
	/// </summary>
	/// <param name="pControl">地图对象</param>
	/// <returns></returns>
	void removeMap(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// 添加关联的地图
	/// </summary>
	/// <param name="pControl">地图对象</param>
	/// <returns></returns>
	void setMapCacheDirty();

	/// <summary>
	/// 获取关联的地图个数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMapCount();

	/// <summary>
	/// 获取关联的地图
	/// </summary>
	/// <param name="nIndex">地图对应的索引</param>
	/// <returns>nIndex索引对应的地图</returns>
	EarthView::World::Spatial::Atlas::IMap* getMap(ev_int32 nIndex);
	/// <summary>
	/// 判断某个地图是否已经存在
	/// </summary>
	/// <param name="pControl">进行判断的控件</param>
	/// <returns>若存在返回true,否则返回false</returns>
	ev_bool isExist(EarthView::World::Spatial::Atlas::IMap* pMap);

	/// <summary>
	/// 添加自定义渲染图形
	/// </summary>
	/// <param name="pGeometry">几何对象</param>
	/// <param name="pSymbol">风格</param>
	/// <returns></returns>
	void addGeometry(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry,const EarthView::World::Spatial::Display::ISymbol* pSymbol);
	/// <summary>
	/// 清除自定义渲染图形
	/// </summary>
	/// <returns></returns>
	void clearGeometry();

	/// <summary>
	/// 重绘
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void	onRepaint();

	/// <summary>
	/// 刷新
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void refresh();

	/// <summary>
	/// 设置非当前激活地图对应的矩形框风格
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setUnActiveRectSymbol( _in EarthView::World::Spatial::Display::ISymbol* pSymbol);

	/// <summary>
	/// 获取非当前激活地图对应的矩形框风格
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Display::ISymbol* getUnActiveRectSymbol() const;

	/// <summary>
	/// 设置当前激活地图对应的矩形框风格
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setActiveRectSymbol( _in EarthView::World::Spatial::Display::ISymbol* pSymbol);

	/// <summary>
	/// 获取当前激活地图对应的矩形框风格
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Display::ISymbol* getActiveRectSymbol() const;

	/// <summary>
	/// 清空矩形
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();

	/// <summary>
	/// 判断是否正在绘图
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果正在绘图返回true,否则返回false</returns>
	ev_bool isDrawing();

	/// <summary>
	/// 重新设置大小
	/// </summary>
	/// <param name="nWidth">长度</param>
	/// <param name="nWidth">高度</param>
	/// <returns></returns>
	ev_void onResize(ev_int32 nWidth, ev_int32 nHeight);
	/// <summary>
	/// 鼠标双击事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_void onDoubleClick( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// 键盘按下事件触发
	/// </summary>
	/// <param name="key">按下的键</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <returns></returns>
	ev_void onKeyDown( _in ev_int32 keyCode, _in ev_int32 shift );

	/// <summary>
	/// 键盘弹起事件触发
	/// </summary>
	/// <param name="key">弹起的键</param>
	/// <param name="shift">shift键是否同时被释放</param>                    
	/// <returns></returns>
	ev_void onKeyUp( _in ev_int32 keyCode, _in ev_int32 shift );

	/// <summary>
	/// 鼠标按下事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_void onMouseDown( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// 鼠标移动事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_void onMouseMove( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// 鼠标弹起事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被释放</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_void onMouseUp( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );

	/// <summary>
	/// 鼠标滚轮滚动事件触发
	/// </summary>
	/// <param name="delta">滚动的幅度</param>        
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="flag">标识位</param>  
	/// <returns></returns>
	ev_void onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );
	ev_void addEagleEyeControlListener( _in IEagleEyeControlListener* ref_listener );
	ev_void removeEagleEyeControlListener( _in IEagleEyeControlListener* ref_listener );
	/// <summary>
	/// 获取空间显示参数
	/// </summary>
	/// <param name=""></param>
	/// <returns>空间显示指针(内部指针)</returns>
	EarthView::World::Spatial::Display::ISpatialDisplay * getDisplay() const;
	/// <summary>
	/// 设置控件代理
	/// </summary>
	/// <param name="pxy">控件代理</param>
	/// <returns></returns>
	ev_void setProxy(CEagleEyeControlAgent* ref_pxy);
private:
	ev_bool drawPrepare();
	ev_void draw();
	ev_void drawOver();
	ev_void freezeDraw();
	ev_void drawRectangle();
	ev_void drawGeometry();
	ev_void makeMapping();
	ev_void drawMap(EarthView::World::Spatial::Atlas::IMap *pMap);
	ev_void init();
	/// 通知鹰眼地图已经改变
	ev_void notifyMapChanged();
private:
	CEagleEyeControlPrivateData * mpData;
ev_private:
	CEagleEyeControl( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY(CEagleEyeControl)
};
}}}}

#endif