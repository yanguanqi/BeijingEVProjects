#ifndef _GLOBLE_CONTROL_SPACE_H_
#define _GLOBLE_CONTROL_SPACE_H_

#include "frameworkproxy_config.h"
#include "spatialframeworkproxy/controlspace.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ISpatialControl;
			}
		}
	}
}
class EV_FRAMEWORKPROXY_DLL CGlobleControlSpace : public CControlSpace
{
public:
	CGlobleControlSpace( EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
	~CGlobleControlSpace();

protected:
	/// <summary>
	/// 初始化事件响应
	/// </summary>
	/// <returns></returns>
	/// <memo></memo>
	ev_void onInitialize();
	virtual ev_void onInitialize( _in ev_uint32 toolbarEnabled );
ev_private:
	CGlobleControlSpace( _in EarthView::World::Core::CNameValuePairList* list );
};

#endif

