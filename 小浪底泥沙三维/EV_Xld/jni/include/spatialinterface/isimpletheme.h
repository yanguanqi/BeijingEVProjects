#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISIMPLETHEME_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISIMPLETHEME_H

#include "itheme.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Theme{
				/// <summary>
				/// 简单专题图基类
				/// </summary>
				class EV_INTERFACE_DLL ISimpleTheme :
					public EarthView::World::Spatial::Theme::ITheme
				{
				public:			
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~ISimpleTheme();

				public:
					/// <summary>
					/// 获取符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol * getSymbol() const;
					/// <summary>
					/// 设置符号
					/// </summary>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					virtual ev_void setSymbol( _in const EarthView::World::Spatial::Display::ISymbol * symbol );
				ev_private:
					ISimpleTheme( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ISimpleTheme();
					C_DISABLE_COPY( ISimpleTheme )
				};
			}
		}
	}
}

#endif
