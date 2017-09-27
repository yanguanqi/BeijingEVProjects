#ifndef EARTHVIEW_WORLD_SPATIAL2D_RASTERRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL2D_RASTERRENDERER_H

#include "spatial2ddisplay/spatial2ddisplayconfig.h"
#include "spatialinterface/irenderer.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Renderer{
				/// <summary>
				/// 栅格渲染类
				/// </summary>
				class EV_SPATIAL2DDISPLAY_DLL CRasterRenderer : public EarthView::World::Spatial::Display::IRenderer
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRasterRenderer();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CRasterRenderer();

				ev_private:
					CRasterRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CRasterRenderer )
				};
			}
		}
	}
}
#endif


