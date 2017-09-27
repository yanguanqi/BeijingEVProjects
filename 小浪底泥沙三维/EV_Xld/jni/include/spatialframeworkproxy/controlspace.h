#ifndef _CONTROL_SPACE_H_
#define _CONTROL_SPACE_H_

#include "frameworkproxy_config.h"
#include "core/object.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ISpatialControl;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class IToolBar;
				class IMenu;
			}
		}
	}
}
class CCommandPool;
class EV_FRAMEWORKPROXY_DLL CControlSpace : public EarthView::World::Core::CEventObject
{
public:
	~CControlSpace();

public:
	/// <summary>
	/// 获取工具栏的数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>数量</returns>
	/// <memo></memo>
	ev_uint32 getToolBarCount() const;
	/// <summary>
	/// 获取指定索引处的工具栏
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>工具栏</returns>
	/// <memo></memo>
	EarthView::World::Spatial::SystemUI::IToolBar* getToolBar( _in ev_uint32 index );
	/// <summary>
	/// 获取指定类型的工具栏
	/// </summary>
	/// <param name="type">工具栏类型</param>
	/// <returns>工具栏</returns>
	/// <memo></memo>
	EarthView::World::Spatial::SystemUI::IToolBar* getToolBarForType( _in ev_int32 type );
	/// <summary>
	/// 获取菜单数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>数量</returns>
	/// <memo></memo>
	ev_uint32 getMenuCount() const;
	/// <summary>
	/// 获取指定索引处的菜单
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>菜单</returns>
	/// <memo></memo>
	EarthView::World::Spatial::SystemUI::IMenu* getMenu( _in ev_uint32 index );
	/// <summary>
	/// 获取与之相关联的控件
	/// </summary>
	/// <param name=""></param>
	/// <returns>控件</returns>
	/// <memo></memo>
	EarthView::World::Spatial::Atlas::ISpatialControl* getControl() const;
	/// <summary>
	/// 初始化
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void initialize();
	/// <summary>
	/// 初始化
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void initialize( _in ev_uint32 toolbarEnabled );
	/// <summary>
	/// 获取命令池
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令池</returns>
	/// <memo></memo>
	CCommandPool* getCommandPool() const;
protected:
	//派生类需要实现该方法，用于初始化工具栏和菜单
	virtual ev_void onInitialize();
	virtual ev_void onInitialize( _in ev_uint32 toolbarEnabled );

	CControlSpace( _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );

	ev_map<ev_int32,EarthView::World::Spatial::SystemUI::IToolBar*> mToolBars;
	ev_vector<EarthView::World::Spatial::SystemUI::IMenu*> mMenus;
	EarthView::World::Spatial::Atlas::ISpatialControl* mpControl;
	CCommandPool* mpCommandPool;
ev_private:
	CControlSpace( _in EarthView::World::Core::CNameValuePairList* list );
ev_internal:
	/// <summary>
	/// 事件响应
	/// </summary>
	/// <param name="e">事件</param>
	/// <returns>如果处理该事件则返回true,反之则否</returns>
	/// <memo></memo>
	ev_bool onEvent( _in EarthView::World::Core::CEvent* e );
};

#endif
