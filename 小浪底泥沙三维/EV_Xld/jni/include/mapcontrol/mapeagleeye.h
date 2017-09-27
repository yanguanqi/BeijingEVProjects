#ifndef _MAP_EAGLE_EYE_H_
#define _MAP_EAGLE_EYE_H_
#include "mapcontrol/mapcontrolconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CLineSymbol;
			}
			namespace Atlas{
				class ILayer;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CMapControl;
class CMapControlAgent;
class CMapEagleEyePrivate;
/// <summary>
/// 鹰眼对象
/// </summary>
class EV_MAPCONTROL_DLL CMapEagleEye : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CMapEagleEye( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pxy">地图控件代理</param>
	/// <returns></returns>
	CMapEagleEye( _in CMapControlAgent* ref_pxy );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CMapEagleEye();
	/// <summary>
	/// 设置显示范围框风格
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setRectSymbol( _in const EarthView::World::Spatial::Display::CLineSymbol* symbol );
	/// <summary>
	/// 获取显示范围框风格
	/// </summary>
	/// <param name="pxy">地图控件代理</param>
	/// <returns></returns>
	const EarthView::World::Spatial::Display::CLineSymbol* getRectSymbol() const;
	/// <summary>
	/// 设置不参与绘制的图层索引列表
	/// </summary>
	/// <param name="index">图层索引数据</param>
	/// <param name="count">索引数量</param>
	/// <returns></returns>
	ev_void setIdleLayers( _in ev_int32* index, _in ev_int32 count );
	/// <summary>
	/// 鼠标按下事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_bool onMouseDown( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );
	/// <summary>
	/// 鼠标移动事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被按下</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_bool onMouseMove( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );
	/// <summary>
	/// 鼠标弹起事件触发
	/// </summary>
	/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
	/// <param name="shift">shift键是否同时被释放</param>
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <returns></returns>
	ev_bool onMouseUp( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y );
	/// <summary>
	/// 鼠标滚轮滚动事件触发
	/// </summary>
	/// <param name="delta">滚动的幅度</param>        
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="flag">标识位</param>  
	/// <returns></returns>
	ev_bool onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );
	/// <summary>
	/// 窗体大小发生变化
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool onResize( _in ev_int32 width, _in ev_int32 height );
protected:
	ev_void onConnected( _in CMapControl* ref_ctrl );
	ev_void onDisconnect();
	ev_void onMapChanged();
	ev_void onSpatialReferenceChanged();
	CMapEagleEye(){}
	CMapEagleEyePrivate* d_ptr;
	friend class CMapControl;
	friend class CMapControlPri;
};

}}}}
#endif