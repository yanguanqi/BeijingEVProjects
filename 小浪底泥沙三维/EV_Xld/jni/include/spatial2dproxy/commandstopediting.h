#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COMMANDSTOPEDITING_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COMMANDSTOPEDITING_H

#include "mapcontrol/mapcommand.h"
#include "spatial2dproxy/spatial2dproxy_config.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				/// <summary>
				/// 停止编辑命令类
				/// 提供方法如下：
				/// 获取 工具条类型、类型、名称、类别、工具、图标
				/// 是否可以选择、点击命令、操作更新
				/// </summary>
				class EV_2DPROXY_DLL CCommandStopEditing : public EarthView::World::Spatial2D::Controls::CEditCommand
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCommandStopEditing();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CCommandStopEditing();

				public:
					/// <summary>
					/// 获取工具条类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具条类型</returns>
					ev_uint32 getToolBarType() const;

					/// <summary>
					/// 获取类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
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

					/// <summary>
					/// 操作更新
					/// </summary>
					/// <param name="e">操作事件</param>
					/// <returns>如果有操作更新，返回true,如果没有，返回false</returns>
					ev_bool update( _in EarthView::World::Core::CEvent* e );
				private:
					ev_void init();
				private:
					ev_bool m_bDataChange;
				ev_private:
					CCommandStopEditing( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( CCommandStopEditing )
				};
			}
		}
	}
}
#endif

