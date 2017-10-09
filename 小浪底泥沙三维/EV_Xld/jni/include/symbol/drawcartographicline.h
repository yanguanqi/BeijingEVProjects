#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWCARTOGRAPHICLINE_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWCARTOGRAPHICLINE_H
#include "symbol/drawline.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CDrawCartographicLine : public CDrawLine
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawCartographicLine();
				ev_private:
					CDrawCartographicLine( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawCartographicLine();

					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					virtual ev_void startDraw( EarthView::World::Display::IDisplay2D* ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol );

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
					virtual ev_void drawPath( EarthView::World::Display::CDataPath* pPath );
					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void endDraw();

				private:
					/// <summary>
					/// 按照模板画线
					/// </summary>
					/// <param name="pGraphics">图形</param>
					/// <returns></returns>
					ev_void drawDashLines( ev_void *pGraphics );
					ev_real64 drawDashLine( ev_void *pGraphics, ev_void *pPen, ev_real64 len, ev_real64 offset ) const;

					/// <summary>
					/// 按照模板画装饰物
					/// </summary>
					/// <param name="pGraphics">图形</param>
					/// <returns></returns>
					ev_void drawDashLineWithDecoration( ev_void *pGraphics );

					/// <summary>
					/// 画装饰物
					/// </summary>
					/// <param name="pGraphics">图形</param>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void drawDecoration( ev_void* pGraphics, ev_real64 pos ) const;

					ev_void computeAngleAndLength(ev_void* points,ev_int32 nPointCount,ev_real64 *pAngle,ev_real64 *pLength) const;
					ev_real64 condenseOffset() const;

					ev_real64 *m_dx, *m_dy;
					ev_int32 *m_pSegments;
					ev_int32 m_nCount;

					ev_void* m_pDecorationBmp;
				};
			}
		}
	}
}
#endif
