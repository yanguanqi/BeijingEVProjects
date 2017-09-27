#ifndef _TRACKING_GEOMS_ITEM_H_
#define _TRACKING_GEOMS_ITEM_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/trackingitem.h"
namespace EarthView{namespace World{namespace Spatial{namespace Display{
				class ISymbol;
			}
			namespace Geometry{
				class IGeometry;
}}}}


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CTrackingGeomsItemPrivate;
/// <summary>
/// 多几何项
/// </summary>
class EV_MAPCONTROL_DLL CTrackingGeomsItem : public CTrackingItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingGeomsItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CTrackingGeomsItem();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="unitType">单位类型</param>
	/// <returns></returns>
	CTrackingGeomsItem( EVTrackingItemUnit unitType );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingGeomsItem();
	/// <summary>
	/// 获取包围盒
	/// </summary>
	/// <param name=""></param>
	/// <returns>包围盒对象</returns>
	virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const;
	/// <summary>
	/// 绘制操作
	/// </summary>
	/// <param name="display">显示设备对象</param>
	/// <param name="state">跟踪目标状态</param>
	/// <param name="rect">绘制范围</param>
	/// <returns></returns>
	virtual void paint(  EarthView::World::Spatial::Display::ISpatialDisplay* display, 
		const EVTrackingItemState& state, 
		const  EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_GeomsItem; }
	/// <summary>
	/// 判断包含操作
	/// </summary>
	/// <param name="x">x坐标</param>
	/// <param name="y">y坐标</param>
	/// <returns>true，包含，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const;
	/// <summary>
	/// 设置显示风格,内部保存了一个副本
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setSymbol( _in const  EarthView::World::Spatial::Display::ISymbol* symbol );
	/// <summary>
	/// 获取风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	const  EarthView::World::Spatial::Display::ISymbol* getSymbol() const;
	/// <summary>
	/// 添加要绘制的几何,内部保存了一个副本
	/// </summary>
	/// <param name="geo">几何</param>
	/// <returns></returns>
	ev_void addGeometry( _in const  EarthView::World::Spatial::Geometry::IGeometry* geo );
	/// <summary>
	/// 清空
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();
protected:
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in ev_real64 ratio );

	CTrackingGeomsItemPrivate* d;
};
			}
		}
	}
}
#endif