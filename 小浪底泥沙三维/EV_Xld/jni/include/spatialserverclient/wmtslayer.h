#ifndef EARTHVIEW_WORLD_SPATIAL_CWMTSLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_CWMTSLAYER_H
#include "spatialserverclient/weblayer.h"
#include "spatialserverclient/wmtslayerinfo.h"
#include "spatialserverclient/webdataset.h"

// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMTS 服务类
            /// </summary>
			class CWMTSServer;

			/// <summary>
            /// OGC WMTS 服务信息类
            /// </summary>
			class CWMTSServerInfo;
			
			/// <summary>
            /// OGC WMTS 数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWMTSDataset();
				///获取包围盒
				virtual const EarthView::World::Spatial::Geometry::IEnvelope * getEnvelopeRef() const;
				/// <summary>
                /// 获取图层信息
                /// </summary>
                /// <returns>图层信息</returns>
				const EarthView::World::Spatial::CWMTSLayerInfo* getLayerInfoRef() const;

				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务信息</returns>
				const EarthView::World::Spatial::CWMTSServerInfo* getServerInfoRef() const;
				
				/// <summary>
                /// 获取指定经纬度的要素
                /// </summary>
				/// <param name="tileMatrix">tileMatrix名称</param>
				/// <param name="row">瓦片行</param>
				/// <param name="col">瓦片列</param>
				/// <param name="x">地理坐标x</param>
				/// <param name="y">地理坐标y</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果</returns>
				ev_int32 getFeatureInfo(_in const EVString& tileMatrix,_in ev_uint32 row, _in ev_uint32 col, _in ev_real64 x, _in ev_real64 y,_out EarthView::World::Spatial::COGCResult& result);
				
				/// <summary>
                /// 获取指定瓦片
                /// </summary>
				/// <param name="tileMatrix">tileMatrix名称</param>
				/// <param name="row">瓦片行</param>
				/// <param name="col">瓦片列</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果</returns>
				ev_int32 getTile(_in const EVString& tileMatrix, _in ev_uint32 row, _in ev_uint32 col,_out EarthView::World::Spatial::COGCResult& result);
				ev_int32 getTile(_in const EVString& tileMatrix, _in ev_uint32 row, _in ev_uint32 col,_out EarthView::World::Spatial::COGCResult& result,ev_uint32 timeout_ms);


				/// <summary>
                /// 获取TileMatrixSet名称
                /// </summary>
                /// <returns>TileMatrixSet名称</returns>
				const EVString& getTileMatrixSet() const;
				/// <summary>
				/// 设置TileMatrixSet名称
				/// </summary>
				/// <returns></returns>
				ev_void setTileMatrixSet(_in const EVString& tileMatrixSet);
				/// <summary>
                /// 获取显示风格
                /// </summary>
                /// <returns>显示风格</returns>
				const EVString& getDisplayStyle() const;

				/// <summary>
                /// 设置显示风格
                /// </summary>
				/// <param name="style">风格</param>
                /// <returns></returns>
				ev_void setDisplayStyle(_in const EVString& style);

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
				ev_void setFormat(_in const  EVString& format);

				/// <summary>
                /// 获取要素返回格式
                /// </summary>
                /// <returns>要素返回格式</returns>
				const EVString& getInfoFormat() const;

				/// <summary>
                /// 设置要素返回格式
                /// </summary>
				/// <param name="infoformat">要素返回格式</param>
				ev_void setInfoFormat(_in const EVString& infoformat);

				/// <summary>
				/// 是否含有子数据集
				/// </summary>
				/// <returns>true表示含有</returns>
				virtual ev_bool hasSubDataset() const;
			protected:
				///构造函数
				CWMTSDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
			ev_private:
				CWMTSDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				
				///相关图层信息
				EarthView::World::Spatial::CWMTSLayerInfo* mpWMTSLayerInfo;
		
				///matrixSet名称
				EVString mstrTileMatrixSet;
				///显示风格
				EVString mstrStyle;
				///渲染图片格式
				EVString mstrFormat;
				///要素返回格式
				EVString mstrInfoFormat;

				friend class CWMTSServer;
			};

			/// <summary>
            /// OGC WMTS 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWMTSLayer();

				/// <summary>
                /// 设置关联数据集
                /// </summary>
				/// <param name="dataset">数据机对象</param>
                /// <returns></returns>
				virtual ev_void setDataset(_in  EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

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
                /// 获取图层信息
                /// </summary>
                /// <returns>图层信息对象指针</returns>
				const EarthView::World::Spatial::CWMTSLayerInfo* getLayerInfoRef() const;

				/// <summary>
                /// 获取服务信息
                /// </summary>
                /// <returns>服务信息对象指针</returns>
				const EarthView::World::Spatial::CWMTSServerInfo* getServerInfoRef() const;
				
				/*/// <summary>
                /// 获取指定瓦片
                /// </summary>
				/// <param name="tileMatrix">tileMatrix名称</param>
				/// <param name="row">瓦片行</param>
				/// <param name="col">瓦片列</param>
				/// <param name="stream">查询结果</param>
                /// <returns>操作结果</returns>
				ev_int32 getTile(_in const EVString& tileMatrix, _in ev_uint32 row, _in ev_uint32 col);*/
				
				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="display">渲染设备参数</param>
				/// <param name="type">渲染类型</param>
				/// <returns>成功返回true</returns>
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

				/// <summary>
                /// 获取图层名称
                /// </summary>
                /// <returns>图层名称</returns>
				const EVString getLayerName() const;

				/// <summary>
                /// 获取TileMatrixSet名称
                /// </summary>
                /// <returns>TileMatrixSet名称</returns>
				const EVString getTileMatrixSet() const;

				/// <summary>
                /// 获取TileMatrix名称
                /// </summary>
                /// <returns>TileMatrix名称</returns>
				const EVString& getTileMatrix()const;

				/// <summary>
                /// 获取TileMatrix名称
                /// </summary>
				/// <param name="matrix">TileMatrix名称</param>
                /// <returns></returns>
				ev_void setTileMatrix(_in const EVString& matrix);

				/// <summary>
                /// 获取显示风格
                /// </summary>
                /// <returns>显示风格</returns>
				const EVString getDisplayStyle() const;

				/// <summary>
                /// 设置显示风格
                /// </summary>
				/// <param name="style">风格</param>
                /// <returns></returns>
				ev_void setDisplayStyle(_in const EVString& style);

				/// <summary>
                /// 获取图片格式
                /// </summary>
                /// <returns>图片格式</returns>
				const EVString getFormat() const;

				/// <summary>
                /// 设置图片格式
                /// </summary>
				/// <param name="format">图片格式</param>
                /// <returns></returns>
				ev_void setFormat(_in const  EVString& format);

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CWMTSLayer();
			ev_private:
				CWMTSLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				EVString mstrTileMatrix;
				friend class CWMTSServer;
			};

			/// <summary>
            /// OGC WMTS 图层工厂类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWMTSLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CWMTSLayerFactory();
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWMTSLayerFactory();
			ev_private:
				CWMTSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
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


