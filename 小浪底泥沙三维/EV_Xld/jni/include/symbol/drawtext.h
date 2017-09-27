#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWTEXT_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_DRAWTEXT_H

#include "symbol/drawsymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CTextSymbol;
				class CDrawText :
					public CDrawSymbol
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDrawText();
				ev_private:
					CDrawText( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDrawText();
					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					virtual ev_void startDraw(EarthView::World::Display::IDisplay2D* ref_display,const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol );

					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void endDraw();
				protected:
					ev_void* m_pFont;
					ev_void* m_pFormat;
					ev_void* m_pBrush;
					ev_void* m_pFontFamily;
					ev_int32 m_nStyle;
				private:
					C_DISABLE_COPY( CDrawText );
				};
			}
		}
	}
}
#endif
