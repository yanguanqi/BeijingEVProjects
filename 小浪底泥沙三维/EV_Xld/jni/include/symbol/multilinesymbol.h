#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_MULTILINESYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_MULTILINESYMBOL_H

#include "symbol/multisymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 多图层线风格类
			/// 提供方法如下：
			/// 获取与设置 线宽度、X轴与Y轴偏移量
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CMultiLineSymbol :
				public EarthView::World::Spatial::Display::CMultiSymbol
			{
				friend class CSymbolRenderer;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMultiLineSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMultiLineSymbol();

				/// <summary>
				/// 获取线宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>线宽</returns>
				ev_real64 getWidth() const;

				/// <summary>
				/// 设置线宽度
				/// </summary>
				/// <param name="value">线宽度</param>
				/// <returns></returns>
				ev_void setWidth(ev_real64 value);

				/// <summary>
				/// 获取X轴偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				ev_real64 getOffsetX();

				/// <summary>
				/// 设置X轴偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				ev_void setOffsetX(ev_real64 value);

				/// <summary>
				/// 获取Y轴偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				ev_real64 getOffsetY();

				/// <summary>
				/// 设置Y轴偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				ev_void setOffsetY(ev_real64 value);
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
				virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

				/// <summary>
				/// 获取SLD
				/// </summary>
				/// <param name=""></param>
				/// <returns>SLD字符串</returns>
				virtual EVString toSLD() const;

				/// <summary>
				/// 从XML元素中恢复Symbol属性
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 将Symbol属性写入XML元素
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				/// <summary>
				/// 判断两个Symbol是否属性相同
				/// </summary>
				/// <param name="pSymbol">Symbol对象</param>
				/// <returns></returns>
				virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);
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
				CMultiLineSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// X轴偏移量
				/// </summary>
				ev_real64 m_dOffsetX;
				/// <summary>
				/// Y轴偏移量
				/// </summary>
				ev_real64 m_dOffsetY;
			private:
				C_DISABLE_COPY( CMultiLineSymbol );
			};
		}
		}
	}
}
#endif
