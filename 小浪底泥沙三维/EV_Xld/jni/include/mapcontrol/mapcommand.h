#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MAPCOMMAND_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MAPCOMMAND_H


#include "mapcontrol/mapcontrolconfig.h"
#include "spatialgui/icommand.h"
#include "display/bitmap.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class CMapControl;

				class EV_MAPCONTROL_DLL CMapCommand : public EarthView::World::Spatial::SystemUI::ICommand
				{
				public:

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CMapCommand();

				public:
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
					/// 点击命令
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
					CMapControl *mpMapControl;

					ev_bool m_bChecked;
					ev_bool m_bEnabled;
					

					EarthView::World::Display::IBitmap *m_pIcon;

				ev_private:
					CMapCommand(EarthView::World::Core::CNameValuePairList *pList );
				
				ev_internal:
					CMapCommand();
				protected:
					C_DISABLE_COPY( CMapCommand )
				};
				class EV_MAPCONTROL_DLL CEditCommand : public CMapCommand
				{
				public:
					~CEditCommand();

				public:
					ev_bool update( _in EarthView::World::Core::CEvent* e );

				ev_private:
					CEditCommand( EarthView::World::Core::CNameValuePairList *pList );
				ev_internal:
					CEditCommand();
				protected:
					C_DISABLE_COPY( CEditCommand )
				};
			}
		}
	}
}
#endif
