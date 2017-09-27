#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_GRADIENTFILLSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_GRADIENTFILLSYMBOL_H

#include "symbol/fillsymbol.h"
#include "color/colorramp.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 渐进色填充类型
			/// </summary>
			enum EVGradientFillStyle
			{
				GFS_GradientFillStyle_Linear                   = 0,//线性
				GFS_GradientFillStyle_Rectangular              = 1,//矩形填充
				GFS_GradientFillStyle_Circular                 = 2,//圆形填充
				GFS_GradientFillStyle_Buffered                 = 3 //缓冲填充
			};
			/// <summary>
			/// 渐变色填充类
			/// 提供方法如下：
			/// 获取与设置 颜色色带、旋转角度、颜色个数、填充类型
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CGradientFillSymbol :
				public EarthView::World::Spatial::Display::CFillSymbol
			{
				friend class CDrawGradientFill;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGradientFillSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CGradientFillSymbol();

				/// <summary>
				/// 获取颜色色带
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色色带</returns>
				const  EarthView::World::Spatial::Display::CColorRamp* getColorRamp() const;
				EarthView::World::Spatial::Display::CColorRamp* getColorRamp();

				/// <summary>
				/// 设置颜色色带
				/// </summary>
				/// <param name="colorRamp">颜色色带</param>
				/// <returns></returns>
				ev_void setColorRamp(const EarthView::World::Spatial::Display::CColorRamp* colorRamp);

				/// <summary>
				/// 获取旋转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>旋转角度</returns>
				ev_real64 getAngle() const;

				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="value">旋转角度</param>
				/// <returns></returns>
				ev_void setAngle(ev_real64 value);

				/// <summary>
				/// 获取颜色个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色个数</returns>
				ev_int32 getGradientCount() const;

				/// <summary>
				/// 设置颜色个数
				/// </summary>
				/// <param name="count">颜色个数</param>
				/// <returns>颜色个数</returns>
				ev_void setGradientCount(ev_int32 count);

				/// <summary>
				/// 获取填充类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>填充类型</returns>
				EarthView::World::Spatial::Display::EVGradientFillStyle getGradientFillStyle() const;

				/// <summary>
				/// 设置填充类型
				/// </summary>
				/// <param name="nType">填充类型</param>
				/// <returns></returns>
				ev_void setGradientFillStyle(EarthView::World::Spatial::Display::EVGradientFillStyle nType);

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
				_extfree EarthView::World::Spatial::Display::ISymbol* clone() const;

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
			ev_private:
				CGradientFillSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 色带对象
				/// </summary>
				EarthView::World::Spatial::Display::CColorRamp* m_pColorRamp;
				/// <summary>
				/// 角度
				/// </summary>
				ev_real64 m_dfAngle;
				/// <summary>
				/// 间隔个数
				/// </summary>
				ev_int32 m_nIntervalCount;
				/// <summary>
				/// 类型
				/// </summary>
				EarthView::World::Spatial::Display::EVGradientFillStyle m_eGradientFillStyle;
			private:
				C_DISABLE_COPY( CGradientFillSymbol );
			};
		}
		}
	}
}
#endif
