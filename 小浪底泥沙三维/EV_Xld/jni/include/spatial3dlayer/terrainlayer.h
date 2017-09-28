#ifndef _SRTM_TERRAIN_LAYER_H
#define _SRTM_TERRAIN_LAYER_H

#include "spatial3dlayer/3dlayerconfig.h"

#include "core/ev_time.h"
#include "download/globeserviceconnection.h"
#include "download/webmetadataserviceconnection.h"
#include "cachemanager/demtilecacheaccessor.h"

#include "spatial3dlayer/iterrainlayer.h"



namespace EarthView
{
    namespace World
    {
		namespace Spatial
		{
			class CTileReference;

			namespace Utility
			{
				class CSpatialReference;
			}
		}
        namespace Spatial3D
        {
            namespace Atlas
            {				
				struct DemInfo;
							
				class NullTileTag;
				/// <summary>
				/// 地形图层
				/// 管理地形
				/// </summary>
                class EV_3DLAYER_DLL CTerrainLayer : public EarthView::World::Spatial3D::Atlas::ITerrainLayer
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTerrainLayer(EarthView::World::Core::CNameValuePairList* pList);
                protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CTerrainLayer();
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
                    CTerrainLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CTerrainLayer();
                protected:					
                    int mStartLevel;
                    int mEndLevel;
                    ev_real32 mNorth;
                    ev_real32 mSouth;
                    ev_real32 mWest;
                    ev_real32 mEast;					

                    EarthView::World::Spatial::CEVDEMDataset* mpDemDataset;

					EarthView::World::Spatial3D::Atlas::DemInfo* mpDemInfo;

                    EarthView::World::Core::CCoreTime mUpdateTime;
                    EarthView::World::Core::CCoreTime mDataTime;

					ev_bool mIsInit;
					NullTileTag* mpNullTileTag;

					EarthView::World::Spatial::Utility::CSpatialReference* mpSR;
					EVString mCacheDatasetName;
					EVString makeCacheName( const EVString& srcName );

                public:
					
					/// <summary>
					/// 获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高程</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, _out ev_real64& altitude);
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
					virtual EarthView::World::Core::MemoryDataStreamPtr getLocalCache(ev_int32 row, ev_int32 col, ev_int32 level);
					/// <summary>
					/// 返回数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 返回数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource();
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
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 序列化成流
					/// </summary>
					/// <param name="stream">流</param>   
					/// <returns></returns>	
                    virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;    

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>	
                    virtual EarthView::World::Core::CXmlElement toXmlElement() const;

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
					/// 获取参考系类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>参考系类型</returns>
					virtual EarthView::World::Spatial3D::Atlas::LAYERSRS getSrs()const;
					/// <summary>
					/// 获取包围盒在X轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最小值</returns>
					virtual ev_real64 getMinX() const;
					/// <summary>
					/// 获取包围盒在X轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最大值</returns>
					virtual ev_real64 getMaxX() const;
					/// <summary>
					/// 获取包围盒在Y轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最小值</returns>
					virtual ev_real64 getMinY() const;
					/// <summary>
					/// 获取包围盒在Y轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最大值</returns>					
					virtual ev_real64 getMaxY() const;
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
					virtual ev_void _notifyLayerRemoved_impl(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 获取图层的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的名称</returns>
					virtual EVString getName() const;     
					/// <summary>
					/// 设置图层的名称
					/// </summary>
					/// <param name="name">图层的名称</param>
					/// <returns></returns>
					virtual ev_void setName( const EVString &name );
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					
			ev_internal:
					/// <summary>
					/// 从流恢复图层参数
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
                    virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );

                protected:

					ev_bool getHeightAtHelp(ev_real64 latitude, ev_real64 longitude, ev_int32 row,ev_int32 col, ev_int32 level, ev_real64 tileSpan,_out ev_real64 &height);
					ev_bool getHeightAtHelp(ev_real64 latitude, ev_real64 longitude, ev_int32 row,ev_int32 col, ev_int32 level, ev_real64 tileSpan, TerrainDataSource source, _out ev_real64 &height);

					EarthView::World::Core::MemoryDataStreamPtr getTerrain(const vector<ev_int32>& rows, const vector<ev_int32>& cols, const vector<ev_int32>& tileLevels,_out ev_int32& row, _out ev_int32& col, _out ev_int32& level,_out ev_real64& tileResolution);

                    ev_bool getDemInfo();

                    int getTileLevel( _in ev_real32 targetSamplesPerDegree, _in EarthView::World::Spatial3D::Atlas::AltitudeStatus& altitudeStatus);

                    EarthView::World::Core::CCoreTime convertTime(EVString& inTime);

					EarthView::World::Spatial::CTileReference* mpTileReference;

					

				    friend class CTerrainLayerFactory;


                };
            
				/// <summary>
				/// 地形图层工厂类
				/// 管理地形图层
				/// </summary>
                class EV_3DLAYER_DLL CTerrainLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
                {

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTerrainLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CTerrainLayerFactory();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CTerrainLayerFactory();

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
					/// 创建一个图层实例
					/// </summary>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
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
