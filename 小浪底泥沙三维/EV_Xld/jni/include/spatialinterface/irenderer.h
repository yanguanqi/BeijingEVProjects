#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IRENDERER_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

				enum EVRendererType
				{
					RT_UNKNOWN                = 0,			//未知
					RT_FEATURERENDERER        = 1,			//渲染要素
					RT_RASTERRENDERER         = 2,			//渲染栅格
					RT_LABELRENDERER		  = 3			//渲染标注
				};

				class EV_INTERFACE_DLL IRenderer :
					public EarthView::World::Core::CAllocatedObject
				{
				public:					
					virtual ~IRenderer();
				public:
					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::EVRendererType getType() const;
                ev_private:
					IRenderer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IRenderer();
				private:
					IRenderer(IRenderer & obj);
				};
			}
		}
	}
}

#endif
