#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELDATASETEVENT_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELDATASETEVENT_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatialgui/editevent.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IFeature;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class  EV_Spatial3DDataset_DLL CModelDatasetEditEvent : public EarthView::World::Spatial::SystemUI::CDatasetEditEvent
				{
ev_private:
					CModelDatasetEditEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:
					CModelDatasetEditEvent( EarthView::World::Spatial::GeoDataset::IDataset* dataset, ev_uint16 eventtype);
					virtual ~CModelDatasetEditEvent();

					/// <summary>
					/// 设置事件类型
					/// </summary>
					/// <param name="evtype">事件类型</param>
					/// <returns></returns>

					void setEventType(EarthView::World::Spatial3D::Dataset::EntityDatasetEvent evtype);

					/// <summary>
					/// 获取事件类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>事件类型</returns>

					EarthView::World::Spatial3D::Dataset::EntityDatasetEvent getEventType();

					/// <summary>
					/// 设置数据集操作类型
					/// </summary>
					/// <param name="evtype">事件类型</param>
					/// <returns></returns>

					void setOperationType(EarthView::World::Spatial3D::Dataset::EntityDatasetOperType evtype);

					/// <summary>
					/// 获取数据集操作类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>事件类型</returns>

					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType getOperationType();

					/// <summary>
					/// 设置要素
					/// </summary>
					/// <param name="f">要素对象</param>
					/// <returns></returns>

					void setFeature(const EarthView::World::Spatial::GeoDataset::IFeature* f);

					/// <summary>
					/// 获取要素
					/// </summary>
					/// <param name=""></param>
					/// <returns>要素对象</returns>

					const EarthView::World::Spatial::GeoDataset::IFeature* getFeature();

					/// <summary>
					/// 设置是否需要通知其它对象标记
					/// </summary>
					/// <param name="flag">true 通知，false 不通知</param>
					/// <returns></returns>

					void setNotifyOthersFlag(ev_bool flag);

					/// <summary>
					/// 获取是否需要通知其它对象标记
					/// </summary>
					/// <param name=""></param>
					/// <returns>true 通知，false 不通知</returns>

					ev_bool getNotifyOthersFlag();

					/// <summary>
					/// 获取提交某条记录后缓存ID和数据库中的ID对照
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void getCommitID(ev_uint32& cacheID, ev_uint32& dbID);

					/// <summary>
					/// 设置提交某条记录后缓存ID和数据库中的ID对照
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setCommitID(ev_uint32 cacheID, ev_uint32 dbID);
				protected:
					const EarthView::World::Spatial::GeoDataset::IFeature* mpFeature;
					EarthView::World::Spatial3D::Dataset::EntityDatasetEvent mEventType;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType mOperType;
					ev_bool mNotifyOthers;
					ev_uint32 mCacheID;
					ev_uint32 mDBID;
 				};


			} //namespace 
		}
	}
}
#endif
