#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_IRANGETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_IRANGETHEME_H

#include "itheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 范围专题图基类
				/// </summary>
				class EV_INTERFACE_DLL IRangeTheme :
					public EarthView::World::Spatial::Theme::ITheme
				{
				public:		
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~IRangeTheme();

				public:
					/// <summary>
					/// 获取字段名
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字段名</returns>
					virtual EVString getFieldString() const;
					/// <summary>
					/// 设置字段名
					/// </summary>
					/// <param name="field">字段名</param>
					/// <returns></returns>
					virtual ev_void setFieldString( _in const EVString &field );
					/// <summary>
					/// 获取指定字段值标题
					/// </summary>
					/// <param name="value">字段值</param>
					/// <returns>返回标题</returns>
					virtual EVString getSubCaption( _in ev_real64 value ) const;
					/// <summary>
					/// 设置指定字段值标题
					/// </summary>
					/// <param name="value">字段值</param>
					/// <param name="subCaption">标题</param>
					/// <returns></returns>
					virtual ev_void setSubCaption( _in ev_real64 value,_in const EVString &subCaption );
					/// <summary>
					/// 获取指定字段值符号
					/// </summary>
					/// <param name="value">字段值</param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSymbol( _in ev_real64 value ) const;
					/// <summary>
					/// 获取指定索引符号
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSymbol( _in ev_uint32 index ) const;
					/// <summary>
					/// 设置指定字段值符号
					/// </summary>
					/// <param name="value">字段值</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void setSymbol( _in ev_real64 value, _in const EarthView::World::Spatial::Display::ISymbol *symbol );
					/// <summary>
					/// 添加分段
					/// </summary>
					/// <param name="value">字段值</param>
					/// <param name="subCaption">标题</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void addBreak( _in ev_real64 value, const EVString& subCaption,_in const EarthView::World::Spatial::Display::ISymbol *symbol);
					/// <summary>
					/// 移除指定值的分段
					/// </summary>
					/// <param name="value">字段值</param>
					/// <returns></returns>
					virtual ev_void removeBreak( _in ev_real64 value );
					/// <summary>
					/// 移除指定索引的分段
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual ev_void removeBreak( _in ev_uint32 index );
					/// <summary>
					/// 清空
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void removeAll();
					/// <summary>
					/// 获取指定索引的分段值
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>分段值</returns>
					virtual ev_real64 getBreakValue(_in ev_uint32 index ) const;
					/// <summary>
					/// 获取分段数
					/// </summary>
					/// <param name=""></param>
					/// <returns>分段数</returns>
					virtual ev_uint32 getBreakCount() const;
					/// <summary>
					/// 设置最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大值</returns>
					virtual ev_real64 getMaxValue() const;
					/// <summary>
					/// 获取最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小值</returns>
					virtual ev_real64 getMinValue() const;
					/// <summary>
					/// 设置最小值
					/// </summary>
					/// <param name="minValue">最小值</param>
					/// <returns></returns>
					virtual ev_void setMinValue( _in ev_real64 minValue );
                ev_private:
					IRangeTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IRangeTheme();
				private:
					IRangeTheme(IRangeTheme & obj);
				};
			}
		}
	}
}

#endif
