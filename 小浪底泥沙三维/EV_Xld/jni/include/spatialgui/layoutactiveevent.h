#ifndef _LAYOUT_ACTIVE_EVENT_H_
#define _LAYOUT_ACTIVE_EVENT_H_

#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialgui/ispatialcontrol.h"
#include "spatialinterface/ipagelayout.h"
#include "spatialinterface/ielement.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				class EV_SPATIALGUI_DLL CLayoutActiveEvent : public EarthView::World::Core::CEvent
				{
				public:
					CLayoutActiveEvent(ev_uint16 type);
					~CLayoutActiveEvent();
				
				public:
					ev_uint32 getID()const;
					ev_void setID(ev_uint32 id);

					ev_void setControl( _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
					EarthView::World::Spatial::Atlas::ISpatialControl* getControl() const;

					EarthView::World::Spatial::Carto::IPageLayout* getPageLayout()const;
					ev_void setPageLayout(EarthView::World::Spatial::Carto::IPageLayout* ref_pageLayout);

					ev_void setName(const EVString& name);
					EVString getName() const;

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);
				ev_private:
					CLayoutActiveEvent(EarthView::World::Core::CNameValuePairList *pList);

				protected:
					ev_uint32 mID;
					EarthView::World::Spatial::Atlas::ISpatialControl* mpControl;
					EarthView::World::Spatial::Carto::IPageLayout* mPageLayout;
					EVString mlayoutName;
					ev_bool mResponseState;
				};

				class EV_SPATIALGUI_DLL CLayoutOperationEvent : public EarthView::World::Core::CEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					CLayoutOperationEvent( _in ev_uint16 type );
					~CLayoutOperationEvent();

				public:
					/// <summary>
					/// 设置地图操作的map对象
					/// </summary>
					/// <param name="map">地图指针</param>
					/// <returns></returns>
					ev_void setElement(_in EarthView::World::Spatial::Carto::IElement* pElement);
					/// <summary>
					/// 获取与事件相关联的地图
					/// </summary>
					/// <param name=""></param>
					/// <returns>地图</returns>
					EarthView::World::Spatial::Carto::IElement* getElement();

				protected:
					EarthView::World::Spatial::Carto::IElement* m_pElement;
			    ev_private:
					CLayoutOperationEvent( EarthView::World::Core::CNameValuePairList* pList );
				};

			}//namespace
		}
	}
}
#endif