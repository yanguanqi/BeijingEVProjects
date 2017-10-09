#ifndef _TERRAIN_GROUP_LAYER_H
#define _TERRAIN_GROUP_LAYER_H
#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/iterrainlayer.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CTerrainManager;

				/// <summary>
				/// CTerrainGroupLayer(高程图层组)管理以下图层:
				/// 高程图层CTerrainLayer
				/// 嵌套的CTerrainGroupLayer				
				/// </summary>
				class CTerrainLayer;
				class EV_3DLAYER_DLL CTerrainGroupLayer
					: public EarthView::World::Spatial3D::Atlas::ITerrainLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTerrainGroupLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTerrainGroupLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					CTerrainGroupLayer(const EVString& name);	
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CTerrainGroupLayer();
				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 通过行列号获取高程
					/// </summary>
					/// <param name="level">网格级数</param>
					/// <param name="row">行号</param>
					/// <param name="col">列号</param>
					/// <returns>高程流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrain(ev_int32 level,ev_int32 row,ev_int32 col);
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromMemoryCache(ev_int32 row, ev_int32 col, ev_int32 level);
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromDBCache(ev_int32 row, ev_int32 col, ev_int32 level);
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromServer(ev_int32 row, ev_int32 col, ev_int32 level);

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
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude,ev_real64 longitude,_out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, TerrainDataSource source, _out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude);
										
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude,ev_real64 longitude,ev_real64 targetSamplesPerDegrees,_out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, TerrainDataSource source, _out ev_real64& altitude);
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, TerrainDataSource source, ev_int32 maxLivel, _out ev_real64& altitude);

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
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
                    virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);

					//层操作方法
					/// <summary>
					/// 添加一个EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::ITerrainLayer图层</param>
					/// <returns></returns>
					ev_bool addLayer(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_layer);
					/// <summary>
					/// 插入一个EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::ITerrainLayer图层</param>
					/// <returns></returns>
					ev_bool insertLayer(ev_uint32 pos,EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_layer);
					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>是否成功</returns>
					ev_bool removeLayer(ev_uint32 index);
					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					virtual ev_bool removeLayer(EarthView::World::Spatial3D::Atlas::ITerrainLayer* layer);
					/// <summary>
					/// 获取EarthView::World::Spatial3D::Atlas::ITerrainLayer的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Atlas::ITerrainLayer的数量</returns>
					ev_uint32 getLayerCount() const;
					/// <summary>
					/// 获取EarthView::World::Spatial3D::Atlas::ITerrainLayer的索引
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::ITerrainLayer图层</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::ITerrainLayer的索引</returns>
					ev_int32  getLayerIndex(const EarthView::World::Spatial3D::Atlas::ITerrainLayer* layer) const;
					/// <summary>
					/// 获取高程图层或者图层组
					/// 调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Atlas::ITerrainLayer* getLayer(ev_uint32 index) const;
					/// <summary>
					/// 移动图层顺序
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后的顺序</param>
					/// <returns>是否成功</returns>
					ev_bool moveLayer(ev_uint32 index,ev_uint32 pos);
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">是否可见</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);

					/// <summary>
					/// 检测图层是否可视
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可视则返回true,反之则否</returns>
					virtual ev_bool isVisible() const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

				ev_private:
					EVString getVisibleTerrainLayersInfo()const;

					
				protected:
					
				private:
					CTerrainGroupLayer(const CTerrainGroupLayer& obj);
					friend class CTerrainGroupLayerFactory;
				protected: 
					CTerrainManager* mpTerrainManager;
				};

				/// <summary>
				/// CTerrainGroupLayer的类工厂
				/// 管理CTerrainGroupLayer类
				/// </summary>
				class EV_3DLAYER_DLL CTerrainGroupLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTerrainGroupLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTerrainGroupLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CTerrainGroupLayerFactory();					

				public: 
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
                    virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建实例
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
                    virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				public:
					static const EVString mTerrainGroupLayerFactoryName;

				};
			}


		}
	}
}
#endif
