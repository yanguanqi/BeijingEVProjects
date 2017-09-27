#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IUNIQUETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IUNIQUETHEME_H

#include "itheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 唯一值专题图基类
				/// </summary>
				class EV_INTERFACE_DLL IUniqueTheme :
					public EarthView::World::Spatial::Theme::ITheme
				{
				public:		
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~IUniqueTheme();

				public:
					/// <summary>
					/// 获取字段名
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段名</returns>
					virtual EVString getFieldString() const;
					/// <summary>
					/// 设置字段
					/// </summary>
					/// <param name="field">字段</param>
					/// <returns></returns>
					virtual ev_void setFieldString( _in const EVString &field );
					/// <summary>
					/// 获取index索引处的标题
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>返回标题</returns>
					virtual EVString getSubCaption( _in ev_uint32 index ) const;
					/// <summary>
					/// 设置指定索引处标题
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="subCaption">标题</param>
					/// <returns></returns>
					virtual ev_void setSubCaption( _in ev_uint32 index,_in const EVString &subCaption );
					/// <summary>
					/// 获取指定值显示的符号
					/// </summary>
					/// <param name="value">指定值</param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSymbol( _in const EVString &value ) const;
					/// <summary>
					/// 设置指定值的显示符号
					/// </summary>
					/// <param name="value">值</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void setSymbol( _in const EVString &value, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// 添加值（值，标题，符号）
					/// </summary>
					/// <param name="value">值</param>
					/// <param name="caption">标题</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void addValue( _in const EVString &value, _in const EVString &caption, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// 移除指定值
					/// </summary>
					/// <param name="value">值</param>
					/// <returns></returns>
					virtual ev_void removeValue( _in const EVString &value );
					/// <summary>
					/// 移除所有值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeAll();
					/// <summary>
					///获取所有值数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回所有值数量</returns>
					virtual ev_uint32 getValueCount() const;
					/// <summary>
					///获取指定索引的值
					/// </summary>
					/// <param name="index">索引位置</param>
					/// <returns>返回值</returns>
					virtual EVString getValue( _in ev_uint32 index ) const;
					/// <summary>
					///是否包含给定的值
					/// </summary>
					/// <param name="value">给定值</param>
					/// <returns>包含返回true；否则返回false</returns>
					virtual ev_bool containsValue( _in const EVString &value ) const;
				ev_private:
					IUniqueTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IUniqueTheme();
				private:
					IUniqueTheme(IUniqueTheme & obj);
				};
			}
		}
	}
}

#endif
