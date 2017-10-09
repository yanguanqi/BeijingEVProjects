/**
* Copyright (C) 2004-2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称: atlasmanager.h
* 摘    要：
*
* 版    本：1.0.0
* 创建日期：[4/3/2013]
* 作    者：赵威
*
* 修改历史：
* [修改序列]    [修改日期]       [修改者]   [修改内容]
*  1			4/3/2013		赵威     1.0.0版本的内容声明
**/

#ifndef _ATLAS_MANAGER_H_
#define _ATLAS_MANAGER_H_

#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "core/memoryallocatedobject.h"

#include "projectmanager/projectmanager.h"

#include "spatialgui/mapactiveevent.h"
#include "spatialgui/maplayeractiveevent.h"
#include "spatialgui/sceneactiveevent.h"
#include "spatialgui/scenelayeractiveevent.h"
#include "spatialinterface/idataset.h"
#include "spatialgui/spatialguievent.h"
#include "spatialgui/layoutactiveevent.h"
#include "spatialinterface/ipagelayout.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{   
				class IMap;
				class IMapFactory;
				class ILayer;

				class IScene;
				class ISceneFactory;

				class IGroupLayer;
				class CLayerFactoryEnumerator;
			}

			namespace GeoDataset
			{
				class IDataset;
			}

			namespace Theme
			{
				class ITheme;
			}
		}

		namespace Spatial2D
		{
			namespace Controls
			{
				class CMapControl;
			}
		}

		namespace Spatial3D
		{
			namespace Atlas
			{
				class IGlobeLayer;
				class CImageGroupLayer;
			}

			namespace Controls
			{
				class CGlobeControl;
			}
		}
	}
}


// using namespace EarthView::World::Spatial3D::Atlas;


namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace AtlasManager{
				class CLayerSimpleProperty;
				class CMapSimpleProperty;
				class EVDatasetTypeSet;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace AtlasManager{

				class EV_FRAMEWORKPROXY_DLL EVDatasetTypeSet : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef set<EarthView::World::Spatial::GeoDataset::EVDatasetType> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_SET(mList);
					iterator insert(_in iterator pos, _in EarthView::World::Spatial::GeoDataset::EVDatasetType& t);
				private:
					InternalList mList;
ev_private:
					EVDatasetTypeSet(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					EVDatasetTypeSet();
					void insert(EarthView::World::Spatial::GeoDataset::EVDatasetType const &val);
					ev_size_t size();
					ev_size_t erase(_in  EarthView::World::Spatial::GeoDataset::EVDatasetType const &key);
					ev_bool empty();
					void clear();
					ev_size_t count(_in  EarthView::World::Spatial::GeoDataset::EVDatasetType const &key);
					ev_size_t max_size();
					void swap(_inout EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet &other);
					EarthView::World::Spatial::GeoDataset::EVDatasetType get(ev_uint32 index);
				};

				class EV_FRAMEWORKPROXY_DLL CLayerVector:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLayerVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayerVector();

ev_private:
					typedef vector<EarthView::World::Spatial::Atlas::ILayer *> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
					iterator insert(iterator pos, EarthView::World::Spatial::Atlas::ILayer *const &t);
				private:
					InternalList mList;
				public:
					void push_back(EarthView::World::Spatial::Atlas::ILayer *const &t);
					void pop_back();

					EarthView::World::Spatial::Atlas::ILayer*& front();
					EarthView::World::Spatial::Atlas::ILayer*& back();
					void insert(ev_uint32 pos, EarthView::World::Spatial::Atlas::ILayer *const &t);
					void remove(ev_size_t pos);
					ev_bool empty() const;
					EarthView::World::Spatial::Atlas::ILayer*& operator[](ev_size_t n);
					EarthView::World::Spatial::Atlas::ILayer *const &operator[](ev_size_t n) const;
					EarthView::World::Spatial::Atlas::ILayer*& at(ev_size_t n);
					EarthView::World::Spatial::Atlas::ILayer *const &at(ev_size_t n) const;
					ev_size_t size() const;
					void resize(ev_size_t newSize);
					void reserve(ev_size_t count);
					void clear();


				};

				class EV_FRAMEWORKPROXY_DLL CAtlasManager : public EarthView::World::Core::CAllocatedObject
				{
				protected:
					class CAtlasListener : public EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="ref_parent">关联的管理类</param>
						/// <returns></returns>
						/// <memo></memo>
						CAtlasListener(EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* ref_parent);
					public:		
						/// <summary>
						/// 响应工程文件加载前
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						/// <memo></memo>
						virtual void onProjectFilePreLoaded();

						/// <summary>
						/// 响应工程文件加载完后
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						/// <memo></memo>
						virtual void onProjectFileLoaded();
					protected:
						EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* mParent;
					};

					friend class CAtlasListener;

				private:
					static EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager *ms_Singleton;
					CAtlasListener* mListener;

				public:
					CAtlasManager();
					virtual ~CAtlasManager();

ev_private:
					CAtlasManager(EarthView::World::Core::CNameValuePairList* pList);
				public:
					static EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager& getSingleton();
					static EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager* getSingletonPtr();

				protected:
					static ev_void sendActiveEvent(EarthView::World::Core::CEvent* pEvent);

				public:
					/// <summary>
					/// 创建地图
					/// </summary>
					/// <param name="name">地图名</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::IMap* createMap(const EVString& name);

					/// <summary>
					/// 创建场景
					/// </summary>
					/// <param name="name">场景名</param>
					/// <param name="tileType">瓦片类别</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::IScene* createScene(const EVString& name, int tileType);

					/// <summary>
					/// 创建布局
					/// </summary>
					/// <param name="name">布局名称</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void createLayout(const EVString& name);
					/// <summary>
					///  设置当前地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setCurrentMap(EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 设置当前场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setCurrentScene(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// 移除地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeMap(EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 移除场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeScene(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// 移除布局
					/// </summary>
					/// <param name="scene">布局</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeLayout(EarthView::World::Spatial::Carto::IPageLayout* pLayout);

					/// <summary>
					/// 销毁地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void destroyMap(EarthView::World::Spatial::Atlas::IMap* map);

					/// <summary>
					/// 销毁场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void destroyScene(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// 销毁布局
					/// </summary>
					/// <param name="scene">布局</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void destroyLayout(EarthView::World::Spatial::Carto::IPageLayout* pLayout);


					/// <summary>
					/// 设置图层是否可编辑
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="editable">是否可编辑</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setLayerEditable(EarthView::World::Spatial::Atlas::ILayer* layer, bool editable);

					/// <summary>
					/// 设置图层是否可选择
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="selectable">是否可选择</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setLayerSelectable(EarthView::World::Spatial::Atlas::ILayer* layer, bool selectable);

					/// <summary>
					///  显示高度模式配置
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void showAltitudeModeConfig(EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// 刷新模型图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void refurbishModelLayer(EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// （用户）触发显示图层【详细】信息事件。
					/// </summary>
					/// <param name="layer">图层对象指针。</param>
					/// <param name="layer">图层所属图层组对象指针。</param>
					/// <returns></returns>
					ev_void showLayerDetail(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::ILayer* parentLayer, EarthView::World::Spatial::Atlas::IMap* imap);

					/// <summary>
					/// （用户）触发显示图层【简略】信息事件。
					/// </summary>
					/// <param name="layer">图层对象指针。</param>
					/// <param name="layer">图层所属图层组对象指针。</param>
					/// <returns></returns>
					ev_void showLayerProperty(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::ILayer* parentLayer);

					/// <summary>
					/// （用户）清除属性框内容。
					/// </summary>
					/// <returns></returns>
					ev_void clearProperty();

					/// <summary>
					/// （用户）调用Kml管理。（通过给出数据集和图层对象）
					/// </summary>
					/// <param name="datasourceName">数据源名称。</param>
					/// <param name="datasetName">数据集名称。</param>
					/// <returns></returns>
					ev_void showKmlManager(EarthView::World::Spatial::Atlas::ILayer* layer, const EVString& datasourceName, const EVString& datasetName);

					/// <summary>
					/// （用户）清空Kml管理。
					/// </summary>
					/// <returns></returns>
					ev_void clearKmlManager();

					/// <summary>
					/// （用户）调用场景详细信息（弹窗）。
					/// </summary>
					/// <param name="scene">EarthView::World::Spatial::Atlas::IScene对象。</param>
					/// <returns></returns>
					ev_void showSceneDetail(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// （用户）调用场景属性（dock）。
					/// </summary>
					/// <param name="scene">EarthView::World::Spatial::Atlas::IScene对象。</param>
					/// <returns></returns>
					ev_void showSceneProperty(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// （用户）调用地图详细信息（弹窗）。
					/// </summary>
					/// <param name="scene">EarthView::World::Spatial::Atlas::IMap对象。</param>
					/// <returns></returns>
					ev_void showMapDetail(EarthView::World::Spatial::Atlas::IMap* imap);

					/// <summary>
					/// （用户）调用地图属性（dock）。
					/// </summary>
					/// <param name="scene">EarthView::World::Spatial::Atlas::IMap对象。</param>
					/// <returns></returns>
					ev_void showMapProperty(EarthView::World::Spatial::Atlas::IMap* imap);

					/// <summary>
					/// （用户）调用地图图层记录表。
					/// </summary>
					/// <param name="scene">EarthView::World::Spatial::Atlas::ILayer对象。</param>
					/// <returns></returns>
					ev_void showMapLayerReord(EarthView::World::Spatial::Atlas::ILayer* ilayer);

					/// <summary>
					/// （用户）调用场景图层记录表。
					/// </summary>
					/// <param name="scene">EarthView::World::Spatial::Atlas::ILayer对象。</param>
					/// <returns></returns>
					ev_void showSceneLayerReord(EarthView::World::Spatial::Atlas::ILayer* ilayer);

					/// <summary>
					/// （用户）调用显示场景的多期影像工具栏。
					/// </summary>
					/// <param name="sceneName">场景名称。</param>
					/// <returns></returns>
					ev_void showHistoryImage(const EVString& sceneName);

					/// <summary>
					/// 创建地图图层。
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="datasourceName">数据源名称。</param>
					/// <param name="datasetName">数据集名称。</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createMapLayer(EarthView::World::Spatial::Atlas::IMap* map, const EVString& datasourceName, const EVString& datasetName);

					/// <summary>
					/// 显示场景地形设置。
					/// </summary>
					/// <param name="sceneName">场景名称。</param>
					/// <returns></returns>
					ev_void showTerrainSettings(const EVString& sceneName);

					/// <summary>
					/// 显示场景自然环境树。
					/// </summary>
					/// <param name="sceneName">场景名称。</param>
					/// <returns></returns>
					ev_void showAtmosphereTree(const EVString& sceneName);

					/// <summary>
					/// 销毁图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool destroyLayer(EarthView::World::Spatial::Atlas::ILayer* layer);	

					/// <summary>
					/// 根据图层组类别获取支持的数据集类别
					/// </summary>
					/// <param name="grouplayerType">图层组类别</param>
					/// <returns>支持的数据集类别</returns>
					/// <memo></memo>
					EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet getSupportedType(EarthView::World::Spatial::Atlas::EVLayerType grouplayerType);

					EarthView::World::Spatial::Atlas::ILayer* createMapLayer(const EVString& datasourceName,
						const EVString& datasetName,
						EarthView::World::Spatial::Atlas::IGroupLayer* pParentGroup,
						EarthView::World::Spatial::Atlas::IMap* map);
					/// <summary>
					/// 创建地图图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="dataset">数据集</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::ILayer* createMapLayer(EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer,
						EarthView::World::Spatial::GeoDataset::IDataset* dataset,
						EarthView::World::Spatial::Atlas::IMap* map);

					/******** I am a starting line **********/
					// added by wangwei in 2013-04-15
					/// <summary>
					/// 添加地图图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void addMapLayer(EarthView::World::Spatial::Atlas::IMap* map,EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// 添加地图图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void addMapLayer(EarthView::World::Spatial::Atlas::IGroupLayer* pParentGroupLayer,
						EarthView::World::Spatial::Atlas::ILayer* layer,
						EarthView::World::Spatial::Atlas::IMap* map);
					/******** I am a ending line **********/

					/// <summary>
					/// 创建地图图层组
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::IGroupLayer* createMapGroupLayer(EarthView::World::Spatial::Atlas::IMap* map,const EVString& groupName);

					/// <summary>
					/// 创建地图底图图层组
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::IGroupLayer* createBaseMapGroupLayer(EarthView::World::Spatial::Atlas::IMap* map,const EVString& groupName);

					/// <summary>
					/// 创建地图图层组
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::IGroupLayer* createMapGroupLayer(EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer,
						const EVString& groupName,
						EarthView::World::Spatial::Atlas::IMap* map);	
					/// <summary>
					/// 创建地图图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="dataset">数据集</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::ILayer* createMapLayer(
						EarthView::World::Spatial::Atlas::IMap* map,
						EarthView::World::Spatial::GeoDataset::IDataset* dataset);
					/// <summary>
					/// 调整图层顺序
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="oldIndex">老索引</param>
					/// <param name="newIndex">新索引</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void moveMapLayer(EarthView::World::Spatial::Atlas::IMap* map, ev_uint32 oldIndex,ev_uint32 newIndex);

					/// <summary>
					/// 调整图层顺序
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="oldIndex">老索引</param>
					/// <param name="newIndex">新索引</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void moveMapLayer( EarthView::World::Spatial::Atlas::IMap* map,
						EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer,
						ev_uint32 oldIndex,
						ev_uint32 newIndex);

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
					/// <memo></memo>
					ev_void removeMapLayer(EarthView::World::Spatial::Atlas::IMap* map,ev_uint32 index);

					/// <summary>
					/// 移除地图图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeMapLayer(EarthView::World::Spatial::Atlas::IGroupLayer* pParentGrouplayer,
						EarthView::World::Spatial::Atlas::IMap* map,
						ev_uint32 index);
					//added by lixiang;
					/// <summary>
					/// 修改地图名
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="name">新名字</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool changeMapName( EarthView::World::Spatial::Atlas::IMap* map, const EVString& name );

					/// <summary>
					/// 修改图层名字
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="name">名字</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void changeLayerName( EarthView::World::Spatial::Atlas::ILayer* layer, const EVString& name );

					/// <summary>
					/// 修改图层可见性
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void changeLayerVisible( EarthView::World::Spatial::Atlas::ILayer* layer, ev_bool visible );

					//added by wanguangtong
					/// <summary>
					/// 设置地图最小可见范围
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setMapMinScale( EarthView::World::Spatial::Atlas::IMap* map );

					/// <summary>
					/// 设置地图最大可见范围
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setMapMaxScale( EarthView::World::Spatial::Atlas::IMap* map );

					/// <summary>
					/// 清除地图可见范围
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void clearMapScale( EarthView::World::Spatial::Atlas::IMap* map );

					/// <summary>
					/// 设置图层最小可见范围
					/// </summary>
					/// <param name="spatialControlName">控件名</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setLayerMinScale( const EVString& spatialControlName,EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// 设置图层最大可见范围
					/// </summary>
					// <param name="spatialControlName">控件名</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setLayerMaxScale( const EVString& spatialControlName,EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// 清除图层可见范围
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void clearLayerScale(EarthView::World::Spatial::Atlas::ILayer* layer );

					/// <summary>
					/// 定位至图层
					/// </summary>
					/// <param name="spatialControlName">控件名</param>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void zoomToLayer(const EVString& spatialControlName,EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// 根据数据源删除地图图层
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeMapLayersByDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

					/// <summary>
					/// 根据数据集删除地图图层
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeMapLayersByDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,const EVString& datasetName);

					/// <summary>
					/// 数据集是否正在编辑
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns>true是，false不是</returns>
					/// <memo></memo>
					ev_bool isDatasetEditing( _in EarthView::World::Spatial::GeoDataset::IDataSource* ds, _in const EVString& datasetName );

					ev_bool isEditing(EarthView::World::Spatial::Atlas::IGroupLayer* groupLayer);
					//add by zhaowei

					/// <summary>
					/// 场景是否正在编辑
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns>true是，false不是</</returns>
					/// <memo></memo>
					ev_bool isEditing(EarthView::World::Spatial::Atlas::IScene* scene);

					/// <summary>
					/// 要素图层组是否正在编辑
					/// </summary>
					/// <param name="featureGroupLayer">要素图层组</param>
					/// <returns>true是，false不是</</returns>
					/// <memo></memo>
					ev_bool isEditing(EarthView::World::Spatial3D::Atlas::IGlobeLayer* featureGroupLayer);
					//返回数据集在场景图层中引用的次数

					/// <summary>
					/// 获取数据集在场景中被图层引用数量
					/// </summary>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">数据集名</param>
					/// <param name="pScene">场景</param>
					/// <returns>返回引用个数</returns>
					/// <memo></memo>
					ev_uint32 referenceDatasetInScene(const EVString& datasourceName,const EVString& datasetName,EarthView::World::Spatial::Atlas::IScene* pScene);

					/// <summary>
					/// 获取数据集在地图中被图层引用数量
					/// </summary>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">数据集名</param>
					/// <param name="pMap">地图</param>
					/// <returns>返回引用个数</returns>
					/// <memo></memo>
					ev_uint32 referenceDatasetInMap(const EVString& datasourceName,const EVString& datasetName,EarthView::World::Spatial::Atlas::IMap* pMap);

				public:		

					/// <summary>
					/// 创建场景图层
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">图层</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* createSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer, const EVString& datasourceName, const EVString& datasetName);			

					/// <summary>
					/// 创建场景图层组
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					/// <memo></memo>
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* createSceneGroupLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,const EVString& groupName);	

					/// <summary>
					/// 调整场景图层顺序
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">当前索引</param>
					/// <param name="pos">新的索引</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void moveSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,ev_uint32 index,ev_uint32 pos);

					/// <summary>
					/// 实现贴地矢量与非贴地矢量的转换
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <param name="newLayer">新建矢量图层</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void switchSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,ev_uint32 index,EarthView::World::Spatial3D::Atlas::IGlobeLayer* newLayer);//矢量数据库图层(贴地与非贴地的转换)

					/// <summary>
					/// 移除场景图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void removeSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pParentGrouplayer,ev_uint32 index);	

					/// <summary>
					/// 设置场景图层可见性
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setSceneLayerVisible(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer,ev_bool visible);

					/// <summary>
					/// 设置场景图层风格
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="theme">风格</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setSceneLayerTheme(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer,EarthView::World::Spatial::Theme::ITheme* theme);					

					/// <summary>
					/// 从地图图层组移除图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="grouplayer">父图层组</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeContainedLayers(EarthView::World::Spatial::Atlas::IMap *map,EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer);

					/// <summary>
					/// 从场景图层组移除图层
					/// </summary>
					/// <param name="scene">场景</param>
					/// <param name="grouplayer">图层组</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeContainedLayers(EarthView::World::Spatial::Atlas::IScene* scene,EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer);
					/// <summary>
					/// 从场景图层组移除图层
					/// </summary>
					/// <param name="scene">场景</param>
					/// <param name="grouplayer">图层组</param>
					/// <param name="updateScene">是否刷新场景</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeContainedLayers(EarthView::World::Spatial::Atlas::IScene* scene,EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer,ev_bool updateScene);

					/// <summary>
					/// 通过数据源移除场景图层
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeSceneLayersByDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

					/// <summary>
					/// 通过数据集移除场景图层
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					/// <memo></memo>
					void removeSceneLayersByDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,const EVString& datasetName);

					//added by xbr 清除矢量缓存
					/// <summary>
					/// 清空矢量图层缓存
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_bool clearVectorLayerCacheData(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, const EVString& datasetName);
					/// <summary>
					/// 通过递归调用findlayers方法，来返回图层组下所有图层
					/// </summary>
					/// <param name="grouplayer">图层组指针</param>					
					/// <returns>返回EarthView::World::Spatial::Atlas::ILayer的指针vector</returns>
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector getLayersByGroupLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer);

					/// <summary>
					/// 打开数据集。
					/// </summary>
					/// <param name="datasourceName">数据源名称。</param>
					/// <param name="datasetName">数据集名称。</param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IDataset对象指针。</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* openDataset(const EVString& datasourceName, const EVString& datasetName);
