#ifndef EARTHVIEW_SPATIAL2D_DISPLAY_STATISTICSTHEME_H
#define EARTHVIEW_SPATIAL2D_DISPLAY_STATISTICSTHEME_H

#include "spatialthemeconfig.h"
#include "spatialinterface/istatisticstheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 统计专题图
				/// 提供方法如下：
				/// 获取专题图类型、添加字段值、销毁字段、销毁所有字段、获取字段总数、获取字段值
				/// 获取与设置 标题、默认符号、是否使用默认符号、背景符号、字段符号
				/// 获取与设置 统计专题图类型、饼状图尺寸方式、比例字段
				/// 深度copy专题对象、获取流、将Theme属性写入XML元素、从XML元素中恢复Theme属性
				///	判断两个Theme是否属性相同、从数据流恢复Color属性
				/// </summary>
				class EV_SPATIALTHEME_DLL CStatisticsTheme : public EarthView::World::Spatial::Theme::IStatisticsTheme
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CStatisticsTheme();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CStatisticsTheme();

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
					ev_void setCaption( _in const EVString & caption );

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
					ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;

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
					/// 添加字段值
					/// </summary>
					/// <param name="field">字段值</param>
					/// <param name="symbol">符号对象</param>
					/// <returns></returns>
					ev_void addField( _in const EVString &field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 根据字段名删除字段
					/// </summary>
					/// <param name="field">字段值</param>
					/// <returns></returns>
					ev_void deleteField( _in const EVString &field );

					/// <summary>
					/// 根据索引删除字段
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void deleteField( _in ev_uint32 index );

					/// <summary>
					/// 删除所有字段
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void deleteAllField();

					/// <summary>
					/// 获取字段总数
					/// </summary>
					/// <param name=""></param>
					/// <returns>个数</returns>
					ev_uint32 getFieldCount() const;

					/// <summary>
					/// 获取字段值
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>字段值</returns>
					EVString getFieldName( _in ev_uint32 index ) const;

					/// <summary>
					/// 移动字段到某处
					/// </summary>
					/// <param name="oldIndex">旧位置</param>
					/// <param name="newIndex">新位置</param>
					/// <returns></returns>
					ev_void moveField( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );

					/// <summary>
					/// 获取背景符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Display::ISymbol * getBackground() const;

					/// <summary>
					/// 设置背景符号
					/// </summary>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void setBackground( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 获取字段符号
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Display::ISymbol * getFieldSymbol( _in const EVString &field ) const;

					/// <summary>
					/// 获取字段符号
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Display::ISymbol * getFieldSymbol( _in ev_uint32 index) const;

					/// <summary>
					/// 设置字段符号
					/// </summary>
					/// <param name="field">字段</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void setFieldSymbol( _in const EVString &field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 设置字段符号
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void setFieldSymbol( _in ev_uint32 index, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 获取统计专题图类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>统计专题图类型</returns>
					EarthView::World::Spatial::Theme::EVStatisticsThemeType getStatisticsType() const;

					/// <summary>
					/// 设置统计专题图类型
					/// </summary>
					/// <param name="type">统计专题图类型</param>
					/// <returns></returns>
					ev_void setStatisticsType( EarthView::World::Spatial::Theme::EVStatisticsThemeType type );

					/// <summary>
					/// 获取统计专题图符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Display::ISymbol * getStatisticsSymbol() const;

					/// <summary>
					/// 获取饼状图的大小策略
					/// </summary>
					/// <param name=""></param>
					/// <returns>饼状图大小策略</returns>
					EarthView::World::Spatial::Theme::EVPieSizePolicy getPieSizePolicy() const;
					/// <summary>
					/// 设置饼状图的大小策略
					/// </summary>
					/// <param name="policy">饼状图大小策略</param>
					/// <returns></returns>
					ev_void setPieSizePolicy( _in EarthView::World::Spatial::Theme::EVPieSizePolicy policy );

					/// <summary>
					/// 获取比例字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段字符串</returns>
					EVString getProportionField() const;
					/// <summary>
					/// 设置比例字段
					/// </summary>
					/// <param name="field">字段字符串</param>
					/// <returns></returns>
					ev_void setProportionField( _in const EVString & field  );

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
					CStatisticsTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CStatisticsTheme )
				protected:
					EarthView::World::Spatial::Display::ISymbol* m_pBackground;
					EarthView::World::Spatial::Display::ISymbol* m_pStatisticsSymbol;
					EVString m_szCaption;
					EVString m_szProportionFieldName;

					EarthView::World::Spatial::Theme::EVStatisticsThemeType m_eStatisticsThemeType;
					EarthView::World::Spatial::Theme::EVPieSizePolicy m_ePieSizePolicy;

					ev_vector<EVString>*m_pVFieldName;
					ev_vector<EarthView::World::Spatial::Display::ISymbol*>*m_pVSymbol;
				};
			}
		}
	}
}
#endif


