#ifndef _ATLASTREEEVENT_INCLUDE__
#define _ATLASTREEEVENT_INCLUDE__

#include "core/event.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/stringinterface.h"
#include "spatialframeworkproxy/groupstringinterfacemap.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayer;
				class IScene;
				class IMap;
			}}}}



namespace EarthView{namespace World{namespace FrameWorkProxy{namespace AtlasManager{

class AtlasTreeEventData;

class EV_FRAMEWORKPROXY_DLL AtlasTreeEvent : public EarthView::World::Core::CEvent
{
ev_private:
	AtlasTreeEvent(_in EarthView::World::Core::CNameValuePairList *pLsit);
public:
	// 动作类型，一般地，Property在dock中显示，而Detail在弹窗中显示。
	enum ActionType
	{
		ProjectFilePreLoaded,
		ProjectFilePostLoaded,

		// 图层简略属性，用属性框即时显示。
		// 鼠标左键点击（切换）图层，使用此类型。
		EveryLayerProperty,	// 任意图层的属性，接受者通过EarthView::World::Spatial::Atlas::ILayer的接口获取图层类型。
		KmlLayerProperty,
		FeatureProperty,
		ImageProperty,
		TerrainProperty,

		ClearProperty,		// 清空属性框（如果当前节点没有对应属性，使用该事件类型）

		// 图层详细细节，用弹出窗口显示。
		// 右键点击图层，点击【属性】菜单项，使用此类型。
		EveryLayerDetail,	// 任意图层的属性，接受者通过EarthView::World::Spatial::Atlas::ILayer的接口获取图层类型。
		KmlLayerDetial,
		FeatureDetail,
		ImageDetail,
		TerrainDetail,
		AmosphereDetail,

		KmlManage,			// Kml管理
		ClearKmlManage,		// 清空Kml管理

		SceneDetail,		// 场景详细信息（弹窗）
		MapDetail,			// 地图详细信息（弹窗）

		AltitudeModeConfig, //设置模型图层高度模式（弹窗）
		RefurbishModelLayer, //刷新模型图层

		SceneProperty,		// 场景属性信息（dock）
		MapProperty,		// 地图属性（dock）

		MapLayerRecord,		// 图层记录表

		SceneLayerRecord,	// 图层记录表

		HistoryImageToolbar, // 显示多期影像工具栏

		TerrainSettings,	 // 地形设置

		AtmosphereTree,		//自然环境树

		LayerEditableChanged,	// 图层的“可编辑”属性改变
		LayerSelectableChanged, // 图层的“可选择”属性改变
	};

	// 显示场景属性所需要的数据
	class EV_FRAMEWORKPROXY_DLL SceneDetailData:public EarthView::World::Core::CBaseObject
	{
	public:
		EarthView::World::Spatial::Atlas::IScene* scene;
		SceneDetailData();
		~SceneDetailData();
ev_private:
	SceneDetailData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};
	
