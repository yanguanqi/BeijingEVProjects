#ifndef EARTHVIEW_WORLD_SPATIAL_CEVSPATIALSERVER_H
#define EARTHVIEW_WORLD_SPATIAL_CEVSPATIALSERVER_H
#include "spatialserverclient/spatialserver.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/evmetaobjectinfo.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/ilayer.h"
#include "spatialserverclient/evdatasets.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				class Theme;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class CWMTSServerInfo;
			class CWMSServerInfo;
			
			/// <summary>
			/// EarthView空间服务类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVSpatialServer
				:public EarthView::World::Spatial::CSpatialServer
			{
			ev_private:
				CEVSpatialServer(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CEVSpatialServer();

				/// <summary>
				/// 是否可连接到服务器
				/// </summary>
				/// <returns>如果可以连接，返回true</returns>
				ev_bool currentConnectStatus();

				/// <summary>
                /// 是否可连接到服务器
                /// </summary>
                /// <returns>如果可以连接，返回true</returns>
				virtual ev_bool isConnected();

				/// <summary>
                /// 重新连接
                /// </summary>
                /// <returns>重新连接成功，返回true</returns>
				virtual ev_bool reconnect();

				/// <summary>
                /// 断开连接连接
                /// </summary>
                /// <returns></returns>
				virtual ev_void disConnect();

				/// <summary>
                /// 获取服务名称
                /// </summary>
                /// <returns>服务名称</returns>
				virtual const EVString getServerName() const;
				/// <summary>
                /// 获取服务描述
                /// </summary>
                /// <returns>服务描述</returns>
				virtual const EVString getServerAbstract() const;

				/// <summary>
                /// 获取服务标题
                /// </summary>
                /// <returns>服务标题</returns>
				virtual const EVString getServerTitle() const;

				/// <summary>
                /// 获取服务器地址
                /// </summary>
                /// <returns>服务器地址</returns>
				virtual const EVString getServerUrl() const;

				/// <summary>
                /// 获取服务数据下载插件路径
                /// </summary>
                /// <returns>服务器地址</returns>
				virtual const EVString getServicePluginFile() const;

				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源KeyValue参数</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const;
				/// <summary>
				/// 判断数据源是否有效
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				virtual ev_bool isValid() const;
				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="name">指定名称，格式为: 数据名称 + '/' + WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY/MODEL 之一</param>
				/// <returns>数据元信息对象；需要外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString &name);

				/// <summary>
				/// 获取指定类型的元数据
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息对象；需要外部释放</returns>
				_extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in EVString &name,_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息集合对象；需要外部释放</returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				
				/// <summary>
				/// 打开指定数据集名称的数据集
				/// </summary>
				/// <param name="name">指定名称，格式为: 数据名称 + '/' + WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY 之一 </param>
				/// <returns>数据集对象指针，需要外部释放；如果名字不存在，这返回null</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name);

				/// <summary>
				/// 关闭指定数据集名称的数据集，会删掉数据集指针
				/// </summary>
				/// <param name="name">数据集指针</param>
				/// <returns>成功删除，返回true;否则，返回false</returns>
				virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset * dataset);
				
				/// <summary>
				/// 打开指定数据集名称的数据集
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <param name="type">数据集类型</param>
				/// <returns>数据集对象指针，需要外部释放；如果名字不存在，这返回null</returns>
				EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name,_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);

				/// <summary>
				/// 获取数据源的xml描述
				/// </summary>
				/// <returns>xml描述</returns>
				virtual EVString toXML() const;

				ev_void XML2DatasetInfos(EarthView::World::Core::CXmlElement& xmlElement);
				ev_void XML2DatasetInfo(EarthView::World::Core::CXmlElement& xmlElement);
				ev_void XML2ErrorDatasetinfo(EarthView::World::Core::CXmlElement& xmlElement);

				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <returns></returns>
				virtual _extfree EarthView::World::Spatial::GeoDataset::IDataSource* clone() const;
				//virtual ev_bool deleteDataset(EVString name);在SpatialServer统一设置为不可删除，return false
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*											 元数据服务												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
                /// 获取服务版本
                /// </summary>
				/// <param name="version">版本信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getServiceVersion(_inout EVString& version);

				/// <summary>
                /// 获取文件列表
                /// </summary>
				/// <param name="type">服务类型</param>
				/// <param name="queryresult">查询结果对象</param>
                /// <returns>操作结果类型，成功为0，参数错误400，服务操作未实现501，服务应用错误500</returns>
				ev_int32 getServiceFileSet(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_out EarthView::World::Spatial::CServerQueryResults& queryresult);
				ev_int32 getServiceFileSetFromMetadataCache(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,  _out EVString& fileSetStr);
				

				/// <summary>
				/// 打开指定名称的WMS数据集
				/// </summary>
				/// <param name="name">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVWMTSDataset* getWMTSDataset(_in const EVString& name);
				

				/// <summary>
                /// 打开指定名称的DEM数据集
                /// </summary>
				/// <param name="name">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVDEMDataset* getDEMDataset(_in const EVString& name);

				/// <summary>
                /// 打开指定名称的KML数据集
                /// </summary>
				/// <param name="filename">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVKMLDataset* getKMLDataset(_in const EVString& filename);

				/// <summary>
                /// 打开指定名称的地理编码数据集
                /// </summary>
				/// <param name="filename">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVGeoCodeDataset* getGeoCodeDataset(_in const EVString& filename);

				/// <summary>
                /// 打开指定名称的几何数据集
                /// </summary>
				/// <param name="mapname">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVGeometryDataset* getGeometryDataset(_in const EVString& mapname);

				/// <summary>
                /// 打开指定名称的WFS数据集
                /// </summary>
				/// <param name="name">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVWFSDataset*	getWFSDataset(_in const EVString& name);

				/// <summary>
                /// 打开指定名称的WMS数据集
                /// </summary>
				/// <param name="name">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVWMSDataset* getWMSDataset(_in const EVString& name);

				EarthView::World::Spatial::CEVWMSChartDataset* getWMSChartDataset(_in const EVString& name);

				EarthView::World::Spatial::CEVWMSImageDataset* getWMSImageDataset(_in const EVString& name);

				/// <summary>
                /// 打开指定名称的模型数据集
                /// </summary>
				/// <param name="modelname">数据名称</param>
                /// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CEVModelDataset* getModelDataset(_in const EVString& modelname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::CEVModelTemplateDataset* getModelTemplateDataset(_in const EVString& datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				//EarthView::World::Spatial::CObqWeb7zDataset* getOBQDataset(_in const EVString& datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::CWebSmart3DDataset* getSmart3DDataset(_in const EVString& datasetname);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::CWebMeshXDataset* getMeshXDataset(_in const EVString& datasetname);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::CWebMeshXGDataset* getMeshXGDataset(_in const EVString& datasetname);

				EarthView::World::Spatial::CWebLasDataset* getLasDataset(_in const EVString& datasetname);
				EarthView::World::Spatial::CWebLasXGDataset* getLasXGDataset(_in const EVString& datasetname);
				EarthView::World::Spatial::CWebStreetViewDataset* getStreetViewDataset(_in const EVString& datasetname);
				EarthView::World::Spatial::CWebOSGBDataset* getOSGBDataset(_in const EVString& datasetname);
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::CWebVector3DDataset* getVector3DDataset(_in const EVString& datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="modelname"></param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				EarthView::World::Spatial::CMultiMedaServiceDataset * getMultimediaDataset(_in const EVString& filename);

			protected:
				/// <summary>
                /// 获取WMTS某一图层信息
                /// </summary>
				/// <param name="layerinfo">WMTS图层信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getWMTSLayerInfo(_inout CEVWMTSLayerInfo& layerinfo);
				ev_int32 getWMTSLayerInfoFromMetadataCache(_inout CEVWMTSLayerInfo& layerinfo);

				/// <summary>
                /// 获取WMS某一图层信息
                /// </summary>
				/// <param name="mapinfo">WMS图层信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getWMSMapInfo(_inout CEVWMSMapInfo& mapinfo);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getWMSChartObjectInfo(_inout CEVWMSChartObjectInfo& chartObjectInfo);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getWMSImageInfo(_inout CEVWMSImageInfo& imageInfo);

				/// <summary>
                /// 获取WFS某一图层信息
                /// </summary>
				/// <param name="mapinfo">WFS图层信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getWFSMapInfo(_inout CEVWFSMapInfo& mapinfo);

				/// <summary>
                /// 获取某一kml的信息
                /// </summary>
				/// <param name="objectinfo">kml信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getKMLObjectInfo(_inout CEVKMLLayerInfo& objectinfo);

				/// <summary>
                /// 获取某类地理编码信息
                /// </summary>
				/// <param name="objectinfo">地理编码信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getGeoCodeObjectInfo(_inout CEVGeoCodeLayerInfo& objectinfo);

				/// <summary>
                /// 获取某类dem的信息
                /// </summary>
				/// <param name="objectinfo">DEM信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getDEMObjectInfo(_inout CEVDEMLayerInfo& objectinfo);
				ev_int32 getDEMObjectInfoFremMetadataCache(_inout CEVDEMLayerInfo& objectinfo);
				/// <summary>
                /// 获取模型的信息元数据信息
                /// </summary>
				/// <param name="objectinfo">Model信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getModelObjectInfo(_inout CEVModelLayerInfo& objectInfo);

				ev_int32 getOBQObjectInfo(_inout CEVOBQDataMetaInfo& objectInfo);

				ev_int32 getVector3DMetaInfo(_inout CEVVector3DMetaInfo& objectInfo);
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getModelTemplateObjectInfo(_inout CEVModelTemplateLayerInfo& objectInfo);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*												 WMTS												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////

				/// <summary>
                /// 获取瓦片数据
                /// </summary>
				/// <param name="layername">图层名称</param>
				/// <param name="style">渲染风格</param>
				/// <param name="format">图片格式</param>
				/// <param name="tilematrixset">tilematrix名称</param>
				/// <param name="level">tilematrix名称</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="getoriginformat">是否获取原始文件格式</param>
				/// <param name="gettime">是否获取时间信息</param>
				/// <param name="tileInfo">瓦片数据信息</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getTile(_in EVString& layername,_in EVString& style,_in EVString& format,_in ev_int32& level,_in ev_uint32& row ,_in ev_uint32& col,
					_in ev_bool getoriginformat,_in ev_bool gettime,_out CEVTileInfo& tileInfo);
				
				/// <summary>
                /// 获取瓦片数据
                /// </summary>
				/// <param name="layername">图层名称</param>
				/// <param name="level">级别</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="fieldname">字段名称</param>
				/// <param name="serverresult">属性查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getTileProperty(_in EVString& layername,_in ev_int32 level,_in ev_uint32 row ,_in ev_uint32 col,
					_in EVString& fieldname,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 获取FeatureInfo信息
                /// </summary>
				/// <param name="layer">图层</param>
				/// <param name="level">级别</param>
				/// <param name="tilerow">行</param>
				/// <param name="tilecol">列</param>
				/// <param name="x">图片像素x值</param>
				/// <param name="y">图片像素y值</param>
				/// <param name="infofomat">文件格式</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getWMTSFeatureInfo(_in EVString& layer,_in ev_int32 level,_in ev_uint32 tilerow,_in ev_uint32 tilecol,
					_in ev_int32 x,_in ev_int32 y,_in EVString& infoformat,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				public:
				/// <summary>
                /// 获取OGCWMTS描述
                /// </summary>
                /// <returns>WMTS属性对象</returns>
				const EarthView::World::Spatial::CWMTSServerInfo* getOGCWMTSCapabilitiesRef();

				ev_int32 getEVWMTSCapabilities(_inout EVString& value);
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*													WMS												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////

				/// <summary>
                /// 获取map信息
                /// </summary>
				/// <param name="layers">图层列表</param>
				/// <param name="styles">风格列表</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="format">图片格式</param>
				/// <param name="transparent">是否透明</param>
				/// <param name="red">红色值</param>
				/// <param name="green">绿色值</param>
				/// <param name="blue">蓝色值</param>
				/// <param name="time">时间</param>
				/// <param name="elevation">高程值</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getMap(_in const EVString& layers,_in const EVString& styles,_in EarthView::World::Spatial::EVSSCSRS srs,
					_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in ev_uint32 width,_in ev_uint32 height,_in const EVString& format,
					_in ev_bool transparent,_in ev_int32 red,_in ev_int32 green,_in ev_int32 blue,
					_in const EVString& time,_in const EVString& elevation,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 获取FeatureInfo信息
                /// </summary>
				/// <param name="layers">图层列表</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="querylayers">查询图层</param>
				/// <param name="infoformat">数据格式</param>
				/// <param name="featurecount">每次最多返回的Feature数</param>
				/// <param name="x">图片像素x值</param>
				/// <param name="y">图片像素y值</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getWMSFeatureInfo(
					_in const EVString& layers,
					_in EarthView::World::Spatial::EVSSCSRS srs,
					_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,
					_in ev_uint32 width,
					_in ev_uint32 height,
					_in const EVString& infoformat,
					_in ev_uint32 featurecount,
					_in ev_int32 x,
					_in ev_int32 y,
					_out EVString& value
					);
				
				/// <summary>
                /// 获取图例信息
                /// </summary>
				/// <param name="layer">图层</param>
				/// <param name="legendwidth">图例宽度</param>
				/// <param name="legendheight">图利高度</param>
				/// <param name="serverresult">结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getLayerLegend(_in EVString& layer,_in ev_uint32 legendwidth,_in ev_uint32 legendheight,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 获取查询图层信息
                /// </summary>
				/// <param name="layers">图层列表</param>
				/// <param name="symbol">风格</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="conditions">查询条件</param>
				/// <param name="format">图片格式</param>
				/// <param name="serverresult">结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getQueryMap(_in EVString& layers,_in const EarthView::World::Spatial::Display::ISymbol* symbol,_in EarthView::World::Spatial::EVSSCSRS srs,
					_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in ev_uint32 width,_in ev_uint32 height,_in EarthView::World::Spatial::CServerSearchCondition* conditions,
					_in EVString& format,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 像素点转换为实际点
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="pointlist">像素点串对象</param>
				/// <param name="outpointlist">实际坐标点串</param>
                /// <returns>操作结果类型</returns>
				ev_int32 convertToLngLat(_in EVString& map,_in EarthView::World::Spatial::EVSSCSRS srs,_in const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in ev_uint32 width,_in ev_uint32 height,
					_in EarthView::World::Spatial::CServerPointList& pointlist,_out EarthView::World::Spatial::CServerPointList& outpointlist);
				
				/// <summary>
                /// 获取OGCWMS信息
                /// </summary>
				/// <param name="wmsInfo">OGCWMS信息</param>
                /// <returns>WMS属性对象</returns>
				const EarthView::World::Spatial::CWMSServerInfo* getOGCWMSCapabilitiesRef();

				ev_int32 getEVWMSCapabilities(_inout EVString& value);


				ev_int32 getWMSChart(const EVString& layer,	
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

				ev_int32 getWMSImage(
					EVString imageName,
					EVString bBOX,
					ev_int32 width,
					ev_int32 height,	
					EVString SRS,
					EVString format,
					_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*													WFS												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////

				/// <summary>
                /// 获取查询属性（针对单一图层）
                /// </summary>
				/// <param name="layer">图层名称</param>
				/// <param name="condition">查询条件</param>
				/// <param name="startrecord">开始记录索引</param>
				/// <param name="recordcount">每次返回记录数</param>
				/// <param name="recordset">查询结果集</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getQueryAttribute(_in EVString& layer,_in const EarthView::World::Spatial::CServerSearchCondition* condition,_in ev_int32 startrecord,_in ev_int32 recordcount,_out EarthView::World::Spatial::CServerSet& recordset);
				
				/// <summary>
                /// 获取图层属性
                /// </summary>
				/// <param name="querylayer">查询图层</param>
				/// <param name="featurecount">每次返回要素数</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <param name="fieldname">查询字段名</param>
				/// <param name="queryresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getLayerAttributeValue(_in EVString& querylayers,_in ev_uint32 featurecount,_in ev_real64 x,_in ev_real64 y,_in EVString& fieldname,_out EarthView::World::Spatial::CServerQueryResults& queryresult);
				
				/// <summary>
                /// 获取图层某唯一属性的属性值
                /// </summary>
				/// <param name="querylayer">查询图层</param>
				/// <param name="fieldname">字段名</param>
				/// <param name="valuelist">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getUniqueFieldValue(_in EVString& querylayer,_in EVString& fieldname,_out EarthView::World::Spatial::CServerQueryResults& queryresult);
				
				/// <summary>
                /// 获取图层要素
                /// </summary>
				/// <param name="layer">图层名</param>
				/// <param name="featureid">要素ID</param>
				/// <param name="hasgeometry">要素包含几何对象</param>
				/// <param name="hasattribute">要素包含属性</param>
				/// <param name="geomformat">几何对象格式</param>
				/// <param name="attributenames">属性列表</param>
				/// <param name="feature">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getLayerFeature(_in EVString& layer,_in ev_bool hasgeometry,_in ev_bool hasattribute,_in EVString& attributenames,_inout EarthView::World::Spatial::CEVWebFeature& feature);
				
				/// <summary>
                /// 获取几何对象
                /// </summary>
				/// <param name="layer">图层名</param>
				/// <param name="condition">查询条件D</param>
				/// <param name="geometrylist">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getSearchGeometry(_in EVString& layer,_in const EarthView::World::Spatial::CServerSearchCondition* condition,_out EarthView::World::Spatial::CGeometryList& geometrylist);
				
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*											 几何服务												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////

				/// <summary>
                /// 获取缓冲区对象
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometrylist">选择要素列表</param>
				/// <param name="distance">缓冲距离</param>
				/// <param name="isunion">结果是否融合</param>
				/// <param name="result_geometrylist">处理结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 buffer(_in EVString& map,_in EarthView::World::Spatial::CGeometryList& geometrylist,_in ev_real64 distance,_in ev_bool isunion,_out EarthView::World::Spatial::CGeometryList& result_geometrylist);
				
				/// <summary>
                /// 查看geometri1是否包含geometry2
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 contains(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 查看geometri1和geometry2是否相跨
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 crosses(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 查看geometri1和geometry2相离
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 disjoint(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 查看geometri1和geometry2的距离
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 distance(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_real64& result);
				
				/// <summary>
                /// 查看geometri1和geometry2是否相交
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 intersects(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 查看geometri1是否压盖geometry2
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 overlaps(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 查看geometri1和geometry2是否相接
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 touches(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);
				
				/// <summary>
                /// 查看geometri1是否在geometry2内部
                /// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 within(_in EVString& map,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry1,_in const EarthView::World::Spatial::Geometry::IGeometry* geometry2,_out ev_bool& result);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*											 地理编码服务											*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				
				/// <summary>
                /// 获取地理编码文件
                /// </summary>
				/// <param name="placename">地名</param>
				/// <param name="dataname">数据名</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getGeoCodeFile(_in EVString& placename,_in EVString& dataname,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 查询地名
                /// </summary>
				/// <param name="layername">图层名</param>
				/// <param name="namefield">名称字段名</param>
				/// <param name="keyword">关键字</param>
				/// <param name="blurquery">是否模糊查询</param>
				/// <param name="limitcount">最多返回结果</param>
				/// <param name="resultlist">查询结果列表</param>
                /// <returns>操作结果类型</returns>
				ev_int32 queryPlacename(_in EVString& layername,_in EVString& namefield,_in EVString& keyword,_in ev_bool blurquery,_in ev_int32 limitcount,_out EarthView::World::Spatial::CPlaceNameList& resultlist);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*											 globe服务												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////
				
				/// <summary>
                /// 获取KML文件
                /// </summary>
				/// <param name="filename">文件名</param>
				/// <param name="dataName">数据名1</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getKMLFile(_in EVString& filename,_in EVString& dataName,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);
				
				/// <summary>
                /// 获取场景文件
                /// </summary>
				/// <param name="filename">图层名</param>
				/// <param name="dataName">数据名</param>
				/// <param name="stream">查询结果</param>
                /// <returns>操作结果类型</returns>
				//ev_int32 getSceneFile(_in const EVString filename,_in const EVString dataName,_out CMemoryDataStream& stream);
				
				/// <summary>
                /// 获取DEM文件
                /// </summary>
				/// <param name="filename">图层名</param>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="serverresult">查询结果</param>
                /// <returns>操作结果类型</returns>
				ev_int32 getDEMFile(_in EVString& filename,_in ev_int32 level,_in ev_int32 row,_in ev_int32 col,_out EarthView::World::Spatial::CMemoryStreamResult& serverresult);

				ev_int32 getEntityObject(EarthView::World::Spatial::CServerEntityObject& entityObject);
				ev_int32 getMesh(EarthView::World::Spatial::CServerMeshObject& meshObject);
				ev_int32 getResource(EarthView::World::Spatial::CServerResourceObject& resourceObject);
				ev_int32 getResourceByID(CServerResourceObject& resourceObject);
				ev_int32 getOrigTexture(EarthView::World::Spatial::CServerOrigTexture& origTexture);

				ev_int32 getTemplateEntityObject(EarthView::World::Spatial::CServerTemplateEntityObject& entityObject);
				ev_int32 getTemplateResourceByID(CServerResourceObject& resourceObject);

				void setValid(ev_bool b);
			
				/// <summary>
				/// 通过数据集名称（不带数据集类型的，如 dem90非dem90/DEM）获取数据集类型
				/// </summary>
				/// <param name="datasetname">数据集名称</param>
				/// <returns>数据集类型，如果没有给的的数据集，返回空</returns>
				EVString getDatasetType(const EVString& datasetname);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/*											 MultiMedaService服务												*/
				//////////////////////////////////////////////////////////////////////////////////////////////////////

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
				///构造函数
				CEVSpatialServer();

				/// <summary>
				/// 初始化元数据信息缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void initMetadataCache();				
				
				void copyTheme(CServerTheme** pTheme,Download::Theme& theme);

				/// <summary>
				/// 获取模型数据集要素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>				
				ev_int32 getModelDatasetFeatures(const EVString& datasetName, Download::ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
				ev_int32 getModelTemplateDatasetFeatures(const EVString& datasetName, Download::ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
	ev_private:
				/// <summary>
				/// 更新当前服务的数据集名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void updateCurrentServiceDatasetNames(const EVString& serviceType, const vector<EVString>& datasetNames);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void addCurrentServiceDatasetNames(const EVString& serviceType, const EVString& datasetName);

			protected:
				
				///服务名称
				EVString mstrServerName;
				///服务器地址
				EVString mstrServerURL;
				///服务标题
				EVString mstrServerTitle;
				///服务描述
				EVString mstrServerAbstract;
				///服务版本
				EVString mstrServerVersion;
				///插件文件
				EVString mstrPluginFile;

				ev_bool valid;

				vector<EVWebServiceType> mlistSupportService;

				EVString mstrWMTSCapability;
				EVString mstrWMSCapability;
				EarthView::World::Spatial::CWMTSServerInfo* mpOGCWMTSCapability;
				EarthView::World::Spatial::CWMSServerInfo* mpOGCWMSCapability;

				typedef vector<EVString> _DatasetNames;
				typedef map<EVString, _DatasetNames> _CurrentServiceDatasetNames; //通过服务类型记录数据集名称
				_CurrentServiceDatasetNames mCurrentServiceDatasetNames;

				//CWebServiceConnection* mpWebServiceConnection;
				friend class CDataSourceServerFactory;	
				friend class CEVWMTSDataset;
				friend class CEVDEMDataset;
				friend class CEVKMLDataset;
				friend class CEVGeoCodeDataset;
				friend class CEVGeometryDataset;
				friend class CEVWMSDataset;
				friend class CEVWFSDataset;
				friend class CEVModelDataset;
				friend class CEVModelTemplateDataset;
				//friend class CObqWeb7zDataset;
			};
		}
	}
}
#endif


