#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SIMPLELINESYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SIMPLELINESYMBOL_H

#include "symbol/linesymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

			/// <summary>
			/// 简单样式线
			/// </summary>
			enum  EVSimleLineType
			{
				SLT_SimpleLineType_Solid              = 0,//实体线
				SLT_SimpleLineType_Dot                = 1,//点线
				SLT_SimpleLineType_Dash               = 2,
				SLT_SimpleLineType_DashDot            = 3,
				SLT_SimpleLineType_DashDotDot         = 4
			};
			/// <summary>
			/// 简单线类
			/// 提供方法如下：
			/// 获取与设置简单风格类型
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CSimpleLineSymbol :
				public EarthView::World::Spatial::Display::CLineSymbol
			{
				friend class CDrawSimpleLine;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSimpleLineSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CSimpleLineSymbol();

				/// <summary>
				/// 获取简单风格类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::Display::EVSimleLineType getSimpleLineType();
				
				/// <summary>
				/// 设置简单风格类型
				/// </summary>
				/// <param name="nType">类型</param>
				/// <returns></returns>
				ev_void setSimpleLineType(EarthView::World::Spatial::Display::EVSimleLineType nType);

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
				CSimpleLineSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 类型
				/// </summary>
				EVSimleLineType m_enumLineType;
			private:
				C_DISABLE_COPY( CSimpleLineSymbol );
			};
		}
		}
	}
}
#endif
