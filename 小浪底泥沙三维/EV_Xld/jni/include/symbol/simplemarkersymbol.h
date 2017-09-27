#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SIMPLEMARKERSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SIMPLEMARKERSYMBOL_H

#include"symbol/markersymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

			/// <summary>
			/// 简单点填充样式
			/// </summary>
			enum EVSimpleMarkerType
			{
				SMT_SIMPLEMARKERTYPE_CIRCLE               = 0,//圆
				SMT_SIMPLEMARKERTYPE_SQUARE               = 1,//方形
				SMT_SIMPLEMARKERTYPE_CROSS                = 2,//十字
				SMT_SIMPLEMARKERTYPE_X                    = 3,//X
				SMT_SIMPLEMARKERTYPE_DIAMOND              = 4 //菱形
			};
			/// <summary>
			/// 简单点类
			/// 提供方法如下：
			/// 获取与设置 是否绘制外边框、外边框大小、外边框颜色、简单风格枚举值
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CSimpleMarkerSymbol :
				public EarthView::World::Spatial::Display::CMarkerSymbol
			{
				friend class CDrawSimpleMarker;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSimpleMarkerSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CSimpleMarkerSymbol();

				/// <summary>
				/// 是否绘制外边框
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回true，则使用外边框；否则不使用</returns>
				ev_bool hasOutline() const;

				/// <summary>
				/// 获取外边框大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>大小</returns>
				ev_real64 getOutlineSize() const;

				/// <summary>
				/// 获取外边框颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>外边框颜色</returns>
				const  EarthView::World::Spatial::Display::IColor* getOutlineColor() const;

				/// <summary>
				/// 设置是否开启绘制外边框
				/// </summary>
				/// <param name="hasOutline">是否绘制外边框</param>
				/// <returns></returns>
				ev_void setHasOutline(ev_bool hasOutline);

				/// <summary>
				/// 设置外边框大小
				/// </summary>
				/// <param name="size">外边框大小</param>
				/// <returns></returns>
				ev_void setOutlineSize(ev_real64 size);

				/// <summary>
				/// 设置外边框颜色
				/// </summary>
				/// <param name="outlineColor">外边框颜色</param>
				/// <returns></returns>
				ev_void setOutlineColor(const EarthView::World::Spatial::Display::IColor* outlineColor);
				
				/// <summary>
				/// 获取简单风格枚举值
				/// </summary>
				/// <param name=""></param>
				/// <returns>简单风格类型</returns>
				EarthView::World::Spatial::Display::EVSimpleMarkerType getStyle() const;

				/// <summary>
				/// 设置简单风格枚举值
				/// </summary>
				/// <param name="style">枚举值</param>
				/// <returns></returns>
				ev_void setStyle(EarthView::World::Spatial::Display::EVSimpleMarkerType style);

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
			ev_private:
				CSimpleMarkerSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 是否绘制风格外边框线
				/// 默认为false
				/// </summary>
				ev_bool m_bHasOutline;
				/// <summary>
				/// 风格外边框线大小
				/// 默认1个单位
				/// </summary>
				ev_real64 m_dfOutlineSize;
				/// <summary>
				/// 风格外边框颜色
				/// 默认为白色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pOutlineColor;
				/// <summary>
				/// 简单风格类型
				/// 默认为实心圆
				/// </summary>
				EVSimpleMarkerType m_enumSimpleType;
			private:
				C_DISABLE_COPY( CSimpleMarkerSymbol );
			};
		}
		}
	}
}
#endif
