#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_BARSTATISTICSSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_BARSTATISTICSSYMBOL_H

#include "symbol/statisticssymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 条状图表或者柱状图表类
			/// 提供方法如下：
			/// 获取与设置 坐标系统符号、是否显示坐标系统、间隔值、宽度、柱子是否竖直
			/// 获取符号类型、获取流、获取SLD
			///	深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			///	从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CBarStatisticsSymbol : 
				public EarthView::World::Spatial::Display::CStatisticsSymbol
			{
				friend class CDrawBarStatistics;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CBarStatisticsSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CBarStatisticsSymbol();

				/// <summary>
				/// 获取是否显示坐标系统
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回值是true,则显示坐标系统；否则不显示</returns>
				ev_bool isShowAxes();

				/// <summary>
				/// 设置是否显示坐标系统
				/// </summary>
				/// <param name="bShow">是否显示坐标系统</param>
				/// <returns></returns>
				ev_void setShowAxes( ev_bool bShow );

				/// <summary>
				/// 获取坐标系统符号
				/// </summary>
				/// <param name=""></param>
				/// <returns>坐标系统</returns>
				EarthView::World::Spatial::Display::ISymbol*getAxesSymbol();

				/// <summary>
				/// 设置坐标系统符号
				/// </summary>
				/// <param name="symbol">坐标系统符号</param>
				/// <returns></returns>
				ev_void setAxesSymbol( const EarthView::World::Spatial::Display::ISymbol*symbol );

				/// <summary>
				/// 获取间隔值
				/// </summary>
				/// <param name=""></param>
				/// <returns>间隔值</returns>
				ev_real64 getSpacing();

				/// <summary>
				/// 设置间隔值
				/// </summary>
				/// <param name="dSpacing">间隔值</param>
				/// <returns></returns>
				ev_void setSpacing( ev_real64 dSpacing );

				/// <summary>
				/// 获取柱子的宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>柱子的宽度</returns>
				ev_real64 getWidth();

				/// <summary>
				/// 设置柱子的宽度
				/// </summary>
				/// <param name="dWidth">柱子的宽度</param>
				/// <returns></returns>
				ev_void setWidth( ev_real64 dWidth );

				/// <summary>
				/// 获取柱子是否竖直
				/// </summary>
				/// <param name=""></param>
				/// <returns>柱子是否竖直</returns>
				ev_bool isVerticalBar();

				/// <summary>
				/// 设置柱子是否竖直
				/// </summary>
				/// <param name="bVerticalBar">柱子是否竖直</param>
				/// <returns></returns>
				ev_void setVerticalBar( ev_bool bVerticalBar );

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
				CBarStatisticsSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 是否显示坐标轴
				/// </summary>
				ev_bool m_bShowAxes;
				/// <summary>
				/// 坐标系统风格
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol*m_pAxesSymbol;
				/// <summary>
				/// 间隔值
				/// </summary>
				ev_real64 m_dSpacing;
				/// <summary>
				/// 宽度
				/// </summary>
				ev_real64 m_dWidth;
				/// <summary>
				/// 柱子是否竖直
				/// </summary>
				ev_bool m_bVerticalBar;
			private:
				C_DISABLE_COPY( CBarStatisticsSymbol );
			};
		}
		}
	}
}
#endif
