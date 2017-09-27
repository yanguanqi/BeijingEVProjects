#ifndef EARTHVIEW_SPATIAL2D_DISPLAY_RANGETHEME_H
#define EARTHVIEW_SPATIAL2D_DISPLAY_RANGETHEME_H

#include "spatialthemeconfig.h"
#include "spatialinterface/irangetheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 范围专题图
				/// 提供方法如下：
				/// 获取专题图类型、添加间断点、获取间断点个数、移除某一间断点、移除所有间断点
				/// 获取与设置 标题、默认符号、是否使用默认符号、字段值、指定子标题
				/// 获取与设置 指定专题图的符号对象、间断点值、最小值、最大值
				/// 深度copy专题对象、获取流、将Theme属性写入XML元素、从XML元素中恢复Theme属性
				/// 判断两个Theme是否属性相同、从数据流恢复Color属性
				/// </summary>
				class EV_SPATIALTHEME_DLL CRangeTheme : public EarthView::World::Spatial::Theme::IRangeTheme
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CRangeTheme();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CRangeTheme();

				public:
					/// <summary>
					/// 获取专题图类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>专题图类型</returns>
					EarthView::World::Spatial::Theme::EVThemeType getType() const;

					/// <summary>
					/// 获取标题
					/// </summary>
					/// <param name=""></param>
					/// <returns>标题字符串</returns>
					 EVString getCaption() const;

					/// <summary>
					/// 设置标题
					/// </summary>
					/// <param name="caption">标题字符串</param>
					/// <returns></returns>
					ev_void setCaption( _in const EVString &caption );

					/// <summary>
					/// 获取是否使用默认符号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool useDefaultSymbol() const;

					/// <summary>
					/// 设置是否使用默认符号
					/// </summary>
					/// <param name="usable">bool值</param>
					/// <returns></returns>
					ev_void setUseDefaultSymbol( _in ev_bool usable);

					/// <summary>
					/// 获取默认符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const;

					/// <summary>
					/// 设置默认符号
					/// </summary>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void setDefaultSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol);
			
					/// <summary>
					/// 深度copy专题对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>专题对象</returns>
					EarthView::World::Spatial::Theme::ITheme * clone() const;

					/// <summary>
					/// 获取流
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将Theme属性写入XML元素
					/// </summary>
					/// <param name="xml">XML字符串</param>
					/// <returns></returns>
					EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 从XML元素中恢复Theme属性
					/// </summary>
					/// <param name="xml">XML字符串</param>
					/// <returns></returns>
					ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 获取字段值
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段值</returns>
					EVString getFieldString() const;

					/// <summary>
					/// 设置字段值
					/// </summary>
					/// <param name="field">字段值</param>
					/// <returns></returns>
					ev_void setFieldString( _in const EVString &field );

					/// <summary>
					/// 获取指定子标题
					/// </summary>
					/// <param name="value">  在一个范围中的某个值 </param>
					/// <returns>子标题字符串</returns>
					EVString getSubCaption( _in ev_real64 value ) const;

					/// <summary>
					/// 设置指定子标题
					/// </summary>
					/// <param name="value">  在一个范围中的某个值 </param>
					/// <param name="subCaption">子标题字符串</param>
					/// <returns></returns>
					ev_void setSubCaption(  _in ev_real64 value,_in const EVString &subCaption );

					/// <summary>
					/// 获取指定子标题
					/// </summary>
					/// <param name="index">子标题序列号</param>
					/// <returns>子标题字符串</returns>
					EVString getSubCaption( _in ev_uint32 index ) const;

					/// <summary>
					/// 设置指定子标题
					/// </summary>
					/// <param name="index">子标题序列号</param>
					/// <param name="subCaption">子标题字符串</param>
					/// <returns></returns>
					ev_void setSubCaption(  _in ev_uint32 index ,_in const EVString &subCaption );

					/// <summary>
					/// 获取指定专题图的符号对象
					/// </summary>
					/// <param name="value">专题图值</param>
					/// <returns>符号对象</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol( _in ev_real64 value ) const;

					/// <summary>
					/// 获取指定专题图的符号对象
					/// </summary>
					/// <param name="index">专题图索引号</param>
					/// <returns>符号对象</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol( _in ev_uint32 index ) const;

					/// <summary>
					/// 设置指定专题图的符号对象
					/// </summary>
					/// <param name="value">专题图值</param>
					/// <param name="symbol">符号对象</param>
					/// <returns></returns>
					ev_void setSymbol( _in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 添加间断点
					/// </summary>
					/// <param name="value">间断点值</param>
					/// <param name="subCaption">间断点子标题</param>
					/// <param name="symbol">间断点符号</param>
					/// <returns></returns>
					ev_void addBreak( _in ev_real64 value, const EVString& subCaption,_in const EarthView::World::Spatial::Display::ISymbol *symbol);
					
					/// <summary>
					/// 设置间断点值
					/// </summary>
					/// <param name="index">间断点索引</param>
					/// <param name="breakValue">间断点值</param>
					/// <returns></returns>
					ev_void setBreakValue(_in ev_uint32 index,_in ev_real64 breakValue);

					/// <summary>
					/// 获取间断点值
					/// </summary>
					/// <param name="index">间断点索引</param>
					/// <returns>间断点值</returns>
					ev_real64 getBreakValue(_in ev_uint32 index ) const;

					/// <summary>
					/// 获取间断点个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>个数</returns>
					ev_uint32 getBreakCount() const;

					/// <summary>
					/// 移除某一间断点
					/// </summary>
					/// <param name="value">间断点值</param>
					/// <returns></returns>
					ev_void removeBreak( _in ev_real64 value );

					/// <summary>
					/// 移除某一间断点
					/// </summary>
					/// <param name="index">间断点索引</param>
					/// <returns></returns>
					ev_void removeBreak( _in ev_uint32 index );

					/// <summary>
					/// 移除所有间断点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeAll();

					/// <summary>
					/// 获取最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大值</returns>
					ev_real64 getMaxValue() const;

					/// <summary>
					/// 获取最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小值</returns>
					ev_real64 getMinValue() const;

					/// <summary>
					/// 设置最小值
					/// </summary>
					/// <param name="minValue">最小值</param>
					/// <returns></returns>
					ev_void setMinValue( _in ev_real64 minValue );

					/// <summary>
					/// 设置最大值
					/// </summary>
					/// <param name="maxValue">最大值</param>
					/// <returns></returns>
					ev_void setMaxValue( _in ev_real64 maxValue );

					/// <summary>
					/// 判断两个Theme是否属性相同
					/// </summary>
					/// <param name="theme">Theme对象</param>
					/// <returns></returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);//20130220,xbr
				ev_private:
					CRangeTheme( EarthView::World::Core::CNameValuePairList *pList );
				ev_internal:
					/// <summary>
					/// 从数据流恢复Color属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					C_DISABLE_COPY( CRangeTheme );
				protected:
					ev_bool m_bUseDefaultSymbol;
					EarthView::World::Spatial::Display::ISymbol *m_pDefaultSymbol;
					EVString m_szCaption;
					EVString m_szFieldName;
					ev_map<ev_real64,EVString> *m_mapLabel;
					ev_map<ev_real64,EarthView::World::Spatial::Display::ISymbol*> *m_pSymbolMap;
					ev_real64 m_dMaxValue;
					ev_real64 m_dMinValue;
					//ev_set<ev_real64> *m_pBreakValueSet;
				};
			}
		}
	}
}

#endif


