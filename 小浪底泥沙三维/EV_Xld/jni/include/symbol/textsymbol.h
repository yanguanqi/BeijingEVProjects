#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_TEXTSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_TEXTSYMBOL_H

#include "symbol/symbol.h"

#include <core/fontdef.h>
#include "spatialinterface/ipaintdevice.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{			
			/// <summary>
			/// 文本符号基类
			/// 提供方法如下：
			/// 获取与设置 文本大小、文本字体、文本旋转角度、文本X轴与Y轴偏移量、文本水平与垂直停靠方式、
			///	获取与设置 渲染文本、文体读取方向
			/// 获取与设置 文本是否是粗体、斜体、下划线、删除线
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CTextSymbol 
				:public EarthView::World::Spatial::Display::CSymbol
			{
				friend class CDrawText;
				friend class CDrawSimpleText;
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CTextSymbol();

				/// <summary>
				/// 设置文本大小
				/// </summary>
				/// <param name="size">文本大小</param>
				/// <returns></returns>
				ev_void setSize( ev_real64 size );

				/// <summary>
				/// 获取文本大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>文本大小</returns>
				ev_real64 getSize() const;

				/// <summary>
				/// 设置文本字体
				/// </summary>
				/// <param name="name">文本字体</param>
				/// <returns></returns>
				ev_void setFont( EVString name );

				/// <summary>
				/// 获取文本字体
				/// </summary>
				/// <param name=""></param>
				/// <returns>文本字体</returns>
				EVString getFont();

				/// <summary>
				/// 设置文本粗体
				/// </summary>
				/// <param name="enable">文本粗体</param>
				/// <returns></returns>
				ev_void setBold( ev_bool enable );

				/// <summary>
				/// 获取文本是否是粗体
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否是粗体</returns>
				ev_bool isBold();

				/// <summary>
				/// 设置文本斜体
				/// </summary>
				/// <param name="enable">文本是否斜体</param>
				/// <returns></returns>
				ev_void setItalic( ev_bool enable );

				/// <summary>
				/// 获取文本是否是斜体
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否是斜体</returns>
				ev_bool isItalic();
				
				/// <summary>
				/// 设置文本下划线
				/// </summary>
				/// <param name="enable">文本是否有下划线</param>
				/// <returns></returns>
				ev_void setUnderline( ev_bool enable );

				/// <summary>
				/// 获取文本是否有下划线
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否有下划线</returns>
				ev_bool isUnderline();

				/// <summary>
				/// 设置文本删除线
				/// </summary>
				/// <param name="enable">文本是否有删除线</param>
				/// <returns></returns>
				ev_void setStrikeOut( ev_bool enable );

				/// <summary>
				/// 获取文本是否有删除线
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否有删除线</returns>
				ev_bool isStrikeOut();

				/// <summary>
				/// 设置X轴偏移量
				/// </summary>
				/// <param name="value">文本X轴偏移量</param>
				/// <returns></returns>
				ev_void setOffsetX( ev_real64 value );

				/// <summary>
				/// 获取文本X轴偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>X轴偏移量</returns>
				ev_real64 getOffsetX();

				/// <summary>
				/// 设置Y轴偏移量
				/// </summary>
				/// <param name="value">文本Y轴偏移量</param>
				/// <returns></returns>
				ev_void setOffsetY( ev_real64 value );

				/// <summary>
				/// 获取文本Y轴偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>Y轴偏移量</returns>
				ev_real64 getOffsetY();

				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="angle">文本旋转角度</param>
				/// <returns></returns>
				ev_void setAngle( ev_real64 angle );

				/// <summary>
				/// 获取文本旋转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>旋转角度</returns>
				ev_real64 getAngle();

				/// <summary>
				/// 设置文本水平停靠方式
				/// </summary>
				/// <param name="flag">文本水平停靠方式</param>
				/// <returns></returns>
				ev_void setHorizontalAlignment( EarthView::World::Core::EVTextHorizontalAlignment flag );

				/// <summary>
				/// 获取文本水平停靠方式
				/// </summary>
				/// <param name=""></param>
				/// <returns>水平停靠方式</returns>
				EarthView::World::Core::EVTextHorizontalAlignment getHorizontalAlignment();
				
				/// <summary>
				/// 设置文本垂直停靠方式
				/// </summary>
				/// <param name="flag">文本垂直停靠方式</param>
				/// <returns></returns>
				ev_void setVerticalAlignment( EarthView::World::Core::EVTextVerticalAlignment flag );
				
				/// <summary>
				/// 获取文本垂直停靠方式
				/// </summary>
				/// <param name=""></param>
				/// <returns>垂直停靠方式</returns>
				EarthView::World::Core::EVTextVerticalAlignment getVerticalAlignment();

				/// <summary>
				/// 设置渲染文本
				/// </summary>
				/// <param name="text">文本</param>
				/// <returns></returns>
				ev_void setText( EVString text );

				/// <summary>
				/// 获取渲染文本
				/// </summary>
				/// <param name=""></param>
				/// <returns>文本</returns>
				EVString getText();

				/// <summary>
				/// 设置文体读取方向
				/// </summary>
				/// <param name="enable">文体读取方向</param>
				/// <returns></returns>
				ev_void setRightToLeft( ev_bool enable );

				/// <summary>
				/// 获取文体读取方向
				/// </summary>
				/// <param name=""></param>
				/// <returns>文体读取方向</returns>
				ev_bool isRightToLeft();
				
				/// <summary>
				/// 获取流
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

				/// <summary>
				/// 获取SLD
				/// </summary>
				/// <param name=""></param>
				/// <returns>SLD字符串</returns>
				EVString toSLD() const;

				/// <summary>
				/// 从XML元素中恢复Symbol属性
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 将Symbol属性写入XML元素
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				EarthView::World::Core::CXmlElement toXmlElement() const;

				/// <summary>
				/// 判断两个Symbol是否属性相同
				/// </summary>
				/// <param name="pSymbol">Symbol对象</param>
				/// <returns></returns>
				ev_bool equal( _in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				virtual ev_void getTextSize( _in ev_int64 hdc, _in const EVString& text, _out ev_real64* xSize, _out ev_real64* ySize ) const;
				virtual ev_void getTextSize( _in EarthView::World::Display::IPaintDevice* paintDevice, 
					_in const EVString& text, _out ev_real64* xSize, _out ev_real64* ySize ) const;
				virtual ev_void getTextSize(_in EarthView::World::Display::IPaintDevice* paintDevice, 
					_in const EVString& text,
					_inout ev_real64* xPos, _inout ev_real64* yPos,
					_out ev_real64* xSize, _out ev_real64* ySize ) const;

				virtual ev_void getTextSize( _in EarthView::World::Display::EVDeviceUnits unit,_in ev_int64 hdc, _in const EVString& text, _out ev_real64* xSize, _out ev_real64* ySize ) const;
				virtual ev_void getTextSize( _in EarthView::World::Display::EVDeviceUnits unit,_in EarthView::World::Display::IPaintDevice* paintDevice, 
					_in const EVString& text, _out ev_real64* xSize, _out ev_real64* ySize ) const;
				virtual ev_void getTextSize( _in EarthView::World::Display::EVDeviceUnits unit,_in EarthView::World::Display::IPaintDevice* paintDevice, 
					_in const EVString& text,
					_inout ev_real64* xPos, _inout ev_real64* yPos,
					_out ev_real64* xSize, _out ev_real64* ySize ) const;
				/// <summary>
				/// 获取字体边框颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				virtual EarthView::World::Spatial::Display::IColor* getOutlineColor() const;

				/// <summary>
				/// 设置字体边框颜色
				/// </summary>
				/// <param name="color">字体边框颜色</param>
				/// <returns></returns>
				virtual ev_void setOutlineColor(const EarthView::World::Spatial::Display::IColor* color);

			ev_internal:
				/// <summary>
				/// 从SLD恢复Symbol属性
				/// </summary>
				/// <param name="sld">SLD字符串</param>
				/// <returns></returns>
				ev_void fromSLD( EVString& sld );

				/// <summary>
				/// 从数据流恢复Symbol属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			protected:
				CTextSymbol();
			ev_private:
				CTextSymbol(EarthView::World::Core::CNameValuePairList *pList);
			protected:
				/// <summary>
				/// 文本字体名称
				/// </summary>
				EVString m_szFontName;
				/// <summary>
				/// 文本粗体标识
				/// </summary>
				ev_bool m_bBold;
				/// <summary>
				/// 文本斜体标识
				/// </summary>
				ev_bool m_bItalic;
				/// <summary>
				/// 文本下划线标识
				/// </summary>
				ev_bool m_bUnderline;
				/// <summary>
				/// 文本删除线标识
				/// </summary>
				ev_bool m_bStrikeOut;
				/// <summary>
				/// 文本大小
				/// </summary>
				ev_real64 m_dfSize;
				/// <summary>
				/// 文本读取方向
				/// </summary>
				ev_bool m_bRightToLeft;
				/// <summary>
				/// 文本X轴方向的偏移量
				/// </summary>
				ev_real64 m_dfOffsetX;
				/// <summary>
				/// 文本Y轴方向的偏移量
				/// </summary>
				ev_real64 m_dfOffsetY;
				/// <summary>
				/// 文本旋转角度
				/// </summary>
				ev_real64 m_dfAngle;
				/// <summary>
				/// 水平方向方式
				/// </summary>
				EarthView::World::Core::EVTextHorizontalAlignment m_eHorizontalAlignment;
				/// <summary>
				/// 垂直方向方式
				/// </summary>
				EarthView::World::Core::EVTextVerticalAlignment m_eVerticalAlignment;
				/// <summary>
				/// 渲染文本
				/// </summary>
				EarthView::World::Core::CUnicodeString m_szText;
				/// <summary>
				/// Symbol的颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pOutLineColor;
			private:
				C_DISABLE_COPY( CTextSymbol );
			};
		}
		}
	}
}
#endif

