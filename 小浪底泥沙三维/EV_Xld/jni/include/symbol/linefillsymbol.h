#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_LINEFILLSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_LINEFILLSYMBOL_H

#include "symbol/fillsymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 线填充面类
			/// 提供方法如下：
			/// 获取与设置 旋转角度、水平偏移量X、垂直偏移量Y、线间隔大小、线风格
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CLineFillSymbol :
				public EarthView::World::Spatial::Display::CFillSymbol
			{
				friend class CDrawLineFill;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLineFillSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CLineFillSymbol();

				/// <summary>
				/// 获取旋转角度
				/// 取之范围为[-360,360]
				/// </summary>
				/// <param name=""></param>
				/// <returns>角度</returns>
				ev_real64 getAngle() const;

				/// <summary>
				/// 设置旋转角度
				/// 取之范围为[-360,360]
				/// </summary>
				/// <param name="value">角度</param>
				/// <returns></returns>
				ev_void setAngle(ev_real64 value);

				/// <summary>
				/// 获取水平偏移量X
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				ev_real64 getOffsetX() const;

				/// <summary>
				/// 设置水平偏移量X
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				ev_void setOffsetX(ev_real64 value);

				/// <summary>
				/// 获取垂直偏移量Y
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				ev_real64 getOffsetY() const;

				/// <summary>
				/// 设置垂直偏移量Y
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				ev_void setOffsetY(ev_real64 value);

				/// <summary>
				/// 获取线间隔大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>间隔大小</returns>
				ev_real64 getInterval() const;

				/// <summary>
				/// 设置线间隔大小
				/// </summary>
				/// <param name="value">间隔大小</param>
				/// <returns></returns>
				ev_void setInterval(ev_real64 value);

				/// <summary>
				/// 获取线风格
				/// </summary>
				/// <param name=""></param>
				/// <returns>线风格</returns>
				const  EarthView::World::Spatial::Display::ISymbol* getLineSymbol() const;
				EarthView::World::Spatial::Display::ISymbol* getLineSymbol();

				/// <summary>
				/// 设置线风格
				/// </summary>
				/// <param name="lineSymbol">线风格</param>
				/// <returns></returns>
				ev_void setLineSymbol(const EarthView::World::Spatial::Display::ISymbol* lineSymbol);

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
				CLineFillSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 填充的线风格对象
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol* m_pLineSymbol;
				/// <summary>
				/// 旋转角度
				/// </summary>
				ev_real64 m_dfAngle;
				/// <summary>
				/// 水平偏移量
				/// </summary>
				ev_real64 m_dfOffsetX;
				/// <summary>
				/// 垂直偏移量
				/// </summary>
				ev_real64 m_dfOffsetY;
				/// <summary>
				/// 线间隔
				/// </summary>
				ev_real64 m_dfInterval;
			private:
				C_DISABLE_COPY( CLineFillSymbol );
			};
		}
		}
	}
}
#endif

