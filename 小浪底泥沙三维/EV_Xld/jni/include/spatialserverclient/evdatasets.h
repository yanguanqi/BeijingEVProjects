#ifndef EARTHVIEW_WORLD_SPATIAL_EVDATASETS_H
#define EARTHVIEW_WORLD_SPATIAL_EVDATASETS_H
#include "spatialserverclient/evmetaobjectinfo.h"
#include "spatialserverclient/weblayer.h"
#include "spatialserverclient/webdataset.h"
#include "download/globeserviceconnection.h"
#include "core/string_array.h"
#include "spatialdatabase/datametainfo.h"
#include "spatialdatabase/fields.h"
#include "spatialdatabase/queryfilter.h"
#include "download/featurevector.h"
using namespace EarthView::World::Spatial::GeoDataset;
using namespace EarthView::World::Spatial::Download;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class CEVSpatialServer;

			class CWMTSServerInfo;

			/// <summary>
            /// EarthView WMTS 数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWMTSDataset
				: public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CEVWMTSDataset();

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
				const EarthView::World::Spatial::CWMTSServerInfo* getOGCWMTSCapabilitiesRef();

				/// <summary>
                /// 获取xml格式的EarthView元数据
                /// </summary>
				/// <param name="value">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getEVWMTSCapabilities(_inout EVString& value);

				/// <summary>
                /// 获取EarthView元数据对象
                /// </summary>
                /// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVWMTSLayerInfo* getLayerInfoRef()const;
				
				/// <summary>
                /// 获取更新时间
                /// </summary>
                /// <returns>更新时间</returns>
				virtual EVString getUpdateTime() const;

				/// <summary>
                /// 获取缓存数据类型
                /// </summary>
                /// <returns>vector/image/dem</returns>
				EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType();
			ev_private:
				CEVWMTSDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVWMTSDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				EarthView::World::Spatial::CEVWMTSLayerInfo* mpLayerInfo;

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView WFS 数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWFSDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVWFSDataset();
				/// <summary>
                /// 查询属性
                /// </summary>
				/// <param name="layer">查询图层</param>
				/// <param name="condition">查询条件</param>
				/// <param name="startrecord">起始记录</param>
				/// <param name="recordcount">每次返回结果</param>
				/// <param name="recordset">查询结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getQueryAttribute(_in const EVString& layer,_in const EarthView::World::Spatial::CServerSearchCondition* condition,_in ev_int32 startrecord,_in ev_int32 recordcount,_out EarthView::World::Spatial::CServerSet& recordset);
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
				ev_int32 getSearchGeometry(_in const EVString& layer,_in const EarthView::World::Spatial::CServerSearchCondition* condition,_out EarthView::World::Spatial::CGeometryList& geometrylist);
				
			ev_private:
				CEVWFSDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVWFSDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& layername);

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// OGC WMS元数据信息类
            /// </summary>
			class CWMSServerInfo;

			/// <summary>
            /// EarthView WMS 数据集类
			/// 从数据源获取的dataset是描述map，可以获取描述lyaer的子dataset
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVWMSDataset();

				///layers为空则请求当前所有图层（dataset描述map时，请求所有图层，描述layer时，描述当前图层），否则请求指定图层列表，下同
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

				/*ev_int32 getQueryMap(_in const EVString& layers,_in const ISymbol* symbol,_in EarthView::World::Spatial::EVSSCSRS srs,
					_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in const EarthView::World::Spatial::Geometry::IEnvelope* imgrect,_in EarthView::World::Spatial::CServerSearchCondition* conditions,
					_in const EVString& format,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				ev_int32 convertToLngLat(_in EarthView::World::Spatial::EVSSCSRS srs,_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in const EarthView::World::Spatial::Geometry::IEnvelope* imgrect,
					_in CServerPointList& pointlist,_out CServerPointList& outpointlist);
				*/

				/// <summary>
                /// 获取OGC元数据对象
                /// </summary>
                /// <returns>OGC元数据对象指针</returns>
				const EarthView::World::Spatial::CWMSServerInfo* getOGCWMSCapabilitiesRef();

				/// <summary>
                /// 获取xml的EarthView元数据描述
                /// </summary>
				/// <param name="value">结果</param>
                /// <returns>ok返回0，其他值均为错误</returns>
				ev_int32 getEVWMSCapabilities(_inout EVString& value);

				//是否目录层, 如是数据层，其调用getMap,getFeatureInfo和getlayerLegend时layers参数可为空
				//ev_bool isCategoryDataset() const;

				/// <summary>
                /// 是否数据图层
                /// </summary>
                /// <returns>false表示目录层，不能直接当作图层名获取getMap、getFeatureInfo、getLayerLegend等操作</returns>
				ev_bool isMapLayerDataset() const;

				/// <summary>
                /// 获取元数据信息，如果是mapDataset指针转成CEVWMSMapInfo,否则转成CEVMapLayerInfo
                /// </summary>
                /// <returns>源数据对象指针</returns>
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getLayerInfoRef() const;

				/// <summary>
                /// 是否含有子数据集
                /// </summary>
                /// <returns>true表示含有</returns>
				virtual ev_bool hasSubDataset() const;

				/// <summary>
                /// 获取子数据集数目
                /// </summary>
                /// <returns>子数据集数目</returns>
				ev_uint32 getSubDatasetCount()const;

				/// <summary>
                /// 打开子数据集，打开子数据集后不允许关闭父数据集，否则子数据集不可用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>子数据集对象指针，需释放</returns>
				_extfree EarthView::World::Spatial::CEVWMSDataset* openSubDataset(_in ev_uint32 index);

				/// <summary>
                /// 打开子数据集，打开子数据集后不允许关闭父数据集，否则子数据集不可用
                /// </summary>
				/// <param name="datasetname">子数据集名称</param>
                /// <returns>子数据集对象指针，需释放</returns>
				_extfree EarthView::World::Spatial::CEVWMSDataset* openSubDataset(_in const EVString& datasetname);
				/// <summary>
                /// 获取父数据集
                /// </summary>
                /// <returns>父数据集对象指针</returns>
				const EarthView::World::Spatial::CEVWMSDataset* getParentDatasetRef()const;
				//void closeSubDataset(EarthView::World::Spatial::CEVWMSDataset* dataset);
				
				/// <summary>
                /// 获取数据集描述
                /// </summary>
                /// <returns>描述</returns>
				virtual EVString getDescription() const;
			ev_private:
				CEVWMSDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				///dataset打开的子节点的指针
				///目的：删除子节点相关记录
				ev_void closeSubDataset(EarthView::World::Spatial::CEVWMSDataset* dataset);///
				///获取规定格式的layers,用于查询
				EVString getQueryWMSLayers(const EVString& layers);
			protected:
				CEVWMSDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& layername);

				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* mpLayerInfo;
				EarthView::World::Spatial::CEVWMSDataset* mpParentDataset;
				ev_bool mbCategory;
				ev_vector<EarthView::World::Spatial::CEVWMSDataset*> mlistChildren;///子dataset
				//ev_uint32 mnSubDatasetCount;
				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView 地理编码数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVGeoCodeDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVGeoCodeDataset();
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
				CEVGeoCodeDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVGeoCodeDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				EarthView::World::Spatial::CEVGeoCodeLayerInfo* mpLayerInfo;

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView DEM数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVDEMDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVDEMDataset();
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
                /// 更新时间
                /// </summary>
                /// <returns>结果</returns>
				virtual EVString getUpdateTime() const;
			ev_private:
				CEVDEMDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVDEMDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				EarthView::World::Spatial::CEVDEMLayerInfo* mpLayerInfo;

				friend class CEVSpatialServer;
			};

			/// <summary>
            /// EarthView KML数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVKMLDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVKMLDataset();
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
				CEVKMLDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVKMLDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* source,_in const EVString& name);

				EarthView::World::Spatial::CEVKMLLayerInfo* mpLayerInfo;

				friend class CEVSpatialServer;
			};

			/// <summary>
			/// EarthView OBQ数据集类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL IWebOBQDataset
				:public EarthView::World::Spatial::CWebDataset 
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~IWebOBQDataset();
				virtual EVString getGUID();


				/// <summary>
				/// 获取数据集版本号，该方法是确认数据变更情况。
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集版本号</returns>
				virtual ev_uint64 getDataVersion() const;
				/// <summary>
				/// 获取数据集描述
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集描述</returns>
				virtual EVString getDescription() const;




				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage){return -1;}

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage){return -1;}

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage){return -1;}

				virtual ev_int32 readTileMeshData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage){return -1;}

