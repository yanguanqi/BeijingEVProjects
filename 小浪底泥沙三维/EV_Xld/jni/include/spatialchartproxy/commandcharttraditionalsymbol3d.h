#ifndef EARTHVIEW_WORLD_SPATIAL3D_CONTROLS_CCOMMANDCHARTTRADITIONALSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL3D_CONTROLS_CCOMMANDCHARTTRADITIONALSYMBOL_H
#include "spatialchartproxy/chartentrybox_api.h"
#include "globecontrol/globecommand.h"
#include "display/bitmap.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				/// <summary>
				/// 三维海图传统符号模式命令
				/// </summary>
				class EVCHARTENTRYBOX_API CCommandChartTraditionalSymbol3D
					: public EarthView::World::Spatial3D::Controls::CGlobeCommand
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CCommandChartTraditionalSymbol3D();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CCommandChartTraditionalSymbol3D();
					/// <summary>
					/// 获取命令项所属的工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					virtual ev_uint32 getToolBarType() const;
					/// <summary>
					/// 获取命令项的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>类别的名称</returns>
					virtual EVString getCategory() const;
					/// <summary>
					/// 工具提示
					/// </summary>
					/// <param name=""></param>
					/// <returns>提示信息</returns>
					virtual EVString getToolTip() const;
					/// <summary>
					/// 获取图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令的图标</returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;
					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					virtual ev_bool isCheckable() const;
					/// <summary>
					/// 点击命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void onClicked();
				ev_private:
					CCommandChartTraditionalSymbol3D(_in EarthView::World::Core::CNameValuePairList *pList );
				protected:
					
					C_DISABLE_COPY( CCommandChartTraditionalSymbol3D )
				};
			}
		}
	}
}
#endif