ev_private:
					void getSceneLayersByDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,map<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Spatial3D::Atlas::IGlobeLayer*>& layers);
					void getSceneLayersByDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,EarthView::World::Spatial3D::Atlas::IGlobeLayer* pGroupLayer,map<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Spatial3D::Atlas::IGlobeLayer*>& layers);

				protected:
					void registerLayerFactorys();
					void unregisterLayerFactorys();

					EarthView::World::Spatial3D::Atlas::IGlobeLayer* createSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer, EarthView::World::Spatial::GeoDataset::IDataset* datasetPtr);

					void addMap(EarthView::World::Spatial::Atlas::IMap* map);
					void addScene(EarthView::World::Spatial::Atlas::IScene* scene);
					
					/// <summary>
					/// 关闭数据集。
					/// </summary>
					/// <param name="pDataset">数据集</param>					
					/// <returns></returns>
					void closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);					

					ev_void removeMap(EarthView::World::Spatial::Atlas::IMap* map,ev_bool removeFromPrj);
					ev_void removeScene(EarthView::World::Spatial::Atlas::IScene* scene,ev_bool removeFromPrj);
					ev_void removeLayout(EarthView::World::Spatial::Carto::IPageLayout *pLayout, ev_bool removeFromPrj);
					void addContainedLayers(EarthView::World::Spatial::Atlas::IMap *map,EarthView::World::Spatial::Atlas::IGroupLayer* grouplayer);
					void addContainedLayers(EarthView::World::Spatial::Atlas::IScene* scene,EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer);

					ev_void removeSceneLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer,ev_uint32 index,ev_bool updateScene);	

					void getSceneLayersByDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,const EVString& datasetName,map<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Spatial3D::Atlas::IGlobeLayer*>& layers);
					void getSceneLayersByDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,const EVString& datasetName,EarthView::World::Spatial3D::Atlas::IGlobeLayer* pGroupLayer,map<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Spatial3D::Atlas::IGlobeLayer*>& layers);

					void removeSceneLayers(map<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Spatial3D::Atlas::IGlobeLayer*> & layers);

					ev_void sendContainedLayerVisibleEvents(EarthView::World::Spatial3D::Atlas::IGlobeLayer* groupLayer,ev_bool visible,ev_bool changed);

					void removeMapLayersByDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,
						EarthView::World::Spatial::Atlas::IGroupLayer* pGroupLayer,
						EarthView::World::Spatial::Atlas::IMap *map);
					void removeMapLayersByDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,const EVString& datasetName,EarthView::World::Spatial::Atlas::IGroupLayer* pGroupLayer,EarthView::World::Spatial::Atlas::IMap* pMap);

					ev_uint32 referenceDatasetInGroupLayer(const EVString& datasourceName,const EVString& datasetName,EarthView::World::Spatial3D::Atlas::IGlobeLayer* pGroupLayer);
					ev_uint32 referenceDatasetInGroupLayer(const EVString& datasourceName,const EVString& datasetName,EarthView::World::Spatial::Atlas::IGroupLayer* pGroupLayer);
				private:
					EarthView::World::Spatial::Atlas::IMapFactory* mMapFactory;
					EarthView::World::Spatial::Atlas::ISceneFactory* mSceneFactory;
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* mpLayerFactoryEnumerator;	
					EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty* mpLayerStringinterface;
					EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty* mpMapStringinterface;

					//用于递归查找图层组下的图层
					ev_void findLayers(EarthView::World::Spatial3D::Atlas::IGlobeLayer* grouplayer,EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector& layers);

					ev_bool existInImageGroupLayer(EarthView::World::Spatial3D::Atlas::CImageGroupLayer* grouplayer,EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
				};

			}//namespace
		}
	}
}

#endif

