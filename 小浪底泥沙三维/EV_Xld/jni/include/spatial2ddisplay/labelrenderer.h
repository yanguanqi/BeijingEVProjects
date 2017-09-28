#ifndef EARTHVIEW_WORLD_SPATIAL2D_LABELRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL2D_LABELRENDERER_H

#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "spatialinterface/ilabelrenderer.h"
#include "spatialinterface/ispatialdisplay.h"
#include "symbol/symbolrenderer.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				/// <summary>
				/// 注记渲染类
				/// </summary>
				class EV_SPATIAL2DDISPLAY_DLL CLabelRenderer : public EarthView::World::Spatial::Display::ILabelRenderer
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLabelRenderer();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLabelRenderer();

				public:

					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染类型</returns>
					EarthView::World::Spatial::Display::EVRendererType getRendererType() const;

					/// <summary>
					/// 开始绘制
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="lableProperty">标注属性</param>
					/// <returns></returns>
					ev_void startDraw( _in EarthView::World::Spatial::Display::ISpatialDisplay *ref_display ,EarthView::World::Spatial::Display::ISymbol *symbol);
					
					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void draw( _in EarthView::World::Spatial::Display::CLabelElement *element );

					/// <summary>
					/// 结束绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void endDraw();
					/// <summary>
					/// 设置旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setRotation(ev_real64 rotation);
					EarthView::World::Spatial::Display::ISpatialDisplay* mpDisplay;
					EarthView::World::Spatial::Display::ISpatialTransformer* mpTransformer;
					EarthView::World::Spatial::Display::ISymbol* mpSymbol;
					ev_real64 m_fRotation;
				private:					
					/// <summary>
					/// 绘制注记背景(主要针对线注记)
					/// </summary>
					/// <param name="element">注记元素</param>
					/// <returns></returns>
					ev_bool drawLabelBackground(_in EarthView::World::Spatial::Display::CLabelElement *element);
				ev_private:
					CLabelRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CLabelRenderer )
				};
			}
		}
	}
}
#endif



