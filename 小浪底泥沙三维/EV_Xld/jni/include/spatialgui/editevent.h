#ifndef _LAYER_EDITING_EVENT_H_
#define _LAYER_EDITING_EVENT_H_
#include "core/event.h"
#include "spatialgui/spatialguiconfig.h"
#include "spatialinterface/idataset.h"
namespace EarthView{ namespace World{ namespace Spatial{ namespace Atlas{
	class ILayer;
}}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class EV_SPATIALGUI_DLL CDatasetEditEvent : public EarthView::World::Core::CEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="dataset">关联的数据集</param>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					CDatasetEditEvent( EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset, ev_uint16 eventtype );
					~CDatasetEditEvent();

				public:
					/// <summary>
					/// 获取与事件所关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getDataset() const;

				protected:
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;
ev_private:
					CDatasetEditEvent( _in EarthView::World::Core::CNameValuePairList* list );
				};



				class EV_SPATIALGUI_DLL CLayerEditingEvent : public EarthView::World::Core::CEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ctrl">关联的图层</param>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					CLayerEditingEvent( _in EarthView::World::Spatial::Atlas::ILayer* ref_layer, _in ev_uint16 eventtype );
					~CLayerEditingEvent();

				public:
					/// <summary>
					/// 获取与该事件所关联的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					EarthView::World::Spatial::Atlas::ILayer* getEditingLayer() const;

				protected:
					EarthView::World::Spatial::Atlas::ILayer* mpLayer;
ev_private:
					CLayerEditingEvent( _in EarthView::World::Core::CNameValuePairList* list );
				};
			}
		}
	}
}
#endif
