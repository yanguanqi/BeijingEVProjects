#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_MARKERFILLSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_MARKERFILLSYMBOL_H

#include "symbol/fillsymbol.h"
#include "symbol/markerfillsymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

			/// <summary>
			/// 面填充样式
			/// </summary>
			enum EVMarkerFillStyle
			{
				MFS_MarkerFillStyle_Grid                  = 0,//格网样式
				MFS_MarkerFillStyle_Single                = 1,//单个样式
				MFS_MarkerFillStyle_Random                = 2 //随机样式
			};
			/// <summary>
			/// 点填充面类
			/// 提供方法如下：
			/// 获取与设置 水平偏移量X、垂直偏移量Y、点水平与垂直间隔大小、填充风格、填充的点风格对象
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CMarkerFillSymbol :
				public EarthView::World::Spatial::Display::CFillSymbol
			{
				friend class CDrawMarkerFill;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMarkerFillSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMarkerFillSymbol();

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
				/// 设置点水平间隔大小
				/// </summary>
				/// <param name="interval">间隔大小</param>
				/// <returns></returns>
				ev_void setIntervalX(ev_real64 interval);

				/// <summary>
				/// 获取点水平间隔大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>间隔大小</returns>
				ev_real64 getIntervalX() const;

				/// <summary>
				/// 设置点垂直间隔大小
				/// </summary>
				/// <param name="interval">间隔大小</param>
				/// <returns></returns>
				ev_void setIntervalY(ev_real64 interval);

				/// <summary>
				/// 获取点垂直间隔大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>间隔大小</returns>
				ev_real64 getIntervalY() const;

				/// <summary>
				/// 获取填充风格
				/// </summary>
				/// <param name=""></param>
				/// <returns>风格</returns>
				EarthView::World::Spatial::Display::EVMarkerFillStyle getMarkerFillStyle() const;

				/// <summary>
				/// 设置填充风格
				/// </summary>
				/// <param name="nType">填充风格</param>
				/// <returns></returns>
				ev_void setMarkerFillStyle(EarthView::World::Spatial::Display::EVMarkerFillStyle nType);

				/// <summary>
				/// 获取填充的点风格对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>点风格对象</returns>
				const  EarthView::World::Spatial::Display::ISymbol* getMarkerSymbol() const;
				EarthView::World::Spatial::Display::ISymbol* getMarkerSymbol();

				/// <summary>
				/// 设置填充的点风格
				/// </summary>
				/// <param name="symbol">点风格</param>
				/// <returns></returns>
				ev_void setMarkerSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

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
				CMarkerFillSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 填充的点风格对象
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol* m_pMarkerSymbol;
				/// <summary>
				/// 点风格填充面风格类型
				/// </summary>
				EarthView::World::Spatial::Display::EVMarkerFillStyle m_eMarkerFillType;
				/// <summary>
				/// 水平偏移量
				/// </summary>
				ev_real64 m_dfOffsetX;
				/// <summary>
				/// 垂直偏移量
				/// </summary>
				ev_real64 m_dfOffsetY;
				/// <summary>
				/// 水平偏间隔
				/// </summary>
				ev_real64 m_dfIntervalX;
				/// <summary>
				/// 垂直偏间隔
				/// </summary>
				ev_real64 m_dfIntervalY;
			private:
				C_DISABLE_COPY( CMarkerFillSymbol );
			};
		}
		}
	}
}
#endif

