#ifndef EV_SPATIAL3DLAYER_TERRAINMANAGER__H
#define EV_SPATIAL3DLAYER_TERRAINMANAGER__H
#include <core/global.h>
#include <core/datastream.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/iterrainlayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class ITerrainLayer;

				/// <summary>
				/// 地形管理器
				/// 管理地形
				/// </summary>
				class EV_3DLAYER_DLL CTerrainManager : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTerrainManager(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CTerrainManager();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CTerrainManager();

                public:

					/// <summary>
					/// 添加Terrain图层					
					/// </summary>
					/// <param name="pLayer">地形图层</param>
					/// <returns>是否成功</returns>
					ev_bool addTerrainLayer(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pLayer);

                    /// <summary>
                    /// 插入Terrain图层                    
                    /// </summary>
					/// <param name="pLayer">地形图层</param>
					/// <returns>是否成功</returns>
                    ev_bool insertTerrainLayer(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pLayer);

					/// <summary>
					/// 删除Terrain图层
					/// </summary>
					/// <param name="pLayer">地形图层</param>
					/// <returns>是否成功</returns>
					ev_bool removeTerrainLayer(EarthView::World::Spatial3D::Atlas::ITerrainLayer* pLayer);
					
					
					/// <summary>
					/// 移动Terrain图层
					/// !!! index 和 toWhere  从 0 开始索引
					/// </summary>
					/// <param name="index">开始索引</param>
					/// <param name="toWhere">目标索引</param>
					/// <returns>是否成功</returns>
					ev_bool moveTerrainLayer(ev_uint32 index,ev_uint32 toWhere);					

					/// <summary>
					/// 清除地形图层
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clearTerrainLayers();

					/// <summary>
					/// 获取地形图层数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>地形图层数量</returns>
					ev_uint32 getTerrainLayerCount() const;

                    /// <summary>
                    /// 获取地形图层的索引
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>索引</returns>
                    ev_int32 getTerrainLayerIndex(const EarthView::World::Spatial3D::Atlas::ITerrainLayer* pLayer)const;

					/// <summary>
					/// 通过索引获取地形图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>地形图层</returns>
					EarthView::World::Spatial3D::Atlas::ITerrainLayer* getTerrainLayer(ev_uint32 index)const;

					/// <summary>
					/// 通过经纬度获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="targetSamplesPerDegrees">每度采样数</param>	
					/// <param name="altitude">高程</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees,_out ev_real64& altitude);
					EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, ITerrainLayer::TerrainDataSource source, _out ev_real64& altitude);
					EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, ITerrainLayer::TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude);

					/// <summary>
					/// 获取当前缓存中最高级别的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高程</param>
					/// <returns>是否成功</returns>
					ev_bool getBestHeightAt(ev_real64 latitude, ev_real64 longitude,_out ev_real64& altitude);

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
					EarthView::World::Core::MemoryDataStreamPtr getTerrain(ev_int32 row, ev_int32 col, ev_int32 level);
					EarthView::World::Core::MemoryDataStreamPtr getTerrainFromMemoryCache(ev_int32 row, ev_int32 col, ev_int32 level);
					EarthView::World::Core::MemoryDataStreamPtr getTerrainFromDBCache(ev_int32 row, ev_int32 col, ev_int32 level);
					EarthView::World::Core::MemoryDataStreamPtr getTerrainFromServer(ev_int32 row, ev_int32 col, ev_int32 level);

ev_private:

					EVString getVisibleTerrainLayersInfo()const;

					/// <summary>
					/// 通过经纬度获取高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="targetSamplesPerDegrees">每度采样数</param>	
					/// <param name="preTileResolution">前一图层的瓦片分辨率</param>	
					/// <param name="altitude">高程</param>
					/// <param name="tileResolution">瓦片的分辨率</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功</returns>
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees,ev_real64 preTileResolution ,_out ev_real64& altitude,_out ev_real64& tileResolution);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees,ev_real64 preTileResolution , ITerrainLayer::TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude,_out ev_real64& tileResolution);

				protected:
					ev_bool insertTerrainLayer_nolock(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::ITerrainLayer* pLayer);
                private:
					mutable EarthView::World::Core::CReadWriteLock mMtx;
					list<EarthView::World::Spatial3D::Atlas::ITerrainLayer*> mTerrainLayers;
				};
			}
		}
	}
}

#endif