	// 显示场景属性所需要的数据
	class EV_FRAMEWORKPROXY_DLL ScenePropertyData:public EarthView::World::Core::CBaseObject
	{
	public:
		EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap groupStringInterface;
		ScenePropertyData();
		~ScenePropertyData();
ev_private:
	ScenePropertyData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	// 显示地图详细信息所需要的数据
	class EV_FRAMEWORKPROXY_DLL MapDetailData:public EarthView::World::Core::CBaseObject
	{
	public:
		EarthView::World::Spatial::Atlas::IMap* imap;
		MapDetailData();
		~MapDetailData();
ev_private:
	MapDetailData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	// 显示地图详细信息所需要的数据
	class EV_FRAMEWORKPROXY_DLL MapPropertyData:public EarthView::World::Core::CBaseObject
	{
	public:
		EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap groupStringInterface;
		MapPropertyData();
		~MapPropertyData();
ev_private:
	MapPropertyData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	// 显示Kml管理所需要的数据
	class EV_FRAMEWORKPROXY_DLL KmlManageData:public EarthView::World::Core::CBaseObject
	{
	public:
		KmlManageData()
		{
			layer = 0;
		}
		EVString datasourceName;
		EVString datasetName;
		EarthView::World::Spatial::Atlas::ILayer* layer;
		~KmlManageData();
ev_private:
	KmlManageData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	// 显示图层【简略】信息要用到的数据
	class EV_FRAMEWORKPROXY_DLL LayerPropertyData:public EarthView::World::Core::CBaseObject
	{
	public:
		EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap groupStringInterface;
		// 数据内容（SpatialInterface）
		LayerPropertyData();
		~LayerPropertyData();
ev_private:
	LayerPropertyData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	// 显示图层【详细】信息要用到的数据
	class EV_FRAMEWORKPROXY_DLL LayerDetailData:public EarthView::World::Core::CBaseObject
	{
	public:
		LayerDetailData()
		{
			imap  = 0;
			layer = 0;
			parentLayer = 0;
		}
		EarthView::World::Spatial::Atlas::IMap*	imap;
		EarthView::World::Spatial::Atlas::ILayer* layer;
		EarthView::World::Spatial::Atlas::ILayer* parentLayer;
		~LayerDetailData();
ev_private:
	LayerDetailData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	class EV_FRAMEWORKPROXY_DLL MapLayerRecordData:public EarthView::World::Core::CBaseObject
	{
	public:
		MapLayerRecordData()
		{
			layer = 0;
		}

		EarthView::World::Spatial::Atlas::ILayer* layer;
		~MapLayerRecordData();
ev_private:
	MapLayerRecordData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	class EV_FRAMEWORKPROXY_DLL SceneLayerRecordData:public EarthView::World::Core::CBaseObject
	{
	public:
		SceneLayerRecordData()
		{
			layer = 0;
		}

		EarthView::World::Spatial::Atlas::ILayer* layer;
		~SceneLayerRecordData();
ev_private:
	SceneLayerRecordData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};


	class EV_FRAMEWORKPROXY_DLL TerrainSettingsData:public EarthView::World::Core::CBaseObject
	{
	public:

		EVString sceneName;
		TerrainSettingsData();
		~TerrainSettingsData();
ev_private:
	TerrainSettingsData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	class EV_FRAMEWORKPROXY_DLL AtmosphereTreeData : public EarthView::World::Core::CBaseObject
	{
	public:

		EVString sceneName;
		AtmosphereTreeData();
		~AtmosphereTreeData();
ev_private:
		AtmosphereTreeData(_in	EarthView::World::Core::CNameValuePairList *pList);
	};

	class EV_FRAMEWORKPROXY_DLL HistoryImageData:public EarthView::World::Core::CBaseObject
	{
	public:
		EVString  sceneName;
		HistoryImageData();
		~HistoryImageData();
ev_private:
	HistoryImageData(_in EarthView::World::Core::CNameValuePairList *pLsit);
	};

	class EV_FRAMEWORKPROXY_DLL LayerEditableChangedData:public EarthView::World::Core::CBaseObject
	{
	public:
		LayerEditableChangedData();
		~LayerEditableChangedData();
		EarthView::World::Spatial::Atlas::ILayer* layer;
	};

	class EV_FRAMEWORKPROXY_DLL LayerSelectableChangedData:public EarthView::World::Core::CBaseObject
	{
	public:
		LayerSelectableChangedData();
		~LayerSelectableChangedData();
		EarthView::World::Spatial::Atlas::ILayer* layer;
	};

	/// <summary>
	/// 构造函数。
	/// </summary>
	/// <returns></returns>
	AtlasTreeEvent();
	~AtlasTreeEvent();

	/// <summary>
	/// 获取操作的类型。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType getActionType() const;

	/// <summary>
	/// 获取图层【详细】信息的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData getLayerDetailData() const;

	/// <summary>
	/// 获取图层【简略】信息的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData getLayerPropertyData() const;

	/// <summary>
	/// 获取kml管理的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData getKmlManageData() const;

	/// <summary>
	/// 获取场景详细信息的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData getSceneDetailData() const;

	/// <summary>
	/// 获取场景属性的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData getScenePropertyData() const;

	/// <summary>
	/// 获取地图详细信息的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData getMapDetailData() const;

	/// <summary>
	/// 获取地图属性的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData getMapPropertyData() const;

	/// <summary>
	/// 获取地图图层记录表的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData  getMapLayerRecordData() const;

	/// <summary>
	/// 获取场景图层记录表的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData getSceneLayerRecordData() const;

	/// <summary>
	/// 获取地图图层记录表的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData  getHistoryImageData() const;

	/// <summary>
	/// 获取地形设置相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData  getTerrainSettingsData() const;

	/// <summary>
	/// 获取自然环境树相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData getAtmosphereTreeData() const;

	/// <summary>
	/// 获取自然环境树相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData getLayerEditableChangedData() const;

	/// <summary>
	/// 获取图层“可选择”属性改变的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData getLayerSelectableChangedData() const;

	/// <summary>
	/// 获取图层“可编辑”属性改变的相关数据。
	/// </summary>
	/// <returns></returns>
	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData& data() const;

protected:

	EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* privateData;
};

}}}}

#endif // _ATLASTREEEVENT_INCLUDE__

