#ifndef _ITERRAIN_LAYER_H
#define _ITERRAIN_LAYER_H

#include "spatial3dlayer/3dlayerconfig.h"

#include <core/stdheaders.h>
#include <core/memoryallocatedobject.h>
#include <core/datastream.h>
#include <core/stringdefines.h>

#include "geometry3d/iglobelayer.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
            {
                class CTerrainTileManager;

				enum AltitudeStatus
				{
					FAILED		= 0,	//失败
					INFERIOR	= 1,	//成功，但分辨率比预期的低
					DESIRABLE	= 2		//成功，分辨率与预期的一致
				};

				/// <summary>
				/// 地形图层
				/// 管理地形
				/// </summary>
                class EV_3DLAYER_DLL ITerrainLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
                {
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ITerrainLayer(EarthView::World::Core::CNameValuePairList* pList);
               
                protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    ITerrainLayer();
                public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~ITerrainLayer();

                public:
					enum TerrainDataSource
					{
						TDS_Default,       //memorycache -> dbcache ->server
						TDS_DefaultCache,  //memorycache -> dbcache
						TDS_MemoryCache,
						TDS_DBCache,
						TDS_Server
					};

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
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
                    virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;                  
                    
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
					/// 获取图层的描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的描述信息</returns>
                    virtual EVString getDescription() const;
					/// <summary>
					/// 设置图层的描述信息
					/// </summary>
					/// <param name="value">图层的描述信息</param>
					/// <returns></returns>
                    virtual ev_void setDescription(const EVString& value); 

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
					/// 序列化成流
					/// </summary>
					/// <param name="stream">流</param>   
					/// <returns></returns>		
                    virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns>xml文本</returns>	
                    virtual EVString toXML() const;

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
                    virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					
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
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrain(const vector<ev_int32>& rows, const vector<ev_int32>& cols, ev_int32 levelCount, _out ev_int32& row, _out ev_int32& col, _out ev_int32& level);
                protected:               
					EVString mDatasetName;   // 数据集名称
					EVString mDataSourceName;
                    EarthView::World::Spatial3D::Atlas::CTerrainTileManager* mpTileManager;					
                protected:
                    EVString mDescription;                    
                };
            }

		}
	}
}
#endif


