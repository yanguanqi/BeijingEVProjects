#ifndef EARTHVIEW_WORLD_LAYOUT_CONTROLS_COMMANDINSERTNROTH_H
#define EARTHVIEW_WORLD_LAYOUT_CONTROLS_COMMANDINSERTNROTH_H


#include "layoutcontrol/layoutcontrolconfig.h"
#include "layoutcontrol/layoutcommand.h"

using namespace EarthView::World::Spatial::Atlas;
namespace EarthView{
	namespace World{
		namespace Layout{
			namespace Controls{
				class EV_LAYOUTCONTROL_DLL CCommandInsertNorthArrow : public CLayoutCommand
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCommandInsertNorthArrow();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CCommandInsertNorthArrow();

				public:

					/// <summary>
					/// 获取工具栏类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具栏类型</returns>
					ev_uint32 getToolBarType() const;

					/// <summary>
					/// 获取命令类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令类型</returns>
					ev_uint32 getType() const;

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令名称</returns>
					EVString getName() const;

					/// <summary>
					/// 获取类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>类别的名称</returns>
					EVString getCategory() const;

					/// <summary>
					/// 获取工具
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具的名称</returns>
					EVString getToolTip() const;

					/// <summary>
					/// 获取图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令的图标</returns>
					EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					ev_bool isCheckable() const;

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
ev_private:
					CCommandInsertNorthArrow ( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CCommandInsertNorthArrow )
				};
			}
		}
	}
}
#endif

