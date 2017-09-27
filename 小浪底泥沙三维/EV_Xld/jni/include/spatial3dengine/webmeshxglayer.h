#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_WEBMESHXGLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_WEBMESHXGLAYER_H

#include "spatial3dengine/obliquemodellayer.h"
#include "spatialinterface/ilayerselection.h"
#include "spatialinterface/ifeatureclass.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class CWebMeshXGLayerFactory;

				class EV_Spatial3DEngine_DLL CWebMeshXGLayer : public CObliqueModelLayer
				{
					friend class CWebMeshXGLayerFactory;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWebMeshXGLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CWebMeshXGLayer();
					CWebMeshXGLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
				public:
					virtual ~CWebMeshXGLayer();

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
					/// xml反序列化
					/// </summary>
					/// <param name="element">xml元素</param>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 设置模型可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setRecordObjectVisible(ev_uint32 id, ev_bool flag);
					void setRecordObjectVisible(const EarthView::World::Core::IntVector& ids, ev_bool flag);

					/// <summary>
					/// 获取模型可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getRecordObjectVisible(ev_uint32 id);

					/// <summary>
					/// 设置点选高亮
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="flag">true高亮，false不高亮</param>
					/// <returns></returns>
					void setHighLight(ev_uint32 id, ev_bool flag);
					ev_bool getHighLight(ev_uint32 id);
					void clearHightLight();

					/// <summary>
					/// 设置组件高亮
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="compName">组件名</param>
					/// <param name="flag">true高亮，false不高亮</param>
					/// <returns></returns>
					void setComponentHighLight(ev_uint32 id, const EVString& compName, ev_bool flag);
					ev_bool getComponentHighLight(ev_uint32 id, const EVString& compName);
					void clearComponentHightLight();

					/// <summary>
					/// 获取被选择的组件名，下列参数都可从tool监听参数中取出
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="objectHandle">选中的对象handle，从tool监听参数的userdata中取出</param>
					/// <param name="submeshIndex">submesh索引</param>
					/// <param name="instanceIndex">submesh复用索引</param>
					/// <param name="segmentIndex">段号</param>
					/// <param name="outComp">组件</param>
					/// <param name="parentLevel">根据当前查到的subEntity向上找parentLevel级父组件，默认没有parentLevel参数的接口parentLevel=0</param>
					/// <returns>true找到，false没找到</returns>
					ev_bool getSelectedComponent(ev_uint32 id, ev_uint64 objectHandle, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, _out EarthView::World::Spatial3D::CComponent& outComp);
					ev_bool getSelectedComponent(ev_uint32 id, ev_uint64 objectHandle, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, ev_uint32 parentLevel, _out EarthView::World::Spatial3D::CComponent& outComp);
					/// <summary>
					/// 获取被选择的对象名，下列参数都可从tool监听参数中取出
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="objectHandle">选中的对象handle，从tool监听参数的userdata中取出</param>
					/// <param name="name">对象名</param>
					/// <returns>true找到，false没找到</returns>
					ev_bool getSelectedObjectName(ev_uint32 id, ev_uint64 objectHandle, _out EVString& name);

					/// <summary>
					/// 获取被选择的对象名，下列参数都可从tool监听参数中取出
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="objectHandle">选中的对象handle，从tool监听参数的userdata中取出</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <param name="localScale">局部缩放</param>
					/// <param name="localOrientation">局部旋转</param>
					/// <returns>true找到，false没找到</returns>
					ev_bool getSelectedObjectPosition(ev_uint32 id, ev_uint64 objectHandle, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out  EarthView::World::Spatial::Math::CQuaternion& localOrientation);

					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 设置图层的选择集
					/// </summary>
					/// <param name="selection">图层的选择集</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);

					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

					EarthView::World::Spatial::GeoDataset::IFeatureClass* getRecordFeatureClass();
				protected:
					EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;

					/// <summary>
					/// 选择模型
					/// </summary>
					/// <param name="pSelection">被选择的要素id构成的要素选择器</param>
					/// <returns></returns>
					virtual void _selectModel(EarthView::World::Spatial::GeoDataset::IFeatureSelection* pSelection);
				};

				/// <summary>
				/// 类工厂
				/// </summary>
				class EV_Spatial3DEngine_DLL CWebMeshXGLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWebMeshXGLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CWebMeshXGLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CWebMeshXGLayerFactory();
				public:
					/// <summary>
					/// 返回单例的图层工厂
					/// </summary>
					static EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* getSingletonPtr();
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
					static EarthView::World::Spatial3D::Atlas::CWebMeshXGLayerFactory* mSingletonPtr;
				};


			}
		}
	}
}
#endif

