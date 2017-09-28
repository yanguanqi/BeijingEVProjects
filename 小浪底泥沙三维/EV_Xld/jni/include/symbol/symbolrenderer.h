#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLRENDERER_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLRENDERER_H

#include "symbol/symbolexports.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/ipaintdevice.h"
#include "display/datapath.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			class ISymbol;
			class CDrawSymbol;
			/// <summary>
			/// 符号渲染类
			/// 提供方法如下：
			/// 虚方法：绘制前设置、绘制符号、绘制完成、绘制图例
			/// </summary>
			class EV_SYMBOL_DLL CSymbolRenderer
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSymbolRenderer();
				/// <summary>
				/// 绘制前设置
				/// </summary>
				/// <param name="pDevice">设备</param>
				/// <param name="pSymbol">符号</param>
				/// <returns></returns>
				virtual ev_void startDraw( EarthView::World::Display::IDisplay2D* ref_display, const EarthView::World::Spatial::Display::ISymbol*ref_pSymbol );
				virtual ev_void startDraw( EarthView::World::Display::IDisplay2D* ref_display, const EarthView::World::Spatial::Display::ISymbol*ref_pSymbol,ev_bool bForceUsingDefaultEngine );
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
				/// <param name="rotation">旋转角度（对点符号有效）</param>
				/// <returns></returns>
				virtual ev_void draw( ev_real64 *dx,
					ev_real64 *dy,
					ev_int32 *pSegments,
					ev_int32 nCount, 
					ev_real64 rotation);

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

				/// <summary>
				/// 绘制图例
				/// </summary>
				/// <param name="left">距左边距离</param>
				/// <param name="top">距上部距离</param>
				/// <param name="width">图例宽度</param>
				/// <param name="height">图例高度</param>
				/// <returns></returns>
				virtual ev_void drawLegend(ev_real64 left,
					ev_real64 top,
					ev_real64 width,
					ev_real64 height);
				/// <summary>
				///获取符号
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual CDrawSymbol * getDrawSymbol();
			ev_private:
				CSymbolRenderer(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CSymbolRenderer();
			private:
				C_DISABLE_COPY( CSymbolRenderer );
			private:
				friend class CDrawSimpleFill;
				CDrawSymbol * m_pDrawSymbol;
			};
		}
		}
	}
}
#endif
