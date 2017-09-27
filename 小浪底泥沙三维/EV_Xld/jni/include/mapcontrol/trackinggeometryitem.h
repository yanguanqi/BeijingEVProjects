#ifndef _TRACKING_GEOMETRY_ITEM_H_
#define _TRACKING_GEOMETRY_ITEM_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/trackingitem.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISymbol;
			}
			namespace Geometry{
				class IGeometry;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CTrackingGeometryItemPrivate;

/// <summary>
/// 几何项
/// </summary>
class EV_MAPCONTROL_DLL CTrackingGeometryItem : public CTrackingItem
{
ev_private:
	/// <summary>
    /// 封装构造函数
    /// </summary>
	CTrackingGeometryItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	CTrackingGeometryItem();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="unitType">单位类型</param>
	/// <returns></returns>
	CTrackingGeometryItem( EVTrackingItemUnit unitType );
	/// <summary>
    /// 默认析构函数
    /// </summary>
	~CTrackingGeometryItem();
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
	virtual void paint( EarthView::World::Spatial::Display::ISpatialDisplay* display, 
		const EVTrackingItemState& state, 
		const EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 判断包含操作
	/// </summary>
	/// <param name="pnt">空间点</param>
	/// <returns>true，包含点pnt，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const;
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_GeometryItem; }
	/// <summary>
	/// 设置几何体对象,内部保存了一个副本
	/// </summary>
	/// <param name="geo">几何体指针</param>
	/// <returns></returns>
	ev_void setGeometry( _in const EarthView::World::Spatial::Geometry::IGeometry* geo );
	/// <summary>
	/// 获取几何体对象
	/// </summary>
	/// <param name=""></param>
	/// <returns>几何体对象指针</returns>
	const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const;
	/// <summary>
	/// 设置图式,内部保存了一个副本
	/// </summary>
	/// <param name="symbol">图式指针对象</param>
	/// <returns></returns>
	ev_void setSymbol( _in const EarthView::World::Spatial::Display::ISymbol* symbol );
	/// <summary>
	/// 获取图式
	/// </summary>
	/// <param name=""></param>
	/// <returns>图式指针</returns>
	const EarthView::World::Spatial::Display::ISymbol* getSymbol() const;

protected:
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in ev_real64 ratio );

	CTrackingGeometryItem( CTrackingGeometryItemPrivate* dp );
	CTrackingGeometryItemPrivate* d;
};
			}
		}
	}
}

#endif