#ifndef EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWLAYER_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/itheme.h"
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include "spatial3dlayer/featuregrouplayer.h"
#include "spatial3dengine/i3dlayer.h"
#include "spatial3dengine/globecamera.h"
#include "spatial3dstreetview/streetviewstructs.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

				class CStreetViewLayerFactory;

				class EV_Spatial3DStreetView_DLL CStreetViewLayerListener : public EarthView::World::Core::CBaseObject
				{
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CStreetViewLayerListener(_in EarthView::World::Core::CNameValuePairList *pList) {};
				public:
					CStreetViewLayerListener() {};
					virtual ev_void onLayerHidden() {};
					virtual ev_void onLayerRemoved() {};
				};

				class EV_Spatial3DStreetView_DLL CStreetViewLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CStreetViewLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CStreetViewLayer();
					CStreetViewLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);

					virtual ~CStreetViewLayer();

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

					/// <summary>
					/// 返回图层地理范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层地理范围</returns>
					const EarthView::World::Spatial::Geometry::CEnvelope& getGeoExtent() const;

					ev_void notifyAbortLayerRequest();

					/// <summary>
					/// 返回分块级别号
					/// </summary>
					/// <param name=""></param>
					/// <returns>分块级别号</returns>
					virtual ev_int32 getBlockLevel()
					{
						return mBlockLevel;
					}

					/// <summary>
					/// 返回可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>可视距离</returns>
					virtual ev_real64 getVisibleDistance()
					{
						return mVisibleDistance;
					}

					/// <summary>
					/// 格式化缓存名称，将不规范字符转为"_"
					/// </summary>
					/// <param name="srcName">缓存名称</param>   
					/// <returns>缓存名称</returns>		
					static EVString makeCacheName(const EVString& srcName);

					/// <summary>
					/// 通过经纬度获取所在块内的所有点
					/// </summary>
					/// <param name="lon">经度</param>   
					/// <param name="lat">纬度</param>
					/// <param name="streetPoints">所在块内的所有点</param>
					/// <returns>是否获取成功</returns>
					virtual ev_bool getStreetPointsByLonLat(_in ev_real64 lon, _in ev_real64 lat, _out EarthView::World::Spatial::Download::CStreetPointList& streetPoints);

					/// <summary>
					/// 通过块编码和evid获取点拓扑结构
					/// </summary>
					/// <param name="blockCode">块编码</param>   
					/// <param name="evid">主键</param>
					/// <param name="point">点拓扑结构</param>   
					/// <returns>是否获取成功</returns>
					virtual ev_bool getTopologyPoint(EVString blockCode, ev_uint32 evid, CLayerStreetPoint& point);

					/// <summary>
					/// 获取图层关联的相机
					/// </summary>
					/// <param name=""></param>     
					/// <returns>相机</returns>
					virtual EarthView::World::Spatial3D::CGlobeCamera* getGlobeCamera()
					{
						return mpCacheCamera;
					}
					
					/// <summary>
					/// 注册街景图层监听
					/// </summary>
					/// <param name="listener">街景图层监听</param>     
					/// <returns></returns>
					virtual ev_void addStreetViewLayerListener(CStreetViewLayerListener* listener);

					/// <summary>
					/// 反注册街景图层监听
					/// </summary>
					/// <param name="listener">街景图层监听</param>     
					/// <returns></returns>
					virtual ev_void removeStreetViewLayerListener(CStreetViewLayerListener* listener);

					virtual ev_real64 clampedPixelSize(EVString blockCode, ev_real64& distance, ev_real64& radius);

					/// <summary>
					/// 设置中心点街景块编码
					/// </summary>
					/// <param name="blockCode">街景块编码</param>     
					/// <returns></returns>
					virtual ev_void setCenterPoint(EVString blockCode);
				
				ev_internal:
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
				
				protected:
					void init();
					ev_void initDefaultTheme();
					ev_void copyCameraParams(EarthView::World::Graphic::COctreeCamera& camera) const;
					/// <summary>
					/// 相机刷新时处理函数
					/// </summary>
					/// <param name="cam">相机</param>
					/// <param name="force">是否强制刷新</param>
					/// <returns></returns>
					virtual ev_void _processByCamera(EarthView::World::Graphic::COctreeCamera* cam, ev_bool force);
					ev_void parseMetaDataInfo();

					ev_void buildVisibleStreetViewBlocks(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleaseExtensions, list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdateExtensions);
					ev_void updateGeometry(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needReleaseExtensions,list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& needUpdateExtensions);
					ev_bool processStreetViewBlock(const EVString& blockCode, EarthView::World::Geometry3D::CMultiGeometry3DExtension*& geoExtension);
					EarthView::World::Geometry3D::CMultiGeometry3DExtension* processStreetViewLayer(const EVString& blockCode, CStreetPointList& pointList);
					CStreetBlock* getStreetViewBlock(const EVString& blockCode, CStreetPointList& pointList);
					ev_void processSelfNearPoints(const EVString& blockCode, CStreetPointList& pointList);
					ev_void processOtherNearPoints(const EVString& blockCode, CStreetPointList& pointList);
					ev_void calculateStreetViewDirection(CLayerStreetPoint& front, CLayerStreetPoint& back);
					ev_void writeString( const EVString& string,EarthView::World::Core::CDataStream& stream );
					ev_void loadExtensions(const EVString& nodeCode, EarthView::World::Geometry3D::CMultiGeometry3DExtension* needLoadExtension);
					ev_void buildTopology(const EVString& nodeCode);
					CLayerStreetPoint& getLayerPoint(EVString blockCode, ev_uint32 evid, ev_bool& found);
					ev_bool existLayerPoint(EVString blockCode, ev_uint32 evid);
					ev_void addLayerPoint(EVString blockCode, CLayerStreetPoint& point);
					ev_void removeLayerPoints(EVString blockCode);
					ev_void dividePointListByPhotoFile(CStreetPointList& pointList, map<EVString, CStreetPointList>& pointListMap);
					CLayerStreetPoint* getNearestBlockBeginEdgePoint(EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
					CLayerStreetPoint* getNearestBlockEndEdgePoint(EarthView::World::Spatial::Download::CStreetPoint& streetPoint);
					ev_bool getNearPoint(EVString blockCode, ev_uint32 evid, CLayerStreetPoint& point);
					ev_void addNearPoint(EVString blockCode, CLayerStreetPoint& point);
					ev_bool getNearPointList(EVString blockCode, CStreetPointList& pointList);
					ev_void addNearPointList(EVString blockCode, CStreetPointList& pointList);
					ev_void removeNearPointList(EVString blockCode);

					ev_void releaseExtension(EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);
					ev_void releaseExtension(list<EarthView::World::Geometry3D::CMultiGeometry3DExtension*>& extensions);

					EarthView::World::Spatial::GeoDataset::IDataset* mpDataSet;
					
					EVString mDataSourceName;
					EVString mDataSetName;
					EVString mCacheDatasetName;
					friend class CStreetViewLayerFactory;
					
					/// <summary>
					/// 专题图
					/// </summary>
					EarthView::World::Spatial::Theme::ITheme* mpTheme;					
					EarthView::World::Core::CReadWriteLock mThemeLock;//theme锁
					
					EarthView::World::Spatial::Geometry::CEnvelope mGeoExtent;

					/******************
					拓扑结构
					******************/	
					EarthView::World::Core::CReadWriteLock mCurrentPointMutex;
					map<EVString, map<ev_uint32, CLayerStreetPoint> > mCurrentPoints;
					set<EVString> mLoadingBlocks;
					EarthView::World::Core::CReadWriteLock mCurrentExtensionMutex;
					map<EVString, EarthView::World::Geometry3D::CMultiGeometry3DExtension*> mCurrentExtensions;					
					set<EVString> mLoadingExtensions;
					EarthView::World::Core::CReadWriteLock mNearPointMutex;
					map<EVString, map<ev_uint32, CLayerStreetPoint> > mNearPoints;
					EarthView::World::Core::CReadWriteLock mNearBlockMutex;
					map<EVString, CStreetPointList> mNearBlocks;
					EVString mCenterBlockCode;

					EarthView::World::Spatial::Geometry::ISpatialReference* mpSR;
					//EarthView::World::Core::MemoryDataStreamPtr mpThemeDataStream;

					ev_real64 mVisibleDistance;

					mutable EarthView::World::Core::CReadWriteLock mCameraLock;//相机锁
					//EarthView::World::Graphic::COctreeCamera* mpCacheCamera;
					EarthView::World::Spatial3D::CGlobeCamera* mpCacheCamera;

					ev_int32 mBlockLevel;

					friend class CStreetViewLayerUpdator;
					CStreetViewLayerUpdator* mUpdator;

					vector<CStreetViewLayerListener*> mpStreetViewLayerListeners;
					
					friend class CStreetViewBackgroundQueue;
				};

				/// <summary>
				/// 类工厂
				/// </summary>
				class EV_Spatial3DStreetView_DLL CStreetViewLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CStreetViewLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CStreetViewLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CStreetViewLayerFactory();
				public:
					/// <summary>
					/// 返回单例的图层工厂
					/// </summary>
					static EarthView::World::Spatial3D::CStreetViewLayerFactory* getSingletonPtr();
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
					static EarthView::World::Spatial3D::CStreetViewLayerFactory* mSingletonPtr;
				};
			
		}
	}
}
#endif

