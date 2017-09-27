#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWSVGMARKER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWSVGMARKER_H

#include "symbol/drawmarker.h"
using namespace EarthView::World::Core;
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CDrawSVGMarker :
					public CDrawMarker
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawSVGMarker();
				ev_private:
					CDrawSVGMarker( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawSVGMarker();

					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					virtual ev_void startDraw(EarthView::World::Display::IDisplay2D* ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol  );

					/// <summary>
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <returns></returns>
					virtual ev_void draw( ev_real64 *dx,
						ev_real64 *dy,
						ev_int32 *pSegments,
						ev_int32 nCount );

					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void endDraw();;
				private:
					/// <summary>
					/// SVG图片数据
					/// </summary>
					MemoryDataStreamPtr m_pszPicBuffer;
					/// <summary>
					/// SVG图片数据大小
					/// </summary>
					ev_uint32 m_nPicSize;
					C_DISABLE_COPY( CDrawSVGMarker );
				};
			}
		}
	}
}
#endif
