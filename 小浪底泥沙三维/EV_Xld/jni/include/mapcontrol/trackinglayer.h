

#ifndef _TRACKING_LAYER_H_
#define _TRACKING_LAYER_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "spatialdisplay/spatialrect.h"
#include "spatialdisplay/spatialmatrix.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CMapControl;
class CTrackingItem;
class CTrackingLayerPrivate;
/// <summary>
/// 跟踪项集合
/// </summary>
class EV_MAPCONTROL_DLL CTrackingItemSet : public EarthView::World::Core::CAllocatedObject
{
	friend class CTrackingLayer;

ev_private:
	/// <summary>
    /// 封装构造函数
    /// </summary>
	CTrackingItemSet( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
    /// 默认构造函数
    /// </summary>
	CTrackingItemSet(){}
	/// <summary>
    /// 默认析构函数
    /// </summary>
	~CTrackingItemSet(){}
	/// <summary>
	/// 获取个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>个数</returns>
	ev_int32 count() const;
	/// <summary>
	/// 获取指定位置的Item指针
	/// </summary>
	/// <param name="index">索引号</param>
	/// <returns>跟踪项指针</returns>
	CTrackingItem* item( ev_int32 index ) const;
	/// <summary>
	/// 判断指定ID的跟踪项是否存在
	/// </summary>
	/// <param name="id">跟踪项之ID</param>
	/// <returns>true,存在，false不存在</returns>
	ev_bool isExist( ev_int32 id ) const;
private:
	ev_vector<CTrackingItem*> mList;
};

/// <summary>
/// 跟踪图层
/// </summary>
class EV_MAPCONTROL_DLL CTrackingLayer : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	/// <summary>
    /// 封装构造函数
    /// </summary>
	CTrackingLayer( EarthView::World::Core:: CNameValuePairList *pList );
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="ctrl">地图控制器指针</param>
	/// <returns></returns>
	CTrackingLayer( CMapControl* ref_ctrl );
	/// <summary>
    /// 析构函数
    /// </summary>
	~CTrackingLayer();
	/// <summary>
	/// 添加跟踪项到图层
	/// </summary>
	/// <param name="item">跟踪项指针</param>
	/// <returns></returns>
	ev_void addItem( CTrackingItem* ref_item );
	/// <summary>
	/// 移除跟踪项
	/// </summary>
	/// <param name="item">待移除跟踪项之指针</param>
	/// <returns></returns>
	ev_void removeItem( CTrackingItem* item );
	/// <summary>
	/// 获取指定位置的跟踪项(未实现...)
	/// </summary>
	/// <param name="x">x坐标</param>
	/// <param name="y">y坐标</param>
	/// <returns>跟踪项指针</returns>
	CTrackingItem* itemAt( ev_real64 x, ev_real64 y ) const;
	/// <summary>
	/// 获取一定范围之内的跟踪项集合
	/// </summary>
	/// <param name="rect">矩形范围</param>
	/// <returns>跟踪项集合</returns>
	CTrackingItemSet items( const EarthView::World::Spatial::Display::CSpatialRect& rect ) const;
	/// <summary>
	/// 获取所有跟踪项集合
	/// </summary>
	/// <param name=""></param>
	/// <returns>跟踪项集合</returns>
	CTrackingItemSet items() const;
	/// <summary>
	/// 获取已经选择的所有跟踪项集合
	/// </summary>
	/// <param name=""></param>
	/// <returns>跟踪项集合</returns>
	CTrackingItemSet selectedItems() const;
	/// <summary>
	/// 选择矩形范围类的跟踪项
	/// </summary>
	/// <param name="rect">矩形范围</param>
	/// <returns>true,选择成功，false选择失败</returns>
	ev_bool select( const EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 获取焦点跟踪项
	/// </summary>
	/// <param name=""></param>
	/// <returns>焦点</returns>
	CTrackingItem* foucsItem() const;
	/// <summary>
	/// 获取所有跟踪项的外包矩形
	/// </summary>
	/// <param name=""></param>
	/// <returns>矩形包围盒</returns>
	EarthView::World::Spatial::Display::CSpatialRect itemsBoundingRect() const;
	/// <summary>
	/// 清空所有项
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();
	/// <summary>
	/// 清空选择项
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearSelection();
	/// <summary>
	/// 刷新跟踪层
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void update();
	/// <summary>
	/// 刷新指定范围内的跟踪层
	/// </summary>
	/// <param name="rect">矩形范围</param>
	/// <returns></returns>
	ev_void update( const EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 绘制跟踪层中被标记为intetest的项
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void paintInterestItems();
	/// <summary>
	/// 重新绘制跟踪层
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void repaint();
	/// <summary>
	/// 重新绘制指定范围内的跟踪层
	/// </summary>
	/// <param name="rect">矩形范围</param>
	/// <returns></returns>
	ev_void repaint( const EarthView::World::Spatial::Display::CSpatialRect& rect );

protected:
	ev_void init( _in CMapControl* ref_ctrl );
	CTrackingLayerPrivate* mpData;
	C_DISABLE_COPY( CTrackingLayer )
	friend class CTrackingItem;
	friend class CMapControl;
	friend class CResizeHandler;
	friend class CDrawDelayHandlerPrivate;
	friend class CWheelHandler;
	friend class CPanHandler;
};

}}}}

#endif