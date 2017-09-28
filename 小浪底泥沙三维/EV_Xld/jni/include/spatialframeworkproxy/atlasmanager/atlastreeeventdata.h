#ifndef _ATLASTREEEVENTDATA_INCLUDE__
#define _ATLASTREEEVENTDATA_INCLUDE__

#include "spatialframeworkproxy/atlasmanager/atlastreeevent.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayer;
			}}}}


namespace EarthView{namespace World{namespace FrameWorkProxy{namespace AtlasManager{

class EV_FRAMEWORKPROXY_DLL AtlasTreeEventData:public EarthView::World::Core::CBaseObject
{
public:

	/// <summary>
	/// 设置动作类型。
	/// </summary>
	/// <param name="t">动作类型。</param>
	/// <returns></returns>
	ev_void setType(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType t)
	{
		typ = t;
	}

	/// <summary>
	/// 获取动作类型。
	/// </summary>
	/// <returns>动作类型。</returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType getType() const
	{
		return typ;
	}

	// 图层【详细】信息，需要SpatialInterface指针等。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData		detialData;

	// 图层【简略】信息，需要当前图层对象和其父对象的指针。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData	propertyData;

	// Kml管理相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData		kmlManageData;

	// 场景详细信息相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData		sceneDetailData;

	// 场景属性相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData	scenePropertyData;

	// 地图详细信息相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData		mapDetailData;

	// 地图属性相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData		mapPropertyData;

	// 地图图层记录表相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData   mapLayerRecordData;

	// 场景图层记录表相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData sceneLayerRecordData;

	// 多期影像工具栏相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData	historyImageData;

	// 地形设置相关数据。
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData		terrainSettingsData;

	//自然环境树相关数据
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData    atmosphereTreeData;

	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData editableData;

	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData selectableData;

	AtlasTreeEventData();
	~AtlasTreeEventData();

	AtlasTreeEventData& operator=(const AtlasTreeEventData& rhs);

protected:

	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType typ;
ev_private:
	AtlasTreeEventData(_in EarthView::World::Core::CNameValuePairList *pList);
};

}}}}

#endif // _ATLASTREEEVENTDATA_INCLUDE__
