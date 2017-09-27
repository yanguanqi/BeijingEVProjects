#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_STACKEDSTATISTICSSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_STACKEDSTATISTICSSYMBOL_H

#include "symbol/statisticssymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 堆叠图类
			/// 提供方法如下：
			/// 获取与设置 宽度、柱子是否竖直、是否显示外轮廓线、大小是否被锁定
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CStackedStatisticsSymbol :
				public EarthView::World::Spatial::Display::CStatisticsSymbol
			{
				friend class CDrawStackedStatistics;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStackedStatisticsSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStackedStatisticsSymbol();

				/// <summary>
				/// 获取大小是否被锁定
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否被锁定</returns>
				ev_bool isSizeFixed();

				/// <summary>
				/// 设置大小是否被锁定
				/// </summary>
				/// <param name="bFixed">是否被锁定</param>
				/// <returns></returns>
				ev_void setSizeFixed( ev_bool bFixed );

				/// <summary>
				/// 获取是否显示外轮廓线
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否显示外轮廓线</returns>
				ev_bool isShowOutline() const;

				/// <summary>
				/// 设置是否显示外轮廓线
				/// </summary>
				/// <param name="bShow">是否显示外轮廓线</param>
				/// <returns></returns>
				ev_void setShowOutline( ev_bool bShow );

				/// <summary>
				/// 柱子是否竖直
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否竖直</returns>
				ev_bool isVerticalBar();

				/// <summary>
				/// 设置柱子是否竖直
				/// </summary>
				/// <param name="bVertical">是否竖直</param>
				/// <returns></returns>
				ev_void setVerticalBar( ev_bool bVertical );

				/// <summary>
				/// 获取宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>宽度</returns>
				ev_real64 getWidth();

				/// <summary>
				/// 设置宽度
				/// </summary>
				/// <param name="dWidth">宽度</param>
				/// <returns></returns>
				ev_void setWidth( ev_real64 dWidth );

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
			protected:
				/// <summary>
				/// 大小是否锁定
				/// </summary>
				ev_bool m_bSizeFixed;
				/// <summary>
				/// 是否竖直
				/// </summary>
				ev_bool m_bVerticalBar;
				/// <summary>
				/// 宽度
				/// </summary>
				ev_real64 m_dWidth;
				/// <summary>
				/// 是否显示外边框
				/// </summary>
				ev_bool m_bShowOutline;
			ev_private:
				CStackedStatisticsSymbol( EarthView::World::Core::CNameValuePairList* pList );
			};
		}
		}
	}
}
#endif
