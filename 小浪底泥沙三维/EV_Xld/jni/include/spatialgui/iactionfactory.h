#ifndef __IACTIONFACTORY_H_
#define __IACTIONFACTORY_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialinterface/ibitmap.h"
#include "spatialgui/ispatialcontrol.h"
#include "spatialgui/imenu.h"
#include "spatialgui/itoolbar.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class EV_SPATIALGUI_DLL IActionFactory : public EarthView::World::Core::CAllocatedObject
				{
				public:
					~IActionFactory();
				public:
					/// <summary>
					/// 根据指定类型创建工具栏
					/// </summary>
					/// <param name="type">工具栏类型</param>
					/// <returns>工具栏</returns>
					virtual _extfree EarthView::World::Spatial::SystemUI::IToolBar* createToolBar( ev_uint32 type );
					/// <summary>
					/// 根据指定类型创建菜单
					/// </summary>
					/// <param name="type">菜单类型</param>
					/// <returns>菜单</returns>
					virtual _extfree EarthView::World::Spatial::SystemUI::IMenu* createMenu( ev_uint32 type ) const;
					/// <summary>
					/// 删除工具栏
					/// </summary>
					/// <param name="bar">待删除的工具栏</param>
					/// <returns></returns>
					virtual ev_void destoryToolBar( _in EarthView::World::Spatial::SystemUI::IToolBar* bar ) const;
					/// <summary>
					/// 删除菜单
					/// </summary>
					/// <param name="menu">待删除的菜单</param>
					/// <returns></returns>
					virtual ev_void destoryMenu( _in EarthView::World::Spatial::SystemUI::IMenu* menu ) const;
					/// <summary>
					/// 获取与command相关联的item
					/// </summary>
					/// <param name="cmd">命令项</param>
					/// <returns>显示项</returns>
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem( _in EarthView::World::Spatial::SystemUI::ICommand* cmd ) const;
					/// <summary>
					/// 弹出"询问"对话框
					/// </summary>
					/// <param name="text">"询问"的内容</param>
					/// <returns>如果用户点击"确定"则返回true,反之则否</returns>
					virtual ev_bool question( const EVString& text ) const;
					/// <summary>
					/// 弹出"信息"对话框
					/// </summary>
					/// <param name="text">信息</param>
					/// <returns></returns>
					virtual ev_void information( const EVString& text ) const;
ev_private:
					IActionFactory( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IActionFactory )
ev_internal:
					IActionFactory();
				};

			}
		}
	}
}
#endif

