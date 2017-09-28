#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_FORMATTEDTEXTSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_FORMATTEDTEXTSYMBOL_H

#include "symbol/textsymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 文本大小写
			/// </summary>
			enum  EVCapitalizatoinFlag {
				CF_MixedCase,		//常规
				CF_AllUppercase,	//全部大写
				CF_AllLowercase,	//全部小写
				CF_SmallCaps,		//小型大写
				CF_Capitalize		//首字母大写

			};
			/// <summary>
			/// 高级文本类
			/// 提供方法如下：
			/// 获取与设置 文本大小写、字符间距、字符宽度、翻转角度、字据调整、行间距、词间距
			/// 获取与设置 阴影x与y偏移、是否使用符号填充、是否使用背景、风格颜色、是否使用阴影
			/// 获取与设置 符号填充、文本背景、文本背景框在X轴与Y轴方向延伸长度
			/// 获取文本在x和y轴上大小
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CFormattedTextSymbol :public
				EarthView::World::Spatial::Display::CTextSymbol
			{
				friend class CDrawFormattedText;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CFormattedTextSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CFormattedTextSymbol();
				
				/// <summary>
				/// 设置文本大小写
				/// </summary>
				/// <param name="flag">大小写标识</param>
				/// <returns></returns>
				ev_void setTextCapitalization( EarthView::World::Spatial::Display::EVCapitalizatoinFlag flag );
				
				/// <summary>
				/// 获取文本大小写
				/// </summary>
				/// <param name=""></param>
				/// <returns>大小写类型</returns>
				EarthView::World::Spatial::Display::EVCapitalizatoinFlag getTextCapitalization();

				/// <summary>
				/// 设置字符间距
				/// </summary>
				/// <param name="value">字符间距</param>
				/// <returns></returns>
				ev_void setCharacterSpacing( ev_real64 value );

				/// <summary>
				/// 获取字符间距
				/// </summary>
				/// <param name=""></param>
				/// <returns>字符间距</returns>
				ev_real64 getCharacterSpacing();
				
				/// <summary>
				/// 设置字符宽度
				/// </summary>
				/// <param name="value">字符宽度</param>
				/// <returns></returns>
				ev_void setCharacterWidth( ev_real64 value );

				/// <summary>
				/// 获取字符宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>字符宽度</returns>
				ev_real64 getCharacterWidth();
				
				/// <summary>
				/// 设置翻转角度
				/// </summary>
				/// <param name="value">翻转角度</param>
				/// <returns></returns>
				ev_void setFlipAngle( ev_real64 value );

				/// <summary>
				/// 获取翻转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>翻转角度</returns>
				ev_real64 getFlipAngle();

				/// <summary>
				/// 设置字据调整
				/// </summary>
				/// <param name="enable">字据调整</param>
				/// <returns></returns>
				ev_void setKerning( ev_bool enable);

				/// <summary>
				/// 获取字据调整
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否调整</returns>
				ev_bool getKerning();

				/// <summary>
				/// 设置行间距
				/// </summary>
				/// <param name="value">行间距</param>
				/// <returns></returns>
				ev_void setLeading( ev_real64 value );

				/// <summary>
				/// 获取行间距
				/// </summary>
				/// <param name=""></param>
				/// <returns>行间距</returns>
				ev_real64 getLeading();

				/// <summary>
				/// 设置阴影x偏移
				/// </summary>
				/// <param name="value">阴影x偏移</param>
				/// <returns></returns>
				ev_void setShadowOffsetX( ev_real64 value );

				/// <summary>
				/// 获取阴影x偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns>阴影x偏移</returns>
				ev_real64 getShadowOffsetX();

				/// <summary>
				/// 设置阴影y偏移
				/// </summary>
				/// <param name="value">阴影y偏移</param>
				/// <returns></returns>
				ev_void setShadowOffsetY( ev_real64 value );

				/// <summary>
				/// 获取阴影y偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns>阴影y偏移</returns>
				ev_real64 getShadowOffsetY();

				/// <summary>
				/// 获取是否使用符号填充
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否使用</returns>
				ev_bool isFillWithSymbol() const;

				/// <summary>
				/// 设置是否使用符号填充
				/// </summary>
				/// <param name="bFill">是否使用</param>
				/// <returns></returns>
				ev_void setFillWithSymbol( ev_bool bFill );

				/// <summary>
				/// 获取是否使用背景
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否使用</returns>
				ev_bool isUseBackground() const;

				/// <summary>
				/// 设置是否使用背景
				/// </summary>
				/// <param name="bUse">是否使用</param>
				/// <returns></returns>
				ev_void setUseBackground( ev_bool bUse );

				/// <summary>
				/// 设置词间距
				/// </summary>
				/// <param name="value">词间距</param>
				/// <returns></returns>
				ev_void setWordSpacing( ev_real64 value );

				/// <summary>
				/// 获取词间距
				/// </summary>
				/// <param name=""></param>
				/// <returns>词间距</returns>
				ev_real64 getWordSpacing();

				/// <summary>
				/// 设置风格颜色
				/// </summary>
				/// <param name="color">风格颜色</param>
				/// <returns></returns>
				ev_void setShadowColor(const EarthView::World::Spatial::Display::IColor* color);

				/// <summary>
				/// 获取风格颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>风格颜色</returns>
				const  EarthView::World::Spatial::Display::IColor* getShadowColor() const;

				/// <summary>
				/// 设置是否使用阴影
				/// </summary>
				/// <param name="bHas">是否使用阴影</param>
				/// <returns></returns>
				ev_void setHasShadow( ev_bool bHas );

				/// <summary>
				/// 获取是否使用阴影
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否使用阴影</returns>
				ev_bool getHasShadow() const;

				/// <summary>
				/// 设置符号填充
				/// </summary>
				/// <param name="fillSymbol">填充符号</param>
				/// <returns></returns>
				ev_void setFillSymbol(const EarthView::World::Spatial::Display::ISymbol* fillSymbol);

				/// <summary>
				/// 获取符号填充
				/// </summary>
				/// <param name=""></param>
				/// <returns>填充符号</returns>
				const EarthView::World::Spatial::Display::ISymbol* getFillSymbol() const;

				/// <summary>
				/// 设置文本背景
				/// </summary>
				/// <param name="background">文本背景</param>
				/// <returns></returns>
				ev_void setBackgroundSymbol(const EarthView::World::Spatial::Display::ISymbol* background);

				/// <summary>
				/// 获取文本背景
				/// </summary>
				/// <param name=""></param>
				/// <returns>文本背景</returns>
				const EarthView::World::Spatial::Display::ISymbol* getBackgroundSymbol() const;

				/// <summary>
				/// 设置文本背景框在X轴方向延伸长度
				/// </summary>
				/// <param name="value">X轴方向的延伸长度</param>
				/// <returns></returns>
				ev_void setBackgroundStretchX( ev_real64 value );

				/// <summary>
				/// 获取文本背景框在X轴方向延伸长度
				/// </summary>
				/// <param name=""></param>
				/// <returns>X轴方向的延伸长度</returns>
				ev_real64 getBackgroundStretchX();

				/// <summary>
				/// 设置文本背景框在Y轴方向延伸长度
				/// </summary>
				/// <param name="value">Y轴方向的延伸长度</param>
				/// <returns></returns>
				ev_void setBackgroundStretchY( ev_real64 value );

				/// <summary>
				/// 获取文本背景框在Y轴方向延伸长度
				/// </summary>
				/// <param name=""></param>
				/// <returns>Y轴方向的延伸长度</returns>
				ev_real64 getBackgroundStretchY();

				/// <summary>
				/// 获取符号类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>符号类型</returns>
				ev_int32 getSymbolType() const;

				/// <summary>
				/// 深度copy风格对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>风格对象</returns>
				_extfree EarthView::World::Spatial::Display::ISymbol* clone() const ;

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
				ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);
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
				/// <summary>
				/// 文本大小写
				/// </summary>
				EarthView::World::Spatial::Display::EVCapitalizatoinFlag m_eCase;
				/// <summary>
				/// 字符间距
				/// </summary>
				ev_real64 m_dfCharacterSpacing;
				/// <summary>
				/// 字符宽度
				/// </summary>
				ev_real64 m_dfCharacterWidth;
				/// <summary>
				/// 翻转角度
				/// </summary>
				ev_real64 m_dfFlipAngle;
				/// <summary>
				/// 字距调整
				/// </summary>
				ev_bool m_bKerning;
				/// <summary>
				/// 行距
				/// </summary>
				ev_real64 m_dfLeading;
				/// <summary>
				/// 阴影x偏移
				/// </summary>
				ev_real64 m_dShadowOffsetX;
				/// <summary>
				/// 阴影y偏移
				/// </summary>
				ev_real64 m_dShadowOffsetY;
				/// <summary>
				/// 文本填充模式是否生效
				/// </summary>
				ev_bool m_bTypeSetting;
				/// <summary>
				/// 是否有背景
				/// </summary>
				ev_bool m_bUseBackground;
				/// <summary>
				/// 词间距
				/// </summary>
				ev_real64 m_dfWordSpacing;
				/// <summary>
				/// 是否使用阴影
				/// </summary>
				ev_bool m_bHasShadow;
				/// <summary>
				/// 阴影颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pShadowColor;
				/// <summary>
				/// 符号填充
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol* m_pFillSymbol;
				/// <summary>
				/// 简单文本背景
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol* m_pBackgroundSymbol;
				/// <summary>
				/// 文本背景框在X轴方向的延伸长度
				/// </summary>
				ev_real64 m_dfBackgroundStretchX;
				/// <summary>
				/// 文本背景在Y轴方向的延伸长度
				/// </summary>
				ev_real64 m_dfBackgroundStretchY;
			ev_private:
				CFormattedTextSymbol( EarthView::World::Core::CNameValuePairList *pList );
			private:
				C_DISABLE_COPY( CFormattedTextSymbol );
			};
		}
		}
	}
}
#endif
