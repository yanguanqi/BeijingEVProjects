#ifndef CIMAGECLAMPSCENELAYER_H
#define CIMAGECLAMPSCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "spatial3dlayer/iwebclampscenelayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
							
				/// <summary>
				/// 贴地层-二维栅格数据，来自数据库或文件的栅格数据
				/// 管理贴地层-二维栅格数据图层
				/// </summary>
				class EV_3DLAYER_DLL CImageClampSceneLayer
					: public EarthView::World::Spatial3D::Atlas::IWebClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CImageClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CImageClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					CImageClampSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CImageClampSceneLayer();

				public:
					
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					/// <summary>
					/// 获取瓦片，具体在子类中实现
					/// </summary>
					/// <param name="tile">瓦片内容</param>
					/// <param name="north">瓦片信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(_in const EarthView::World::Spatial::CTileInfo& tileInfo,_inout EarthView::World::Spatial::CTileData& tile);
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
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
					/// 获知指定级别的瓦片是否有效
					/// </summary>
					/// <returns>指定级别的瓦片有效性</returns>
					virtual ev_bool levelValid(ev_int32 level) const;

					/// <summary>
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 获取专题图内存流
					/// </summary>
					/// <returns>专题图内存流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
					/// <summary>
					/// 判断专题图流是否相等
					/// </summary>
					/// <param name="stream">风格流</param>
					/// <returns>相等返回true，否则false</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CImageClampSceneLayer);

					ev_bool image2dds(EarthView::World::Core::MemoryDataStreamPtr& ptr,EarthView::World::Spatial::EVSSCFileFormat format,EVString& name,EVString& streamType,ev_int8& type);
					ev_int32 getRealTileLevel(ev_int32 level) const;
					friend class CImageClampSceneLayerFactory;
					ev_bool getLocalCacheTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
				};

				/// <summary>
				/// 贴地二维栅格数据Scenelayer的类工厂
				/// 管理贴地二维栅格数据
				/// </summary>
				class EV_3DLAYER_DLL CImageClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
					ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CImageClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CImageClampSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CImageClampSceneLayerFactory();

				public:
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="name">图层的名字</param>
					/// <returns>工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 创建一个图层实例
					/// </summary>
					/// <param name="layerName">图层名称</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 销毁一个图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					virtual ev_bool destroyInstance( EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msSceneLayerFactoryName;
				};
			}
		}
	}
}
#endif
