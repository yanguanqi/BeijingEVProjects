#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWLINEFILL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWLINEFILL_H
#include "symbol/drawfill.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

				class CDrawLineFill :
					public CDrawFill
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawLineFill();
				ev_private:
					CDrawLineFill( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawLineFill();

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
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <param name="bUseOutline">是否使用外边框</param>
					/// <returns></returns>
					virtual ev_void draw( ev_real64 *dx,
						ev_real64 *dy,
						ev_int32 *pSegments,
						ev_int32 nCount,
						ev_bool bUseOutline);

					virtual ev_void drawPath( EarthView::World::Display::CDataPath* pPath );
					virtual ev_void drawPath( EarthView::World::Display::CDataPath* pPath, ev_bool bUseOutline );
					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void endDraw();
				};
			}
		}
	}
}
#endif
