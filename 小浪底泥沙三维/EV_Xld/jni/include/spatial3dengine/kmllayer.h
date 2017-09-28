#ifndef CKMLLAYER_H
#define CKMLLAYER_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "spatial3dengine/spatial3dengineconfig.h"
#include "geometry3d/iglobelayer.h"
#include "kmlserializer/geoobjectextension.h"
#include "spatial3dengine/kmldataset.h"
#include "geometry3d/geometry3d/imageoverlayer.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/geometry3dextension/multipolyline3dextension.h"
#include "geometry3d/geometry3dextension/multipolygon3dextension.h"
#include "spatial3dengine/panoramatile.h"
#include "spatial3dengine/kmlrenderablemanager.h"
#include "graphic/colourvalue.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CKmlDocument;
				class GeoObjects;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				class CKmlDataSource;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class CGeoEntity;
				class CKmlLayerUpdator;

				/// <summary>
				/// Kml图层
				/// 管理Kml图层
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlLayer
					: public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{ 
					
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="dataset">kml数据集</param>
					/// <returns></returns>
					CKmlLayer(EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ref_dataset);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <param name="dataset">kml数据集</param>
					/// <returns></returns>
					CKmlLayer(const EVString& name,EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ref_dataset);	
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlLayer();

				public:	
					ev_int32 getLayerGotoParam(_out ev_real64& latitude,_out ev_real64& longitude,_out ev_real64& heading,_out ev_real64& tilt,_out ev_real64& altitude,_out ev_real64& moditifAltitude);
					ev_int32 getKmlObjectGotoParam(EarthView::World::Spatial::Kml::CGeoObjectExtension* obj,_out ev_real64& latitude,_out ev_real64& longitude,_out ev_real64& heading,_out ev_real64& tilt,_out ev_real64& altitude,_out ev_real64& moditifAltitude);
					ev_int32 getKmlDocumentGotoParam(EarthView::World::Spatial::Kml::CKmlDocument* obj,_out ev_real64& latitude,_out ev_real64& longitude,_out ev_real64& heading,_out ev_real64& tilt,_out ev_real64& altitude,_out ev_real64& moditifAltitude);
					ev_int32 getKmlNetlinkGotoParam(EarthView::World::Spatial::Kml::CKmlNetworkLink* obj,_out ev_real64& latitude,_out ev_real64& longitude,_out ev_real64& heading,_out ev_real64& tilt,_out ev_real64& altitude,_out ev_real64& moditifAltitude);
					/// <summary>
					/// 设置地标字显示的距离
					/// </summary>
					/// <returns></returns>
					void setLabelVisibleDistance(Real val);

					Real getLabelVisibleDistance();
					ev_void setSelectionColour( const EarthView::World::Graphic::CColourValue& colour );
					EarthView::World::Graphic::CColourValue getSelectionColour();

					/// <summary>
					/// 设置地标开始变小的距离
					/// </summary>
					/// <returns>成功返回true，否则返回false</returns>
					void setReduceDistance(Real val);

					Real getReduceDistance();
					/// <summary>
					/// 更新图层
					/// </summary>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool update();
					///// <summary>
					/// 获取图层对应数据集
					///// </summary>
					/// <returns>返回数据集</returns>
					EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					///// <summary>
					/// 获取图层包围盒
					///// </summary>
					/// <returns>返回包围盒</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getEnvelopeRef(ev_bool& hasData);
					//EarthView::World::Graphic::CSceneManager* mSceneMgr;
					/// <summary>
					/// 获取Kml图层里要素 
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>Kml图层里要素 </returns>
					//CGeoObjectExtension* getFeature(ev_uint64 index) const;


					/// <summary>
					/// 获取Kml图层里要素的数量
					/// </summary>
					/// <returns>Kml图层里要素的数量 </returns>
					ev_uint64 getFeatureCount() const;
					/// <summary>
					/// 获取Kml数据的路径 
					/// </summary>
					/// <returns>Kml数据的路径  </returns>
					EVString getDataPath() const;
					/// <summary>
					///设置Kml数据的路径
					/// </summary>
					/// <param name="path">Kml数据的路径</param>
					/// <returns> </returns>
					ev_void setDataPath(EVString path);
					/// <summary>
					///获取Kml 要素的可见性
					/// </summary>
					/// <param name="path">Kml要素</param>
					/// <returns>Kml 要素的可见性</returns>
					//ev_bool getFeatureVisible(const CGeoObjectExtension* feature) const;
					/// <summary>
					///设置Kml 要素的可见性
					/// </summary>
					/// <param name="path">Kml要素</param>
					/// <param name="visible">可见性</param>
					/// <returns> </returns>
					//ev_void setFeatureVisible(const CGeoObjectExtension* feature,ev_bool visible);
					/// <summary>
					///获取Kml的根对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>Kml的根对象</returns>
					//CKmlDocument* getRootDocument() const;

					/// <summary>
					///绘制Kml图层 
					/// </summary>
					/// <returns></returns>
					ev_void Draw();
					/// <summary>
					///刷新Kml图层 
					/// </summary>
					/// <returns></returns>
					ev_void refreshLayer();
					/// <summary>
					///统计那些Entity需要创建StaticGeometry
					/// </summary>
					/// <returns></returns>
					ev_void statisEntityForStaticGeometry();
					/// <summary>
					///获取图层类型 
					/// </summary>
					/// <returns>图层类型 </returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 图层克隆 
					/// </summary>
					/// <returns>返回图层 </returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summary>
					/// 获取瓦片，具体在子类中实现
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片所在行</param>
					/// <param name="col">瓦片所在列</param>
					/// <param name="tile">瓦片内容</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					//virtual ev_bool getTile(Real east,Real west,Real north,Real south,_inout EarthView::World::Spatial::CTileData& tile);
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
					/// 序列化成xml
					/// </summary>
					/// <param name="element">xml元素</param>   
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>返回xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 序列化成流
					/// </summary>
					/// <param name="stream">数据流</param>   
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globe卸载一个图层之后调用的函数
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					virtual ev_void _notifyLayerRemoved_impl(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					/// <summary>
					/// 图层是否可见
					/// </summary>
					/// <returns>可见返回true，否则返回false</returns>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置图层的可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					virtual ev_void setVisible_impl(ev_bool visible);
					/// <summary>
					/// 获知图层是否可选择
					/// </summary>
					/// <returns>图层是否可选择</return>
					virtual ev_bool isSelectable() const;
					/// <summary>
					/// 设置图层可选择性
					/// </summary>
					/// <param name="selectable">图层可选择性</param>
					virtual ev_void setSelectable(ev_bool selectable);
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* getRenderableManger();
					const EarthView::World::Graphic::CCamera* mpCamera;
ev_internal:
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed_impl(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );

					//CKmlFeatureList mKmlFeatureList;
				private:
					mutable EarthView::World::Core::CReadWriteLock mLock;
					ev_real64 calAlt(ev_real64 lon,ev_real64 lat,EarthView::World::Spatial::Utility::EVAltitudeMode model,ev_real64 altValue);
					ev_real64 calAlt(EarthView::World::Spatial::Math::VertexList& points, EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode,ev_real64 altitude,ev_real64& centerlon,ev_real64& centerlat);
					EarthView::World::Spatial::Math::CVector3 computeArrowCenter(EarthView::World::Spatial::Kml::CGeoObjectExtension* pGeoobj, 
						EarthView::World::Spatial::Math::CVector3& min, 
						EarthView::World::Spatial::Math::CVector3& max);
					ev_void iteratorGetEnvelopRef( EarthView::World::Spatial::Kml::CKmlDocument* doc,EarthView::World::Spatial::Geometry::CEnvelope& envelop);

					
					ev_bool removeGeometry(EarthView::World::Spatial::Kml::CGeoObjectExtension* key,ev_bool isRemoveGeometry);
					ev_bool addGeometry(EarthView::World::Spatial::Kml::CGeoObjectExtension* key);
					EarthView::World::Graphic::CMovableObject* createEditLine(EarthView::World::Spatial::Math::CVector3 point3d,ev_real64 altitude);
					///<summary>
					///创建KML渲染对象并添加到管理列表
					///</summary>
					ev_bool createKmlObject(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* sceneMgr);
					
					//ev_real64 calAlt(ev_real64 lon,ev_real64 lat,EarthView::World::Spatial::Utility::EVAltitudeMode model,ev_real64 altValue);
					ev_void updateEnvelop( Real x,Real y,Real z,EarthView::World::Spatial::Geometry::CEnvelope& envelop );
					ev_void computeEnvelop( EarthView::World::Spatial::Kml::CGeoObjectExtension& t,EarthView::World::Spatial::Geometry::CEnvelope& envelop );
					ev_void iteratorGetEnvelopRef( EarthView::World::Spatial::Kml::CKmlDocument* doc,EarthView::World::Spatial::Geometry::CEnvelope& envelop ,ev_bool& hasData);

					ev_bool mlastVisbleState;
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CKmlLayer); 
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* mDataset;
					
				protected:
					typedef ev_map<EVString,EarthView::World::Spatial::CTileData*> KmlTileCache;
					vector<CGeoEntity*> mGeoEntitys;
					vector<EarthView::World::Spatial::Kml::CKmlNetworkLink*> mkmlnetworklink;
					KmlTileCache mTileCache;
ev_private:
					
				private:
					ev_bool mIsDatasetInitialized;
					EarthView::World::Spatial::Kml::CKmlDocument*  findParentFromGeoObj(EarthView::World::Spatial::Kml::CKmlDocument* doc,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,_out ev_int32& index );
					ev_void iteratorDataset(EarthView::World::Spatial::Kml::CKmlDocument* kmlDocument,EarthView::World::Graphic::CSceneManager* sceneMgr);
					EVString mDataPath;
					EarthView::World::Spatial3D::Atlas::CKmlRenderableManager* m_pRenderableMgr;
					Real mLabelVisibleDistance;
					Real mReduceDistance;
					CKmlLayerUpdator* mpKmlLayerUpdator;

				};
				/// <summary>
				/// KmlLayer的类工厂
				/// 管理KmlLayer类
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlLayerFactory();
				public:
					/// <summary>
					/// 返回单例的kml图层工厂
					/// </summary>
					/// <returns>EarthView::World::Spatial3D::Atlas::CKmlLayerFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* getSingletonPtr();
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
					static const EVString msKmlLayerFactoryName;
				private:
					static EarthView::World::Spatial3D::Atlas::CKmlLayerFactory* mSingletonPtr;
				};
			}
		}
	}
}
#endif
