#ifndef _TRACKING_ITEM_H_
#define _TRACKING_ITEM_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "spatialdisplay/spatialrect.h"
#include "spatialdisplay/spatialmatrix.h"

namespace EarthView
{
	namespace World
	{ 
		namespace Display
		{
			class IBitmap;
			class ICachedBitmap;
		}
		namespace Spatial
		{
			namespace Display
			{
				class ISpatialDisplay;
			}
			namespace Geometry
			{
				class CPoint;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
enum EVTrackingItemUnit
{
	TIU_MapUnit		= 1,
	TIU_PixelUnit			= 2
};
/// <summary>
/// 跟踪对象类型枚举
/// </summary>
enum EVTrackingItemType
{
	TIT_Unknown				= 0, ///未知类型
	TIT_GroupItem			= 1, ///组类型
	TIT_ImageItem			= 2, ///图像类型
	TIT_TextItem			= 3, ///文本类型 
	TIT_GeometryItem		= 4, ///几何类型
	TIT_GeomItemEx			= 5, ///几何类型的扩展(可以绘制顶点)
	TIT_GeomsItem			= 6, ///多个几何
	TIT_PolylineShape		= 7, ///折线
	TIT_PolygonShape		= 8, ///多边形
	TIT_RectangleShape		= 9, ///矩形
	TIT_EllipseShape		= 10 ///椭圆(圆)
};
enum EVTrackingItemState
{
	TIS_None				= 0,////空状态
	TIS_MouseOver			= 1,////鼠标在追踪项的上面
	TIS_Selected			= 2	////追踪项被选中
};
/// <summary>
/// 跟踪项标识
/// </summary>
enum EVTrackingItemFlags
{
	TIF_NoFlag				= 0x0,	///无标识
	TIF_Selectable			= 0x1,  ///选择标识
	TIF_Hoverable			= 0x2,  ///盘旋标识
	TIF_Draggable			= 0x4   ///拖拽标识
};
enum EVTrackingItemPosition
{
	TIP_LeftTop				= 0,//左上
	TIP_RightTop			= 1,//右上
	TIP_RightBottom			= 2,//右下
	TIP_LeftBottom			= 3,//左下
	TIP_Center				= 4//中心
};
/// <summary>
/// 缓存模式
/// </summary>
enum EVCacheMode
{
	CM_NoCache				= 0,	////不做缓存
	CM_ImageCache			= 1,	////图片缓存
	CM_QuickImageCache		= 2		///快速图像缓存
};
/// <summary>
/// 转换方向标识
/// </summary>
enum EVTrackingItemChange
{
	TIC_VisibleChange			= 1,///可视性
	TIC_SelectedChange			= 3,///选中
	TIC_PositionChange			= 5,///位置
	TIC_TransparentChange		= 7,///透明度
	TIC_RotationChange			= 9,///旋转角度
	TIC_ScaleChange				= 11///缩放比例
};
/// <summary>
/// 转换方向标识
/// </summary>
enum EVTransformDirection
{
	TD_ItemToWindow			= 0, ///跟踪项到窗口
	TD_ItemToMap			= 1, ///跟踪项到地图
	TD_ItemToItemDevice		= 2, ///跟踪项到设备
	TD_WindowToItem			= 3, ///窗口到跟踪项
	TD_WindowToMap			= 4, ///窗口到地图
	TD_WindowToItemDevice	= 5, ///窗口到设备
	TD_MapToItem			= 6, ///地图到跟踪项 
	TD_MapToWindow			= 7, ///地图到窗口
	TD_MapToItemDevice		= 8, ///地图到设备
	TD_ItemDeviceToItem		= 9, ///设备到跟踪项
	TD_ItemDeviceToWindow	= 10,///设备到窗口
	TD_ItemDeviceToMap		= 11 ///设备到地图
};

class CTrackingItemPrivate;
/// <summary>
/// 跟踪项类
/// </summary>
class EV_MAPCONTROL_DLL CTrackingItem : public EarthView::World::Core::CAllocatedObject
{
	friend class CTrackingLayerPrivate;
	friend class CTrackingItemPrivate;	
public:
	/// <summary>
    ///默认析构函数
    /// </summary>
	virtual ~CTrackingItem();
	
public:
	/// <summary>
	/// 获取包围盒,派生类必须重新实现
	/// </summary>
	/// <param name=""></param>
	/// <returns>追踪项的范围</returns>
	virtual  EarthView::World::Spatial::Display::CSpatialRect boundingRect() const { return EarthView::World::Spatial::Display::CSpatialRect(); }
	/// <summary>
	/// 绘制追踪项,派生类必须重新实现
	/// </summary>
	/// <param name="display">显示设备对象</param>
	/// <param name="state">跟踪目标状态</param>
	/// <param name="rect">绘制范围</param>
	/// <returns></returns>
	virtual void paint( EarthView::World::Spatial::Display::ISpatialDisplay* display, 
		const EVTrackingItemState& state, const EarthView::World::Spatial::Display::CSpatialRect& rect ){}
	/// <summary>
	/// 判断追踪项是否包含指定坐标
	/// </summary>
	/// <param name="pnt">空间点</param>
	/// <returns>true，包含点pnt，false不包含</returns>
	ev_bool isContains( const EarthView::World::Spatial::Geometry::CPoint* pnt ) const;
	/// <summary>
	/// 判断追踪项是否包含指定坐标
	/// </summary>
	/// <param name="x">X坐标</param>
	/// <param name="y">Y坐标</param>
	/// <returns>true，包含点，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const { return false; }

	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return TIT_Unknown; }
	/// <summary>
	/// 获取追踪项属性标志
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EVTrackingItemFlags flags() const;
	/// <summary>
	/// 设置追踪项属性标志
	/// </summary>
	/// <param name="flags">标志</param>
	/// <returns>对象类型</returns>
	ev_void setFlags( EVTrackingItemFlags flags );
	/// <summary>
	/// 返回地图漫游、缩放或者刷新时是否同时刷新此项到屏幕
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回true表示已设置为实时刷新</returns>
	ev_bool isInterest() const;
	/// <summary>
	/// 设置地图漫游、缩放或者刷新时是否同时刷新此项到屏幕
	/// </summary>
	/// <param name="b">true为设置实时刷新</param>
	/// <returns></returns>
	ev_void setInterest( ev_bool b);
	/// <summary>
	/// 获取跟踪项中数据类型(地理单位/像素单位)
	/// </summary>
	/// <param name=""></param>
	/// <returns>坐标单位类型</returns>
	EVTrackingItemUnit unitType() const;
	/// <summary>
	/// 获取追踪项的ID号
	/// </summary>
	/// <param name=""></param>
	/// <returns>追踪项的唯一ID类型</returns>
	ev_uint32 id() const;
	/// <summary>
	/// 获取缓存模式
	/// </summary>
	/// <param name=""></param>
	/// <returns>缓存模式</returns>
	EVCacheMode cacheMode() const;
	/// <summary>
	/// 设置缓存模式
	/// </summary>
	/// <param name="mode">缓存模式</param>
	/// <returns></returns>
	ev_void setCacheMode( EVCacheMode mode );
	/// <summary>
	/// 设置位置时,该位置所指定跟踪项的外包围框的方位
	/// </summary>
	/// <param name="type">位置类型</param>
	/// <returns></returns>
	ev_void setPositionType( EVTrackingItemPosition type );
	/// <summary>
	/// 获取位置所指定跟踪项的外包围框的方位
	/// </summary>
	/// <param name=""></param>
	/// <returns>位置类型</returns>
	EVTrackingItemPosition getPositionType() const;
	/// <summary>
	/// 获取鼠标盘旋于当前跟踪项上面时的光标状态
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 cursor() const;
	/// <summary>
	/// 设置鼠标盘旋于当前跟踪项上面时的光标状态
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setCursor( ev_int32 cursor );
	/// <summary>
	/// 是否可见
	/// </summary>
	/// <param name=""></param>
	/// <returns>true,可见，false不可见 </returns>
	ev_bool isVisible() const;
	/// <summary>
	/// 设置是否可见
	/// </summary>
	/// <param name="visible">可见标识</param>
	/// <returns> </returns>
	ev_void setVisible( ev_bool visible );
	/// <summary>
	/// 是否随比例尺变化来显示
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool isShowAsScale() const;
	/// <summary>
	/// 设置是否随比例尺来进行显示
	/// </summary>
	/// <param name="bAs">是否跟随比例尺进行显示</param>
	/// <returns></returns>
	ev_void setShowAsScale( _in ev_bool bAs );
	/// <summary>
	/// 获取最小显示比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>最小显示比例尺</returns>
	ev_real64 minScale() const;
	/// <summary>
	/// 设置最小显示比例尺
	/// </summary>
	/// <param name="minScale">最小显示比例尺</param>
	/// <returns></returns>
	ev_void setMinScale( _in ev_real64 minSclae );
	/// <summary>
	/// 获取最大显示比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>最大显示比例尺</returns>
	ev_real64 maxScale() const;
	/// <summary>
	/// 设置最大显示比例尺
	/// </summary>
	/// <param name="maxScale">最大显示比例尺</param>
	/// <returns>true,可见，false不可见 </returns>
	ev_void setMaxScale( _in ev_real64 maxScale );
	/// <summary>
	/// 是否被选中
	/// </summary>
	/// <param name=""></param>
	/// <returns>true,选中，false未选中 </returns>
	ev_bool isSelected() const;
	/// <summary>
	/// 设置是否被选中
	/// </summary>
	/// <param name="visible">选中标识</param>
	/// <returns> </returns>
	ev_void setSelected( ev_bool selected );
	/// <summary>
	/// 跟踪项在窗口的位置是否被锁定
	/// </summary>
	/// <param name=""></param>
	/// <returns> </returns>
	ev_bool isLocked() const;
	/// <summary>
	/// 设置跟踪项在窗口的位置是否被锁定
	/// </summary>
	/// <param name="lock">如果为true,则锁定，反之则否</param>
	/// <returns> </returns>
	ev_void setLocked( _in ev_bool lock );
	/// <summary>
	/// 获取当前跟踪项的位置
	/// </summary>
	/// <param name=""></param>
	/// <returns>当前位置坐标</returns>
	const EarthView::World::Spatial::Geometry::CPoint* pos() const;
	/// <summary>
	/// 设置当前跟踪项的位置
	/// </summary>
	/// <param name="x">X坐标</param>
	/// <param name="y">Y坐标</param>
	/// <returns></returns>
	ev_void setPos( _in ev_real64 x, _in ev_real64 y );
	/// <summary>
	/// 设置当前跟踪项的位置
	/// </summary>
	/// <param name="pos">位置点</param>
	/// <returns></returns>
	ev_void setPos( const EarthView::World::Spatial::Geometry::CPoint* pos );
	/// <summary>
	/// 获取透明度，0~1.0之间
	/// </summary>
	/// <param name=""></param>
	/// <returns>透明度值</returns>
	ev_real64 transparent() const;
	/// <summary>
	/// 设置透明度，0~1.0之间
	/// </summary>
	/// <param name="value">透明度值</param>
	/// <returns></returns>
	ev_void setTransparent( ev_real64 value );
	/// <summary>
	/// 获取旋转角度
	/// </summary>
	/// <param name=""></param>
	/// <returns>旋转角度</returns>
	ev_real64 rotation() const;
	/// <summary>
	/// 设置旋转角度
	/// </summary>
	/// <param name="rotation">旋转度</param>
	/// <returns></returns>
	ev_void setRotation( ev_real64 rotation );
	/// <summary>
	/// 获取缩放因子
	/// </summary>
	/// <param name=""></param>
	/// <returns>缩放因子</returns>
	ev_real64 scale() const;
	/// <summary>
	/// 设置缩放因子
	/// </summary>
	/// <param name="scale">缩放因子</param>
	/// <returns></returns>
	ev_void setScale( ev_real64 scale );
	/// <summary>
	/// 获取提示信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>提示信息</returns>
	EVString toolTip() const;
	/// <summary>
	/// 设置提示信息
	/// </summary>
	/// <param name="tip"></param>
	/// <returns>提示信息</returns>
	ev_void setToolTip( const EVString& tip );
	/// <summary>
	/// 获取父节点指针
	/// </summary>
	/// <param name=""></param>
	/// <returns>父节点指针</returns>
	CTrackingItem* parentItem() const;
	/// <summary>
	/// 设置父节点指针
	/// </summary>
	/// <param name="newParent">父节点指针</param>
	/// <returns></returns>
	ev_void setParentItem( CTrackingItem* ref_newParent );
	/// <summary>
	/// 获取跟踪项的Ｚ值，该值描述了项的叠加关系，Z值比较大的项会在Z值比较小的项上绘制
	/// </summary>
	/// <param name=""></param>
	/// <returns>z值</returns>
	ev_real64 zValue() const;
	/// <summary>
	/// 设置Z值
	/// </summary>
	/// <param name="zVar">Z值</param>
	/// <returns></returns>
	ev_void setZValue( ev_real64 zVar );
	/// <summary>
	/// 坐标变换
	/// </summary>
	/// <param name="x">x坐标数组</param>
	/// <param name="y">x坐标数组</param>
	/// <param name="count">坐标对个数</param>
	/// <param name="direct">转换方向</param>
	/// <returns></returns>
	ev_void transform( ev_real64* x, ev_real64* y, ev_int32 count, EVTransformDirection direct ) const;
	/// <summary>
	/// 坐标变换
	/// </summary>
	/// <param name="pnt">坐标数组</param>
	/// <param name="direct">转换方向</param>
	/// <returns></returns>
	ev_void transform( EarthView::World::Spatial::Geometry::CPoint* pnt, EVTransformDirection direct ) const;
	/// <summary>
	/// 范围转换
	/// </summary>
	/// <param name="rect">矩形范围</param>
	/// <param name="direct">转换方向</param>
	/// <returns></returns>
	ev_void transform( EarthView::World::Spatial::Display::CSpatialRect& rect, EVTransformDirection direct ) const;
protected:
	/// <summary>
	/// 更新外包围框,派生类可能要重新实现该方法
	/// </summary>
	/// <param name="display">显示参数</param>
	/// <param name="ratio">地图到设置的长度转换比率</param>
	/// <returns></returns>
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in ev_real64 ratio ){}
	/// <summary>
	/// 重新实现该方向可监听跟踪项变化事件
	/// </summary>
	/// <param name="change">变化类型</param>
	/// <returns></returns>
	virtual ev_void itemChange( _in EVTrackingItemChange change ){}
	virtual ev_bool onMouseDown( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y ){ return false; }
	virtual ev_bool onMouseMove( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y ){ return false; }
	virtual ev_bool onMouseUp( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y ){ return false; }
	virtual ev_bool onDoubleClick( _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y ){ return false; }
	virtual ev_bool onMouseWheel( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag ) { return false; }
	ev_void update();
	ev_void update( const EarthView::World::Spatial::Display::CSpatialRect& rect );
	CTrackingItemPrivate* mpData;

ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingItem( EarthView::World::Core::CNameValuePairList *pList );
ev_internal:
	CTrackingItem( EVTrackingItemUnit unitType );
protected:
	CTrackingItem( CTrackingItemPrivate* data );
	C_DISABLE_COPY( CTrackingItem )
};

}}}}

#endif