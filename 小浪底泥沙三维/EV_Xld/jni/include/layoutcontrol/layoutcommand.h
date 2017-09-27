#ifndef EARTHVIEW_WORLD_LAYOUT_CONTROLS_LAYOUTCOMMAND_H
#define EARTHVIEW_WORLD_LAYOUT_CONTROLS_LAYOUTCOMMAND_H


#include "layoutcontrol/layoutcontrolconfig.h"
#include "layoutcontrol/layoutcontrol.h"
#include "spatialgui/icommand.h"
#include "display/bitmap.h"

using namespace EarthView::World::Spatial::SystemUI;
using namespace EarthView::World::Spatial::Display;

namespace EarthView{
	namespace World{
		namespace Layout{
			namespace Controls{
				class CLayoutControl;

				class EV_LAYOUTCONTROL_DLL CLayoutCommand : public ICommand
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayoutCommand();

				public:
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
					EarthView::World::Display::IBitmap* getIcon() const;

					/// <summary>
					/// 是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可以选择，返回true,如果不可以选择，返回false</returns>
					ev_bool isCheckable() const;

					/// <summary>
					/// 点击命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void onClicked();

					/// <summary>
					/// 获取是否可以选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getChecked() const;

					/// <summary>
					/// 设置是否可以选择
					/// </summary>
					/// <param name="checked">是否可以选择</param>
					/// <returns></returns>
					ev_void setChecked( _in ev_bool checked );

					/// <summary>
					/// 获取是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getEnabled() const;

					/// <summary>
					/// 设置是否有效
					/// </summary>
					/// <param name="enabled">是否有效</param>
					/// <returns></returns>
					ev_void setEnabled( _in ev_bool enabled );


					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void create( _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl );

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				ev_internal:
						ev_bool m_bChecked;
						ev_bool m_bEnabled;
						EarthView::World::Display::IBitmap *m_pIcon;

				ev_internal:
					CLayoutControl *m_pLayoutControl;
					EarthView::World::Spatial2D::Controls::CMapControl* m_pMapControl;
				ev_private:
					CLayoutCommand ( EarthView::World::Core::CNameValuePairList *pList );
				ev_internal:
					CLayoutCommand();
				protected:
					C_DISABLE_COPY(CLayoutCommand)
				};
			}
		}
	}
}
#endif
