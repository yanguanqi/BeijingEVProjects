#ifndef __IMENU_H_
#define __IMENU_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialinterface/ibitmap.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				enum EV_MenuType
				{
					// 二维菜单 1－200 ////
					MT_Operation_2D					= 1

					// 三维菜单 201－400 ///


					// 自定义 401－－///

				};
				class ICommand;
				class IItem;
				class EV_SPATIALGUI_DLL IMenu : public EarthView::World::Core::CAllocatedObject
				{
				public:
					~IMenu();

				public:
					/// <summary>
					/// 获取菜单类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取菜单名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 设置菜单名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					virtual ev_void setName( _in const EVString& name );
					/// <summary>
					/// 检测是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可用则返回true,反之则否</returns>
					virtual ev_bool isEnabled() const;
					/// <summary>
					/// 设置是否可用
					/// </summary>
					/// <param name="enable">如果为true,则菜单可用,反之则否</param>
					/// <returns></returns>
					virtual ev_void setEnabled( ev_bool enable );
					/// <summary>
					/// 追加一个命令项
					/// </summary>
					/// <param name="command">待追加的命令项</param>
					/// <returns></returns>
					virtual ev_bool appendItem( _in EarthView::World::Spatial::SystemUI::ICommand *ref_command );
					/// <summary>
					/// 添加命令项
					/// </summary>
					/// <param name="index">待插入的位置</param>
					/// <param name="command">待插入的命令项</param>
					/// <returns></returns>
					virtual ev_bool insertItem( _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand *ref_command );
					/// <summary>
					/// 获取命令项的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					virtual ev_uint32 getItemCount() const;
					/// <summary>
					/// 移除指定索引处的命令项
					/// </summary>
					/// <param name="index">待移除的命令项的索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					virtual ev_bool removeItem( _in ev_uint32 index );
					/// <summary>
					/// 获取指定索引处的显示项
					/// </summary>
					/// <param name="index">命令项的索引</param>
					/// <returns>命令项</returns>
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem( _in ev_uint32 index ) const;
					/// <summary>
					/// 清空所有的菜单项
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clear();
					/// <summary>
					/// 添加分隔符
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool appendSeperator();
					/// <summary>
					/// 插入分隔符
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns></returns>
					virtual ev_bool insertSeperator( _in ev_uint32 index );
					/// <summary>
					/// 追加子菜单
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual IMenu * appendSubMenu();
					/// <summary>
					/// 插入子菜单
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns>子菜单</returns>
					virtual IMenu * insertSubMenu( _in ev_uint32 index );
					/// <summary>
					/// 获取子菜单的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>子菜单的个数</returns>
					virtual ev_uint32 getSubMenuCount() const;
					/// <summary>
					/// 获取指定索引处的子菜单
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>子菜单</returns>
					virtual IMenu * getSubMenu( ev_uint32 index ) const;
					/// <summary>
					/// 弹出菜单
					/// </summary>
					/// <param name="x">弹出位置的x坐标</param>
					/// <param name="y">弹出位置的y坐标</param>
					/// <returns></returns>
					virtual ev_void popup( ev_int32 x, ev_int32 y ) const;
				ev_private:
					IMenu( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IMenu )
ev_internal:
					IMenu( ev_uint32 type );
				};
			}
		}
	}
}
#endif

