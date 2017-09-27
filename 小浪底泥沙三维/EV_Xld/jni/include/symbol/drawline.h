#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWLINE_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWLINE_H
#include "symbol/drawsymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CDrawLine :
					public CDrawSymbol
				{
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawLine();
				ev_private:
					CDrawLine( EarthView::World::Core::CNameValuePairList* pList );
				public:
					~CDrawLine();
					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					virtual ev_void startDraw(EarthView::World::Display::IDisplay2D* ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol );

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
					virtual ev_void endDraw();
					/// <summary>
					/// 偏移后的点
					/// </summary>
					/// <param name="dfOffset">线偏移量</param>
					/// <param name="nPointCount">点数目</param>
					/// <param name="point">点数组</param>
					/// <returns>偏移后的点数组和数目</returns>
					virtual ev_void pointsOffset(ev_real64 dfOffset,ev_int32 &nPointCount,ev_void* &point);
				private:
					C_DISABLE_COPY( CDrawLine );
				};
			}
		}
	}
}
#endif
