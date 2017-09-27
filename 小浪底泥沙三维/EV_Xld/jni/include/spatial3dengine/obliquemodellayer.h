#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEMODELLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBLIQUEMODELLAYER_H

#include "core/memoryallocatedobject.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3dengine/i3dlayer.h"
#include "graphic/rendersystem.h"

namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IDataset;
			}
		}
		namespace Spatial3D{

			class ITerrainRevisor;

			namespace ModelManager
			{
				class CObliqueModelManager;
				class OBQDemMetaInfo;
				class CObqDatasetWrapper;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class CObliqueModelLayerFactory;

				class EV_Spatial3DEngine_DLL COBQModelStateListener : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COBQModelStateListener(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					COBQModelStateListener();

					~COBQModelStateListener();
					/// <summary>
					/// 模型加载之后监听
					/// </summary>
					/// <param name="object">被加载的模型对象</param>
					virtual ev_void modelLoaded(EarthView::World::Graphic::CEntity* entity);
				};

				class EV_Spatial3DEngine_DLL CObliqueModelLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CObliqueModelLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CObliqueModelLayer();
					CObliqueModelLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
				public:
					virtual ~CObliqueModelLayer();

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
					/// 设置像素比率
					/// </summary>
					/// <returns></returns>
					void setPixelRatio(ev_real32 ratio);

					/// <summary>
					/// 获取像素比率
					/// </summary>
					/// <returns></returns>
					ev_real32 getPixelRatio();

					/// <summary>
					/// 获取高度模式 
					/// </summary>
					/// <returns>ev_real64,高度值</returns>
					virtual ev_real64 getAltitudeValue();

					/// <summary>
					/// 获取位置
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <returns></returns>
					virtual void getPosition(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt);

					/// <summary>
					/// 获取空间信息
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <param name="localScale">局部缩放</param>
					/// <param name="localRotate">局部旋转</param>
					/// <returns></returns>
					virtual void getSpatialInfo(_out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt
												,_out EarthView::World::Spatial::Math::CVector3& localScale
												,_out EarthView::World::Spatial::Math::CQuaternion& localRotate);

					/// <summary>
					/// 获取数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集指针</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getDataset(){return mpDataSet;}
					EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper* getDatasetWrapper();

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
					virtual ev_void setVisible(ev_bool visible);

					/// <summary>
					/// 停止渲染
					/// </summary>
					/// <param name="bClearAllObject">停止渲染前是否删除当前场景中的模型</param>
					void stopRender(ev_bool bClearAllObject);

					/// <summary>
					/// 开始渲染
					/// </summary>
					void startRender();

					/// <summary>
					/// 更新场景 
					/// </summary>
					void updateSceneGraphic(const EarthView::World::Graphic::CCamera* camera);

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
					/// <param name="level">当前的级别</param>
					/// <param name="force">是否为强制刷新</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					/// <summary>
					/// 数据集更新事件的通知
					/// </summary>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);

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

					/// <summary>
					/// 射线选择
					/// </summary>
					/// <param name="ray">射线对象</param>
					/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>			
					/// <param name="point">交点</param>
					/// <returns>true:与射线相交;false:不相交</returns>
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, _out EarthView::World::Spatial::Math::CVector3& point);	
					/// <summary>
					/// 设置某个图层反射光系数增益
					/// </summary>
					/// <param name="ambient">环境光增益</param>
					/// <param name="diffuse">漫反射增益</param>
					/// <param name="specular">镜面反射增益</param>
					/// <returns></returns>
					virtual void setEnvParam(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 获取图层反射光系数增益
					/// </summary>
					/// <returns>ambient 环境光增益，diffuse 漫反射增益，specular 镜面反射增益</returns>
					virtual void getEnvParam(EarthView::World::Graphic::CColourValue& ambient, EarthView::World::Graphic::CColourValue& diffuse, EarthView::World::Graphic::CColourValue& specular);

					/// <summary>
					/// 添加模型状态监听
					/// </summary>
					/// <param name="listener">模型监听</param>
					ev_void addModelStateListener(_in COBQModelStateListener* listener);
					/// <summary>
					/// 移除模型状态监听
					/// </summary>
					/// <param name="listener">模型监听</param>
					ev_void removeModelStateListener(_in COBQModelStateListener* listener);

				protected:
					EarthView::World::Spatial::GeoDataset::IDataset* mpDataSet;
					EarthView::World::Spatial3D::ModelManager::CObliqueModelManager* mpManager;

				private:
					class CD3DDeviceListener : public EarthView::World::Graphic::CRenderSystem::CRenderSystemListener
					{
					public:					
						CD3DDeviceListener(CObliqueModelLayer* pObqModelLayer);
						~CD3DDeviceListener();

						virtual void eventOccurred(const EVString &eventName,
							const EarthView::World::Core::NameValuePairList *parameters );
					private:
						CObliqueModelLayer* mObqModelLayer;
						ev_bool mVisible;
						ev_bool mDeviceLost;
					};

					CD3DDeviceListener* m_D3DDeviceListener;
				};
			}
		}
	}
}
#endif

