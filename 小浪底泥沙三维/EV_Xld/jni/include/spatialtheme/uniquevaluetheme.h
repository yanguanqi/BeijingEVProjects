#ifndef EARTHVIEW_SPATIAL2D_DISPLAY_UNIQUEVALUETHEME_H
#define EARTHVIEW_SPATIAL2D_DISPLAY_UNIQUEVALUETHEME_H

#include "spatialthemeconfig.h"
#include "spatialinterface/iuniquetheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 单值专题图
				/// 提供方法如下：
				/// 获取专题图类型、添加值、移除值、移除所有值、获取值、是否包含值
				/// 获取与设置 标题、默认符号、是否使用默认符号、默认标题、字段值、指定子标题、指定符号对象
				/// 深度copy专题对象、获取流、将Theme属性写入XML元素、从XML元素中恢复Theme属性、
				/// 判断两个Theme是否属性相同、从数据流恢复Color属性
				/// </summary>
				class EV_SPATIALTHEME_DLL CUniqueValueTheme : public EarthView::World::Spatial::Theme::IUniqueTheme
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CUniqueValueTheme();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CUniqueValueTheme();

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
					/// 获取默认标题
					/// </summary>
					/// <param name=""></param>
					/// <returns>标题字符串</returns>
					EVString getDefaultCaption() const;
					/// <summary>
					/// 设置默认标题
					/// </summary>
					/// <param name="defaultCaption">标题字符串</param>
					/// <returns></returns>
					ev_void setDefaultCaption( _in const EVString &defaultCaption );

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
					/// <param name="index">子标题序列号</param>
					/// <returns>子标题字符串</returns>
					EVString getSubCaption( _in ev_uint32 index ) const;
					/// <summary>
					/// 设置指定子标题
					/// </summary>
					/// <param name="index">子标题序列号</param>
					/// <param name="subCaption">子标题字符串</param>
					/// <returns></returns>
					ev_void setSubCaption( _in ev_uint32 index,_in const EVString &subCaption );

					/// <summary>
					/// 获取指定专题图的符号对象
					/// </summary>
					/// <param name="value">专题图值</param>
					/// <returns>符号对象</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol( _in const EVString &value ) const;
					/// <summary>
					/// 获取指定专题图的符号对象
					/// </summary>
					/// <param name="index">专题图索引号</param>
					/// <returns>符号对象</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol( _in ev_int32 index ) const;
					/// <summary>
					/// 设置指定专题图的符号对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="symbol">符号对象</param>
					/// <returns></returns>
					ev_void setSymbol( _in const ev_int32 index, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 添加值
					/// </summary>
					/// <param name="value">字符串值</param>
					/// <param name="caption">标题字符串</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void addValue( _in const EVString &value, _in const EVString &caption, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// 移除值
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void removeValue( _in const ev_int32 index );
					/// <summary>
					/// 移除所有值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeAll();
					
					/// <summary>
					/// 获取值的总数
					/// </summary>
					/// <param name=""></param>
					/// <returns>个数</returns>
					ev_uint32 getValueCount() const;
					/// <summary>
					/// 获取值
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>字符串值</returns>
					EVString getValue( _in ev_uint32 index ) const;

					/// <summary>
					/// 是否包含值
					/// </summary>
					/// <param name="value">字符串值</param>
					/// <returns>bool值</returns>
					ev_bool containsValue( _in const EVString &value ) const;
					/// <summary>
					/// 判断两个Theme是否属性相同
					/// </summary>
					/// <param name="theme">Theme对象</param>
					/// <returns></returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);//20130220,xbr
				ev_internal:
					/// <summary>
					/// 从数据流恢复Color属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				ev_private:
					CUniqueValueTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CUniqueValueTheme )

					ev_bool m_bUseDefaultSymbol;
					EarthView::World::Spatial::Display::ISymbol *m_pDefaultSymbol;
					EVString m_szDefalutCaption;
					EVString m_szCaption;
					EVString m_szFieldName;
					ev_vector<EarthView::World::Spatial::Display::ISymbol*>*m_vSymbol;
					ev_vector<EVString>*m_vLabel;
					ev_vector<EVString>*m_vValue;
				};
			}
		}
	}
}
#endif


