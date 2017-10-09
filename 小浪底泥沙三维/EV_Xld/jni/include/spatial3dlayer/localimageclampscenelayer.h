#ifndef LOCALIMAGECLAMPSCENELAYER_H
#define LOCALIMAGECLAMPSCENELAYER_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "spatial3dlayer/3dlayerconfig.h"
#include "geometry3d/iclampscenelayer.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				class IRasterRenderer;
			}			
		}

		namespace Spatial
		{
			class CTileReference;
			namespace Utility
			{
				class CSpatialReference;
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
							
				/// <summary>
				/// 贴地层-二维栅格数据，来自数据库或文件的栅格数据
				/// 管理贴地层-二维栅格数据图层
				/// </summary>
				class EV_3DLAYER_DLL CLocalImageClampSceneLayer : public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLocalImageClampSceneLayer(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLocalImageClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					CLocalImageClampSceneLayer(_in const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLocalImageClampSceneLayer();

				public:
					/// <summary>
					/// 绑定一个二维图层
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					virtual ev_void attachLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer);
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
					virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;	
					/// <summary>
					/// 获取瓦片最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最大级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取瓦片最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最小级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置瓦片最大级别
					/// </summary>
					/// <param name="maxlevel">瓦片最大级别</param>
					/// <returns></returns>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置瓦片最小级别
					/// </summary>
					/// <param name="minlevel">瓦片最小级别</param>
					/// <returns></returns>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);

					/// <summary>
					/// 获取最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大级别</returns>
					virtual ev_int32 getMaxLevel() const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summray>
					/// 设置栅格渲染对象
					/// </summary>
					/// <param name="pRenderer">栅格渲染对象（内部释放）</param>
					/// <returns></returns>
					ev_void setRenderer(EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer);
					/// <summray>
					/// 获取栅格渲染对象
					/// </summary>
					/// <returns>栅格渲染对象</returns>
					const EarthView::World::Spatial2D::Raster::IRasterRenderer* getRenderer() const;

					/// <summary>
					/// 获取图层的地理范围
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
					/// <summray>
					/// 设置栅格图层的重采样方式
					/// </summary>
					///<param name="resampleIndex">重采样方式索引</param>
					/// <returns></returns>
					ev_void setResampleType(ev_int32 resampleIndex);
					/// <summray>
					/// 获取栅格图层的重采样方式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getResampleType();
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
				protected:

					/// <summary>
					/// 绘制图片
					/// </summary>
					/// <param name="xmin">左边界</param>
					/// <param name="ymin">下边界</param>
					/// <param name="xmax">右边界</param>
					/// <param name="ymax">上边界</param>
					/// <param name="format">文件格式</param>
					/// <param name="data">绘出来的数据</param>
					/// <returns></returns>
					ev_int32 drawImage(ev_real64 xmin,ev_real64 ymin ,ev_real64 xmax,ev_real64 ymax,ev_int32 format,EarthView::World::Core::MemoryDataStreamPtr& data);
					/// <summary>
					///　返回级别,主要用于缓存
					/// </summary>
					/// <param name="level">来自四叉树请求中的级别</param>
					/// <returns>缓存中的级别</returns>
					ev_int32 getRealTileLevel(ev_int32 level) ;

					ev_void writeString( const EVString& string,EarthView::World::Core::CDataStream& stream );
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CLocalImageClampSceneLayer);

					/// <summary>
					/// 创建墨卡托规则
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::CTileReference* createWebMercatorTileRef()const;
					/// <summary>
					/// 创建WGS84规则
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::CTileReference* createWGS84TileRef()const;

					friend class CLocalImageClampSceneLayerFactory;

				protected:
					//EarthView::World::Spatial::Utility::CSpatialReference* mpSR;
					EVString mCacheDatasetName;
					ev_int32 mMaxVisibleLevel;
					ev_int32 mMinVisibleLevel;

					ev_int32 mRedIndex;
					ev_int32 mGreenIndex;
					ev_int32 mBlueIndex;
					
					ev_real64 mResolution;

					EarthView::World::Spatial::Geometry::CEnvelope mExtent;

					EarthView::World::Core::CReadWriteLock mRenderLock;//锁
				};

				/// <summary>
				/// 贴地二维栅格数据Scenelayer的类工厂
				/// 管理贴地二维栅格数据
				/// </summary>
				class EV_3DLAYER_DLL CLocalImageClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
					ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLocalImageClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLocalImageClampSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLocalImageClampSceneLayerFactory();

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
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& layerName);
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
