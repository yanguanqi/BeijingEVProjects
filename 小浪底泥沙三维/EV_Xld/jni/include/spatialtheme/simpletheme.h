#ifndef EARTHVIEW_SPATIAL2D_DISPLAY_SIMPLETHEME_H
#define EARTHVIEW_SPATIAL2D_DISPLAY_SIMPLETHEME_H

#include "spatialthemeconfig.h"
#include "spatialinterface/isimpletheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 简单专题图，即所有数据只用一种风格来显示
				/// 提供方法如下：
				/// 获取与设置 标题、默认符号、是否使用默认符号、当前专题图的符号对象
				/// 获取专题图类型、深度copy专题对象、获取流、将Theme属性写入XML元素
				/// 从XML元素中恢复Theme属性、判断两个Theme是否属性相同、从数据流恢复Color属性
				/// </summary>
				class EV_SPATIALTHEME_DLL CSimpleTheme : public EarthView::World::Spatial::Theme::ISimpleTheme
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CSimpleTheme();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CSimpleTheme();

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
					ev_void setDefaultSymbol( _in const EarthView::World::Spatial::Display::ISymbol * symbol);
			
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
					/// 获取当前专题图的符号对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号对象</returns>
					EarthView::World::Spatial::Display::ISymbol * getSymbol() const;

					/// <summary>
					/// 设置当前专题图的符号对象
					/// </summary>
					/// <param name="symbol">符号对象</param>
					/// <returns></returns>
					ev_void setSymbol( _in const EarthView::World::Spatial::Display::ISymbol * symbol );

					/// <summary>
					/// 判断两个Theme是否属性相同
					/// </summary>
					/// <param name="theme">Theme对象</param>
					/// <returns></returns>
					virtual ev_bool equals(const EarthView::World::Spatial::Theme::ITheme* theme);//20130220,xbr
					bool getGradeDrawEnable();
					void setGradeDrawEnable(ev_bool bFlag);
				ev_internal:
					/// <summary>
					/// 从数据流恢复Color属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					
				ev_private:
					CSimpleTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CSimpleTheme )

					EVString m_szCaption;
					ev_bool m_bUseDefaultSymbol;
					EarthView::World::Spatial::Display::ISymbol *m_pDefaultSymbol;
					EarthView::World::Spatial::Display::ISymbol *m_pSymbol;
					ev_bool m_bFlag;
				};
			}
		}
	}
}
#endif

