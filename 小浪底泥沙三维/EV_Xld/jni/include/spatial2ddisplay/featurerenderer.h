#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_H

#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "spatialinterface/ifeaturerenderer.h"
#include "spatialinterface/ispatialdisplay.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				class CDrawTheme;
				/// <summary>
				/// 要素渲染类
				/// </summary>
				class EV_SPATIAL2DDISPLAY_DLL CFeatureRenderer : public EarthView::World::Spatial2D::Display::IFeatureRenderer
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFeatureRenderer();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CFeatureRenderer();

				public:
					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::EVRendererType getRendererType() const;
					/// <summary>
					/// 开始绘制
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="lableProperty">标注属性</param>
					/// <returns></returns>
					ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *display, _in EarthView::World::Spatial::Theme::ITheme *theme );

					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					virtual ev_void draw( _in EarthView::World::Spatial::GeoDataset::IFeature *feature );

					/// <summary>
					/// 结束绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void endDraw();

				ev_private:
					CFeatureRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CFeatureRenderer );
				private:
					CDrawTheme * m_pDrawTheme;
				};
			}
		}
	}
}

#endif


