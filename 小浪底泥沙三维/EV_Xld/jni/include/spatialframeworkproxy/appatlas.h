/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// 类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2013/12/07					类定义
//
#ifndef _APPATLAS_INCLUDE__
#define _APPATLAS_INCLUDE__

#include "frameworkproxy_config.h"
#include "core/object.h"
#include "forwarddeclare.h"
#include "spatialinterface/ipagelayout.h"
// using namespace EarthView::World::Spatial::Theme;

namespace EarthView{namespace World{namespace Utilities{

	class AppAtlasHelper;
	class EV_FRAMEWORKPROXY_DLL AppAtlas : public EarthView::World::Core::CBaseObject
	{
	public:
		enum LayerType3D
		{
			KML, 
			Feature, 
			Image,
			Terrian
		};

		enum TileType
		{
			WebMercator,
			WGS84
		};

		/// <summary>
		/// 构造函数。
		/// </summary>
		/// <returns></returns>
		AppAtlas();

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~AppAtlas();

		/// <summary>
		/// 创建三维图层
		/// </summary>
		/// <param name="sceneName">指定在哪个场景之下创建图层。</param>
		/// <param name="dataSourceAliasName">使用的数据源名称（别名）。</param>
		/// <param name="datasetName">使用的数据集名称。</param>
		/// <param name="type">
		/// 在指定类型的顶层节点上创建图层。
		/// 如果想在已有图层组下创建图层，请使用create3DLayer的另外一个重载函数。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create3DLayer(
			const EVString&	sceneName,
			const EVString&	dataSourceAliasName,
			const EVString&	datasetName,
			EarthView::World::Utilities::AppAtlas::LayerType3D	type
			);

		/// <summary>
		/// 创建三维图层，重载函数。
		/// </summary>
		/// <param name="dataSourceAliasName">使用的数据源名称（别名）。</param>
		/// <param name="datasetName">使用的数据集名称。</param>
		/// <param name="parentLayer">
		/// 父图层组对象，如果为0，则会创建失败。
		/// 如果你不知道父图层组对象，可以使用create3DLayer的另外一个重载函数。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create3DLayer(
			const EVString&	dataSourceAliasName,
			const EVString&	datasetName,
			EarthView::World::Spatial::Atlas::ILayer*	parentLayer
			);

		/// <summary>
		/// 创建三维图层组
		/// </summary>
		/// <param name="sceneName">指定在哪个场景之下创建图层。</param>
		/// <param name="groupName">指定创建的图层组名称。</param>
		/// <param name="parentLayer">
		/// 在指定类型的顶层节点上创建图层组。
		/// 如果想在已有图层组下创建图层组，请使用create3DGroupLayer的另外一个重载函数。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create3DGroupLayer(
			const EVString&	sceneName,
			const EVString&	groupName,
			EarthView::World::Utilities::AppAtlas::LayerType3D	type
			);

