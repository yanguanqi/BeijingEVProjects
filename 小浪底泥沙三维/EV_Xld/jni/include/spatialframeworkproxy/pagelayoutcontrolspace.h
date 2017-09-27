#ifndef _LAYOUT_CONTROL_SPACE_H_
#define _LAYOUT_CONTROL_SPACE_H_

#include "frameworkproxy_config.h"
#include "spatialframeworkproxy/controlspace.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				class ISpatialControl;
			}
		}
	}
}

class EV_FRAMEWORKPROXY_DLL CPageLayoutControlSpace : public CControlSpace
{
public:
	CPageLayoutControlSpace(EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
	~CPageLayoutControlSpace();

protected:
	/// <summary>
	/// 初始化事件响应
	/// </summary>
	/// <returns></returns>
	/// <memo></memo>
	ev_void onInitialize();
ev_private:
	CPageLayoutControlSpace(_in EarthView::World::Core::CNameValuePairList* list);
};

#endif