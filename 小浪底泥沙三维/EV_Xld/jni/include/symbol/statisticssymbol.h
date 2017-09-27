#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_STATISTICSSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_STATISTICSSYMBOL_H

#include "symbol/symbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			struct tagStatisticsDisplay
			{
				EarthView::World::Spatial::Display::ISymbol*pSymbol;
				ev_real64 dValue;
			};
			/// <summary>
			/// 图表基类
			/// 提供方法如下：
			/// 获取与设置 是否显示3D效果、厚度、倾斜度、外边框、统计的最大值、指定索引处的值与风格、最大尺寸
			/// 获取风格的个数、增加一个风格、删除指定索引处的风格、清空所有的风格、移动风格到新的索引处
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CStatisticsSymbol 
				: public EarthView::World::Spatial::Display::CSymbol
			{			
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStatisticsSymbol();

				/// <summary>
				/// 获取是否显示3D效果
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否显示3D</returns>
				ev_bool isDisplay3D();

				/// <summary>
				/// 设置是否显示3D效果
				/// </summary>
				/// <param name="b3D">是否显示3D</param>
				/// <returns></returns>
				ev_void setDisplay3D( ev_bool b3D );

				/// <summary>
				/// 获取厚度
				/// </summary>
				/// <param name=""></param>
				/// <returns>厚度</returns>
				ev_real64 getThickness();

				/// <summary>
				/// 设置厚度
				/// </summary>
				/// <param name="dThickness">厚度</param>
				/// <returns></returns>
				ev_void setThickness( ev_real64 dThickness );

				/// <summary>
				/// 获取倾斜度
				/// </summary>
				/// <param name=""></param>
				/// <returns>倾斜度</returns>
				ev_int32 getTilt();

				/// <summary>
				/// 设置倾斜度
				/// </summary>
				/// <param name="nTilt">倾斜度</param>
				/// <returns></returns>
				ev_void setTilt( ev_int32 nTilt );

				/// <summary>
				/// 获取外边框
				/// </summary>
				/// <param name=""></param>
				/// <returns>外边框</returns>
				EarthView::World::Spatial::Display::ISymbol*getOutline() const;

				/// <summary>
				/// 设置外边框
				/// </summary>
				/// <param name="pSymbol">外边框</param>
				/// <returns></returns>
				ev_void setOutline( const EarthView::World::Spatial::Display::ISymbol*pSymbol );

				/// <summary>
				/// 获取统计的最大值
				/// </summary>
				/// <param name=""></param>
				/// <returns>统计的最大值</returns>
				ev_real64 getMaxValue();

				/// <summary>
				/// 设置统计的最大值
				/// </summary>
				/// <param name="dMaxValue">统计的最大值</param>
				/// <returns></returns>
				ev_void setMaxValue( ev_real64 dMaxValue );

				/// <summary>
				/// 获取指定索引处的值
				/// </summary>
				/// <param name="index">指定索引</param>
				/// <returns>指定索引处的值</returns>
				ev_real64 getValue( ev_int32 index );

				/// <summary>
				/// 设置指定索引处的值
				/// </summary>
				/// <param name="index">指定索引</param>
				/// <param name="value">统计值</param>
				/// <returns></returns>
				ev_void setValue( ev_int32 index, ev_real64 value );

				/// <summary>
				/// 获取风格的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>风格的个数</returns>
				ev_int32 getSymbolCount() const;

				/// <summary>
				/// 获取指定索引处的风格
				/// </summary>
				/// <param name="index">指定索引</param>
				/// <returns>风格</returns>
				EarthView::World::Spatial::Display::ISymbol*getSymbol( ev_int32 index );

				/// <summary>
				/// 设置指定索引处的风格
				/// </summary>
				/// <param name="index">指定索引</param>
				/// <param name="symbol">风格</param>
				/// <returns></returns>
				ev_void setSymbol( ev_int32 index, const EarthView::World::Spatial::Display::ISymbol*symbol );

				/// <summary>
				/// 增加一个风格
				/// </summary>
				/// <param name="symbol">风格</param>
				/// <returns></returns>
				ev_void addSymbol( const EarthView::World::Spatial::Display::ISymbol*symbol );
				ev_void addSymbol( const EarthView::World::Spatial::Display::ISymbol*pSymbol,const ev_real64 value);
				/// <summary>
				/// 删除指定索引处的风格
				/// </summary>
				/// <param name="index">指定索引</param>
				/// <returns></returns>
				ev_void deleteSymbol( ev_int32 index );

				/// <summary>
				/// 清空所有的风格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clearSymbols();
				
				/// <summary>
				/// 移动风格到新的索引处
				/// </summary>
				/// <param name="fromIndex">原索引</param>
				/// <param name="toIndex">新索引</param>
				/// <returns></returns>
				ev_bool moveSymbol( ev_int32 fromIndex, ev_int32 toIndex );

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
				/// 获取最大尺寸
				/// </summary>
				/// <param name=""></param>
				/// <returns>最大尺寸</returns>
				ev_real64 getMaxSize() const;

				/// <summary>
				/// 设置最大尺寸
				/// </summary>
				/// <param name="">最大尺寸</param>
				/// <returns></returns>
				ev_void setMaxSize(ev_real64 dMaxSize);
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
				CStatisticsSymbol();

				/// <summary>
				/// 是否显示3D效果
				/// </summary>
				ev_bool m_bDisplay3D;
				///// <summary>
				/// 厚度
				/// </summary>
				ev_real64 m_dThickness;
				///// <summary>
				/// 倾斜度
				/// </summary>
				ev_int32 m_nTilt;
				///// <summary>
				/// 外边框
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol*m_pOutline;
				///// <summary>
				/// 最大值
				/// </summary>
				ev_real64 m_dMaxValue;
				///// <summary>
				/// 尺寸最大值
				/// </summary>
				ev_real64 m_dMaxSize;
				/// <summary>
				/// 风格值列表
				/// </summary>
				ev_vector<tagStatisticsDisplay*> m_vecStatisticsDisplay;
			ev_private:
				CStatisticsSymbol( EarthView::World::Core::CNameValuePairList* pList );
			};
		}
		}
	}
}
#endif
