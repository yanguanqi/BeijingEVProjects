#ifndef _KML_GROUP_LAYER_H
#define _KML_GROUP_LAYER_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatialinterface/ilayer.h"
#include "geometry3d/iglobelayer.h"
#include "spatial3dengine/kmllayer.h"
namespace EarthView{
	namespace World{
		namespace Graphic{
			class CCamera;
			class CSceneManager;
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{			
				/// <summary>
				/// CKmlGroupLayer(Kml图层组)管理以下图层:
				/// Kml图层(EarthView::World::Spatial3D::Atlas::CKmlLayer)
				/// 嵌套的CTerrainGroupLayer				
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlGroupLayer : public EarthView::World::Spatial3D::Atlas::CKmlLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlGroupLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlGroupLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">层的名字</param>
					/// <returns></returns>
					CKmlGroupLayer(const EVString& name);	
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlGroupLayer();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片所在行</param>
					/// <param name="col">瓦片所在列</param>
					/// <param name="tile">瓦片信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
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
					/// 添加一个EarthView::World::Spatial3D::Atlas::CKmlLayer图层
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::CKmlLayer图层</param>
					/// <returns></returns>
					virtual ev_bool addLayer(EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer);
					/// <summary>
					/// 插入一个EarthView::World::Spatial3D::Atlas::CKmlLayer图层
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::CKmlLayer图层</param>
					/// <returns></returns>
					virtual ev_bool insertLayer(ev_uint32 index,EarthView::World::Spatial3D::Atlas::CKmlLayer* ref_layer);
					/// <summary>
					/// 删除一个EarthView::World::Spatial3D::Atlas::CKmlLayer图层
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>是否成功</returns>
					virtual ev_bool removeLayer(ev_uint32 index);
					/// <summary>
					/// 删除图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>是否成功</returns>
					ev_bool removeLayer(EarthView::World::Spatial3D::Atlas::CKmlLayer* layer);
					/// <summary>
					/// 获取EarthView::World::Spatial3D::Atlas::CKmlLayer的数量
					/// </summary>
					/// <returns>EarthView::World::Spatial3D::Atlas::CKmlLayer的数量</returns>
					virtual ev_uint32 getLayerCount() const;
					/// <summary>
					/// 获取EarthView::World::Spatial3D::Atlas::CKmlLayer的索引
					/// </summary>
					/// <param name="layer">EarthView::World::Spatial3D::Atlas::CKmlLayer图层</param>
					/// <returns>EarthView::World::Spatial3D::Atlas::CKmlLayer的索引</returns>
					virtual ev_int32 getLayerIndex(const EarthView::World::Spatial3D::Atlas::CKmlLayer* layer) const;
					/// <summary>
					/// 获取Kml图层或者图层组
					/// 调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial3D::Atlas::CKmlLayer* getLayer(ev_uint32 index) const;
					/// <summary>
					/// 移动图层顺序
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后的顺序</param>
					/// <returns>是否成功</returns>
					ev_bool moveLayer(ev_uint32 index,ev_uint32 pos);					
					/// <summary>
					/// 添加图层消息处理
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 删除图层消息处理
					/// </summary>
					/// <param name="pSceneMgr">场景管理器</param>
					/// <returns></returns>
					ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// 刷新图层消息处理
					/// </summary>
					/// <param name="camera">相机</param>
					/// <param name="updateType">刷新的类型</param>
					/// <returns></returns>
					ev_void _notifyRefreshed( const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					/// <summary>
					/// 数据集变更通知
					/// </summary>
					/// <param name="strDataSourceName">数据源名称</param>
					/// <param name="strDatasetName">数据集名称</param>
					/// <returns></returns>
					virtual ev_void _notifyDataChanged(const EVString& strDataSourceName,const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent);
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <returns>xml元素</returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 获取图层可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层可见性</returns>
					virtual ev_bool isVisible() const;
					/// <summary>
					/// 设置图层的可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>					
					virtual ev_void setVisible(ev_bool visible);
					//ev_uint32 getLayerCount();
					/// <summary>
					/// 从xml序列化
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>					
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
				protected:					
					EarthView::World::Core::DataStreamPtr drawImages(list<EarthView::World::Core::DataStreamPtr> images,ev_bool dds);
					mutable EarthView::World::Core::CReadWriteLock mLock;
				private:
					C_DISABLE_COPY(CKmlGroupLayer);
					//static ev_bool getEncoderClsid(const WCHAR* format,CLSID *clisd);
					friend class CKmlGroupLayerFactory;
				protected:
					typedef list<EarthView::World::Spatial3D::Atlas::IGlobeLayer*> KmlLayers;
					KmlLayers mKmlLayers;
					const EarthView::World::Graphic::CCamera* mpCamera; 
				};

				/// <summary>
				/// CKmlGroupLayer工厂				
				/// </summary>
				class EV_Spatial3DEngine_DLL CKmlGroupLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlGroupLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlGroupLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CKmlGroupLayerFactory();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns>工厂的产品</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <returns>工厂的产品</returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 销毁一个图层实例
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns>工厂的产品</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				public:
					static const EVString mKmlGroupLayerFactoryName;
				};

			}
		}
	}
}




#endif