ev_private:
				IWebOBQDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				IWebOBQDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				//IWebOBQDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source);


			private:

				EVString mGUID;
				ev_uint64 mVersion;
				EVString mDesc;

				//EarthView::World::Spatial::CEVOBQDataMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;

			};

			/// <summary>
			/// EarthView OBQ数据集类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebSmart3DDataset
				:public EarthView::World::Spatial::IWebOBQDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CWebSmart3DDataset();

				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				virtual ev_int32 readTileMeshData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

ev_private:
				CWebSmart3DDataset(_in EarthView::World::Core::CNameValuePairList* pList);

			protected:
				CWebSmart3DDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				//CWebSmart3DDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source);


			private:
				EarthView::World::Spatial::CEVOBQDataMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;
			};

			/// <summary>
			/// EarthView MESHX数据集类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebMeshXDataset
				:public EarthView::World::Spatial::IWebOBQDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CWebMeshXDataset();

				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				virtual ev_int32 readTileMeshData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

ev_private:
				CWebMeshXDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWebMeshXDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				//CWebMeshXDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source);


			private:
				EarthView::World::Spatial::CEVOBQDataMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;
			};

			/// <summary>
			/// EarthView MESHXG数据集类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebMeshXGDataset
				:public EarthView::World::Spatial::IWebOBQDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CWebMeshXGDataset();

				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取WFS元数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getWFSMetaData(_in const EVString& servicename,_out CDataMetaInfo& metadata);

				/// <summary>
				/// 读取字段数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getFields(_in const EVString& servicename,_out CFields& fields);

				/// <summary>
				/// 读取要素数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getFeatures(_in const EVString& servicename, _in CQueryFilter& filter,_out ModelFeatureVector& featurevector);

