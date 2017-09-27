#ifndef __IITEM_H_
#define __IITEM_H_

#include "core/memoryallocatedobject.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialinterface/ibitmap.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class ICommand;
				class EV_SPATIALGUI_DLL IItem : public EarthView::World::Core::CEventObject
				{
				public:
					~IItem();

				public:
					/// <summary>
					/// 显示项的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 设置显示项的名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					virtual ev_void setName( _in const EVString &name );

					/// <summary>
					/// 获取显示项的类别
					/// </summary>
					/// <param name=""></param>
					/// <returns>类别</returns>
					virtual EVString getCategory() const;
					/// <summary>
					/// 设置显示项的类别
					/// </summary>
					/// <param name="category">类别</param>
					/// <returns></returns>
					virtual ev_void setCategory( _in const EVString &category );
					/// <summary>
					/// 获取提示信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>信息</returns>
					virtual EVString getToolTip() const;
					/// <summary>
					/// 设置提示信息
					/// </summary>
					/// <param name="toolTip">提示信息</param>
					/// <returns></returns>
					virtual ev_void setToolTip( _in const EVString &toolTip );
					/// <summary>
					/// 显示图标
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标</returns>
					virtual EarthView::World::Display::IBitmap * getIcon() const;
					/// <summary>
					/// 设置显示图标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setIcon( _in const EarthView::World::Display::IBitmap *bmp );
					/// <summary>
					/// 判断是否支持"按下"状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果支持按下操作则返回true,反之则否</returns>
					virtual ev_bool isCheckable() const;
					/// <summary>
					/// 设置是否支持"按下"状态
					/// </summary>
					/// <param name="checkable">如果为true,则支持按下状态,反之则否</param>
					/// <returns></returns>
					virtual ev_void setCheckable( _in ev_bool checkable );
					/// <summary>
					/// 获取是否被按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果被按下,返回true,反之则否</returns>
					virtual ev_bool getChecked() const;
					/// <summary>
					/// 设置是否被按下
					/// </summary>
					/// <param name="checked">如果为true,则被按下,反之则否</param>
					/// <returns></returns>
					virtual ev_void setChecked( _in ev_bool checked );
					/// <summary>
					/// 获取显示项是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可用则返回true,反之则否</returns>
					virtual ev_bool getEnabled() const;
					/// <summary>
					/// 设置是否可用
					/// </summary>
					/// <param name="enabled">如果为true,则显示项可用,反之则否</param>
					/// <returns></returns>
					virtual ev_void setEnabled( _in ev_bool enabled );
					/// <summary>
					/// 获取显示项所关联的命令项
					/// </summary>
					/// <param name=""></param>
					/// <returns>命令项</returns>
					virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand() const;
					
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
				ev_internal:
					/// <summary>
					/// 事件响应
					/// </summary>
					/// <param name="e">事件对象</param>
					/// <returns></returns>
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);

				ev_private:
					IItem( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					C_DISABLE_COPY( IItem )
ev_internal:
					IItem( EarthView::World::Spatial::SystemUI::ICommand* command );
				};
			}
		}
	}
}
#endif