		/// <summary>
		/// 创建三维图层组，重载函数。
		/// </summary>
		/// <param name="groupName">指定创建的图层组名称。</param>
		/// <param name="parentLayer">
		/// 父图层组对象，如果为0，则会创建失败。
		/// 如果你不知道父图层组对象，可以使用create3DGroupLayer的另外一个重载函数。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create3DGroupLayer(
			const EVString&	groupName,
			EarthView::World::Spatial::Atlas::ILayer*	parentLayer
			);

		/// <summary>#
		/// 获取三维图层对象。
		/// </summary>
		/// <param name="sceneName">指定获取哪个场景下的图层。</param>
		/// <param name="layerName">指定要获取的图层名称。</param>
		/// <param name="parentLayer">父图层对象，如果为0，则在场景根顶层节点上获取图层。</param>
		/// <returns>获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* get3DLayer(
			const EVString&	sceneName,
			const EVString&	layerName,
			EarthView::World::Utilities::AppAtlas::LayerType3D	type
			);

		/// <summary>#
		/// 获取三维图层对象。
		/// </summary>
		/// <param name="layerName">指定要获取的图层名称。</param>
		/// <param name="parentLayer">父图层对象，如果为0，则在场景根顶层节点上获取图层。</param>
		/// <returns>获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* get3DLayer(
			const EVString&	layerName,
			const EarthView::World::Spatial::Atlas::ILayer*	parentLayer
			);

		/// <summary>#
		/// 删除三维图层（组）。
		/// </summary>
		/// <param name="sceneName">指定删除哪个场景下的图层（组）。</param>
		/// <param name="layerName">指定要删除的图层（组）名称。</param>
		/// <param name="type">在指定类型的顶层节点上删除图层（组）。</param>
		/// <returns>删除是否成功。</returns>
		bool delete3DLayer(
			const EVString&	sceneName,
			const EarthView::World::Spatial::Atlas::ILayer*	layer,
			EarthView::World::Utilities::AppAtlas::LayerType3D type
			);

		/// <summary>
		/// 删除三维图层（组）。
		/// </summary>
		/// <param name="layerName">指定要删除的图层组名称。</param>
		/// <param name="parentLayer">父图层组对象。</param>
		/// <returns>删除是否成功。</returns>
		bool delete3DLayer(
			const EarthView::World::Spatial::Atlas::ILayer*	layer,
			const EarthView::World::Spatial::Atlas::ILayer*	parentLayer = 0
			);

		/// <summary>
		/// 创建二维图层。
		/// </summary>
		/// <param name="mapName">指定在哪个地图之下创建图层。</param>
		/// <param name="dataSourceAliasName">使用的数据源名称（别名）。</param>
		/// <param name="datasetName">使用的数据集名称。</param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create2DLayer(
			const EVString& mapName,
			const EVString& dataSourceAliasName,
			const EVString& datasetName
			);

		EarthView::World::Spatial::Atlas::ILayer* create2DLayer(
			const EVString&	dataSourceAliasName,
			const EVString&	datasetName,
			EarthView::World::Spatial::Atlas::ILayer*	parentLayer,
			const EVString& mapName
			);

		/// <summary>
		/// 创建二维图层组。
		/// </summary>
		/// <param name="sceneName">指定在哪个场景之下创建图层。</param>
		/// <param name="groupName">指定创建的图层组名称。</param>
		/// <param name="parentLayer">
		/// 在指定类型的顶层节点上创建图层组。
		/// 如果想在已有图层组下创建图层组，请使用create2DGroupLayer的另外一个重载函数。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create2DGroupLayer(
			const EVString&	mapName,
			const EVString&	groupName
			);

		/// <summary>
		/// 创建二维底图图层组。
		/// </summary>
		/// <param name="sceneName">指定在哪个地图之下创建底图图层。</param>
		/// <param name="groupName">指定创建的图层组名称。</param>
		/// <param name="parentLayer">
		/// 在指定类型的顶层节点上创建图层组。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create2DBaseGroupLayer(
			const EVString&	mapName,
			const EVString&	groupName
			);

		/// <summary>
		/// 创建二维图层组，重载函数。
		/// </summary>
		/// <param name="groupName">指定创建的图层组名称。</param>
		/// <param name="parentLayer">
		/// 父图层组对象，如果为0，则会创建失败。
		/// 如果你要在顶层节点上创建图层组，可以使用create2DGroupLayer的另外一个重载函数。
		/// </param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* create2DGroupLayer(
			const EVString& mapName,
			const EVString&	groupName,
			EarthView::World::Spatial::Atlas::ILayer*	parentLayer
			);

		/// <summary>#
		/// 获取二维图层对象。
		/// </summary>
		/// <param name="mapName">指定获取哪个场景下的图层。</param>
		/// <param name="layerName">指定要获取的图层名称。</param>
		/// <returns>获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		EarthView::World::Spatial::Atlas::ILayer* get2DLayer(const EVString& mapName, const EVString& layerName);

		/// <summary>
		/// 删除二维图层。
		/// </summary>
		/// <param name="mapName">指定删除哪个场景下的图层。</param>
		/// <param name="layerName">指定要删除的图层组名称。</param>
		/// <returns>创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。</returns>
		bool delete2DLayer(const EVString& mapName, const EarthView::World::Spatial::Atlas::ILayer*	layer,
										EarthView::World::Spatial::Atlas::ILayer* parentLayer = 0);

		//bool delete2DLayer(
		//	const EVString& layerName,
		//	const EVString& mapName,
		//	const EarthView::World::Spatial::Atlas::ILayer* parentLayer = 0
		//	);
		/// <summary>
		/// 创建场景。
		/// </summary>
		/// <param name="sceneName">场景名称。</param>
		/// <returns>创建的场景EarthView::World::Spatial::Atlas::IScene对象。</returns>
		EarthView::World::Spatial::Atlas::IScene* createScene(const EVString& sceneName, EarthView::World::Utilities::AppAtlas::TileType tileType);

		/// <summary>
		/// 获取场景对象。
		/// </summary>
		/// <param name="sceneName">场景名称。</param>
		/// <returns>获取的场景EarthView::World::Spatial::Atlas::IScene对象。</returns>
		EarthView::World::Spatial::Atlas::IScene* getScene(const EVString& sceneName);

		/// <summary>
		/// 创建场景。
		/// </summary>
		/// <param name="sceneName">场景名称。</param>
		/// <returns>删除是否成功。</returns>
		bool deleteScene(const EVString& sceneName);

		/// <summary>
		/// 创建地图。
		/// </summary>
		/// <param name="sceneName">地图名称。</param>
		/// <returns>创建的地图EarthView::World::Spatial::Atlas::IMap对象。</returns>
		EarthView::World::Spatial::Atlas::IMap* createMap(const EVString& mapName);

		/// <summary>
		/// 获取地图对象。
		/// </summary>
		/// <param name="sceneName">地图名称。</param>
		/// <returns>对象的地图EarthView::World::Spatial::Atlas::IMap对象。</returns>
		EarthView::World::Spatial::Atlas::IMap* getMap(const EVString& mapName);

		/// <summary>
		/// 删除地图。
		/// </summary>
		/// <param name="sceneName">地图名称。</param>
		/// <returns>删除是否成功。</returns>
		bool deleteMap(const EVString& mapName);

		/// <summary>
		/// 创建布局。
		/// </summary>
		/// <param name="sceneName">布局名称。</param>
		/// <returns>创建的布局IPageLayout对象。</returns>
		EarthView::World::Spatial::Carto::IPageLayout* createLayout(const EVString& layoutName);

		/// <summary>
		/// 删除地图。
		/// </summary>
		/// <param name="sceneName">地图名称。</param>
		/// <returns>删除是否成功。</returns>
		bool deleteLayout(const EVString& layoutName);


		/// <summary>
		/// 设置图层是否可见。
		/// </summary>
		/// <param name="layer">图层对象。</param>
		/// <param name="visible">是否可见。</param>
		/// <returns>设置图层可见是否成功。</returns>
		bool setLayerVisible(EarthView::World::Spatial::Atlas::ILayer* layer, bool visible);

		/// <summary>
		/// 设置图层风格。
		/// </summary>
		/// <param name="layer">图层对象。</param>
		/// <param name="theme">风格EarthView::World::Spatial::Theme::ITheme对象。</param>
		/// <returns>设置图层风格是否成功。</returns>
		bool setLayerTheme(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Theme::ITheme* theme);

		/// <summary>
		/// 移动三维图层位置，在图层处于顶层节点之下时使用本函数。
		/// </summary>
		/// <param name="sceneName">场景名称。</param>
		/// <param name="layerName">图层名称。</param>
		/// <param name="type">图层类型。</param>
		/// <param name="index">移动之前的图层位置。</param>
		/// <param name="newIndex">移动之前的图层位置。</param>
		/// <returns></returns>
		void move3DLayer(
			const EVString& sceneName, 
			const EVString& layerName, 
			EarthView::World::Utilities::AppAtlas::LayerType3D type, 
			int index, 
			int newIndex
			);

		/// <summary>
		/// 移动三维图层位置。
		/// </summary>
		/// <param name="parentLayer">图层组名称。</param>
		/// <param name="index">移动之前的图层位置。</param>
		/// <param name="newIndex">移动之前的图层位置。</param>
		/// <returns></returns>
		void move3DLayer(EarthView::World::Spatial::Atlas::ILayer* parentLayer, int index, int newIndex);

		/// <summary>
		/// 移动二维图层位置。
		/// </summary>
		/// <param name="mapName">地图名称。</param>
		/// <param name="index">移动之前的图层位置。</param>
		/// <param name="newIndex">移动之前的图层位置。</param>
		/// <returns></returns>
		void move2DLayer(const EVString& mapName, int index, int newIndex);

	private:
		AppAtlasHelper* helper;
		// 请不要放置其他成员变量。
ev_private:
		AppAtlas(AppAtlas&);
		AppAtlas(_in EarthView::World::Core::CNameValuePairList *pList);
	};

}}}


#endif // _APPATLAS_INCLUDE__

