#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ARROWMARKERSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ARROWMARKERSYMBOL_H

#include "symbol/markersymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

			/// <summary>
			/// 箭头点类型
			/// </summary>
			enum  EVArrowMarkerType
			{
				AMT_ARROWMARKER_SOLID               = 0,//实心
				AMT_ARROWMARKER_BOUND               = 1,//空心
				AMT_ARROWMARKER_SPINE               = 2 //空心开口
			};
			/// <summary>
			/// 箭头点风格类
			/// 提供方法如下：
			/// 获取与设置箭头风格长度、宽度、大小、枚举类型，
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CArrowMarkerSymbol :
				public EarthView::World::Spatial::Display::CMarkerSymbol
			{
				friend class CDrawArrowMarker;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CArrowMarkerSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CArrowMarkerSymbol();

				/// <summary>
				/// 获取箭头风格长度
				/// 一般为顶点到底边垂线长度
				/// </summary>
				/// <param name=""></param>
				/// <returns>长度</returns>
				ev_real64 getLength() const;

				/// <summary>
				/// 设置箭头风格长度
				/// 一般为顶点到底边垂线长度
				/// </summary>
				/// <param name="value">长度</param>
				/// <returns></returns>
				ev_void setLength(ev_real64 value);

				/// <summary>
				/// 获取箭头风格宽度
				/// 一般指三角形底边长度
				/// </summary>
				/// <param name=""></param>
				/// <returns>宽度</returns>
				ev_real64 getWidth() const;

				/// <summary>
				/// 设置箭头风格宽度
				/// 一般指三角形底边长度
				/// </summary>
				/// <param name="value">宽度</param>
				/// <returns></returns>
				ev_void setWidth(ev_real64 value);

				/// <summary>
				/// 获取风格大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>大小</returns>
				ev_real64 getSize() const;

				/// <summary>
				/// 设置风格大小
				/// </summary>
				/// <param name="size">大小</param>
				/// <returns></returns>
				ev_void setSize(ev_real64 size);

				/// <summary>
				/// 获取箭头风格枚举类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>箭头类型</returns>
				EarthView::World::Spatial::Display::EVArrowMarkerType getStyle() const;

				/// <summary>
				/// 设置箭头风格枚举类型
				/// </summary>
				/// <param name="type">箭头类型</param>
				/// <returns></returns>
				ev_void setStyle(EarthView::World::Spatial::Display::EVArrowMarkerType type);

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
				CArrowMarkerSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 长度
				/// </summary>
				ev_real64 m_dfLength;
				/// <summary>
				/// 箭头点类型
				/// </summary>
				EVArrowMarkerType m_enumArrowType;
			private:
				C_DISABLE_COPY( CArrowMarkerSymbol );
			};
		}
		}
	}
}
#endif

