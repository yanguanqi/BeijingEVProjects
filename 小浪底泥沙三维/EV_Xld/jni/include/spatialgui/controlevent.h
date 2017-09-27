#ifndef _CONTROL_EVENT_H_
#define _CONTROL_EVENT_H_
#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"
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
				class EV_SPATIALGUI_DLL CControlEvent : public EarthView::World::Core::CEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ctrl">关联的控件</param>
					/// <param name="type">事件类型</param>
					/// <returns>返回专题图类型</returns>
					CControlEvent( EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl, ev_uint16 type );
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns>返回专题图类型</returns>
					CControlEvent( ev_uint16 type );
					~CControlEvent();

				public:
					/// <summary>
					/// 设置该事件相关联的控件
					/// </summary>
					/// <param name="ctrl">控件</param>
					/// <returns></returns>
					ev_void setControl( _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
					/// <summary>
					/// 获取与该事件所关联的控件
					/// </summary>
					/// <param name=""></param>
					/// <returns>控件</returns>
					EarthView::World::Spatial::Atlas::ISpatialControl* getControl() const;
				protected:
					EarthView::World::Spatial::Atlas::ISpatialControl* mpCtrl;
ev_private:
					CControlEvent( _in EarthView::World::Core::CNameValuePairList* list );
				};
			}
		}
	}
}
#endif


