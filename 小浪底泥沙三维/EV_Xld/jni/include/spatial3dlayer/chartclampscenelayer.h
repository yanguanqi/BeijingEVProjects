#ifndef _CHART_CLAMP_SCENE_LAYER_H_
#define _CHART_CLAMP_SCENE_LAYER_H_

#include "spatial3dlayer/3dlayerconfig.h"

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include "spatialinterface/ichartoption.h"
#include "geometry3d/iclampscenelayer.h"


namespace EarthView{
	namespace World{

		namespace Spatial
		{	
			namespace Display
			{
				class CTextSymbol;
				class CStatistics3DSymbol;
				class CSpatialDisplay;
			}
		}

		namespace Spatial3D{
			namespace Atlas{

				/// <summary>
				/// 海图图层
				/// 管理海图图层
				/// </summary>
				class EV_3DLAYER_DLL CChartClampSceneLayer : public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CChartClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CChartClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="layername">图层名</param>
					/// <returns></returns>
					CChartClampSceneLayer(const EVString& layername);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CChartClampSceneLayer();
				public:
					/// <summary>
					/// 绑定一个二维图层
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					virtual ev_void attachLayer(EarthView::World::Spatial::Atlas::ILayer* layer);

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;

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
					/// 获取瓦片最大显示级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最大级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取瓦片最小显示级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最小级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置瓦片最大显示级别
					/// </summary>
					/// <param name="maxlevel">瓦片最大级别</param>
					/// <returns></returns>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置瓦片最小显示级别
					/// </summary>
					/// <param name="minlevel">瓦片最小级别</param>
					/// <returns></returns>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);				

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
					/// <returns>xml文本</returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;	

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
					virtual ev_void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					/// <summary>
					/// Globe刷新时调用的函数
					/// </summary>
					/// <param name="camera">当前的相机</param>
					/// <param name="updateType">刷新类型</param>
					/// <returns></returns>
					virtual ev_void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera,EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType);

					/// <summary>
					/// 返回风格流
					/// </summary>
					/// <param name=""></param>
					/// <returns>风格流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getThemeStream();

					/// <summary>
					/// 判断风格流是否相等
					/// </summary>
					/// <param name="stream">风格流</param>
					/// <returns>相等返回true，否则false</returns>
					virtual ev_bool equalThemeStream(EarthView::World::Core::MemoryDataStreamPtr stream);

					/// <summary>
					/// 返回图层透明度
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明度</returns>
					virtual ev_uint8 getTransparentValue() const;
					/// <summary>
					/// 设置图层透明度
					/// </summary>
					/// <param name="transparent">透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 设置颜色模式
					/// </summary>
					/// <param name="type">颜色模式</param>
					/// <returns></returns>
					ev_void setColorType(EarthView::World::Spatial::Display::EVChartColorType type);

					/// <summary>
					/// 获取颜色模式
					/// </summary>
					/// <returns>获取颜色模式</returns>
					EarthView::World::Spatial::Display::EVChartColorType getColorType() const;

					/// <summary>
					/// 获取显示类型
					/// </summary>
					/// <returns>显示类型</returns>
					EarthView::World::Spatial::Display::EVChartDisplayCategory getDisplayCategory() const;

					/// <summary>
					/// 设置显示类型
					/// </summary>
					/// <param name="category">显示类型</param>
					/// <returns></returns>
					ev_void setDisplayCategory(EarthView::World::Spatial::Display::EVChartDisplayCategory category);
					/// <summary>
					/// 设置是否显示英语
					/// </summary>
					/// <param name="value">true用英语/用其他语言</param>
					/// <returns></returns>
					ev_void setUseEnglishValue(_in ev_bool value);

					/// <summary>
					/// 注记是否显示英语
					/// </summary>
					/// <returns>true用英语/用其他语言</returns>
					ev_bool getUseEnglishValue() const;
					/// <summary>
					/// 获取点状物标的类型
					/// </summary>
					/// <returns>类型</returns>
					EarthView::World::Spatial::Display::EVChartLookUpType getChartPointType() const;

					/// <summary>
					/// 设置点状物标的类型
					/// </summary>
					/// <param name="type">类型</param>
					/// <returns>类型</returns>
					ev_void setChartPointType(EarthView::World::Spatial::Display::EVChartLookUpType type);

					/// <summary>
					/// 获取面状物标的类型
					/// </summary>
					/// <returns>类型</returns>
					EarthView::World::Spatial::Display::EVChartLookUpType getChartAreaType() const;

					/// <summary>
					/// 设置面状物标的类型
					/// </summary>
					/// <param name="type">类型</param>
					/// <returns></returns>
					ev_void setChartAreaType(EarthView::World::Spatial::Display::EVChartLookUpType type);
					/// <summary>
					/// 设置是否模糊查询空间关系，默认为true
					/// </summary>
					/// <param name="value">true表示模糊查询/false表示精确查询</param>
					/// <returns></returns>
					ev_void setUseBlurSpatialRelation(_in ev_bool value);

					/// <summary>
					/// 获取是否模糊查询空间关系，默认为true
					/// </summary>
					/// <returns>true表示模糊查询/false表示精确查询</returns>
					ev_bool isUseBlurSpatialRelation() const;
					/// <summary>
					/// 获取安全等深线，单位：米
					/// </summary>
					/// <returns>安全等深线值</returns>
					ev_real64 getSafetyContour() const;

					/// <summary>
					/// 设置安全等深线，单位：米
					/// </summary>
					/// <param name="value">安全等深线值</param>
					/// <returns></returns>
					ev_void setSafetyContour(ev_real64 value);

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
					
					/// <summary>
					/// 按条件选择要素
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <param name="type">操作类型</param>
					/// <returns></returns>
					virtual ev_void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter *filter,_in EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清除选择
					/// </summary>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 获取图层选择集
					/// </summary>
					/// <returns>图层选择集对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CChartClampSceneLayer);

				protected:					
					ev_void calcuEnvelope();
				protected:

					ev_bool drawImage(ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Core::MemoryDataStreamPtr& imageStream);
					EarthView::World::Core::MemoryDataStreamPtr drawBlackImage();

					ev_uint32 getThemeStream(EarthView::World::Core::CDataStream& stream);

					ev_bool getParentTileData(ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Core::MemoryDataStreamPtr& tileData);
					EarthView::World::Core::MemoryDataStreamPtr clipParentTile(EarthView::World::Core::MemoryDataStreamPtr& parentData,ev_uint32 x,ev_uint32 y,ev_int32 width,ev_int32 height);
				protected:
					friend class CFeatureGroupLayer;
					void setDrawingState(ev_bool bDrawing);	
				protected:

					EVString mCacheDatasetName;					

					ev_int32 mMaxVisibleLevel;
					ev_int32 mMinVisibleLevel;

					ev_uint8 mTransparent;

					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;

					mutable EarthView::World::Core::CReadWriteLock mLayerLock;//dataset锁

					ev_bool mIsDrawing;
					EarthView::World::Core::CRecursiveMutex mSpatialDisplayLock;
					set<EarthView::World::Spatial::Display::CSpatialDisplay*> mSetSpatialDisplay;

					friend class CChartClampSceneLayerFactory;
				};

				/// <summary>
				/// 海图图层工厂类
				/// 管理海图图层
				/// </summary>
				class EV_3DLAYER_DLL CChartClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CChartClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CChartClampSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CChartClampSceneLayerFactory();

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
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Atlas::ILayer* createInstance();
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
