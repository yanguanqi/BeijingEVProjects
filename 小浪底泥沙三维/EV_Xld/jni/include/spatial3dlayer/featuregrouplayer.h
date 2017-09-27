#ifndef _FEATURE_GROUP_LAYER_H
#define _FEATURE_GROUP_LAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "geometry3d/iglobelayer.h"



namespace EarthView{
	namespace World{
		namespace Graphic{
			class CCamera;
			class CSceneManager;
		}

		namespace Spatial
		{
			class VectorTileCacheAccessor;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CKmlLayer;		
				class CVectorWebClampSceneLayer;
				/// <summary>
				/// CFeatureGroupLayer(特征图层组)管理以下图层:
				/// 矢量图层(网络矢量瓦片图层CVectorWebClampSceneLayer、数据库矢量贴地图层CVectorDBClampSceneLayer、数据库矢量非贴地图层CVectorRelativeSceneLayer)、
				/// 海图图层(CChartClampSceneLayer)、
				/// 模型图层(实体模型图层CEntityLayer、Instance实例模型图层CInstanceEntityLayer)、
				/// 特效图层CEffectLayer 以及
				/// 嵌套的图层组CFeatureGroupLayer
				/// </summary>
				class EV_3DLAYER_DLL CFeatureGroupLayer
					:public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFeatureGroupLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFeatureGroupLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					CFeatureGroupLayer(const EVString& name);		
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CFeatureGroupLayer();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="minX">瓦片经纬度范围minX</param>
					/// <param name="minY">瓦片经纬度范围minY</param>
					/// <param name="maxX">瓦片经纬度范围maxX</param>
					/// <param name="maxY">瓦片经纬度范围maxY</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile);
					
					/// <summary>
					/// 添加一个CFeatureLayer图层
					/// </summary>
					/// <param name="layer">CFeatureGroupLayer图层</param>
					/// <returns></returns>
					virtual ev_bool addLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
					/// <summary>
					/// 插入一个CFeatureLayer图层
					/// </summary>
					/// <param name="pos">插入的位置</param>
					/// <param name="layer">CFeatureLayer图层</param>
					/// <returns></returns>
					virtual ev_bool insertLayer(ev_uint32 index,EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
					/// <summary>
					/// 删除一个CFeatureLayer图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>是否成功</returns>
					virtual ev_bool removeLayer(ev_uint32 index);
					/// <summary>
					/// 删除一个CFeatureLayer图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					virtual ev_bool removeLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
					/// <summary>
					/// 获取CFeatureLayer的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>CFeatureLayer的数量</returns>
					virtual ev_uint32 getLayerCount() const;
					/// <summary>
					/// 获取CFeatureLayer的索引
					/// </summary>
					/// <param name="layer">CFeatureLayer图层</param>
					/// <returns>CFeatureLayer的索引</returns>
					virtual ev_int32 getLayerIndex(const EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer) const;
					/// <summary>
					/// 获取特征图层或者图层组
					/// 调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer(ev_uint32 index) const;
					/// <summary>
					/// 移动图层顺序
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后的顺序</param>
					/// <returns>是否成功</returns>
					ev_bool moveLayer(ev_uint32 index,ev_uint32 pos);

					/// <summary>
					/// 清除选择集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 获取瓦片最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最大级别</returns>
					virtual ev_int32 getMaxLevel() const;
					/// <summary>
					/// 获取瓦片最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最小级别</returns>
					virtual ev_int32 getMinLevel() const;
					/// <summary>
					/// 设置瓦片最大级别
					/// </summary>
					/// <param name="maxlevel">瓦片最大级别</param>
					/// <returns></returns>
					virtual ev_void setMaxLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置瓦片最小级别
					/// </summary>
					/// <param name="minlevel">瓦片最小级别</param>
					/// <returns></returns>
					virtual ev_void setMinLevel(ev_int32 minlevel);
					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">新的图层名称</param>
					virtual ev_void setName( const EVString &name );
					/// <summary>
					/// 获取图层可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层可见性</returns>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 通知图层增加
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 通知图层移除
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 通知图层刷新
					/// </summary>
					/// <param name="camera">镜头</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed( const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

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
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns>xml文本</returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 返回风格流
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <returns>风格流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream(ev_int32 level,ev_int32 row,ev_int32 col)const;
					/// <summary>
					/// 判断风格流是否相等
					/// </summary>
					/// <param name="stream">风格流</param>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <returns>相等返回true，否则false</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream,ev_int32 level,ev_int32 row,ev_int32 col, Real minX,Real minY,Real maxX,Real maxY) const;
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream) const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 重新计算图层组贴地图层地理范围及瓦片级别范围
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void reCalExtent(ev_bool reCalSelf);
					/// <summary>
					/// 获取地理范围
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>		
					/// <summary>
					/// 根据经纬度和级别获取高程 
					/// </summary>
					/// <param name="lat">纬度</param> 
					/// <param name="lon">经度</param>   
					/// <param name="targetSamplesPerDegrees">每度采样数，-1表示最高精度</param>
					/// <returns></returns>
					virtual ev_bool getHeightAt(_in ev_real32 lat,_in ev_real32 lon,_in ev_real32 targetSamplesPerDegrees,_inout ev_real32& height);

