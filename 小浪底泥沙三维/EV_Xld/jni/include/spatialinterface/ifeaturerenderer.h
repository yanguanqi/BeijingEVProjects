#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IFEATURERENDERER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IFEATURERENDERER_H

#include "spatialinterface/irenderer.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Display{
				/// <summary>
				/// 要素渲染基类
				/// </summary>
				class EV_INTERFACE_DLL IFeatureRenderer :
					public EarthView::World::Spatial::Display::IRenderer
				{
				public:			
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~IFeatureRenderer();
				public:
					/// <summary>
					/// 获取专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回专题图</returns>
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme() const;
					/// <summary>
					/// 获取统计专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回统计专题图</returns>
					virtual EarthView::World::Spatial::Theme::ITheme* getStatisticesTheme() const;
					/// <summary>
					/// 绘制
					/// </summary>
					/// <param name="display">显示参数</param>
					/// <param name="feature">要素</param>
					/// <returns>返回统计专题图</returns>
					virtual ev_void draw(const EarthView::World::Display::IDisplay2D * display, const EarthView::World::Spatial::GeoDataset::IFeature* feature) const;
                ev_private:
					IFeatureRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IFeatureRenderer();
				private:
					IFeatureRenderer(IFeatureRenderer & obj);
				};
			}
		}
	}
}

#endif
