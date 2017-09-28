#ifndef EARTHVIEW_WORLD_SPATIAL2D_LAYERLABELRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL2D_LAYERLABELRENDERER_H

#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "spatialinterface/ilabelrenderer.h"
#include "spatialinterface/ispatialdisplay.h"
#include "symbol/symbolrenderer.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
				class IQueryFilter;
			}}}}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				class ITheme;
			}
			namespace Display{
				class ILabelProperty;
				class ISpatialDisplay;
			}}}}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				/// <summary>
				/// 图层注记渲染类
				/// </summary>
				class EV_SPATIAL2DDISPLAY_DLL CLayerLabelRenderer : public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CLayerLabelRenderer( EarthView::World::Core::CNameValuePairList *pList );
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayerLabelRenderer();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayerLabelRenderer();
				public:
					/// <summary>
					/// 开始绘制
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="lableProperty">标注属性</param>
					/// <returns></returns>
					ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *display ,
						_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc,
						_in EarthView::World::Spatial::Theme::ITheme* pTheme,
						_in const EVString& filter);	
					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool draw(EarthView::World::Spatial::Display::ILabelProperty* pLabelPorperty);
					/// <summary>
					/// 结束绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void endDraw();
				private:
					ev_void initQueryFilter(EarthView::World::Spatial::GeoDataset::IQueryFilter* pQueryFilter,const EVString& strSQL);

					EarthView::World::Spatial::Display::ISpatialDisplay* mpDisplay;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* mpFc;
					EarthView::World::Spatial::Theme::ITheme* mpTheme;
					EVString mstrFilter;
				protected:
					C_DISABLE_COPY( CLayerLabelRenderer )
					
				};
			}
		}
	}
}
#endif



