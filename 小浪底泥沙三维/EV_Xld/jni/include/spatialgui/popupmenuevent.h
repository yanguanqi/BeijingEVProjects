#ifndef _POP_UP_MENU_EVENT_H_
#define _POP_UP_MENU_EVENT_H_
#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class ICommand;
				class EV_SPATIALGUI_DLL CPopUpMenuEvent : public EarthView::World::Core::CEvent
				{
				public:
					CPopUpMenuEvent();
					~CPopUpMenuEvent();

				public:
					/// <summary>
					/// 设置弹出菜单的显示位置
					/// </summary>
					/// <param name="x">显示位置的x坐标</param>
					/// <param name="y">显示位置的y坐标</param>
					/// <returns></returns>
					ev_void setDisplayPos( _in ev_real64 x, _in ev_real64 y );
					/// <summary>
					/// 添加命令项
					/// </summary>
					/// <param name="cmd">命令项</param>
					/// <returns></returns>
					ev_void addCommand( _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd );
					/// <summary>
					/// 获取弹出菜单的显示位置
					/// </summary>
					/// <param name="x">显示位置的x坐标</param>
					/// <param name="y">显示位置的y坐标</param>
					/// <returns></returns>
					ev_void getDisplayPos( _in ev_real64* x, _in ev_real64* y );
					/// <summary>
					/// 获取命令项的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getCommandCount() const;
					/// <summary>
					/// 获取命令项
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>命令项</returns>
					EarthView::World::Spatial::SystemUI::ICommand* getCommand( _in ev_uint32 index ) const;

				protected:
					ev_vector<EarthView::World::Spatial::SystemUI::ICommand*> mCommands;
					ev_real64 mdx, mdy;
ev_private:
					CPopUpMenuEvent( EarthView::World::Core::CNameValuePairList* pList);
				};
			}
		}
	}
}
#endif


