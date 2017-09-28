#ifndef _VIEW_LISTENER_H
#define _VIEW_LISTENER_H

/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：iviewlistener.h
* 摘    要：该文件是IViewListener类的接口声明
*
* 当前版本：1.0
* 作    者：赵 威
* 完成日期：2013年4月1日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2013-4-1	    赵  威   1.0.0版本的内容声明
* 
**/

#include "spatialgui/spatialguiconfig.h"

#include <core/memoryallocatedobject.h>

#include "spatialgui/viewargs.h"


namespace EarthView{
	namespace World{
		namespace Spatial{

				/// <summary>
				/// 视图监听者的基类
				/// 纯虚类                
				/// </summary>
				class EV_SPATIALGUI_DLL IViewListener : public EarthView::World::Core::CEventObject
				{
				ev_private:
					IViewListener(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					IViewListener();
					virtual ~IViewListener();

				public:
					virtual ev_void onViewChanged(EarthView::World::Spatial::IViewArgs* args);					
				};

		}
	}
}
#endif
