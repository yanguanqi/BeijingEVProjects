#ifndef COMMANDPOOL_H
#define COMMANDPOOL_H

#include "core/memoryallocatedobject.h"
#include "frameworkproxy_config.h"



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
				class ICommand;
				class ITool;
			}
		}
	}
}
class EV_FRAMEWORKPROXY_DLL CCommandPool : public EarthView::World::Core::CBaseObject
{
ev_private:
	CCommandPool(_in EarthView::World::Core::CNameValuePairList *pList);
public:
	CCommandPool();
	~CCommandPool();

public:

	/// <summary>
	/// 与指定控件相关联
	/// </summary>
	/// <param name="ctrl">指定控件</param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void connect( EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
	/// <summary>
	/// 获取指定类型的命令
	/// </summary>
	/// <param name="type">命令项的类型</param>
	/// <returns>命令项</returns>
	/// <memo></memo>
	EarthView::World::Spatial::SystemUI::ICommand* getCommand( _in ev_uint32 type );
	/// <summary>
	/// 添加命令项
	/// </summary>
	/// <param name="cmd">命令项</param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void addCommand( _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd );
	/// <summary>
	/// 移除命令项
	/// </summary>
	/// <param name="type">待移除的命令项类型</param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void removeCommand( _in ev_uint32 type );

protected:
	EarthView::World::Spatial::Atlas::ISpatialControl* mpCtrl;
	ev_map<ev_uint32,EarthView::World::Spatial::SystemUI::ICommand*> mCommands;
	//ev_map<ev_uint32,ITool*> mTools;
};

#endif

