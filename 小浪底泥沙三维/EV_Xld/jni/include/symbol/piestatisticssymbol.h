#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_PIESTATISTICSSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_PIESTATISTICSSYMBOL_H

#include "symbol/statisticssymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 饼图图表类
			/// 提供方法如下：
			/// 获取与设置是否显示外轮廓线，设置相对MaxSize的比率
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CPieStatisticsSymbol : public EarthView::World::Spatial::Display::CStatisticsSymbol
			{
				friend class CDrawPieStatistics;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CPieStatisticsSymbol();
			
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CPieStatisticsSymbol();

				/// <summary>
				/// 是否显示外轮廓线
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否显示</returns>
				ev_bool isShowOutline() const;

				/// <summary>
				/// 设置是否显示外轮廓线
				/// </summary>
				/// <param name="bShow">是否显示</param>
				/// <returns></returns>
				ev_void setShowOutline( ev_bool bShow );

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
				/// 设置相对MaxSize的比率
				/// </summary>
				/// <param name="ratio">MaxSize的比率</param>
				/// <returns></returns>
				ev_void setSizeRatio( const ev_real64 ratio);
				ev_real64 getSizeRatio();
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
				/// 相对MaxSize的比率
				/// </summary>
				ev_real64 m_dSizeRatio;
				/// <summary>
				/// 是否显示外轮廓线
				/// </summary>
				ev_bool m_bShowOutline;
			ev_private:
				CPieStatisticsSymbol( EarthView::World::Core::CNameValuePairList* pList );
			};
		}
		}
	}
}
#endif

