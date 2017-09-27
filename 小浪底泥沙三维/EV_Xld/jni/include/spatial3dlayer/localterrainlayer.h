#ifndef LOCALTERRAINLAYER_H 
#define LOCALTERRAINLAYER_H

#include "spatial3dlayer/iterrainlayer.h"
#include "spatial3dlayer/bilbuilder.h"
#include "core/datastream.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class IEnvelope;
			}
			namespace Utility
			{
				class CSpatialReference;
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				/// <summary>
				/// 地形图层
				/// 管理地形
				/// </summary>
				class EV_3DLAYER_DLL CLocalTerrainLayer : public EarthView::World::Spatial3D::Atlas::ITerrainLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLocalTerrainLayer(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLocalTerrainLayer();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLocalTerrainLayer();

				    /// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 获取最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大级别</returns>
					virtual ev_int32 getMaxLevel() const;
					/// <summary>
					/// 获取最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小级别</returns>
					virtual ev_int32 getMinLevel() const;
					/// <summary>
					/// 设置最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setMaxLevel(_in ev_int32 maxLevel);
					/// <summary>
					/// 设置最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setMinLevel(_in ev_int32 minLevel);
					/// <summary>
					/// 获取瓦片最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最大级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取瓦片最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最小级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置瓦片最大级别
					/// </summary>
					/// <param name="maxlevel">瓦片最大级别</param>
					/// <returns></returns>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置瓦片最小级别
					/// </summary>
					/// <param name="minlevel">瓦片最小级别</param>
					/// <returns></returns>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);
					/// <summary>
					/// 绑定一个二维图层
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);
					/// <summary>
					/// 取消绑定二维图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void detachLayer();
					/// <summary>
					/// 获取绑定的二维图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>绑定的二维图层</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* getLayer() const;
					/// <summary>
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;					

					/// <summary>
					/// 获取图层的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

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
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	

					/// <summary>
					/// 获取与图层所关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>	
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					
					/// <summary>
					/// 获取高程信息流
					/// </summary>
					/// <param name="row">行号</param>
					/// <param name="col">列号</param>
					/// <param name="level">级别</param>
					/// <returns>高程信息流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrain(ev_int32 row, ev_int32 col, ev_int32 level);	
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromMemoryCache(ev_int32 row, ev_int32 col, ev_int32 level);
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromDBCache(ev_int32 row, ev_int32 col, ev_int32 level);
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromServer(ev_int32 row, ev_int32 col, ev_int32 level);

					/// <summary>
					/// 获取高程
					/// </summary>
					/// <param name="data">数据流</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="west">左下角Ｘ坐标</param>
					/// <param name="south">左下角Ｙ坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="pixelCount">像素数目</param>
					/// <param name="height">高程</param>
					/// <returns>高程</returns>
					ev_bool getHeight(_in const EarthView::World::Core::MemoryDataStreamPtr& data ,_in ev_real64 latitude,_in ev_real64 longitude ,ev_real64 west,ev_real64 south,ev_real64 width,ev_int32 pixelCount,_inout ev_real64& height);

					/// <summary>
					/// 获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高程</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude,_out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, TerrainDataSource source, _out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude);


					/// <summary>
					/// 通过经纬度获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="targetSamplesPerDegrees">每度采样数</param>	
					/// <param name="altitude">高程</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees,_out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, TerrainDataSource source, _out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude);

					/// <summary>
					/// 通过经纬度获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="targetSamplesPerDegrees">每度采样数</param>	
					/// <param name="preTileResolution">已经获取到的高程瓦片的分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees,ev_real64 preTileResolution ,_out ev_real64& altitude,_out ev_real64& tileResolution);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees,ev_real64 preTileResolution , TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude,_out ev_real64& tileResolution);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高程</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getBestHeightAt(ev_real64 latitude, ev_real64 longitude,_out ev_real64& altitude);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="preTileResolution">已经获取到的高程瓦片的分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getBestHeightAt(ev_real64 latitude, ev_real64 longitude,ev_real64 preTileResolution,_out ev_real64& altitude,_out ev_real64& tileResolution);

					
				protected:
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					int getTileLevel( _in ev_real32 targetSamplesPerDegree, _in EarthView::World::Spatial3D::Atlas::AltitudeStatus& altitudeStatus);

					EarthView::World::Core::MemoryDataStreamPtr getTerrain(const vector<ev_int32>& rows,const vector<ev_int32>& cols, const vector<ev_int32>& tileLevels, _out ev_int32& row, _out ev_int32& col, _out ev_int32& level);

					EarthView::World::Spatial3D::CBilBuilder mbilBuilder;
					EarthView::World::Spatial::Utility::CSpatialReference* mpWGS84;
					EVString mCacheDatasetName;
					ev_int32 mMaxVisibleLevel;
					ev_int32 mMinVisibleLevel;
					ev_int32 mMaxLevel;
					ev_int32 mMinLevel;
					EarthView::World::Spatial::Atlas::ILayer* mLayer;	
					EarthView::World::Spatial::Geometry::CEnvelope mGeoExtent;
					EarthView::World::Spatial::Geometry::CEnvelope mExtent;
					ev_int32 mwidth;
					ev_int32 mheight;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType mrasterDataType;

					friend class CLocalTerrainLayerFactory;
				};

				/// <summary>
				/// 地形图层工厂类
				/// 管理地形图层
				/// </summary>
				class EV_3DLAYER_DLL CLocalTerrainLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLocalTerrainLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLocalTerrainLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLocalTerrainLayerFactory();

				public:

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>Globe图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="strXML">xml</param>
					/// <returns>工厂的产品</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 销毁一个Globe图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};
			}
		}
	}
}

#endif
