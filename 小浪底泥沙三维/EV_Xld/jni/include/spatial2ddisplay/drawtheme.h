#ifndef EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWTHEME_H
#define EARTHVIEW_WORLD_SPATIAL2D_RENDERER_DRAWTHEME_H
#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				class ITheme;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IFeatureClass;
				class IQueryFilter;
				class IFeature;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISpatialDisplay;
				class CSymbolRenderer;
				class ISymbol;
				class CGeometryRenderer;
				}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				/// <summary>
				/// 专题图渲染基类
				/// </summary>
				class EV_SPATIAL2DDISPLAY_DLL CDrawTheme:
					public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawTheme();
				public:

					/// <summary>
					/// 开始绘制专题图
					/// </summary>
					/// <param name="display">显示器</param>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					virtual ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display, _in EarthView::World::Spatial::Theme::ITheme *ref_theme );

					/// <summary>
					/// 绘制专题图
					/// </summary>
					/// <param name="feature">几何要素</param>
					/// <param name="filter">查询过滤</param>
					/// <returns></returns>
					virtual ev_bool draw( _in EarthView::World::Spatial::GeoDataset::IFeatureClass *featureClass,EarthView::World::Spatial::GeoDataset::IQueryFilter* filter );
					virtual void draw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display,
						_in const EarthView::World::Spatial::Display::ISymbol *symbol, 
						_in EarthView::World::Spatial::GeoDataset::IFeature *feature);
					/// <summary>
					/// 绘制完毕
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void endDraw();
				ev_private:
					CDrawTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDrawTheme );
				protected:
					CDrawTheme();
					/// <summary>
					/// 显示专题图
					/// </summary>
					EarthView::World::Spatial::Display::ISpatialDisplay* m_pDisplay;
					/// <summary>
					/// 专题图
					/// </summary>
					EarthView::World::Spatial::Theme::ITheme* m_pTheme;
					EarthView::World::Spatial::Display::CGeometryRenderer* m_pGeometryRenderer;
				};
			}
		}
	}
}

#endif
