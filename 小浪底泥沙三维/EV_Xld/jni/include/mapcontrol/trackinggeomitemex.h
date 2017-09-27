#ifndef _TRACKING_GEOM_ITEM_EX_H_
#define _TRACKING_GEOM_ITEM_EX_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/trackinggeometryitem.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CTrackingGeomItemExPrivate;
/// <summary>
/// 可绘制顶点的几何要素项
/// </summary>
class EV_MAPCONTROL_DLL CTrackingGeomItemEx : public CTrackingGeometryItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingGeomItemEx(EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	CTrackingGeomItemEx();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="unitType">单位类型</param>
	/// <returns></returns>
	CTrackingGeomItemEx( EVTrackingItemUnit unitType );
	/// <summary>
	/// 析构函数
	/// </summary>
	~CTrackingGeomItemEx();

	/// <summary>
	/// 绘制操作
	/// </summary>
	/// <param name="display">显示设备对象</param>
	/// <param name="state">跟踪目标状态</param>
	/// <param name="rect">绘制范围</param>
	/// <returns></returns>
	virtual void paint(EarthView::World::Spatial::Display::ISpatialDisplay* display,
		const EVTrackingItemState& state, 
		const EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_GeomItemEx; }
	/// <summary>
	/// 设置顶点风格
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setVertexSymbol( _in const EarthView::World::Spatial::Display::ISymbol* symbol );
	/// <summary>
	/// 获取顶点风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	const EarthView::World::Spatial::Display::ISymbol* getVertexSymbol() const;
protected:
	CTrackingGeomItemExPrivate* d;
};
			}
		}
	}
}
#endif
