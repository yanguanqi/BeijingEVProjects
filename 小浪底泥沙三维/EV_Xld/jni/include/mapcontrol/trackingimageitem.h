#ifndef _TRACKING_IMAGE_ITEM_H_
#define _TRACKING_IMAGE_ITEM_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/trackingitem.h"
#include "mapcontrol/trackingimageitem.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{

class CTrackingImageItemPrivate;
class EV_MAPCONTROL_DLL CTrackingImageItem : public EarthView::World::Spatial2D::Controls::CTrackingItem
{
ev_private:
	/// <summary>
	/// 封装构造函数
	/// </summary>
	CTrackingImageItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	CTrackingImageItem();
	/// <summary>
	/// 构造函数
	///TIU_PixelUnit  位置以地图渲染设备像素为参照，不随地图范围及其变化而变化
	///TIU_MapUnit    位置以地图坐标为参照；图片大小为原始大小，不会改变
	/// </summary>
	/// <param name="unitType">单位类型</param>
	/// <returns></returns>
	CTrackingImageItem( EarthView::World::Spatial2D::Controls::EVTrackingItemUnit unitType );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CTrackingImageItem();
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
		const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, 
		const EarthView::World::Spatial::Display::CSpatialRect& rect );
	/// <summary>
	/// 获取追踪项类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	virtual ev_int32 type() const{ return EarthView::World::Spatial2D::Controls::TIT_ImageItem; }
	/// <summary>
	/// 判断包含操作
	/// </summary>
	/// <param name="x">x坐标</param>
	/// <param name="y">y坐标</param>
	/// <returns>true，包含，false不包含</returns>
	virtual ev_bool isContains( _in ev_real64 x, _in ev_real64 y ) const;
	/// <summary>
	/// 设置图像,内部保存了一个副本
	/// </summary>
	/// <param name="geo">几何体指针</param>
	/// <returns></returns>
	ev_void setImage( _in const EarthView::World::Display::IBitmap* bitmap);
	/// <summary>
	/// 获取图像
	/// </summary>
	/// <param name=""></param>
	/// <returns>图像</returns>
	EarthView::World::Display::IBitmap* getImageRef() const;
	/// <summary>
	/// 设置旋转角度
	/// </summary>
	/// <param name="rotation">旋转角度</param>
	/// <returns></returns>
	ev_void setRotation( _in ev_real64 rotation);
	/// <summary>
	/// 获取图像
	/// </summary>
	/// <param name=""></param>
	/// <returns>图像</returns>
	ev_real64 getRotation() const;
protected:
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in ev_real64 ratio );
	CTrackingImageItemPrivate* d;
};
			}}}}
#endif

