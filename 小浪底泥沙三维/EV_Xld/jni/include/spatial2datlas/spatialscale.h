#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_SPATIALSCALE_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_SPATIALSCALE_H
#include "spatial2datlas/spatial2datlasconfig.h"
#include "spatialinterface/ispatialscale.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				/// <summary>
				/// 空间比例尺
				/// </summary>
				class CSpatialScale : public EarthView::World::Spatial::Atlas::ISpatialScale
				{
				public:
					/// <summary>
					/// 空间比例尺
					/// </summary>
					CSpatialScale();
					/// <summary>
					/// 空间比例尺
					/// </summary>
					~CSpatialScale();

				public:
					/// <summary>
					/// 检测空间比例尺是否处于激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果处于激活状态则返回true,反之则否</returns>
					
					ev_bool isActive() const;
					/// <summary>
					/// 设置是否激活
					/// </summary>
					/// <param name="active">如果为true,则激活空间比例尺,反之则否</param>
					/// <returns></returns>
					
					ev_void setActive( _in ev_bool active );
					/// <summary>
					/// 在一个指定的范围中添加一个坐标系统
					/// </summary>
					/// <param name="sr">待添加的坐标系统</param>
					/// <param name="bottomScale">底部的比例尺(大比例尺)</param>
					/// <returns></returns>
					
					ev_void addSR( _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64 bottomScale );
					/// <summary>
					/// 移除指定索引处的坐标系统
					/// </summary>
					/// <param name="index">待移除的坐标系统索引</param>
					/// <returns></returns>
					
					ev_void removeSR( _in ev_uint32 index );
					/// <summary>
					/// 修改指定索引处的坐标系统
					/// </summary>
					/// <param name="index">待修改的坐标系统的索引</param>
					/// <param name="dest">目标坐标系统</param>
					/// <returns></returns>
					
					ev_void changeSR( _in ev_uint32 index, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest );
					/// <summary>
					/// 修改指定索引处的比例尺
					/// </summary>
					/// <param name="index">待修改的比例尺的索引</param>
					/// <param name="scale">目标比例尺</param>
					/// <returns></returns>
					
					ev_void changeScale( _in ev_uint32 index, _in ev_real64 scale );
					/// <summary>
					/// 获取指定索引处的坐标系统
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>坐标系统</returns>
					
					EarthView::World::Spatial::Geometry::ISpatialReference* getSR( _in ev_uint32 index ) const;
					/// <summary>
					/// 通过比例尺值来获取坐标系统
					/// </summary>
					/// <param name="scale">比例尺值</param>
					/// <returns>坐标系统</returns>
					
					EarthView::World::Spatial::Geometry::ISpatialReference* getSR( _in ev_real64 scale ) const;
					/// <summary>
					/// 获取指定索引处的比例尺
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>比例尺</returns>
					
					ev_real64 getScale( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取坐标系统的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					
					ev_uint32 getSRCount() const;
					/// <summary>
					/// 从xml无素中恢复空间比例尺的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把空间比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					
					EarthView::World::Core::CXmlElement toXmlElement() const;
				ev_private:
					CSpatialScale( EarthView::World::Core::CNameValuePairList* pList );
				protected:
					ev_bool mbActive;
					ev_map<ev_real64,EarthView::World::Spatial::Geometry::ISpatialReference*> mSRList;
				};
			}
		}
	}
}
#endif

