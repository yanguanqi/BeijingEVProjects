#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWUNIQUEVALUEMATCHSYMBOLTHEME_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWUNIQUEVALUEMATCHSYMBOLTHEME_H
#include "spatial2ddisplay/drawtheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				///<summary>
				///匹配符号库中符号的单值专题图的渲染
				///</summary>
				class EV_SPATIAL2DDISPLAY_DLL CDrawUniqueValueMatchSymbolTheme:
					public EarthView::World::Spatial2D::Renderer::CDrawTheme
				{
				public:
					CDrawUniqueValueMatchSymbolTheme();
					~CDrawUniqueValueMatchSymbolTheme();

					/// <summary>
					/// 开始绘制专题图
					/// </summary>
					/// <param name="display">显示器</param>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display,
												_in EarthView::World::Spatial::Theme::ITheme *ref_theme );
					/// <summary>
					/// 绘制专题图
					/// </summary>
					/// <param name="feature">几何要素</param>
					/// <param name="filter">查询过滤</param>
					/// <returns></returns>
					ev_bool draw( _in EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass,
											EarthView::World::Spatial::GeoDataset::IQueryFilter* filter );
					/// <summary>
					/// 绘制完毕
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void endDraw();
ev_private:
					CDrawUniqueValueMatchSymbolTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDrawUniqueValueMatchSymbolTheme );
				};
			}
		}
	}
}
#endif
