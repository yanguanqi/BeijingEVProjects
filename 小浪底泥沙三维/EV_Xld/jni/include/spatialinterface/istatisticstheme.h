#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISTATISTICSTHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISTATISTICSTHEME_H

#include "itheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				enum EVStatisticsThemeType
				{
					STT_Unkown = 0,
					STT_Pie = 1,
					STT_Bar = 2,
					STT_Stacked = 3,
					STT_3DPie = 4,
					STT_3DBar = 5,
					STT_3DStacked = 6
				};
				enum EVPieSizePolicy
				{
					PSP_FixSize = 0,
					PSP_AdaptToSum = 1,
					PSP_AdaptToField = 2
				};
				/// <summary>
				/// 统计类型专题图基类
				/// </summary>
				class EV_INTERFACE_DLL IStatisticsTheme : public EarthView::World::Spatial::Theme::ITheme
				{
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IStatisticsTheme();
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~IStatisticsTheme();

				public:
					/// <summary>
					/// 添加字段
					/// </summary>
					/// <param name="field">字段</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void addField( _in const EVString &field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// 删除字段
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns></returns>
					virtual ev_void deleteField( _in const EVString &field );
					/// <summary>
					/// 删除所有字段
					/// </summary>
					/// <returns></returns>
					virtual ev_void deleteAllField();
					/// <summary>
					/// 获取字段个数
					/// </summary>
					/// <returns>返回字段个数</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					///根据索引获取字段名
					/// </summary>
					/// <param name="index">索引位置</param>
					/// <returns>返回字段名</returns>
					virtual EVString getFieldName( _in ev_uint32 index ) const;
					/// <summary>
					///移动字段位置
					/// </summary>
					/// <param name="oldIndex">原始位置</param>
					/// <param name="newIndex">目标位置</param>
					/// <returns></returns>
					virtual ev_void moveField( _in ev_uint32 oldIndex, _in ev_uint32 newIndex );
					/// <summary>
					///获取背景符号
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getBackground() const;
					/*virtual EarthView::World::Spatial::Display::ISymbol * getBackground();*/
					/// <summary>
					///设置背景符号
					/// </summary>
					/// <param name="symbol">背景符号</param>
					/// <returns></returns>
					virtual ev_void setBackground( _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					///获取指定字段符号
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFieldSymbol( _in const EVString &field ) const;
					/// <summary>
					///获取指定字段符号
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getFieldSymbol( _in const EVString &field );
					/// <summary>
					///设置指定字段符号
					/// </summary>
					/// <param name="field">字段</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void setFieldSymbol( _in const EVString &field, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					///获取统计类型
					/// </summary>
					/// <returns>返回统计类型</returns>
					virtual EarthView::World::Spatial::Theme::EVStatisticsThemeType getStatisticsType() const;
					/// <summary>
					///设置统计类型
					/// </summary>
					/// <param name="type">类型</param>
					/// <returns></returns>
					virtual ev_void setStatisticsType( EarthView::World::Spatial::Theme::EVStatisticsThemeType type );
					/// <summary>
					///获取统计符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getStatisticsSymbol();
					/// <summary>
					///获取饼图大小策略
					/// </summary>
					/// <param name=""></param>
					/// <returns>饼图大小策略</returns>
					virtual EarthView::World::Spatial::Theme::EVPieSizePolicy getPieSizePolicy() const;
					/// <summary>
					///设置饼图大小策略
					/// </summary>
					/// <param name="policy">饼图大小策略</param>
					/// <returns></returns>
					virtual ev_void setPieSizePolicy( _in EarthView::World::Spatial::Theme::EVPieSizePolicy policy );
					/// <summary>
					///获取比例字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段名</returns>
					virtual EVString getProportionField() const;
					/// <summary>
					///设置比例字段
					/// </summary>
					/// <param name="field">比例字段</param>
					/// <returns></returns>
					virtual ev_void setProportionField( _in const EVString & field  );

				ev_private:
					IStatisticsTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IStatisticsTheme )
				};
			}
		}
	}
}
#endif
