#ifndef CGLOBECOMMAND_H
#define CGLOBECOMMAND_H


#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ibitmap.h"
#include "spatialgui/icommand.h"
#include "spatialgui/iitem.h"
#include "globecontrol/globecontrol.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Controls{
				/// <summary>
				/// 三维场景命令的基类
				/// </summary>
				class EV_GLOBECONTROL_DLL CGlobeCommand : public EarthView::World::Spatial::SystemUI::ICommand
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					~CGlobeCommand();

				public:

					/// <summary>
					/// 初始化与按钮相关的CGlobelControl
					/// </summary>
					/// <param name="ctrl">CGlobelControl指针</param>
					/// <returns></returns>
					ev_void create(  _in EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl);

					/// <summary>
					/// 按钮的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮类型的枚举</returns>	
					virtual ev_uint32 getType() const;

					/// <summary>
					/// 获得按钮的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮名称</returns>	
					virtual EVString getName() const;

					/// <summary>
					/// 获得按钮的目录名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮的目录名称</returns>	
					virtual EVString getCategory() const;

					/// <summary>
					/// 获得按钮的提示信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮的提示信息字符串</returns>	
					virtual EVString getToolTip() const;

					/// <summary>
					/// 获得按钮的图标对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标的位图对象</returns>	
					virtual EarthView::World::Display::IBitmap * getIcon() const;

					/// <summary>
					/// 按钮是否是可以按
					/// </summary>
					/// <param name=""></param>
					/// <returns>true为按钮可以按</returns>	
					virtual ev_bool isCheckable() const;

					/// <summary>
					/// 点击工具栏按钮
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ev_void onClicked();

					/// <summary>
					/// 获得按钮是否被按下
					/// </summary>
					/// <param name=""></param>
					/// <returns>按下为true</returns>	
					ev_bool getChecked() const;

					/// <summary>
					/// 设置按钮按下的状态
					/// </summary>
					/// <param name="checked">true为按钮已经被按</param>
					/// <returns></returns>	
					ev_void setChecked( _in ev_bool checked );

					/// <summary>
					/// 获得按钮是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>按钮可用返回true</returns>
					ev_bool getEnabled() const;

					/// <summary>
					/// 设置按钮可用状态
					/// </summary>
					/// <param name="enabled">为true时，按钮可用</param>
					/// <returns></returns>
					ev_void setEnabled( _in ev_bool enabled );

					/// <summary>
					/// 有事件通知过来时，更新按钮的状态
					/// </summary>
					/// <param name="e">自定义事件的指针</param>
					/// <returns>是否更新按钮状态</returns>
					virtual ev_bool update( _in EarthView::World::Core::CEvent* e );

			

				ev_internal:
					ev_bool m_bChecked;
					ev_bool m_bEnabled;					
					EarthView::World::Spatial3D::Controls::CGlobeControl *mpGlobeControl;
					EarthView::World::Display::IBitmap *m_pIcon;

ev_private:

					/// <summary>
					/// 自动化封装所需要构造函数
					/// </summary>
					/// <param name="pList">参数的键值对对象</param>
					/// <returns></returns>
					CGlobeCommand( EarthView::World::Core::CNameValuePairList *pList );
ev_internal:
					/// <summary>
					/// 默认的构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGlobeCommand();
				protected:
					ev_list<EarthView::World::Spatial::SystemUI::IItem*> m_listAbstractItem;					
					C_DISABLE_COPY( CGlobeCommand )

						//friend class IItem;
				};
			}
		}
	}
}
#endif

