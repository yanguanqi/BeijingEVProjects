#pragma once
#ifndef __VECTORWEBRELATIVESCENELAYER_H__
#define __VECTORWEBRELATIVESCENELAYER_H__

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <mathengine/vector3.h>

#include <tileutility/vectortile.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/iwebclampscenelayer.h"

#include "spatialinterface/itheme.h"
#include "spatialinterface/ilabelproperty.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CCamera;
			class CTextureMovableText;
			class CTextureTextStyle;
			class CSceneManager;
		}

		namespace Spatial
		{
			class CAttributionTile;
			class CTileData;
			class ITileAttachmentPtr;

			namespace Display
			{
				class CTextSymbol;
				class CSimpleLine3DSymbol;
			}
		}

		/// 矢量扩展测试
		namespace Geometry3D
		{
			class CMultiGeometry3DExtension;
		}

		namespace Spatial3D
		{
			namespace Atlas
			{
				struct pos_movable;
				struct lev_row_col;
				class CTileVectorExtension;
				/// <summary>
				/// 贴地层-二维矢量数据，来自数据库或文件的栅格数据
				/// 管理贴地层-二维矢量数据图层
				/// </summary>
				class EV_3DLAYER_DLL CNeoVectorWebSceneLayer
					: public IWebClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CNeoVectorWebSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CNeoVectorWebSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CNeoVectorWebSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="layer2D">2D图层</param>
					/// <returns></returns>
					CNeoVectorWebSceneLayer(EarthView::World::Spatial::Atlas::ILayer* layer2D);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CNeoVectorWebSceneLayer();

				public:
					ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					/// <summary>
					/// 瓦片创建通知
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <returns></returns>
					virtual ev_void _notifyTileCreated(ev_uint32 level,ev_uint32 row,ev_uint32 col);
					/// <summary>
					/// 瓦片销毁通知
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <returns></returns>
					virtual ev_void _notifyTileDestroyed(ev_uint32 level,ev_uint32 row,ev_uint32 col);

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>				
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 返回图层图元类型
					/// </summary>
					EarthView::World::Spatial::EVSSCGeometryType getGeometryType() const;
					/// <summary>
					/// 复制图层
					/// </summary>	
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	

					/// <summary>
					/// 获取专题图
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
					/// <summary>
					/// 设置专题图
					/// </summary>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
					/// <summary>
					/// 获得专题图数据流
					/// </summary>
					/// <returns>数据流对象智能指针</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
					/// <summary>
					/// 判断专题图数据流是否相同
					/// </summary>
					/// <returns>是否</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);

					/// <summary>
					/// 获取图层标签属性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层标签属性</returns>
					EarthView::World::Spatial::Display::ILabelProperty* getLabelProperty() const;
					/// <summary>
					/// 设置注记属性
					/// </summary>
					/// <param name="labelproperty">注记属性</param>
					/// <returns></returns>
					ev_void setLabelProperty(const EarthView::World::Spatial::Display::ILabelProperty* labelproperty);

					/// <summary>
					/// 获知指定级别的瓦片是否有效
					/// </summary>
					/// <returns>指定级别的瓦片有效性</returns>
					virtual ev_bool levelValid(ev_int32 level) const;
				protected:

					EarthView::World::Core::MemoryDataStreamPtr clipParentTile(EarthView::World::Core::MemoryDataStreamPtr& parentData,ev_uint32 x,ev_uint32 y);
					void stopLayerRequests();

					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);
				public:
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>		   
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globe卸载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,LayerRefreshFactor updateType);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;				

					ev_bool getUseWideLine() const;
					void setUseWideLine(ev_bool useWideLine);

				protected:

					ev_uint8 disVectorType();

					struct TileRegion
					{
						Real minX,minY,maxX,maxY;
					};

					typedef lev_row_col TileID;
					typedef map<TileID,EarthView::World::Spatial::ITileAttachmentPtr> VectorExtensionMap;
					typedef set<TileID> TileIDSet;

					TileIDSet mInvalidTiles;
					VectorExtensionMap tileVectorExtensions;

					CTileVectorExtension* createTileVector(const TileID &levelRowCol, const TileRegion& region);
					EarthView::World::Spatial::ITileAttachmentPtr getTileVector(const TileID& levelRowCol, const TileRegion& region);

					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* getSymbol(ev_int32 level);
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* CreateSymbol(ev_bool useWideLine,EarthView::World::Spatial::Display::IColor* color,Real w);

					EarthView::World::Core::CReadWriteLock mSymbolsLock;
					ev_bool mbUseWideLine;
					map<ev_int32,EarthView::World::Spatial::Display::CSimpleLine3DSymbol*> mMapSymbols;

					EarthView::World::Core::CReadWriteLock mLabelPropertyLock;//labelProperty锁
					EarthView::World::Spatial::Display::ILabelProperty* mpLabelProperty;

					EarthView::World::Core::CReadWriteLock mThemeLock;//theme锁
					EarthView::World::Spatial::Theme::ITheme* mpTheme;

					ev_void initDefaultTheme();
					ev_int32 getRealTileLevel(ev_int32 level) const;

					ev_bool createEntityFromStream(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension,EarthView::World::Core::MemoryDataStreamPtr& meshStream ,const EVString& name );

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CNeoVectorWebSceneLayer);
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="vectortile">下载的瓦片数据</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					EarthView::World::Spatial::CVectorTile* getTileData(ev_int32 level,ev_int32 row,ev_int32 col);

					friend class CNeoVectorWebSceneLayerFactory;
				};

				/// <summary>
				/// 贴地二维矢量数据Scenelayer的类工厂
				/// 管理贴地二维矢量数据
				/// </summary>
				class EV_3DLAYER_DLL CNeoVectorWebSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CNeoVectorWebSceneLayerFactory( EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CNeoVectorWebSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CNeoVectorWebSceneLayerFactory();

				public:					
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <returns>实例指针</returns>			
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <returns>工厂的产品</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance( EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="layerName">图层名称</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance(  EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msSceneLayerFactoryName;
				};
			}
		}
	}
}

#endif // __VECTORWEBRELATIVESCENELAYER_H__