ev_private:
				CWebMeshXGDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWebMeshXGDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				//CWebMeshXGDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source);


			private:
				EarthView::World::Spatial::CEVOBQDataMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;
			};

			class EV_SPATIALSERVERCLIENT_DLL CWebLasDataset
				:public EarthView::World::Spatial::IWebOBQDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CWebLasDataset();

				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取要素数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getFeatures(_in ev_int32 type, _out EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector);
ev_private:
				CWebLasDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWebLasDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				//CWebMeshXGDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source);


			private:
				EarthView::World::Spatial::CEVOBQDataMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;
			};

			class EV_SPATIALSERVERCLIENT_DLL CWebVector3DDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CWebVector3DDataset();
				/// <summary>
				/// 获取元数据信息
				/// </summary>
				/// <returns>元数据对象指针</returns>
				const EarthView::World::Spatial::CEVVector3DMetaInfo* getMetaInfoRef() const;
				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readMetaData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);
				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readLayerInfo(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);
				/// <summary>
				/// 读取八叉树信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readOctreeNodes(_in const EVString& nodecode
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取八叉树信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readOctreeObjects(_in const EVString& nodecode
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);
ev_private:
				CWebVector3DDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWebVector3DDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				
			private:
				EarthView::World::Spatial::CEVVector3DMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;
			};


			/*/// <summary>
			/// EarthView OBQ数据集类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CObqWeb7zDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CObqWeb7zDataset();
				EVString getGUID();
				/// <summary>
				/// 获取数据集类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集类型</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
				/// <summary>
				/// 获取数据集名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集名称</returns>
				virtual EVString getName() const;
				/// <summary>
				/// 获取数据集版本号，该方法是确认数据变更情况。
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集版本号</returns>
				virtual ev_uint64 getDataVersion() const;
				/// <summary>
				/// 获取数据集描述
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集描述</returns>
				virtual EVString getDescription() const;

				/// <summary>
				/// 获取数据集所在数据源对象，该值为引用对象指针。
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据集所在数据源对象指针</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
				/// <summary>
				/// 判断数据集是否具有编辑能力
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				virtual ev_bool canEdit() const;
				/// <summary>
				/// 判断数据集是否处在编辑状态
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				virtual ev_bool isEditing() const;

				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);


				virtual ev_int32 readTileDataWithoutMaterial(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

				virtual ev_int32 readTileMeshData(_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

ev_private:
				CObqWeb7zDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CObqWeb7zDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				CObqWeb7zDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source);


			private:

				EVString mGUID;
				
				EarthView::World::Spatial::CEVOBQDataMetaInfo* mpDataMetaInfo;
				friend class CEVSpatialServer;
			};*/

             /// <summary>
/// 三维矢量数据集类
/// </summary>

			class EV_SPATIALSERVERCLIENT_DLL CEVBaseModelDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				virtual ~CEVBaseModelDataset(){}
				virtual ev_int32 getEntityObject(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerEntityObject& entityObject){return 0;}
				virtual ev_int32 getTemplateEntityObject(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerTemplateEntityObject& entityObject){return 0;}
				virtual ev_int32 getMesh(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerMeshObject& meshObject){return 0;}
				virtual ev_int32 getResource(_in ev_int32 entityid,_in ev_bool needorigtexture,_out EarthView::World::Spatial::CServerResourceObject& resourceObject){return 0;};
				virtual ev_int32 getResourceByID(_in ev_int32 entityid, _in ev_int32 resid, _out CServerResourceObject& resourceObject){return 0;}
				virtual ev_int32 getOrigTexture(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerOrigTexture& origTexture){return 0;}
				virtual const EarthView::World::Spatial::CEVModelLayerInfo* getLayerInfoRef() const{return NULL;}
				virtual ev_uint32 getFeatureCount(const EVString& datasetTableName){return 0;}
				virtual ev_uint32 getAttrFeatureCount(const EVString& datasetTableName){return 0;}
				virtual ev_uint32 getFeatureID(ev_int32 index){return 0;}
				virtual ev_void clearFeature(ev_uint32 entID){}
