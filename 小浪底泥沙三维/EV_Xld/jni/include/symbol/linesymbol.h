#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_LINESYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_LINESYMBOL_H

#include "symbol/symbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

			/// <summary>
			/// 端点样式
			/// </summary>
			enum  EVLineCapType
			{
				LCT_LINECAPTYPE_FLAT                    = 0,//平头
				LCT_LINECAPTYPE_SQUARE                  = 1,//方头
				LCT_LINECAPTYPE_ROUND                   = 2 //圆头
			};

			/// <summary>
			/// 拐点样式
			/// </summary>
			enum  EVLineJoinType
			{
				LJT_LINEJOINTYPE_BEVEL                 = 0,//平头
				LJT_LINEJOINTYPE_MITER                 = 1,//尖角
				LJT_LINEJOINTYPE_ROUND                 = 2 //圆滑
			};
			/// <summary>
			/// 线填充类，是所有线填充类的基类
			/// 提供方法如下：
			/// 获取与设置 线宽度、拐点类型、端点类型、上下偏移量
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CLineSymbol :
				public EarthView::World::Spatial::Display::CSymbol
			{
				friend class CDrawCartographicLine;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CLineSymbol();

				/// <summary>
				/// 获取线宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>线宽</returns>
				virtual ev_real64 getWidth() const;

				/// <summary>
				/// 设置线宽度
				/// </summary>
				/// <param name="dWidth">线宽度</param>
				/// <returns></returns>
				virtual ev_void setWidth(ev_real64 dWidth);

				/// <summary>
				/// 获取拐点类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>拐点类型</returns>
				virtual EarthView::World::Spatial::Display::EVLineJoinType getJoinType();

				/// <summary>
				/// 获取端点类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>端点类型</returns>
				virtual EarthView::World::Spatial::Display::EVLineCapType getCapType();

				/// <summary>
				/// 设置拐点类型
				/// </summary>
				/// <param name="nType">拐点类型</param>
				/// <returns></returns>
				virtual ev_void setJoinType(EarthView::World::Spatial::Display::EVLineJoinType nType);

				/// <summary>
				/// 设置端点类型
				/// </summary>
				/// <param name="nType">端点类型</param>
				/// <returns></returns>
				virtual ev_void setCapType(EarthView::World::Spatial::Display::EVLineCapType nType);

				/// <summary>
				/// 获取上下偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				virtual ev_real64 getOffset() const ;

				/// <summary>
				/// 设置上下偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				virtual ev_void setOffset(ev_real64 value);

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
				CLineSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				CLineSymbol();
			protected:
				/// <summary>
				/// 线宽
				/// </summary>
				ev_real64 m_dfWidth;
				/// <summary>
				/// 拐点类型
				/// </summary>
				EVLineJoinType m_enumJoinType;
				/// <summary>
				/// 端点类型
				/// </summary>
				EVLineCapType m_enumCapType;
				/// <summary>
				/// 上下偏移量
				/// 正则向上，负则向下
				/// </summary>
				ev_real64 m_dfOffset;
			private:
				C_DISABLE_COPY(CLineSymbol);
			};
		}
		}
	}
}
#endif

