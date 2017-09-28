#ifndef EARTHVIEW_WORLD_SPATIAL2D_ATLAS_SPATIALSCALETHEME_H
#define EARTHVIEW_WORLD_SPATIAL2D_ATLAS_SPATIALSCALETHEME_H
#include "spatial2datlas/spatial2datlasconfig.h"
#include "core/xml.h"
#include "spatialinterface/ispatialthemescale.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				class ITheme;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{
				/// <summary>
				/// 专题图基于比例尺的管理对象，不同比例尺下可以设置获取不同专题图
				/// </summary>
				class EV_SPATIAL2DATLAS_DLL CSpatialThemeScale : public EarthView::World::Spatial::Atlas::ISpatialThemeScale
				{
				public:
					/// <summary>
					/// 专题图基于比例尺的管理对象
					/// </summary>
					CSpatialThemeScale();
					/// <summary>
					/// 专题图基于比例尺的管理对象
					/// </summary>
					~CSpatialThemeScale();

				public:
					/// <summary>
					/// 检测是否处于激活状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果处于激活状态则返回true,反之则否</returns>
					
					ev_bool isActive() const;
					/// <summary>
					/// 设置是否激活
					/// </summary>
					/// <param name="active">如果为true,则激活,反之则否</param>
					/// <returns></returns>
					
					ev_void setActive( _in ev_bool active );
					/// <summary>
					/// 在一个指定的范围中添加一个专题图
					/// </summary>
					/// <param name="pTheme">待添加的专题图</param>
					/// <param name="bottomScale">底部的比例尺(大比例尺)</param>
					/// <returns></returns>
					
					ev_void addTheme( _in const EarthView::World::Spatial::Theme::ITheme* pTheme, _in ev_real64 bottomScale );
					/// <summary>
					/// 移除指定索引处的专题图
					/// </summary>
					/// <param name="index">待移除的专题图索引</param>
					/// <returns></returns>
					
					ev_void removeTheme( _in ev_uint32 index );
					/// <summary>
					/// 修改指定索引处的专题图
					/// </summary>
					/// <param name="index">待修改的专题图的索引</param>
					/// <param name="dest">目标专题图</param>
					/// <returns></returns>
					
					ev_void changeTheme( _in ev_uint32 index, _in const EarthView::World::Spatial::Theme::ITheme* dest );
					/// <summary>
					/// 修改指定索引处的比例尺
					/// </summary>
					/// <param name="index">待修改的比例尺的索引</param>
					/// <param name="scale">目标比例尺</param>
					/// <returns></returns>
					
					ev_void changeScale( _in ev_uint32 index, _in ev_real64 scale );
					/// <summary>
					/// 获取指定索引处的专题图
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>专题图</returns>
					
					EarthView::World::Spatial::Theme::ITheme* getTheme( _in ev_uint32 index ) const;
					/// <summary>
					/// 通过比例尺值来获取专题图
					/// </summary>
					/// <param name="scale">比例尺值</param>
					/// <returns>专题图</returns>
					
					EarthView::World::Spatial::Theme::ITheme* getTheme( _in ev_real64 scale ) const;
					/// <summary>
					/// 获取指定索引处的比例尺
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>比例尺</returns>
					
					ev_real64 getScale( _in ev_uint32 index ) const;
					/// <summary>
					/// 获取专题图的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					
					ev_uint32 getThemeCount() const;
					/// <summary>
					/// 从xml无素中恢复空间比例尺的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 获取专题图的索引
					/// </summary>
					/// <param name=""></param>
					/// <returns>index</returns>

					ev_uint32 getThemeIndex(_in ev_real64 scale) const;
					/// <summary>
					/// 把空间比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					
					EarthView::World::Core::CXmlElement toXmlElement() const;

					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale& operator=(const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale& other);
				ev_private:
					CSpatialThemeScale( EarthView::World::Core::CNameValuePairList* pList );
				protected:
					ev_bool mbActive;
					ev_map<ev_real64,EarthView::World::Spatial::Theme::ITheme*> mThemeList;
				};
			}
		}
	}
}
#endif

