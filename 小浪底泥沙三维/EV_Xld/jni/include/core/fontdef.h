#ifndef _FONT_H__
#define _FONT_H__
#pragma once

#include "core/global.h"
#include "core/stringdefines.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			/// <summary>
			/// 文本水平停靠方式
			/// </summary>
			enum  EVTextHorizontalAlignment {
				THA_Left			 = 0,
				THA_Right			 = 1,
				THA_HCenter			 = 2
			};

			/// <summary>
			/// 文本垂直停靠方式
			/// </summary>
			enum  EVTextVerticalAlignment {
				TVA_Top				 = 0,
				TVA_Bottom			 = 1,
				TVA_VCenter			 = 2
			};
			
			//struct Font
			//{
			//	/// <summary>
			//	/// 文本字体名称
			//	/// </summary>
			//	EVString m_szFontName;
			//	/// <summary>
			//	/// 文本粗体标识
			//	/// </summary>
			//	ev_bool m_bBold;
			//	/// <summary>
			//	/// 文本斜体标识
			//	/// </summary>
			//	ev_bool m_bItalic;
			//	/// <summary>
			//	/// 文本下划线标识
			//	/// </summary>
			//	ev_bool m_bUnderline;
			//	/// <summary>
			//	/// 文本删除线标识
			//	/// </summary>
			//	ev_bool m_bStrikeOut;
			//	/// <summary>
			//	/// 文本大小
			//	/// </summary>
			//	ev_real64 m_dfSize;
			//	/// <summary>
			//	/// 文本读取方向
			//	/// </summary>
			//	ev_bool m_bRightToLeft;
			//	/// <summary>
			//	/// 文本X轴方向的偏移量
			//	/// </summary>
			//	ev_real64 m_dfOffsetX;
			//	/// <summary>
			//	/// 文本Y轴方向的偏移量
			//	/// </summary>
			//	ev_real64 m_dfOffsetY;
			//	/// <summary>
			//	/// 文本旋转角度
			//	/// </summary>
			//	ev_real64 m_dfAngle;
			//	/// <summary>
			//	/// 水平方向方式
			//	/// </summary>
			//	EVTextHorizontalAlignment m_eHorizontalAlignment;
			//	/// <summary>
			//	/// 垂直方向方式
			//	/// </summary>
			//	EVTextVerticalAlignment m_eVerticalAlignment;
			//	/// <summary>
			//	/// 渲染文本
			//	/// </summary>
			//	EVString m_szText;
			//};
		}
	}
}
#endif //_FONT_H__