ev_private:
				CEVBaseModelDataset(_in EarthView::World::Core::CNameValuePairList* pList):EarthView::World::Spatial::CWebDataset(pList){}
				virtual EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeature getFeature(ev_uint32 id);
				virtual EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeature getAttrFeature(ev_uint32 entityid){return EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeature();}

			protected:
				CEVBaseModelDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name)
				:EarthView::World::Spatial::CWebDataset(type, ref_source, name){}

				EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeatureMap mModelDatasetFeatures;
				EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeatureMap mModelDatasetAttrFeatures;


			private:
			};


			/// <summary>
            /// EarthView 模型数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVModelDataset
				:public CEVBaseModelDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVModelDataset();
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
				ev_int32 getResource(_in ev_int32 entityid,_in ev_bool needorigtexture,_out EarthView::World::Spatial::CServerResourceObject& resourceObject);
				ev_int32 getResourceByID(_in ev_int32 entityid, _in ev_int32 resid, _out CServerResourceObject& resourceObject);

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
				/// 获取数据集属性个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getFeatureCount(const EVString& datasetTableName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getAttrFeatureCount(const EVString& datasetTableName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getFeatureID(ev_int32 index);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clearFeature(ev_uint32 entID);

			ev_private:
				CEVModelDataset(_in EarthView::World::Core::CNameValuePairList* pList);
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeature getAttrFeature(ev_uint32 entityid);

			protected:
				CEVModelDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);
				
				CEVModelLayerInfo* mpLayerInfo;


				friend class CEVSpatialServer;
			};

			/// <summary>
			/// 
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVModelTemplateDataset
				:public  CEVBaseModelDataset
			{
ev_private:
				CEVModelTemplateDataset(_in EarthView::World::Core::CNameValuePairList* pList):CEVBaseModelDataset(pList){}
			public:
				~CEVModelTemplateDataset(){}

				/// <summary>
				/// 获取数据集属性个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 getFeatureCount(const EVString& datasetTableName);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getTemplateEntityObject(_in ev_int32 entityid,_out EarthView::World::Spatial::CServerTemplateEntityObject& entityObject);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getResourceByID(_in ev_int32 entityid, _in ev_int32 resid, _out CServerResourceObject& resourceObject);
			protected:
				CEVModelTemplateDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name)
				:CEVBaseModelDataset(type, ref_source, name){}
			protected:
				CEVModelTemplateLayerInfo* mpLayerInfo;


				friend class CEVSpatialServer;

			};

			
			class EV_SPATIALSERVERCLIENT_DLL CEVWMSChartDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				~CEVWMSChartDataset();

				ev_int32 getChart(const EVString& layer,	
					const EVString& srs,
					const EVString& bBox,
					const EVString& format,
					ev_int32 width,
					ev_int32 height,
					const EVString& displayMode,	
					const EVString& colorMode,
					const EVString& symbolMode,	
					const EVString& isobath,
					const EVString& annotationMode,
					_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				const EarthView::World::Spatial::CEVWMSChartObjectInfo* getLayerInfoRef() const;

ev_private:
				CEVWMSChartDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVWMSChartDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				EarthView::World::Spatial::CEVWMSChartObjectInfo* mpInfo;

				friend class CEVSpatialServer;
			};

			class EV_SPATIALSERVERCLIENT_DLL CEVWMSImageDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				~CEVWMSImageDataset();
				
				ev_int32 getWMSImage(
					EVString imageName,
					EVString bBOX,
					ev_int32 width,
					ev_int32 height,	
					EVString SRS,
					EVString format,
					_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				const EarthView::World::Spatial::CEVWMSImageInfo* getLayerInfoRef() const;

ev_private:
				CEVWMSImageDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVWMSImageDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);

				EarthView::World::Spatial::CEVWMSImageInfo* mpInfo;
				friend class CEVSpatialServer;
			};


			/// <summary>
            /// EarthView 几何数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVGeometryDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVGeometryDataset();
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

			ev_private:
				CEVGeometryDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CEVGeometryDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& mapname);

				friend class CEVSpatialServer;
			};

		
			/// <summary>
			/// EarthView 几何数据集类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CMultiMedaServiceDataset
				:public EarthView::World::Spatial::CWebDataset
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CMultiMedaServiceDataset();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getMediaFileLength(const EVString& flename, const EVString& filetype, ev_int64& fileLength);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getMediaFile(const EVString& flename, const EVString& filetype, EarthView::World::Core::MemoryDataStreamPtr fileData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getMediaFileByOffset(const EVString& flename, const EVString& filetype, ev_int64 offset, ev_int64 length, EarthView::World::Core::MemoryDataStreamPtr fileData);
			protected:
			private:
ev_private:
				CMultiMedaServiceDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CMultiMedaServiceDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& filename);

				friend class CEVSpatialServer;

			};
		}
	}
}
#endif
