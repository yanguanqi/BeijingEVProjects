#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWUNIQUEVALUETHEME_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWUNIQUEVALUETHEME_H

#include "spatial2ddisplay/drawtheme.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				/// <summary>
				/// 单值专题图渲染类
				/// </summary>
				class EV_SPATIAL2DDISPLAY_DLL CDrawUniqueValueTheme:
					public EarthView::World::Spatial2D::Renderer::CDrawTheme
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawUniqueValueTheme();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawUniqueValueTheme();
				public:

					/// <summary>
					/// 开始绘制专题图
					/// </summary>
					/// <param name="display">显示器</param>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display, _in EarthView::World::Spatial::Theme::ITheme *ref_theme );

					/// <summary>
					/// 绘制专题图
					/// </summary>
					/// <param name="feature">几何要素</param>
					/// <param name="filter">查询过滤</param>
					/// <returns></returns>
					ev_bool draw( _in EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass,EarthView::World::Spatial::GeoDataset::IQueryFilter* filter );

					/// <summary>
					/// 绘制完毕
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void endDraw();
ev_private:
					
					CDrawUniqueValueTheme( EarthView::World::Core::CNameValuePairList *pList );
					
				protected:
					C_DISABLE_COPY( CDrawUniqueValueTheme );
				private:
					class CStoreDrawProperty;
					ev_map<int,CStoreDrawProperty*> m_mapSaveDrawProperty;
				};
	
			}
		}
	}
}

#endif
