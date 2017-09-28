#ifndef EARTHVIEW_WORLD_SPATIAL3D_OSGBLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_OSGBLAYER_H

#include "spatial3dosgb/spatial3dosgbconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatial3dengine/i3dlayer.h"
#include "graphic/rendersystem.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class CBingMapTree;
			}

				class COsgbLayerFactory;


				class EV_Spatial3D_OSGB_DLL COsgbLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COsgbLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					COsgbLayer();
					COsgbLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
				public:
					virtual ~COsgbLayer();

					/// <summary>
					/// 获取高度模式 
					/// </summary>
					/// <returns>ev_real64,高度值</returns>
					virtual ev_real64 getAltitudeValue();

					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="altitudeValue">高度值</param>
					/// <returns></returns>
					virtual void setAltitudeValue(ev_real64 altitudeValue);
					/// <summary>
					/// 图层是否被选择
					/// </summary>
					/// <returns>被选择返回true，否则返回false</returns>
					virtual ev_bool isSelectable() const;

					/// <summary>
					/// 设置图层选择状态
					/// </summary>
					/// <param name="selectable">true 被选择，false 没有被选择</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selectable);


					/// <summary>
					/// 图层定位
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高度</param>
					/// <returns>true跳转成功，false图层无数据</returns>
					virtual ev_bool getGotoParam(_out ev_real64& latitude, _out ev_real64& longitude ,_out ev_real64& altitude);

					

				

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
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					virtual ev_void setVisible_impl(ev_bool visible);

				

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
					/// 数据集更新事件的通知
					/// </summary>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);

					/// <summary>
					/// 获取与图层所关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();

					/// <summary>
					/// xml反序列化
					/// </summary>
					/// <param name="element">xml元素</param>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 序列化成xml元素
					/// </summary>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>xml文本</returns>
					virtual EVString toXML() const;

					/// <summary>
					/// 序列化成流
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

				
ev_internal:
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					ev_bool initBingMapTrees(ev_bool needRefresh);

					ev_void updateBingMapTree(EVString& quadKey, bool needLoad);

				protected:
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataSet;
					
					EVString mDataSourceName;
					EVString mDataSetName;
					friend class COsgbLayerFactory;

					ev_vector<EarthView::World::Spatial3D::Atlas::CBingMapTree*> mBingMapTreeVec;
					ev_map<EVString, ev_bool> mBingMapQuadMap;
					ev_real64 mAltValue;

					EarthView::World::Spatial::Download::COSGBLayerMetaData* mLayerMetaData;

				private:
					class CD3DDeviceListener : public EarthView::World::Graphic::CRenderSystem::CRenderSystemListener
					{
					public:					
						CD3DDeviceListener(COsgbLayer* pOsgbLayer);
						~CD3DDeviceListener();

						virtual void eventOccurred(const EVString &eventName,
							const EarthView::World::Core::NameValuePairList *parameters );
					private:
						COsgbLayer* mOsgbLayer;
						ev_bool mVisible;
						ev_bool mDeviceLost;
					};

					CD3DDeviceListener* m_D3DDeviceListener;
				};

				/// <summary>
				/// 类工厂
				/// </summary>
				class EV_Spatial3D_OSGB_DLL COsgbLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COsgbLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					COsgbLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~COsgbLayerFactory();
				public:
					/// <summary>
					/// 返回单例的图层工厂
					/// </summary>
					static EarthView::World::Spatial3D::COsgbLayerFactory* getSingletonPtr();
					/// <summary>
					/// 释放单例的图层工厂
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
					static const EVString msLayerFactoryName;
				private:
					static EarthView::World::Spatial3D::COsgbLayerFactory* mSingletonPtr;
				};
			
		}
	}
}
#endif

