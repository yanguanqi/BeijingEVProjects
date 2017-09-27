#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_SMART3DLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_SMART3DLAYER_H

#include "spatial3dengine/obliquemodellayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class CSmart3DLayerFactory;

				class EV_Spatial3DEngine_DLL CSmart3DLayer : public CObliqueModelLayer
				{
					friend class CSmart3DLayerFactory;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSmart3DLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CSmart3DLayer();
					CSmart3DLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
				public:
					virtual ~CSmart3DLayer();
					
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// 图层克隆
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="altitudeValue">高度值</param>
					/// <returns></returns>
					virtual void setAltitudeValue(ev_real64 altitudeValue);

					/// <summary>
					/// 设置位置
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <returns></returns>
					virtual void setPosition(ev_real64 lat, ev_real64 lon, ev_real64 alt);

					/// <summary>
					///  更新纹理
					/// </summary>
					/// <returns></returns>
					virtual void updateOBQ(ev_bool bUpdateVectorTexture,ev_bool bUpdateKmlTexture, ev_bool bUpdateTemporaryTexture, ev_bool bUpdateTerrain);

					/// <summary>
					/// 根据经纬度和级别获取高程 
					/// </summary>
					/// <param name="lat">纬度</param> 
					/// <param name="lon">经度</param>   
					/// <param name="targetSamplesPerDegrees">每度采样数，-1表示最高精度</param>
					/// <returns></returns>
					virtual ev_bool getHeightAt(_in ev_real32 lat,_in ev_real32 lon,_in ev_real32 targetSamplesPerDegrees,_inout ev_real32& height);

					/*************************地形修改*************************/

					/// <summary>
					/// 增加地形修改器
					/// </summary>
					/// <param name="tr">地形修改器</param> 
					/// <returns>是否成功</returns>
					ev_bool addTerrainRevisor(EarthView::World::Spatial3D::ITerrainRevisor* ref_tr);

					/// <summary>
					/// 删除地形修改器
					/// </summary>
					/// <param name="key">地形修改器主键</param> 
					/// <returns>是否成功</returns>
					ev_bool removeTerrainRevisor(const EVString& key);

					/// <summary>
					/// 交换地形修改器顺序
					/// </summary>
					/// <param name="front">第一个位置</param>
					/// <param name="back">第二个位置</param> 
					/// <returns>是否成功</returns>
					ev_bool swapTerrainRevisor(ev_uint32 front,ev_uint32 back);

					/// <summary>
					/// 清除地形修改器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clearTerrainRevisors();

					/// <summary>
					/// 获取地形修改器数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>地形修改器数量</returns>
					ev_uint32 getTerrainRevisorCount();

					/// <summary>
					/// 获取地形修改器
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>地形修改器</returns>
					EarthView::World::Spatial3D::ITerrainRevisor* getTerrianRevisor(ev_uint32 index);

					/// <summary>
					/// 获取地形修改器
					/// </summary>
					/// <param name="key">主键</param>
					/// <returns>地形修改器</returns>
					EarthView::World::Spatial3D::ITerrainRevisor* getTerrainRevisor(const EVString& key);
				
				};

				/// <summary>
				/// 类工厂
				/// </summary>
				class EV_Spatial3DEngine_DLL CSmart3DLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSmart3DLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CSmart3DLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CSmart3DLayerFactory();
				public:
					/// <summary>
					/// 返回单例的图层工厂
					/// </summary>
					static EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* getSingletonPtr();
					/// <summary>
					/// 释放单例的kml图层工厂
					/// </summary>
					/// <returns></returns>
					static ev_void releaseSingletonPtr();
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <returns>Globe图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个GlobeLayer图层实例
					/// </summary>
					/// <param name="name">图层的名称</param>
					/// <param name="ds">数据集对象</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// 创建一个GlobeLayer图层实例
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个GlobeLayer图层实例
					/// </summary>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 销毁一个Globe图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msObqLayerFactoryName;
				private:
					static EarthView::World::Spatial3D::Atlas::CSmart3DLayerFactory* mSingletonPtr;
				};

				
			}
		}
	}
}
#endif

