#ifndef COGCWMTSWEBCLAMPSCENELAYER_H
#define COGCWMTSWEBCLAMPSCENELAYER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include <tileutility/vectortile.h>
#include "spatialserverclient/tilematrixset.h"

#include "spatial3dlayer/3dlayerconfig.h"
#include "geometry3d/iclampscenelayer.h"

#include "spatialserverclient/wmtslayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				/// <summary>
				/// 网络海图类
				/// 管理网络海图类
				/// </summary>
				class EV_3DLAYER_DLL COGCWMTSClampSceneLayer
					: public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COGCWMTSClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWMTSClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWMTSClampSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COGCWMTSClampSceneLayer();

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
					/// 返回数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>				
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 复制图层
					/// </summary>	
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
					/// 获得专题图数据流
					/// </summary>
					/// <returns>数据流对象智能指针</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();
					/// <summary>
					/// 判断专题图数据流是否相同
					/// </summary>
					/// <returns>是否</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);										
					/// <summary>
					/// 获取图层透明度值
					/// </summary>
					/// <returns>图层透明度值</returns>					
					virtual ev_uint8 getTransparentValue() const;
					/// <summary>
					/// 设置图层透明度
					/// </summary>
					/// <param name="transparent">透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);

					/// <summary>
					/// 获取请求样式
					/// </summary>
					/// <returns></returns>
					EVString getRequestStyle();
					/// <summary>
					/// 设置请求样式
					/// </summary>
					/// <param name="style">请求样式</param>
					/// <returns></returns>
					void setRequestStyle(EVString style);
					/// <summary>
					/// 获取请求格式
					/// </summary>
					/// <returns></returns>
					EVString getRequestFormat();
					/// <summary>
					/// 设置请求格式
					/// </summary>
					/// <param name="style">请求格式</param>
					/// <returns></returns>
					void setRequestFormat(EVString format);
					/// <summary>
					/// 获取请求瓦片集
					/// </summary>
					/// <returns></returns>
					EVString getRequestTileSet();
					/// <summary>
					/// 设置请求瓦片集
					/// </summary>
					/// <param name="style">请求样式</param>
					/// <returns></returns>
					void setRequestTileSet(EVString tileSet);

					/// <summary>
					/// 获取图层的范围
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

				protected:

					EarthView::World::Core::MemoryDataStreamPtr clipParentTile(EarthView::World::Core::MemoryDataStreamPtr& parentData,ev_uint32 x,ev_uint32 y,ev_int32 tileWidth,ev_int32 tileHeight);
					
					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);
				public:
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>		   
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
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
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);
										
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
				protected:					
					EarthView::World::Core::MemoryDataStreamPtr drawBlackImage();

					int isResolutionFit(Real scale,Real yExt);//-1:小于，0：等于，1：大于

					ev_bool getOgcData1(ev_int32 level,ev_int32 row,ev_int32 col,ev_int32 width,ev_int32 height,Real minX,Real maxX,Real minY,Real maxY,ev_bool needDDS,EarthView::World::Core::MemoryDataStreamPtr& ptr,ev_bool& needSave);
					ev_bool getOgcData2(ev_int32 level,ev_int32 row,ev_int32 col,ev_int32 width,ev_int32 height,ev_bool needDDS,EarthView::World::Core::MemoryDataStreamPtr& ptr,ev_bool& needSave);

					void initParam();
					EVString readString(EarthView::World::Core::MemoryDataStreamPtr& stream);
					ev_void writeString(const EVString& string,EarthView::World::Core::CDataStream& stream);
					ev_bool getParentTileData(ev_int32 level,ev_int32 row,ev_int32 col,ev_int32 tileWidth,ev_int32 tileHeight,EarthView::World::Core::MemoryDataStreamPtr& tileData);
					ev_bool getOgcParentTileData(ev_int32 ogclevel,ev_int32 row,ev_int32 col,ev_int32 tileWidth,ev_int32 tileHeight,EarthView::World::Core::MemoryDataStreamPtr& tileData);
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(COGCWMTSClampSceneLayer);

					EarthView::World::Spatial::CWMTSDataset* mpWmtsDataset;
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;

					EVString mCacheDatasetName;
					EVString mDatasourceName;
					EVString mDatasetName;

					ev_uint8 mTransparent;

					mutable EarthView::World::Core::CReadWriteLock mThemeLock;
					EVString mRequestStyle;
					EVString mRequestFormat;
					EVString mRequestTileSet;

					mutable EarthView::World::Core::CReadWriteLock mTileMatrixLock;
					EarthView::World::Spatial::CTileMatrixSet* mTileMatrixSet;
					int mSupportType;//0:不支持，1：支持，但不是兼容ev瓦片规则，2支持ev瓦片规则

					ev_int32 mMaxVisibleLevel;
					ev_int32 mMinVisibleLevel;

					ev_int32 mMaxMatrix;

					mutable EarthView::World::Core::CReadWriteLock mLevel2MatrixLock;
					map<ev_int32,ev_int32> mMapLevel2Matrix;

					friend class COGCWMTSClampSceneLayerFactory;
				};


				/// <summary>
				/// 贴地二维矢量数据Scenelayer的类工厂
				/// 管理贴地二维矢量数据
				/// </summary>
				class EV_3DLAYER_DLL COGCWMTSClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					COGCWMTSClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COGCWMTSClampSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~COGCWMTSClampSceneLayerFactory();

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
					/// <param name="name">图层的名字</param>
					/// <returns>工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
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
