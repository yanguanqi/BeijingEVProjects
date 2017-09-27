#ifndef _TRACKING_SHAPE_ITEM_H_
#define _TRACKING_SHAPE_ITEM_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/trackingitem.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISymbol;
				class IColor;
			}
			namespace Geometry{
				class CLineString;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CTrackingShapeItemPrivate;
/// <summary>
/// 简单图形跟踪项
/// </summary>
class EV_MAPCONTROL_DLL CTrackingShapeItem : public CTrackingItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingShapeItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingShapeItem();
	/// <summary>
	/// 设置画笔颜色
	/// </summary>
	/// <param name="clr">颜色</param>
	/// <returns></returns>
	ev_void setPenColor( _in const EarthView::World::Spatial::Display::IColor* clr );
	/// <summary>
	/// 获取画笔颜色
	/// </summary>
	/// <param name=""></param>
	/// <returns>颜色</returns>
	const EarthView::World::Spatial::Display::IColor* getPenColor() const;
	/// <summary>
	/// 设置画笔宽度
	/// </summary>
	/// <param name="width">画笔宽度</param>
	/// <returns></returns>
	ev_void setPenWidth( _in ev_real64 width );
	/// <summary>
	/// 获取画笔宽度
	/// </summary>
	/// <param name=""></param>
	/// <returns>画笔宽度</returns>
	ev_real64 getPenWidth() const;

protected:
	CTrackingShapeItem();
	CTrackingShapeItem( EVTrackingItemUnit unitType );
	CTrackingShapeItem( CTrackingShapeItemPrivate* d );

	CTrackingShapeItemPrivate* d_ptr;
};

class CTrackingPolylineItemPrivate;
/// <summary>
/// 简单折线
/// </summary>
class EV_MAPCONTROL_DLL CTrackingPolylineItem : public CTrackingShapeItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingPolylineItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CTrackingPolylineItem();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="unitType">单位</param>
	/// <returns></returns>
	CTrackingPolylineItem( EVTrackingItemUnit unitType );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingPolylineItem();
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
	/// <param name="x">x坐标</param>
	/// <param name="y">y坐标</param>
	/// <returns>true，包含，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const;
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_PolylineShape; }
	/// <summary>
	/// 设置折线
	/// </summary>
	/// <param name="lstr">线对象</param>
	/// <returns></returns>
	ev_void setPolyline( _in const EarthView::World::Spatial::Geometry::CLineString* lstr );
	/// <summary>
	/// 获取折线对象
	/// </summary>
	/// <param name=""></param>
	/// <returns>折线</returns>
	const EarthView::World::Spatial::Geometry::CLineString* getPolyline() const;

protected:
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in ev_real64 ratio );
	CTrackingPolylineItemPrivate* d_ptr;
};
class CTrackingFillShapeItemPrivate;
/// <summary>
/// 简单填充项
/// </summary>
class EV_MAPCONTROL_DLL CTrackingFillShapeItem : public CTrackingShapeItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingFillShapeItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingFillShapeItem();
	/// <summary>
	/// 设置填充颜色
	/// </summary>
	/// <param name="clr">颜色</param>
	/// <returns></returns>
	ev_void setFillColor( _in const EarthView::World::Spatial::Display::IColor* clr );
	/// <summary>
	/// 获取填充颜色
	/// </summary>
	/// <param name=""></param>
	/// <returns>颜色</returns>
	const EarthView::World::Spatial::Display::IColor* getFillColor() const;
	/// <summary>
	/// 设置是否填充
	/// </summary>
	/// <param name="bFill">是否填充</param>
	/// <returns></returns>
	ev_void setFill( _in ev_bool bFill );
	/// <summary>
	/// 获取是否进行了填充
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果为真,那进行了填充,反之则否</returns>
	ev_bool isFill() const;

protected:
	CTrackingFillShapeItem();
	CTrackingFillShapeItem( EVTrackingItemUnit unitType );
	CTrackingFillShapeItem( CTrackingFillShapeItemPrivate* d );

	CTrackingFillShapeItemPrivate* d_ptr;
};
/// <summary>
/// 简单矩形项
/// </summary>
class EV_MAPCONTROL_DLL CTrackingRectItem : public CTrackingFillShapeItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingRectItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CTrackingRectItem();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="unitType">单位类型</param>
	/// <returns></returns>
	CTrackingRectItem( EVTrackingItemUnit unitType );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingRectItem();
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
	/// <param name="x">x坐标</param>
	/// <param name="y">y坐标</param>
	/// <returns>true，包含，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const;
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_RectangleShape; }
	/// <summary>
	/// 设置显示矩形
	/// </summary>
	/// <param name="rect">矩形</param>
	/// <returns></returns>
	ev_void setRect( _in const EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 获取显示矩形
	/// </summary>
	/// <param name=""></param>
	/// <returns>矩形</returns>
	EarthView::World::Spatial::Display::CSpatialRect getRect() const;

protected:
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in ev_real64 ratio );
	EarthView::World::Spatial::Display::CSpatialRect mRect;
};
/// <summary>
/// 简单椭圆类型(包含圆)
/// </summary>
class EV_MAPCONTROL_DLL CTrackingEllipseItem : public CTrackingRectItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingEllipseItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CTrackingEllipseItem();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="unitType">单位类型</param>
	/// <returns></returns>
	CTrackingEllipseItem( EVTrackingItemUnit unitType );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingEllipseItem();
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
	/// <param name="x">x坐标</param>
	/// <param name="y">y坐标</param>
	/// <returns>true，包含，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const;
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_EllipseShape; }
};			}
		}
	}
}
#endif