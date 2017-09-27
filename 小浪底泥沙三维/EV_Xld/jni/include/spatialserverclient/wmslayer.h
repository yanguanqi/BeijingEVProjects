#ifndef EARTHVIEW_WORLD_SPATIAL_CWMSLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_CWMSLAYER_H
#include "spatialserverclient/weblayer.h"
#include "spatialserverclient/webdataset.h"
#include "spatialserverclient/wmslayerinfo.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 服务类
            /// </summary>
			class CWMSServer;

			/// <summary>
            /// OGC WMS 服务信息类
            /// </summary>
			class CWMSServerInfo;
			
			/// <summary>
            /// OGC WMS 数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:		
				/// <summary>
				/// 是否含有子数据集
				/// </summary>
				/// <returns>true表示含有</returns>
				virtual ev_bool hasSubDataset() const;
					
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWMSDataset();

				/// <summary>
				/// 获取数据包围盒信息
				/// </summary>
				/// <returns>包围盒对象指针</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope * getEnvelopeRef() const;

				/// <summary>
                /// 获取图层信息
                /// </summary>
                /// <returns>图层信息</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getLayerInfoRef() const;

				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务信息</returns>
				const EarthView::World::Spatial::CWMSServerInfo* getServerInfoRef() const;

				
				/// <summary>
                /// 获取地图图片
                /// </summary>
				/// <param name="styles">风格</param>
				/// <param name="srs">投影</param>
				/// <param name="mapRect">数据范围</param>
				/// <param name="width">图片宽</param>
				/// <param name="height">图片高</param>
				/// <param name="format">图片格式</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果</returns>///
				ev_int32 getMap(_in const EVString& styles,_in const EVString& srs,_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect,_in ev_uint32 width,_in ev_uint32 height,_in const EVString& format,_out EarthView::World::Spatial::COGCResult& result);
			
				/// <summary>
                /// 此图层下含有子图层数目
                /// </summary>
                /// <returns>子图层数目</returns>
				ev_uint32 getLayerCount() const;

				/// <summary>
                /// 获取指定子图层索引
                /// </summary>
				/// <param name="lyrName">图层名称</param>
                /// <returns>子图层索引</returns>
				ev_int32 findLayer(_in const EVString& lyrName) const;///当前Layer下含有的layer的索引图层名称应为具体名称（不带命名空间）.

				/// <summary>
                /// 打开指定子图层
                /// </summary>
				/// <param name="index">子图层索引</param>
                /// <returns>子图层</returns>
				const EarthView::World::Spatial::CWMSDataset* openDataset(_in ev_uint32 index) const;////内部的render改为clone;

				/// <summary>
                /// 获取指定子图层的图层信息
                /// </summary>
				/// <param name="index">子图层索引</param>
                /// <returns>指定子图层的图层信息指针</returns>
				const EarthView::World::Spatial::CWMSLayerInfo* getSubLayerInfoRef(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取指定要素
                /// </summary>
				/// <param name="styles">渲染风格</param>
				/// <param name="srs">渲染投影</param>
				/// <param name="mapRect">数据范围</param>
				/// <param name="width">生成的图片宽度</param>
				/// <param name="height">生成的图片高度y</param>
				/// <param name="x">图片的像素坐标x</param>
				/// <param name="y">图片的像素坐标y</param>
				/// <param name="infoformat">生成的图片格式</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果</returns>
				ev_int32 getFeatureInfo(_in const EVString& styles,_in const EVString& srs,_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect,_in ev_uint32 width,_in ev_uint32 height,_in ev_uint32 x,_in ev_uint32 y,_in const EVString& infoformat,_out EarthView::World::Spatial::COGCResult& result);

				/// <summary>
                /// 获取背景颜色
                /// </summary>
				/// <param name="r">red</param>
				/// <param name="g">green</param>
				/// <param name="b">blue</param>
				/// <param name="trans">透明与否</param>
                /// <returns></returns>
				ev_void setBackColor(_in ev_int32 r,_in ev_int32 g,_in ev_int32 b,_in ev_bool trans);
				
				/// <summary>
                /// 获取背景颜色
                /// </summary>
				/// <param name="r">red</param>
				/// <param name="g">green</param>
				/// <param name="b">blue</param>
				/// <param name="trans">透明与否</param>
                /// <returns></returns>
				ev_void getBackColor(_out ev_int32& r,_out ev_int32& g,_out ev_int32& b,_out ev_bool& trans);
				
				/// <summary>
                /// 清除背景颜色设置
                /// </summary>
                /// <returns></returns>
				ev_void clearBackColor();

				/// <summary>
                /// 设置高程信息
                /// </summary>
				/// <param name="elevation">高程信息</param>
                /// <returns></returns>
				ev_void setElevation(_in const EVString& elevation);

				/// <summary>
                /// 获取高程信息
                /// </summary>
                /// <returns>高程信息</returns>
				const EVString& getElevation() const;

				/// <summary>
                /// 设置时间信息
                /// </summary>
				/// <param name="datatime">时间信息</param>
                /// <returns></returns>
				ev_void setTime(_in const EVString& datatime);

				/// <summary>
                /// 获取时间信息
                /// </summary>
                /// <returns>时间信息</returns>
				const EVString& getTime() const;

				/// <summary>
                /// 获取图片格式数目
                /// </summary>
                /// <returns>图片格式数目</returns>
				ev_uint32 getFormatCount() const;

				/// <summary>
                /// 获取指定图片格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定图片格式</returns>
				const EVString getFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 获取要素格式数目
                /// </summary>
                /// <returns>要素格式数目</returns>
				ev_uint32 getInfoFormatCount() const;

				/// <summary>
                /// 获取指定要素格式
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素格式</returns>
				const EVString getInfoFormat(_in ev_uint32 index) const;

				/// <summary>
                /// 设置每次返回要素数目
                /// </summary>
				/// <param name="featureCount">每次返回要素数目</param>
                /// <returns></returns>
				ev_void setReturnFeatureCount(_in ev_uint32 featureCount);

				/// <summary>
                /// 获取每次返回要素数目
                /// </summary
                /// <returns>每次返回要素数目</returns>
				ev_uint32 getReturnFeatureCount() const;

				/// <summary>
				/// 获取返回的异常消息格式数目
				/// </summary>
				/// <returns></returns>
				ev_uint32 getExceptionFormat() const;
				
				/// <summary>
				/// 获取指定索引的异常格式
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定异常格式</returns>
				const EVString getExceptionFormat(_in ev_uint32 index)const;
				
				/// <summary>
				/// 获取当前GetMap异常消息格式
				/// </summary>
				/// <returns>异常消息格式</returns>
				const EVString& getUsedExceptionFormatForGetMap() const;
				
				/// <summary>
				/// 设置当前GetMap函数异常消息格式
				/// </summary>
				/// <param name="format">异常消息格式</param>
				/// <returns></returns>
				ev_void setUsedExceptionFormatForGetMap(_in const EVString& format);
				
				/// <summary>
				/// 获取当前GetFeatureInfo函数返回的异常信息格式
				/// </summary>
				/// <returns>异常信息格式</returns>
				const EVString& getUsedExceptionFormatForGetFeatureInfo() const;
				
				/// <summary>
				/// 设置当前GetFeatureInfo函数返回的异常信息格式
				/// </summary>
				/// <param name="format">异常信息格式</param>
				/// <returns></returns>
				ev_void setUsedExceptionFormatForGetFeatureInfo(_in const EVString& format);
			protected:
				///构造函数
				CWMSDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				ev_int32 getMap(_in const EVString& styles,_in const EVString& srs, 
					_in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect,
					_in ev_int32 width,_in ev_int32 height,
					_in const EVString& format,
					_out EarthView::World::Core::CDataStream** stream);
			ev_private:
				CWMSDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				///对应的图层信息
				EarthView::World::Spatial::CWMSLayerInfo* mpWMSLayerInfo;

				///异常格式
				EVString mstrExceptionGetMap;
				EVString mstrExceptionGetFeatureInfo;
				///红
				ev_int32 mnRed;
				///绿
				ev_int32 mnGreen;
				///蓝
				ev_int32 mnBlue;

				///背景是否透明
				ev_bool mbTransparent;

				//ev_bool mbSetBackColor;
				///时间信息
				EVString mstrTime;
				///高程信息
				EVString mstrElevation;

				///要素格式
				//EVString mstrInfoFormat;
				///每次最多返回的要素数目
				ev_uint32 mnFeatureCountLimit;

				friend class CWMSServer;
				friend class CWMSLayer;
			};


			/// <summary>
            /// OGC WMS 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CWMSLayer();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWMSLayer();
				
				/// <summary>
                /// 设置关联数据集
                /// </summary>
				/// <param name="dataset">数据机对象</param>
                /// <returns></returns>
				ev_void setDataset(_in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

				/// <summary>
                /// 获取包围盒信息
                /// </summary>
                /// <returns>包围盒对象指针，不需释放</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;

				/// <summary>
				/// 获取是否可用
				/// </summary>
				/// <returns>true表示可用</returns>
				virtual ev_bool isValid() const;
				
				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="display">渲染设备参数</param>
				/// <param name="type">渲染类型</param>
				/// <returns>成功返回true</returns>
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

				/// <summary>
                /// 设置显示投影,与setSpatialReference作用相同
                /// </summary>
				/// <param name="srs">投影名称</param>
                /// <returns></returns>
				ev_void setDiaplaySRS(_in const EVString& srs);
				
				/// <summary>
                /// 获取显示投影
                /// </summary>
                /// <returns>显示投影</returns>
				const EVString& getDisplaySRS() const;

				/// <summary>
                /// 获取显示风格列表
                /// </summary>
                /// <returns>显示风格列表</returns>
				const EVString& getDisplayStyle() const;
				
				/// <summary>
                /// 设置显示风格
                /// </summary>
				/// <param name="style">风格列表</param>
                /// <returns></returns>
				void setDisplayStyle(_in const EVString& styles);

				/// <summary>
                /// 获取图片格式
                /// </summary>
                /// <returns>图片格式</returns>
				const EVString& getFormat() const;

				/// <summary>
                /// 设置图片格式
                /// </summary>
				/// <param name="format">图片格式</param>
                /// <returns></returns>
				ev_void setFormat(_in const EVString& format);

				
				/// <summary>
                /// 获取背景颜色
                /// </summary>
				/// <param name="r">red</param>
				/// <param name="g">green</param>
				/// <param name="b">blue</param>
				/// <param name="trans">透明与否</param>
                /// <returns></returns>
				ev_void setBackColor(_in ev_int32 r,_in ev_int32 g,_in ev_int32 b,_in ev_bool trans);
				/// <summary>
                /// 获取背景颜色
                /// </summary>
				/// <param name="r">red</param>
				/// <param name="g">green</param>
				/// <param name="b">blue</param>
				/// <param name="trans">透明与否</param>
                /// <returns></returns>
				ev_void getBackColor(_out ev_int32& r,_out ev_int32& g,_out ev_int32& b,_out ev_bool& trans);
				
				/// <summary>
                /// 清除背景颜色设置
                /// </summary>
                /// <returns></returns>
				ev_void clearBackColor();

				/// <summary>
                /// 设置高程信息
                /// </summary>
				/// <param name="elevation">高程信息</param>
                /// <returns></returns>
				ev_void setElevation(_in const EVString& elevation);

				/// <summary>
                /// 获取高程信息
                /// </summary>
                /// <returns>高程信息</returns>
				const EVString getElevation() const;

				/// <summary>
                /// 设置时间信息
                /// </summary>
				/// <param name="datatime">时间信息</param>
                /// <returns></returns>
				ev_void setTime(_in const EVString& datatime);

				/// <summary>
                /// 获取时间信息
                /// </summary>
                /// <returns>时间信息</returns>
				const EVString getTime() const;
			ev_private:
				CWMSLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				EVString mstrFormat;
				EVString mstrStyles;
				EVString mstrSRS;
				friend class CWMSServer;
			};
		
			/// <summary>
            /// OGC WMS 图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMSLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CWMSLayerFactory();
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWMSLayerFactory();
			ev_private:
				CWMSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
                /// 创建图层对象
                /// </summary>
                /// <returns>图层对象指针</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
				/// <summary>
                /// 从xml还原图层
                /// </summary>
				/// <param name="strXml">xml描述</param>
                /// <returns>图层对象指针</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml);
				/// <summary>
                /// 从xml结点要素还原图层对象
                /// </summary>
				/// <param name="element">xml结点对象</param>
                /// <returns>图层对象指针</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
			};
		}
	}
}
#endif



