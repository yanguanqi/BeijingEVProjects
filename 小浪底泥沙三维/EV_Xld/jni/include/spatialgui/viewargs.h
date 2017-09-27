#ifndef _VIEW_ARGS_H
#define _VIEW_ARGS_H

/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：viewargs.h
* 摘    要：该文件是CViewArgs类的接口声明
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

			
			/// <summary>
			/// 视图参数类
			/// 纯虚类                
			/// </summary>
			class EV_SPATIALGUI_DLL IViewArgs : public EarthView::World::Core::CBaseObject
			{
			public:
				enum ViewArgsType
				{
					VAT_Unknown,
					VAT_Map,
					VAT_Scene
				};
			ev_private:
				IViewArgs(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				IViewArgs();
				virtual ~IViewArgs();

			public:
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType()const;

			public:
				EarthView::World::Spatial::Atlas::ISpatialControl* control;
			};

			class EV_SPATIALGUI_DLL CMapViewArgs : public EarthView::World::Spatial::IViewArgs
			{
			public:
				CMapViewArgs();
				virtual ~CMapViewArgs();
			ev_private:
				CMapViewArgs(EarthView::World::Core::CNameValuePairList* pList);

			public:
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const;

			public:					
				ev_real64 centerX;		//中心点坐标
				ev_real64 centerY;
				ev_real64 heading;	//偏转角
				ev_real64 scale;	//比例尺
				ev_real64 minLat;
				ev_real64 minLon;
				ev_real64 maxLat;
				ev_real64 maxLon;
			};

			class EV_SPATIALGUI_DLL CSceneViewArgs : public EarthView::World::Spatial::IViewArgs
			{
			public:
				CSceneViewArgs();
				virtual ~CSceneViewArgs();
			ev_private:
				CSceneViewArgs(EarthView::World::Core::CNameValuePairList* pList);

			public:
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType()const;

			public:				
				EarthView::World::Core::CBaseObject* camera;	//相机
				ev_real64 altitude;		//高程
				ev_real64 longtitude;	//经度
				ev_real64 latitude;		//纬度
				ev_real64 heading;		//偏转角
				ev_real64 tilt;			//翻滚角
				ev_real64 moditifAltitude;
				ev_bool operationOver;
			};

		}
	}
}
#endif
