#ifndef EARTHVIEW_SPATIAL_THEME_STATISTIC3DSTHEME_H
#define EARTHVIEW_SPATIAL_THEME_STATISTIC3DSTHEME_H

#include "spatialthemeconfig.h"
#include "spatialinterface/istatisticstheme.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				/// <summary>
				/// 三维统计专题图基类
				/// </summary>
				class EV_SPATIALTHEME_DLL CStatistics3DTheme : public EarthView::World::Spatial::Theme::IStatisticsTheme
				{
				public:

					/// <summary>
					/// 符号大小的策略
					/// </summary>
					enum EVStatistics3DSymbolSizePolicy
					{
						SSSP_FixSize,
						SSSP_AdaptToSum,
						SSSP_AdaptToField
					};
					
					/// <summary>
					/// 字段值的策略
					/// </summary>
					enum EVStatisticsFieldValuePolicy
					{
						SFVP_NormalValue,
						SFVP_LogValue,
						SFVP_SqrtValue
					};

ev_private:

					/// <summary>
					/// 封装构造函数
					/// </summary>
					/// <param name="pList">键值对</param>
					/// <returns></returns>
					CStatistics3DTheme(_in EarthView::World::Core::CNameValuePairList* pList);
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CStatistics3DTheme();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CStatistics3DTheme();
				public:

					/// <summary>
					/// 获取专题图类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>专题图类型</returns>
					EarthView::World::Spatial::Theme::EVThemeType getType() const;

					/// <summary>
					/// 深度copy专题对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>专题对象</returns>
					EarthView::World::Spatial::Theme::ITheme * clone() const;

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
					ev_void addField( _in const EVString& field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );

					/// <summary>
					/// 根据字段名删除字段
					/// </summary>
					/// <param name="field">字段值</param>
					/// <returns></returns>
					ev_void deleteField( _in const EVString& field );

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
					/// </summary>w
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
					/// 当符合大小策略为SSSP_AdaptToField时，设置字段名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段名</returns>
					EVString getAdaptFieldName() const;

					/// <summary>
					/// 当符号大小策略为SSSP_AdaptToField时，获取字段名称
					/// </summary>
					/// <param name="name">字段名</param>
					/// <returns></returns>
					ev_void setAdaptFieldName(const EVString& name);

					/// <summary>
					/// 获取统计图整体符号的大小策略
					/// </summary>
					/// <param name=""></param>
					/// <returns>饼状图大小策略</returns>
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy getSymbolSizePolicy() const;
					
					/// <summary>
					/// 设置统计图整体符号的大小策略
					/// </summary>
					/// <param name="policy">饼状图大小策略</param>
					/// <returns></returns>
					ev_void setSymbolSizePolicy( _in EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy policy );

					/// <summary>
					/// 比较主题图
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns>如果返回true，说明两者相等，否则两者不等</returns>
					virtual ev_bool equals( const EarthView::World::Spatial::Theme::ITheme* theme );

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
					/// <returns>如果返回true，则使用，否则不使用</returns>
					ev_bool useDefaultSymbol() const;

					/// <summary>
					/// 设置是否使用默认符号
					/// </summary>
					/// <param name="usable">bool值</param>
					/// <returns></returns>
					ev_void setUseDefaultSymbol( _in ev_bool usable);

					/// <summary>
					/// 获取专题统计图的字段值处理策略
					/// </summary>
					/// <param name=""></param>
					/// <returns>字段值处理策略</returns>
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy getFieldValuePolicy() const;

					/// <summary>
					/// 设置专题统计图的字段值处理策略
					/// </summary>
					/// <param name="policy">字段值处理策略</param>
					/// <returns></returns>
					ev_void setFieldValuePolicy ( EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy policy );

					/// <summary>
					/// 写入流
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;

ev_internal:

					/// <summary>
					/// 从流恢复
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					C_DISABLE_COPY( CStatistics3DTheme )
				protected:
					EarthView::World::Spatial::Display::ISymbol* m_pBackground;
					EarthView::World::Spatial::Display::ISymbol* m_pStatisticsSymbol;

					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatistics3DSymbolSizePolicy m_SymbolSizePolicy;
					EarthView::World::Spatial::Theme::CStatistics3DTheme::EVStatisticsFieldValuePolicy m_eFieldValuePolicy;
					EarthView::World::Spatial::Theme::EVStatisticsThemeType m_eStatisticsThemeType;

					ev_vector<EVString> mVFieldName;
					ev_vector<EarthView::World::Spatial::Display::ISymbol*> mVSymbol;

					EVString mAdaptFieldName;
				};
			}
		}
	}
}
#endif
