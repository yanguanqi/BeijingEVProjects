#ifndef _DELETE_PART_COMMAND_H_
#define _DELETE_PART_COMMAND_H_


#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/mapcommand.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class EV_MAPCONTROL_DLL CDeletePartCommand : public CMapCommand
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDeletePartCommand();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDeletePartCommand();

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
					/// 点击命令
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void onClicked();

				ev_private:
					CDeletePartCommand( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CDeletePartCommand )
				};
			}
		}
	}
}
#endif
