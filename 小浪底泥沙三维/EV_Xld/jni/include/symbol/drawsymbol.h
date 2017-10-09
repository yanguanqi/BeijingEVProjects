#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWSYMBOL_H
#include "symbol/symbolexports.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/idisplay2d.h"
#include "display/datapath.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class ISymbol;
				class CDrawSymbol:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CDrawSymbol();

					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					virtual ev_void startDraw( EarthView::World::Display::IDisplay2D* ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol  );
					
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
				ev_private:
					CDrawSymbol(EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CDrawSymbol();
					ev_void setDisplayOptions();
					EarthView::World::Display::IDisplay2D* mpDisplay;
					/// <summary>
					/// 绘制设备
					/// </summary>
					EarthView::World::Display::IPaintDevice *m_pDevice;
					/// <summary>
					/// 绘制符号
					/// </summary>
					const ISymbol *m_pSymbol;
					ev_void* m_pGraphics;
					ev_bool mbNativeGra;
					ev_real64 m_dMultiplier;
				private:
					C_DISABLE_COPY( CDrawSymbol );
			};
		}
		}
	}
}
#endif
