#ifndef EARTHVIEW_WORLD_SPATIAL_EVLAYERS_H
#define EARTHVIEW_WORLD_SPATIAL_EVLAYERS_H
#include "spatialserverclient/evmetaobjectinfo.h"
#include "spatialserverclient/evdatasets.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// EarthView 空间服务类
            /// </summary>
			class CEVSpatialServer;

			/// <summary>
            /// EarthView WMTS 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWMTSLayer
				: public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVWMTSLayer();

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVWMTSLayer();

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

				/// <summary>
                /// 渲染
                /// </summary>
				/// <param name="display">渲染设备信息</param>
				/// <param name="type">渲染类型</param>
                /// <returns>成功返回true</returns>
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);

				/// <summary>
                /// 获取瓦片
                /// </summary>
				/// <param name="style">渲染风格</param>
				/// <param name="format">瓦片格式</param>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="getoriginformat">true表示获取对应瓦片的原始格式信息</param>
				/// <param name="gettime">true表示获取对应瓦片的时间信息</param>
				/// <param name="tileInfo">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getTile(_in const EVString& style,_in const EVString& format,_in ev_int32 level,_in ev_uint32 row ,_in ev_uint32 col,
					_in ev_bool getoriginformat,_in ev_bool gettime,_out EarthView::World::Spatial::CEVTileInfo& tileInfo);

				/// <summary>
                /// 获取瓦片属性
                /// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="fieldname">字段名</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getTileProperty(_in ev_int32 level,_in ev_uint32 row ,_in ev_uint32 col,
					_in const EVString& fieldname,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				/// <summary>
                /// 查询某瓦片某像素点的几何要素的信息
                /// </summary>
				/// <param name="level">级别</param>
				/// <param name="tilerow">行</param>
				/// <param name="tilecol">列</param>
				/// <param name="x">查询像素点x</param>
				/// <param name="y">查询像素点y</param>
				/// <param name="infoformat">返回数据格式</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getFeatureInfo(_in ev_int32 level,_in ev_uint32 tilerow,_in ev_uint32 tilecol,
					_in ev_int32 x,_in ev_int32 y,_in const EVString& infoformat,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				/// <summary>
                /// 获取OGC元数据对象
                /// </summary>
                /// <returns>OGC格式的源数据对象指针</returns>
				const EarthView::World::Spatial::CWMTSServerInfo* getWMTSCapabilitiesRef();

				/// <summary>
                /// 获取EarthView元数据对象
                /// </summary>
                /// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVWMTSLayerInfo* getLayerInfoRef()const;

				/// <summary>
                /// 获取缓存数据类型
                /// </summary>
                /// <returns>vector/image/dem</returns>
				EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType();

				/// <summary>
                /// 设置渲染符号
                /// </summary>
				/// <param name="style">符号标识</param>
                /// <returns></returns>
				ev_void setRenderStyle(_in const EVString& style);

				/// <summary>
                /// 获取渲染符号
                /// </summary>
                /// <returns>渲染符号标识</returns>
				const EVString getRenderStyle()const;

			ev_private:
				CEVWMTSLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:

				EVString mstrStyle;
				ev_int32 mnLevel;

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView WMS 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSMapLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVWMSMapLayer();
				
				/// <summary>
                /// 获取GOC元数据信息
                /// </summary>
                /// <returns>OGC元数据对象指针</returns>
				const EarthView::World::Spatial::CWMSServerInfo* getWMSCapabilitiesRef();

				/// <summary>
                /// 渲染
                /// </summary>
				/// <param name="display">渲染设备信息</param>
				/// <param name="type">渲染类型</param>
                /// <returns>成功返回true</returns>
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
				
				/// <summary>
                /// 获取指定地图
                /// </summary>
				/// <param name="layers">图层</param>
				/// <param name="styles">风格</param>
				/// <param name="srs">投影</param>
				/// <param name="maprect">范围</param>
				/// <param name="width">图片宽</param>
				/// <param name="height">图片高</param>
				/// <param name="format">图片格式</param>
				/// <param name="transparent">true表示背景透明</param>
				/// <param name="red">背景r值</param>
				/// <param name="green">背景g值</param>
				/// <param name="blue">背景b值</param>
				/// <param name="time">时间，可为空</param>
				/// <param name="elevation">高程，可为空</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getMap(_in const EVString& layers,_in const EVString& styles,_in EarthView::World::Spatial::EVSSCSRS srs,
					_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in ev_uint32 width,_in ev_uint32 height,_in EarthView::World::Spatial::EVSSCImageType format,
					_in ev_bool transparent,_in ev_int32 red,_in ev_int32 green,_in ev_int32 blue,
					_in const EVString& time,_in const EVString& elevation,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 获取指定要素信息
                /// </summary>
				/// <param name="layers">图层</param>
				/// <param name="srs">投影</param>
				/// <param name="maprect">范围</param>
				/// <param name="width">图片宽</param>
				/// <param name="height">图片高</param>
				/// <param name="featurecount">返回的要素数目</param>
				/// <param name="x">图片位置像素值x</param>
				/// <param name="y">图片位置像素值y</param>
				/// <param name="value">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getFeatureInfo(_in const EVString& layers,_in EarthView::World::Spatial::EVSSCSRS srs,_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,
					_in ev_uint32 width,_in ev_uint32 height,_in ev_uint32 featurecount,_in ev_int32 x,_in ev_int32 y,_out EVString& value);
				
				/// <summary>
                /// 获取图例
                /// </summary>
				/// <param name="layer">查询图层</param>
				/// <param name="legendwidth">图例宽</param>
				/// <param name="legendheight">图例高</param>
				/// <param name="serverresult">结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getLayerLegend(_in const EVString& layer,_in ev_uint32 legendwidth,_in ev_uint32 legendheight,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 获取元数据信息，如果是mapDataset指针转成CEVWMSMapInfo,否则转成CEVMapLayerInfo
                /// </summary>
                /// <returns>源数据对象指针</returns>
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getLayerInfoRef()const;

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVWMSMapLayer();

				/// <summary>
                /// 设置渲染图层
                /// </summary>
				/// <param name="layers">渲染图层</param>
                /// <returns></returns>
				ev_void setRenderLayers(_in const EVString& layers);

				/// <summary>
                /// 获取渲染图层
                /// </summary>
                /// <returns>渲染图层</returns>
				const EVString getRenderLayers()const;
				
				/// <summary>
                /// 设置渲染风格标识
                /// </summary>
				/// <param name="styles">渲染风格标识</param>
                /// <returns></returns>
				ev_void setRenderStyles(_in const EVString& styles);
				
				/// <summary>
                /// 获取渲染风格标识
                /// </summary>
                /// <returns>渲染风格标识</returns>
				const EVString getRenderStyles()const;
				
				/// <summary>
                /// 设置渲染所用数据的时间
                /// </summary>
				/// <param name="value">数据时间</param>
                /// <returns></returns>
				ev_void setRenderDataTime(_in const EVString& value);
				
				/// <summary>
                /// 获取指点的数据时间
                /// </summary>
                /// <returns>数据时间信息</returns>
				const EVString getRenderDataTime()const;
				
				/// <summary>
                /// 设置渲染高程
                /// </summary>
				/// <param name="elevation">高程信息</param>
                /// <returns></returns>
				ev_void setRenderElevetion(_in const EVString& elevation);
				
				/// <summary>
                /// 获取渲染高程
                /// </summary>
                /// <returns>渲染高程信息</returns>
				const EVString getRenderElevation()const;
				
				/// <summary>
                /// 设置渲染背景信息
                /// </summary>
				/// <param name="transparent">背景是否透明</param>
				/// <param name="red">r值</param>
				/// <param name="green">g值</param>
				/// <param name="blue">b值</param>
                /// <returns></returns>
				ev_void setRenderBackColor(_in ev_bool transparent,_in ev_int32 red,_in ev_int32 green,_in ev_int32 blue);
				
				/// <summary>
                /// 获取渲染背景信息
                /// </summary>
				/// <param name="transparent">背景是否透明</param>
				/// <param name="red">r值</param>
				/// <param name="green">g值</param>
				/// <param name="blue">b值</param>
                /// <returns></returns>
				ev_void getRenderBackColor(_out ev_bool& transparent,_out ev_int32& red,_out ev_int32& green,_out ev_int32& blue);

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
			ev_private:
				CEVWMSMapLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				
				EVString mstrQueryLayers;
				EVString mstrStyles;
				EVString mstrTime;
				EVString mstrElevation;
				ev_bool mbTrans;
				ev_int32 mnRed;
				ev_int32 mnGreen;
				ev_int32 mnBlue;

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView WFS 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWFSLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVWFSLayer();

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVWFSLayer();
				
				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

				/// <summary>
                /// 查询属性
                /// </summary>
				/// <param name="layer">查询图层</param>
				/// <param name="condition">查询条件</param>
				/// <param name="startrecord">起始记录</param>
				/// <param name="recordcount">每次返回结果</param>
				/// <param name="recordset">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getQueryAttribute(_in const EVString& layer,_in EarthView::World::Spatial::CServerSearchCondition* condition,_in ev_int32 startrecord,_in ev_int32 recordcount,_out EarthView::World::Spatial::CServerSet& recordset);

				/// <summary>
                /// 获取图层上某点的属性
                /// </summary>
				/// <param name="querylayers">查询图层</param>
				/// <param name="featurecount">返回要素的个数</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <param name="fieldname">查询字段名</param>
				/// <param name="queryresult">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getLayerAttributeValue(_in const EVString& querylayers,_in ev_uint32 featurecount,_in ev_real64 x,_in ev_real64 y,_in const EVString& fieldname,_out EarthView::World::Spatial::CServerQueryResults& queryresult);

				/// <summary>
                /// 查询单值
                /// </summary>
				/// <param name="querylayer">图层</param>
				/// <param name="fieldname">字段名</param>
				/// <param name="queryresult">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getUniqueFieldValue(_in const EVString& querylayer,_in const EVString& fieldname,_out EarthView::World::Spatial::CServerQueryResults& queryresult);

				/// <summary>
                /// 查询要素
                /// </summary>
				/// <param name="layer">查询图层</param>
				/// <param name="hasgeometry">true表示查询几何信息</param>
				/// <param name="hasattribute">true表示查询属性信息</param>
				/// <param name="attributenames">所需查询的属性字段名称，可为空</param>
				/// <param name="feature">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getLayerFeature(_in const EVString& layer,_in ev_bool hasgeometry,_in ev_bool hasattribute,_in const EVString& attributenames,_inout EarthView::World::Spatial::CEVWebFeature& feature);

				/// <summary>
                /// 查询几何对象
                /// </summary>
				/// <param name="layer">查询图层</param>
				/// <param name="condition">查询条件</param>
				/// <param name="geometrylist">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getSearchGeometry(_in const EVString& layer,_in EarthView::World::Spatial::CServerSearchCondition* condition,_out EarthView::World::Spatial::CGeometryList& geometrylist);
				
				/// <summary>
                /// 获取元数据信息
                /// </summary>
                /// <returns>源数据对象指针</returns>
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getLayerInfoRef()const;
			ev_private:
				CEVWFSLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				
				
				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView 地理编码图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVGeoCodeLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVGeoCodeLayer();

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVGeoCodeLayer();

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
				/// <summary>
                /// 获取地名文件
                /// </summary>
				/// <param name="dataName">名称</param>
				/// <param name="serverresult">结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getGeoCodeFile(_in const EVString& dataName,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				/// <summary>
                /// 查询地名
                /// </summary>
				/// <param name="namefield">查询的字段名</param>
				/// <param name="keyword">关键词</param>
				/// <param name="blurquery">true模糊查询</param>
				/// <param name="limitcount">每次查到的数目</param>
				/// <param name="resultlist">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 queryPlacename(_in const EVString& namefield,_in const EVString& keyword,_in ev_bool blurquery,_in ev_int32 limitcount,_out EarthView::World::Spatial::CPlaceNameList& resultlist);

				/// <summary>
                /// 获取元数据信息
                /// </summary>
                /// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* getLayerInfoRef() const;
			ev_private:
				CEVGeoCodeLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView DEM 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVDEMLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVDEMLayer();

				/// <summary>
                /// 获取DEM数据
                /// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getDEMFile(_in ev_int32 level,_in ev_int32 row,_in ev_int32 col,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				/// <summary>
                /// 获取元数据信息
                /// </summary>
                /// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVDEMLayerInfo* getLayerInfoRef() const;

				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVDEMLayer();

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
			ev_private:
				CEVDEMLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:

				friend class CEVSpatialServer;
			};
		
			/// <summary>
            /// EarthView KML 图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVKMLLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVKMLLayer();
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVKMLLayer();

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

				/// <summary>
                /// 获取KML文件
                /// </summary>
				/// <param name="dataName">数据名</param>
				/// <param name="serverresult">结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getKMLFile(_in const EVString& dataName,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				/// <summary>
                /// 获取元数据信息
                /// </summary>
                /// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVKMLLayerInfo* getLayerInfoRef() const;
			ev_private:
				CEVKMLLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:

				friend class CEVSpatialServer;
			};
		
			/// <summary>
            /// EarthView 几何图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVGeometryMapLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVGeometryMapLayer();
			
				/// <summary>
                /// 求缓冲区
                /// </summary>
				/// <param name="geometrylist">集合对象列表</param>
				/// <param name="distance">缓冲区距离</param>
				/// <param name="isunion">结果是否合并</param>
				/// <param name="result_geometrylist">结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 buffer(_in EarthView::World::Spatial::CGeometryList& geometrylist,_in ev_real64 distance,_in ev_bool isunion,_out EarthView::World::Spatial::CGeometryList& result_geometrylist);
			
				/// <summary>
                /// 检测对象1是否包含对象2
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 contains(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
			
				/// <summary>
                /// 检测对象1是否跨过对象2
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 crosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
			
				/// <summary>
                /// 检测对象1是否与对象2相离
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 disjoint(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 检测对象1与对象2的距离
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">距离</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_real64& result);
				
				/// <summary>
                /// 检测对象1是否与对象2相交
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 检测对象1是否与对象2是否重叠
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 检测对象1是否与对象2相邻接
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 touches(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
			
				/// <summary>
                /// 检测对象1是否包含于对象2
                /// </summary>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">检测结果，true表示包含</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 within(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);

				
				//const CEVSpatialServer* getParentServerRef() const;
				
				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);
			
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CEVGeometryMapLayer();
			ev_private:
				CEVGeometryMapLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView 模型图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVModelLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVModelLayer();

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset);

				/// <summary>
                /// 获取实体对象
                /// </summary>
				/// <param name="entityid">id</param>
				/// <param name="entityObject">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getEntityObject(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerEntityObject& entityObject);

				/// <summary>
                /// 获取网格信息
                /// </summary>
				/// <param name="entityid">id</param>
				/// <param name="meshObject">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getMesh(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerMeshObject& meshObject);
				
				/// <summary>
                /// 获取资源
                /// </summary>
				/// <param name="entityid">id</param>
				/// <param name="needorigtexture">ture表示需要纹理</param>
				/// <param name="resourceObject">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getResource(_in ev_int32 entityid,_in ev_bool needorigtexture,_out EarthView::World::Spatial::CServerResourceObject& resObject);
				
				/// <summary>
                /// 获取纹理信息
                /// </summary>
				/// <param name="entityid">id</param>
				/// <param name="origTexture">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getOrigTexture(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerOrigTexture& origTexture);

				/// <summary>
                /// 获取元数据信息
                /// </summary>
                /// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVModelLayerInfo* getLayerInfoRef() const;

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				CEVModelLayer();
			ev_private:
				CEVModelLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				friend class CEVSpatialServer;
			};

			class EV_SPATIALSERVERCLIENT_DLL CEVModelTemplateLayer
				:public EarthView::World::Spatial::CWebLayer
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CEVModelTemplateLayer(){}

				/// <summary>
				/// 设置与图层所关联的数据集
				/// </summary>
				/// <param name="dataset">数据集指针</param>
				/// <returns></returns>
				virtual ev_void setDataset(EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset){}

				/// <summary>
				/// 获取实体对象
				/// </summary>
				/// <param name="entityid">id</param>
				/// <param name="entityObject">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getEntityObject(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerEntityObject& entityObject){return 0;}

				/// <summary>
				/// 获取网格信息
				/// </summary>
				/// <param name="entityid">id</param>
				/// <param name="meshObject">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getMesh(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerMeshObject& meshObject){return 0;}

				/// <summary>
				/// 获取资源
				/// </summary>
				/// <param name="entityid">id</param>
				/// <param name="needorigtexture">ture表示需要纹理</param>
				/// <param name="resourceObject">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getResource(_in ev_int32 entityid,_in ev_bool needorigtexture,_out EarthView::World::Spatial::CServerResourceObject& resObject){return 0;}

				/// <summary>
				/// 获取纹理信息
				/// </summary>
				/// <param name="entityid">id</param>
				/// <param name="origTexture">查询结果</param>
				/// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getOrigTexture(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerOrigTexture& origTexture){return 0;}

				/// <summary>
				/// 获取元数据信息
				/// </summary>
				/// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVModelLayerInfo* getLayerInfoRef() const{return NULL;}

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				CEVModelTemplateLayer();
ev_private:
				CEVModelTemplateLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				friend class CEVSpatialServer;
			};


			/// <summary>
            /// EarthView WMTS图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWMTSLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CEVWMTSLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVWMTSLayerFactory();
			ev_private:
				CEVWMTSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView WMS图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CEVWMSLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVWMSLayerFactory();
			ev_private:
				CEVWMSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView WFS图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWFSLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CEVWFSLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVWFSLayerFactory();
			ev_private:
				CEVWFSLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView DEM图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVDEMLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CEVDEMLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVDEMLayerFactory();
			ev_private:
				CEVDEMLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView KML图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVKMLLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CEVKMLLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVKMLLayerFactory();
			ev_private:
				CEVKMLLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView 地理编码图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVGeoCodeLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CEVGeoCodeLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVGeoCodeLayerFactory();
			ev_private:
				CEVGeoCodeLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView 几何图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CGeometryLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CGeometryLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CGeometryLayerFactory();
			ev_private:
				CGeometryLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};

			/// <summary>
            /// EarthView 模型图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CModelLayerFactory
				:public EarthView::World::Spatial::CWebLayerFactory
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CModelLayerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CModelLayerFactory();
			ev_private:
				CModelLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 创建图层实例
				/// </summary>
				/// <returns>图层对象指针，用相应图层类工厂析构</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
			};
		}
	}
}
#endif
