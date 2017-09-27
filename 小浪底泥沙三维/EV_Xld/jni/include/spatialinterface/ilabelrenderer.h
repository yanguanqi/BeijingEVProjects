#ifndef EARTHVIEW_WORLD_SPATIAL2D_ILABELRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL2D_ILABELRENDERER_H

#include "spatialinterface/irenderer.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/ilabelengine.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ILabelProperty;

				class EV_INTERFACE_DLL ILabelRenderer : public EarthView::World::Spatial::Display::IRenderer
				{
				public:
					ILabelRenderer();
					~ILabelRenderer();

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
					ev_void startDraw( _in EarthView::World::Display::IDisplay2D *ref_display ,EarthView::World::Spatial::Display::ISymbol *symbol);
					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					ev_void draw( _in EarthView::World::Spatial::Display::CLabelElement *element );
					/// <summary>
					/// 结束绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void endDraw();

				ev_private:
					ILabelRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( ILabelRenderer )
				};
			}
		}
	}
}
#endif
