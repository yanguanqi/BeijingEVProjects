#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWPIESTATISTICS_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWPIESTATISTICS_H
#include "symbol/drawstatistics.h"
#include "symbol/symbolrenderer.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CDrawPieStatistics :
					public CDrawStatistics
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawPieStatistics();
				ev_private:
					CDrawPieStatistics( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawPieStatistics();
					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					ev_void startDraw(EarthView::World::Display::IDisplay2D* ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol  );

					/// <summary>
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <returns></returns>
					ev_void draw( ev_real64 *dx,
						ev_real64 *dy,
						ev_int32 *pSegments,
						ev_int32 nCount );

					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void endDraw();
				private:
					C_DISABLE_COPY( CDrawPieStatistics );
					inline ev_real64 calAngle(ev_real64 angle);
					ev_vector<ev_real64>m_Angle;
					ev_vector<EarthView::World::Spatial::Display::CSymbolRenderer*>m_Renders;
					/// <summary>
					/// 绘制饼块分区线画笔
					/// 为默认灰色
					/// </summary>
					ev_real64 m_dLongSemiaxis;
					ev_real64 m_dShortSemiaxis;
					ev_real64 m_dFlateRatio;
				};
			}
		}
	}
}
#endif
