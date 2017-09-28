#ifndef _ATLAS_EVENT_OBJECT_H
#define _ATLAS_EVENT_OBJECT_H

#include "core/object.h"

#include "spatialframeworkproxy/atlasmanager/atlasmanager.h"


namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace AtlasManager{

				class EV_FRAMEWORKPROXY_DLL CAtlasEventObject : public EarthView::World::Core::CEventObject
				{
ev_private:
					CAtlasEventObject(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					CAtlasEventObject();
					virtual ~CAtlasEventObject();

				ev_internal:
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);

					///////////////////////事件响应///////////////////////////////////
				public:
					/// <summary>
					/// 响应创建地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onCreateMap(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent *e);

					/// <summary>
					/// 响应创建场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onCreateScene(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e);

					/// <summary>
					/// 响应设置当前地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onSetCurrentMap(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent *e);

					/// <summary>
					/// 响应设置当前场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onSetCurrentScene(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e);

					/// <summary>
					/// 响应移除地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onRemoveMap(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent *e);

					/// <summary>
					/// 响应移除场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onRemoveScene(_in EarthView::World::Spatial::SystemUI::CSceneActiveEvent *e);					

					/// <summary>
					/// 响应创建地图图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onCreateMapLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);	

					/// <summary>
					/// 响应创建地图图层组
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onCreateMapGroupLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);

					/// <summary>
					/// 响应修改地图图层顺序
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onMoveMapLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);

					/// <summary>
					/// 响应移除地图图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onRemoveMapLayer(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);	

					//added by lixiang
					/// <summary>
					/// 响应修改地图名
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onChangeMapName(_in EarthView::World::Spatial::SystemUI::CMapActiveEvent *e);
					virtual ev_void onChangeSceneName( _in EarthView::World::Spatial::SystemUI::CSceneActiveEvent* e );

					/// <summary>
					/// 响应修改地图图层名
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onChangeLayerName(_in EarthView::World::Core::CEvent *e);

					/// <summary>
					/// 响应设置地图图层可见性
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onChangeLayerVisible(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);

					/// <summary>
					/// 响应修改地图风格
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onChangeLayerTheme(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);
					/// <summary>
					/// 响应修改图层数据集，用于更新图层树节点图标及图例
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onChangeLayerDataset(_in EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *e);
					/// <summary>
					/// 响应修改三维图层数据集,用于更新图层树节点图标及图例
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual ev_void onChangeLayerDataset3D(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);
					/// <summary>
					/// 响应创建创建图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onCreateSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);

					/// <summary>
					/// 响应创建场景图层组
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onCreateSceneGroupLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);

					/// <summary>
					/// 响应实现贴地矢量与非贴地矢量的转换
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onSwitchSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);

					/// <summary>
					/// 响应修改场景图层顺序
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onMoveSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);

					/// <summary>
					/// 响应移除场景图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onRemoveSceneLayer(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);

					/// <summary>
					/// 响应设置场景图层可见性
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onSetSceneLayerVisible(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);

					/// <summary>
					/// 响应设置场景图层风格
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					virtual void onSetSceneLayerTheme(_in EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *e);


					//////////////////包装的方法/////////////////////////////////////
				public:
					
					/// <summary>
					/// 用户触发显示图层详细事件。
					/// </summary>
					/// <param name="layer">图层对象</param>
					/// <param name="layer">图层所属图层组对象指针。</param>
					/// <returns></returns>
					// ev_void userTriggerLayerDetial(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::ILayer* layerGroup);

					/// <summary>
					/// 用户触发显示图层简略属性事件。
					/// </summary>
					/// <param name="layer">图层对象</param>
					/// <param name="layer">图层所属图层组对象指针。</param>
					/// <returns></returns>
					// ev_void userTriggerLayerProperty(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::ILayer* layerGroup);

					/// <summary>
					/// 创建地图
					/// </summary>
					/// <param name="name">地图名</param>
					/// <returns></returns>
					ev_void createMap(const EVString& name);

					/// <summary>
					/// 设置当前地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					ev_void setCurrentMap(EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 设置当前场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					ev_void setCurrentScene(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// 移除地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					ev_void removeMap(EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 移除场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					ev_void removeScene(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// 销毁地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					ev_void destroyMap(EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 销毁场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					ev_void destroyScene(EarthView::World::Spatial::Atlas::IScene* scene);					

					/// <summary>
					/// 销毁图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					ev_bool destroyLayer(EarthView::World::Spatial::Atlas::ILayer* layer);

					//set<EVDatasetType> getSupportedType(EarthView::World::Spatial::Atlas::EVLayerType grouplayerType);
					/// <summary>
					/// 根据图层组获取支持的数据集类别
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet getSupportedType(EarthView::World::Spatial::Atlas::EVLayerType grouplayerType);

				public:
					/// <summary>
					/// 创建地图图层。
					/// </summary>
					/// <param name="datasourceName">数据源名称。</param>
					/// <param name="datasetName">数据集名称。</param>
					/// <returns></returns>
					ev_void createMapLayer(EarthView::World::Spatial::Atlas::IMap* map, const EVString& datasourceName, const EVString& datasetName);

					/// <summary>
					/// 创建地图图层。
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="dataset">数据集指针</param>
					/// <returns></returns>
					ev_void createMapLayer(EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer,
															EarthView::World::Spatial::GeoDataset::IDataset* dataset,
															EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 创建地图图层组图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					ev_void createMapGroupLayer(EarthView::World::Spatial::Atlas::IMap* map,const EVString& groupName);

					/// <summary>
					/// 创建地图图层组图层
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					ev_void createMapGroupLayer(EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer,
																	const EVString& groupName,
																	EarthView::World::Spatial::Atlas::IMap* map);	

					/// <summary>
					/// 更改地图图层顺序
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="oldIndex">旧索引</param>
					/// <param name="newIndex">新索引</param>
					/// <returns></returns>
					ev_void moveMapLayer(EarthView::World::Spatial::Atlas::IMap* map, ev_uint32 oldIndex,ev_uint32 newIndex);

					/// <summary>
					/// 更改地图图层顺序
					/// </summary>
					///<param name="grouplayer">地图图层组</param>
					/// <param name="oldIndex">旧索引</param>
					/// <param name="newIndex">新索引</param>
					/// <returns></returns>
					ev_void moveMapLayer( EarthView::World::Spatial::Atlas::IMap* map,
														  EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer,
														  ev_uint32 oldIndex,
														  ev_uint32 newIndex);
					///<summary>
					///移动图层
					///</summary>
					///<param name="pMap">地图</param>
					///<param name="dragGroupLayer">拖拽图层的父节点</param>
					///<param name="dragIndex">拖拽图层在父节点中的索引</param>
					///<param name="hoverGroupLayer">拖拽点图层的父节点</param>
					///<param name="hoverIndex">拖拽点图层在父节点中的索引</param>
					ev_void moveMapLayer(EarthView::World::Spatial::Atlas::IMap* pMap,
														EarthView::World::Spatial::Atlas::IGroupLayer* dragGroupLayer,
														ev_uint32 dragIndex,
														EarthView::World::Spatial::Atlas::IGroupLayer* hoverGroupLayer,
														ev_uint32 hoverIndex);
					/// <summary>
					/// 移除地图图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void removeMapLayer(EarthView::World::Spatial::Atlas::IMap* map,ev_uint32 index);

					/// <summary>
					/// 移除地图图层
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void removeMapLayer(EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer,
															ev_uint32 index,
															EarthView::World::Spatial::Atlas::IMap* map);

					//added by lixiang
					/// <summary>
					/// 修改地图名
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="name">地图名</param>
					/// <returns></returns>
					ev_void changeMapName( EarthView::World::Spatial::Atlas::IMap* map, const EVString& name );

					/// <summary>
					/// 修改图层名
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					ev_void changeLayerName( EarthView::World::Spatial::Atlas::ILayer* layer, const EVString& name );

					/// <summary>
					/// 修改图层可见性
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="visible">true可见，false不可见</param>
					/// <returns></returns>
					ev_void changeLayerVisible( EarthView::World::Spatial::Atlas::ILayer* layer, ev_bool visible );

					/// <summary>
					/// 创建场景图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns></returns>
					ev_void createSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer, const EVString& datasourceName, const EVString& datasetName);

					/// <summary>
					/// 创建场景图层组
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					ev_void createSceneGroupLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,const EVString& groupName);	

					/// <summary>
					/// 移除场景图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后位置</param>
					/// <returns></returns>
					ev_void moveSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,ev_uint32 index,ev_uint32 pos);

					/// <summary>
					/// 贴地矢量与非贴地矢量的转换
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void switchSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,ev_uint32 index,EarthView::World::Spatial3D::Atlas::IGlobeLayer* newLayer);//矢量数据库图层(贴地与非贴地的转换)

					/// <summary>
					/// 移除场景图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void removeSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,ev_uint32 index);	

					/// <summary>
					/// 设置场景图层可见性
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					ev_void setSceneLayerVisible(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer,ev_bool visible);

					/// <summary>
					/// 设置场景图层风格
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="theme">网络</param>
					/// <returns></returns>
					ev_void setSceneLayerTheme(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer,EarthView::World::Spatial::Theme::ITheme* theme);

				};
			}//namespace
		}
	}
}
#endif

