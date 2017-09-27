#ifndef _CGUIEVENTHANDLE_H_
#define _CGUIEVENTHANDLE_H_
#include "ga/evga_config.h"

#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				class CGUIEvent;
			}
		}
	}
}


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{

				class EV_GA_DLL CGUIEventHandler:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGUIEventHandler();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>					
					virtual ~CGUIEventHandler();
					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
                ev_private:
					CGUIEventHandler(_in EarthView::World::Core::CNameValuePairList* pList);
				};
			}
		}
	}
}


#endif


