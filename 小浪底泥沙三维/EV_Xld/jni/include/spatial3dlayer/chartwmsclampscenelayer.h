#ifndef _CHART_WMS_CLAMP_SCENE_LAYER_H_
#define _CHART_WMS_CLAMP_SCENE_LAYER_H_

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <mathengine/vector3.h>

#include <tileutility/vectortile.h>

#include "spatial3dlayer/3dlayerconfig.h"
#include "geometry3d/iclampscenelayer.h"

//海图颜色模式
#define ChartColorMode_SunnyDay "SunnyDay"//晴天
#define ChartColorMode_Nightfall "Nightfall"	//傍晚	
#define ChartColorMode_DayTime "DayTime"//白天
#define ChartColorMode_Misty "Misty"//有雾
#define ChartColorMode_Night "Night"//黑夜

//海图显示模式
#define ChartDisplayMode_Unknown "Unknown"//未知
#define ChartDisplayMode_Base "Base"	//基础显示			
#define ChartDisplayMode_Stand "Stand"//标准显示
#define ChartDisplayMode_All "All"//全部显示

//海图符号样式
#define ChartSymbolMode_SimpleSymbol "SimpleSymbol"//简单符号
#define ChartSymbolMode_Tradition "Tradition"	//传统符号

//海图安全等深线
#define ChartIsobath_FiveMeter "FiveMeter"//5米
#define ChartIsobath_TenMeter "TenMeter"	//10米			
#define ChartIsobath_TwentyMeter "TwentyMeter"//20米
#define ChartIsobath_ThirtyMeter "ThirtyMeter"//30米

//海图注记样式
#define ChartAnnotationMode_English "English"//英文
#define ChartAnnotationMode_Chinese "Chinese"	//中文

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				/// <summary>
				/// 网络海图类
				/// 管理网络海图类
				/// </summary>
				class EV_3DLAYER_DLL CChartWMSClampSceneLayer
					: public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CChartWMSClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CChartWMSClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CChartWMSClampSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CChartWMSClampSceneLayer();

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
					/// 设置颜色模式
					/// </summary>
					/// <param name="value">颜色模式</param>
					/// <returns></returns>
					ev_void setColorMode(const EVString& value);
					/// <summary>
					/// 获取颜色模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色模式</returns>
					EVString getColorMode() const;
					/// <summary>
					/// 设置显示模式
					/// </summary>
					/// <param name="value">显示模式</param>
					/// <returns></returns>
					ev_void setDisplayMode(const EVString& value);
					/// <summary>
					/// 获取显示模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>显示模式</returns>
					EVString getDisplayMode() const;
					/// <summary>
					/// 设置符号模式
					/// </summary>
					/// <param name="value">符号模式</param>
					/// <returns></returns>
					ev_void setSymbolMode(const EVString& value);
					/// <summary>
					/// 符号模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号模式</returns>
					EVString getSymbolMode() const;
					/// <summary>
					/// 设置等深线
					/// </summary>
					/// <param name="value">等深线</param>
					/// <returns></returns>
					ev_void setIsobath(const EVString& value);
					/// <summary>
					/// 等深线
					/// </summary>
					/// <param name=""></param>
					/// <returns>等深线</returns>
					EVString getIsobath() const;
					/// <summary>
					/// 设置注记样式
					/// </summary>
					/// <param name="value">注记样式</param>
					/// <returns></returns>
					ev_void setAnnotationMode(const EVString& value);
					/// <summary>
					/// 注记样式
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记样式</returns>
					EVString getAnnotationMode() const;

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
					/// 获取包围盒在X轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最小值</returns>
					virtual ev_real64 getMinX() const;
					/// <summary>
					/// 获取包围盒在X轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最大值</returns>
					virtual ev_real64 getMaxX() const;
					/// <summary>
					/// 获取包围盒在Y轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最小值</returns>
					virtual ev_real64 getMinY() const;
					/// <summary>
					/// 获取包围盒在Y轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最大值</returns>					
					virtual ev_real64 getMaxY() const;

					/// <summary>
					/// 获取最大瓦片级别
					/// </summary>
					/// <returns>最大瓦片级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取最小瓦片级别
					/// </summary>
					/// <returns>最小瓦片级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置最大瓦片级别
					/// </summary>
					/// <param name="maxlevel">最大瓦片级别</param>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置最小瓦片级别
					/// </summary>
					/// <param name="maxlevel">最小瓦片级别</param>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);

				protected:

					EarthView::World::Core::MemoryDataStreamPtr clipParentTile(EarthView::World::Core::MemoryDataStreamPtr& parentData,ev_uint32 x,ev_uint32 y);
					
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
					ev_int32 getRealTileLevel(ev_int32 level) const;
					/// <summary>
					/// 获知指定级别的瓦片是否有效
					/// </summary>
					/// <returns>指定级别的瓦片有效性</returns>
					virtual ev_bool levelValid(ev_int32 level) const;

					bool initParam();
					void initDefaultSymbol();
					EVString readString(EarthView::World::Core::MemoryDataStreamPtr& stream);
					ev_void writeString(const EVString& string,EarthView::World::Core::CDataStream& stream);
					ev_bool getParentTileData(ev_int32 level,ev_int32 row,ev_int32 col,EarthView::World::Core::MemoryDataStreamPtr& tileData);
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(CChartWMSClampSceneLayer);

					mutable EarthView::World::Core::CRecursiveMutex mThemeLock;//dataset锁
					EVString msColorMode;
					EVString msDisplayMode;
					EVString msSymbolMode;
					EVString msIsobath;
					EVString msAnnotationMode;

					ev_uint8 mTransparent;

					EarthView::World::Spatial::CEVWMSChartDataset* mpWmsChartDataset;
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
					EVString mCacheDatasetName;
					EVString mDatasourceName;
					EVString mDatasetName;
					ev_int32 mMaxVisibleLevel;
					ev_int32 mMinVisibleLevel;

					ev_uint32 mTileWidth;
					ev_uint32 mTileHeight;

					friend class CChartClampSceneLayerFactory;
				};


				/// <summary>
				/// 贴地二维矢量数据Scenelayer的类工厂
				/// 管理贴地二维矢量数据
				/// </summary>
				class EV_3DLAYER_DLL CChartWMSClampSceneLayerFactory : public EarthView::World::Spatial::Atlas::ILayerFactory
				{

				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CChartWMSClampSceneLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CChartWMSClampSceneLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CChartWMSClampSceneLayerFactory();

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