					const EarthView::World::Spatial::Geometry::CEnvelope& getGeoExtent() const;
					/// <summary>
					/// 判断是否存在贴地形图层
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>		
					ev_bool hasVisibleClampLayer()const;
					/// <summary>
					/// 判断是否存在贴模型图层
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>		
					ev_bool hasVisibleClampDSMLayer()const;
					/// <summary>
					/// 强制停止绘制
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>		
					void stopDrawing();
					/// <summary>
					/// 强制开始绘制，注意刷新
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>	
					void startDrawing();

				protected:
					
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="tile">瓦片内容</param>
					/// <param name="north">瓦片信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getPngTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					virtual ev_bool getPngTile(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile);
					//-1:合成完全失败，0:合成成功,1合成部分失败，合成结果显示，但不保存
					ev_int32 drawImages(list<EarthView::World::Core::DataStreamPtr>& images,ev_bool dds,EarthView::World::Core::MemoryDataStreamPtr& resMemPtr);
					
					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream,ev_int32 level,ev_int32 row,ev_int32 col)const;
					
					EarthView::World::Core::MemoryDataStreamPtr getThemeStream(list< pair<EarthView::World::Spatial3D::Atlas::IGlobeLayer*,EarthView::World::Core::DataStreamPtr> >& layerThemes);
					
					void setDrawingState(ev_bool bDrawing);

					ev_bool intersect2(Real minX,Real minY,Real maxX,Real maxY);
					ev_bool levelValid(ev_int32 level) const;
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CFeatureGroupLayer);
					
					ev_bool isThemesEqual(ev_int32 tileMode,ev_int32 level,ev_int32 row,ev_int32 col, Real minX,Real minY,Real maxX,Real maxY, _out EarthView::World::Core::MemoryDataStreamPtr& themeStyle);
					ev_bool isThemesEqual(ev_int32 tileMode,ev_int32 intMinX,ev_int32 intMinY,ev_int32 intMaxX,ev_int32 intMaxY, _out EarthView::World::Core::MemoryDataStreamPtr& themeStyle);
					//-1:合成完全失败，0:合成成功,1合成部分失败，合成结果显示，但不保存,2:需要空瓦片
					ev_int32 mergeTiles(ev_int32 level,ev_int32 row,ev_int32 col, Real minX,Real minY,Real maxX,Real maxY, ev_bool dds, _out EarthView::World::Core::MemoryDataStreamPtr& imageStream, _out EarthView::World::Spatial::CTileData& tile);
					ev_int32 mergeTiles(Real minX,Real minY,Real maxX,Real maxY, ev_bool dds, _out EarthView::World::Core::MemoryDataStreamPtr& imageStream, _out EarthView::World::Spatial::CTileData& tile);
					ev_bool insertLayer_nolock(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer);
					static EarthView::World::Core::DataStreamPtr getBlankTile( EVString& streamType);
					static EarthView::World::Core::DataStreamPtr drawBlackImage();

					EarthView::World::Core::MemoryDataStreamPtr makeInvalidTileMemory();

					void recurClearParentCache();

					friend class CFeatureGroupLayerFactory;
				protected:
					typedef list<EarthView::World::Spatial3D::Atlas::IGlobeLayer*> FeatureLayers;
					FeatureLayers mFeatureLayers;

					mutable EarthView::World::Core::CRecursiveMutex mExtentMutex;//extent锁
					ev_int32 mMaxLevel;
					ev_int32 mMinLevel;

					//贴地图层范围
					EarthView::World::Spatial::Geometry::CEnvelope mGeoExtent;

					mutable EarthView::World::Core::CReadWriteLock mLock;

					EarthView::World::Core::CReadWriteLock mCacheNameLock;
					EVString mCacheName;

					ev_bool mbDrawing;

					CFeatureGroupLayer* mParent;

					mutable EarthView::World::Core::CReadWriteLock mWebLabelLayersLock;
					friend class CVectorWebClampSceneLayer;
					set<EarthView::World::Spatial3D::Atlas::IGlobeLayer*> mWebLabelLayers;

					void addWebLabelLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer);
					void removeWebLabelLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* pLayer);

					void updateWebLabel(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);

					static EarthView::World::Core::MemoryDataStreamPtr ms_BlankTile;
				};

				/// <summary>
				/// 图层组工厂类
				/// 管理图层组类
				/// </summary>
				class EV_3DLAYER_DLL CFeatureGroupLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFeatureGroupLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFeatureGroupLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CFeatureGroupLayerFactory();					
				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;					
					/// <summary>
					/// 创建实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString mFeatureGroupLayerFactoryName;
				};

			}
		}
	}
}




#endif

