#ifndef _TRACKING_TEXT_ITEM_H_
#define _TRACKING_TEXT_ITEM_H_

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/trackingitem.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CTextSymbol;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CTrackingTextItemPrivate;

/// <summary>
/// 跟踪地图对象
/// </summary>

class EV_MAPCONTROL_DLL CTrackingTextItem : public CTrackingItem
{
ev_private:
	/// <summary>
    /// 封装构造函数
    /// </summary>
	CTrackingTextItem( EarthView::World::Core::CNameValuePairList *pList );
public:
	/// <summary>
    /// 默认构造函数
    /// </summary>
	CTrackingTextItem();
	/// <summary>
    /// 默认析构函数
    /// </summary>
	~CTrackingTextItem();
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
	virtual ev_int32 type() const{ return TIT_TextItem; }
	/// <summary>
	/// 设置文本风格
	/// </summary>
	/// <param name="symbol">文本风格</param>
	/// <returns></returns>
	ev_void setSymbol( const EarthView::World::Spatial::Display::CTextSymbol* symbol );
	/// <summary>
	/// 获取文本风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	EarthView::World::Spatial::Display::CTextSymbol* getSymbol() const;
	/// <summary>
	/// 设置显示文本
	/// </summary>
	/// <param name="text">显示的文本</param>
	/// <returns></returns>
	ev_void setText( const EVString& text );
	/// <summary>
	/// 获取要显示的文本
	/// </summary>
	/// <param name=""></param>
	/// <returns>文本</returns>
	EVString getText() const;

protected:
	virtual ev_void updateBoundingRect( _in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in ev_real64 ratio );
	CTrackingTextItemPrivate* d;
};
			}
		}
	}
}

#endif

