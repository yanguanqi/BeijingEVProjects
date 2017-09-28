#ifndef EARTHVIEW_WORLD_KMLSERIALIZE_KMLSERIALIZER_H
#define EARTHVIEW_WORLD_KMLSERIALIZE_KMLSERIALIZER_H

#include "kml/dom.h"
#include "kml/convenience/convenience.h"
#include "kml/base/file.h"
#include "kml/engine.h"
#include "kml/dom/feature.h"
#include "kml/dom/overlay.h"
#include "kml/dom/placemark.h"

#include "spatialobject/geoobject.h"
#include "core/xml.h"
// #include "spatialinterface/isymbol.h"
// #include "spatialobject/geometry/point.h"
// #include "spatialobject/geometry/envelope.h"
// #include "spatialobject/geometry/box.h"
// #include "spatialobject/geometry/volume.h"
// #include "spatialobject/geometry/coordinate.h"
// #include "spatialobject/geometry/line.h"
// #include "spatialobject/geometry/polygon.h"

#include "kmlserializer/kmlnetworklink.h"
#include "kmlserializer/kmltour.h"
#include "core/stdheaders.h"
/*#include "symbol/fresnelsurface3dsymbol.h"*/
#include "kmlserializer/geoobjectextension.h"
/*#include "symbol/billboard3dsymbol.h"*/

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class SaveDocSt 
				{
				public:
					EVString docName;
					kmldom::DocumentPtr dp;
				};

				//kml对象与geoobject对象的相互转换
				class CKmlSerializer
				{
				private:
					ev_map<EVString, kmldom::StyleMapPtr>  m_stylemap;
					ev_map<EVString, kmldom::StylePtr> m_style;

					ev_map<EVString, kmldom::StyleMapPtr> m_savingStylemap;
					ev_map<EVString, kmldom::StylePtr> m_savingStyle;

					ev_uint16 m_polyAltiMode;
					ev_uint16 mStyleCount;
					//zf kmz add
					std::map<std::string,std::string> mKmzSubDataMap;
ev_private:
					// kml对象的风格
					struct AllStyle
					{
						kmldom::IconStylePtr iconStyle;
						kmldom::LabelStylePtr labelStyle;
						kmldom::LineStylePtr lineStyle;
						kmldom::PolyStylePtr polyStyle;
					};
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlSerializer(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlSerializer();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlSerializer();
ev_private:
					AllStyle all_style;
					//EVString mFilePath;

					//ev_void setKmzSubDataMap(std::map<std::string,std::string>& dataMap);
					std::map<std::string,std::string>&  getKmzSubDataMap();
					/// <summary>
					/// 获取高程模式
					/// </summary>
					/// <returns>返回高程模式枚举</returns>
					ev_uint16 getPolyAltiMode();
					/// <summary>
					/// 设置高程模式
					/// </summary>
					/// <param name="polyAltiMode">高程模式值</param>
					/// <returns></returns>
					ev_void setPolyAltiMode(const ev_uint16 polyAltiMode);
					/// <summary>
					/// 设置风格
					/// </summary>
					/// <param name="stylemap">风格容器键值对</param>
					/// <returns></returns>
					ev_void setStyleMap(ev_map<EVString, kmldom::StyleMapPtr> stylemap);
					/// <summary>
					/// 获取风格
					/// </summary>
					/// <returns>返回风格容器键值对</returns>
					ev_map<EVString, kmldom::StyleMapPtr>& getStyleMap();
					/// <summary>
					/// 设置风格
					/// </summary>
					/// <param name="stylemap">风格键值对</param>
					/// <returns></returns>
					ev_void setStyle(ev_map<EVString, kmldom::StylePtr> &style);
					/// <summary>
					/// 获取风格
					/// </summary>
					/// <returns>返回风格键值对</returns>
					ev_map<EVString, kmldom::StylePtr>& getStyle();
ev_private:
#if EV_PLATFORM != EV_PLATFORM_APPLE && EV_PLATFORM != EV_PLATFORM_APPLE_IOS	

					/// <summary>
					/// GeoObject对象转换成kml对象
					/// </summary>
					/// <param name="kmldoc">kml根节点</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="document">kml文档</param>
					/// <returns>无</returns>
					ev_void geoObjectToKmlObject(kmldom::DocumentPtr& kmldoc, EVString kml_path, EarthView::World::Spatial::Kml::CKmlDocument* document);
					/// <summary>
					/// kml对象转换成GeoObject对象
					/// </summary>
					/// <param name="kml">kml根节点</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="document">kml文档</param>
					/// <param name="xml">xml对象</param>
					/// <returns>无</returns>
					ev_void kmlObjectToGeoObject(kmldom::KmlPtr kml, EVString kml_path, EarthView::World::Spatial::Kml::CKmlDocument* document, EarthView::World::Core::CXmlElement xml);
					/// <summary>
					/// 迭代读取kml节点
					/// </summary>
					/// <param name="ptr">kml的FeaturePtr对象</param>
					/// <param name="doc">kml文档</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="xml">xml对象</param>
					/// <returns>无</returns>
					ev_void iteratorKmlDocument(kmldom::FeaturePtr ptr, EarthView::World::Spatial::Kml::CKmlDocument* doc, EVString kml_path, const EarthView::World::Core::CXmlElement& xml);
					/// <summary>
					/// 迭代创建kml节点
					/// </summary>
					/// <param name="doc">kml文档</param>
					/// <param name="kmldoc">kml的DocumentPtr对象</param>
					/// <param name="subFolder">kml的FolderPtr对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void iteratorCreateKmlFeature(EarthView::World::Spatial::Kml::CKmlDocument* doc, kmldom::DocumentPtr& kmldoc, kmldom::FolderPtr& subFolder, EVString kml_path);

					/// <summary>
					/// 添加一个PlaceMark
					/// </summary>
					/// <param name="fp">placeMark要素</param>
					/// <param name="document">kml文档</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="xml">xml对象</param>
					/// <returns>无</returns>
					ev_void addPlacemark(kmldom::FeaturePtr fp, EarthView::World::Spatial::Kml::CKmlDocument* document, EVString kml_path, const EarthView::World::Core::CXmlElement& xml);//gaoy 2013.6.18增加一个参数kml文件路径
					/// <summary>
					/// 添加一个Networklink
					/// </summary>
					/// <param name="fp">Networklink要素</param>
					/// <param name="document">kml文档</param>
					/// <returns>无</returns>
					ev_void addNetworklink(kmldom::FeaturePtr fp,EarthView::World::Spatial::Kml::CKmlDocument* document);
					/// <summary>
					/// 添加一个PhotoOverlay
					/// </summary>
					/// <param name="fp">PhotoOverlay要素</param>
					/// <param name="document">kml文档</param>
					/// <returns>无</returns>
					ev_void addPhotoOverlay(kmldom::FeaturePtr fp,EarthView::World::Spatial::Kml::CKmlDocument* document);
					/// <summary>
					/// 添加一个GroundOverlay
					/// </summary>
					/// <param name="fp">GroundOverlay要素</param>
					/// <param name="document">kml文档</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void addGroundOverlay(kmldom::FeaturePtr fp,EarthView::World::Spatial::Kml::CKmlDocument* document, EVString kml_path);
					/// <summary>
					/// 添加一个ScreenOverlay
					/// </summary>
					/// <param name="fp">ScreenOverlay要素</param>
					/// <param name="document">kml文档</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void addScreenOverlay(kmldom::FeaturePtr fp,EarthView::World::Spatial::Kml::CKmlDocument* document, EVString kml_path);
					/// <summary>
					/// 添加一个GxTour
					/// </summary>
					/// <param name="fp">GxTour要素</param>
					/// <param name="document">kml文档</param>
					/// <returns>无</returns>
					ev_void addGxTour(kmldom::FeaturePtr fp,EarthView::World::Spatial::Kml::CKmlDocument* document);
#endif
					/// <summary>
					/// kml定义的Placemark对象转换成GeoObject对象
					/// </summary>
					/// <param name="placemark">地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="isParentVisible">父对象是否可见</param>
					/// <param name="kml_Path">图标文件的路径</param>
					/// <returns>ev_bool</returns>
					ev_bool placemarkToGeoObject(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj
						,ev_bool isParentVisible, EVString kml_Path,const EarthView::World::Core::CXmlElement& xml);
					/// <summary>
					/// GeoObject对象转换成kml定义的Placemark对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="stylemap">风格容器键值对</param>
					/// <param name="style">风格键值对</param>
					/// <returns>ev_bool</returns>
					ev_bool geoObjectToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark
						, EVString kml_path, ev_map<EVString, kmldom::StyleMapPtr>& stylemap, ev_map<EVString, kmldom::StylePtr>& style);

					/// <summary>
					/// kml定义的GroundOverlay对象转换成GeoObject对象
					/// </summary>
					/// <param name="overlay">kml覆盖层对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="isParentVisible">父对象是否可见</param>
					/// <returns>ev_bool</returns>
					ev_bool groundOverlayToGeoObject(const kmldom::GroundOverlay& overlay,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj
						,ev_bool isParentVisible, EVString kml_path);
					/// <summary>
					/// GeoObject对象转换成kml定义的GroundOverla对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="overlay">覆盖层对象</param>
					/// <returns>ev_bool</returns>
					ev_bool geoObjectToGroundOverlay(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj,kmldom::GroundOverlayPtr& overlay, EVString kml_path);
					/// <summary>
					/// kml定义的screenOverlayOverlay对象转换成GeoObject对象
					/// </summary>
					/// <param name="screenOverlay">kml屏幕覆盖层对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="isParentVisible">父对象是否可见</param>
					/// <returns>ev_bool</returns>
					ev_bool screenOverlayToGeoObject(const kmldom::ScreenOverlay& screenOverlay,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj
						,ev_bool isParentVisible, EVString kml_path);					
					/// <summary>
					/// GeoObject对象转换成kml定义的ScreenOverla对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="screenOverlay">覆盖层对象</param>
					/// <returns>ev_bool</returns>
					ev_bool geoObjectToScreenOverlay(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj,kmldom::ScreenOverlayPtr& screenOverlay, EVString kml_path);

					/// <summary>
					/// kml定义的PhotoOverlay对象转换成GeoObject对象
					/// </summary>
					/// <param name="overlay">图像覆盖层对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="isParentVisible">父对象是否可见</param>
					/// <returns>ev_bool</returns>
					ev_bool photoOverlayToGeoObject(const kmldom::PhotoOverlay& overlay,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj,ev_bool isParentVisible);
					/// <summary>
					/// GeoObject对象转换成kml定义的PhotoOverlay对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="overlay">图像覆盖层对象</param>
					/// <returns>ev_bool</returns>
					ev_bool geoObjectToPhotoOverlay(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj,kmldom::PhotoOverlayPtr& overlay);

					/// <summary>
					/// 把libkml的networklink转为我们自己定义的kmlNetworklink
					/// </summary>
					/// <param name="net">自定义网络连接对象</param>
					/// <param name="kmlNet">kml网络连接对象</param>
					/// <returns>ev_bool</returns>
					ev_bool netWorkLinkTokmlnetwlrklink(const kmldom::NetworkLink& net,CKmlNetworkLink& kmlNet);
					/// <summary> 
					/// 我们自己定义的kmlNetworklink转换成libkml的networklink对象
					/// </summary>
					/// <param name="kmlNet">kml网络连接对象</param>
					/// <param name="net">自定义网络连接对象</param>
					/// <returns>ev_bool</returns>
					ev_bool kmlnetworklinkTonetworkLink(const CKmlNetworkLink& kmlNet,kmldom::NetworkLinkPtr& net, EVString kml_path);

					/// <summary>
					/// libkml的GxTour对象转换成自定义的CTour
					/// </summary>
					/// <param name="libTour">kml游览对象</param>
					/// <param name="cTour">自定义游览对象</param>
					/// <returns>ev_bool</returns>
					ev_bool libkmltour2cKmlTour(const kmldom::GxTour& libTour, EarthView::World::Spatial::Kml::CTour& cTour);
					/// <summary>
					/// 自定义的kmlTour转换成libkml的GxTour对象
					/// </summary>
					/// <param name="libTour">kml游览对象</param>
					/// <param name="cTour">自定义游览对象</param>
					/// <returns>ev_bool</returns>
					ev_bool cKmlTour2libkmltour(EarthView::World::Spatial::Kml::CTour& cTour,kmldom::GxTourPtr& libTour);
					
					/// <summary>
					/// 解析视图
					/// </summary>
					/// <param name="abstractView">抽象视图对象</param>
					/// <param name="geoObjectAbs">地理对象</param>
					/// <returns>ev_bool</returns>
					ev_bool parseAbstractView(kmldom::AbstractViewPtr abstractView , EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObjectAbs);
					/// <summary>
					/// 创建视图
					/// </summary>
					/// <param name="geoObjToAbs">地理对象</param>
					/// <param name="modelAlt">高度值</param>
					/// <returns>返回视图对象</returns>
					kmldom::AbstractViewPtr createAbstractView(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObjToAbs,ev_real64 modelAlt);
					
					/// <summary>
					/// 解析水面参数，赋值给相应的外部数据对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="exData">外部数据对象</param>
					/// <returns>无</returns>
					void parseFresnelSurfaceSymbol(EarthView::World::Spatial::Kml::CGeoObjectExtension *geoobject,const kmldom::ExtendedDataPtr& exData);
					/// <summary>
					/// 解析面纹理，赋值给相应的外部数据对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="exData">外部数据对象</param>
					/// <param name="kml_Path">kml路径</param>
					/// <returns>无</returns>
					ev_bool parseSurfaceTexture(EarthView::World::Spatial::Kml::CGeoObjectExtension *geoobject,const kmldom::ExtendedDataPtr& exData, EVString kml_path);
					
					/// <summary>
					/// 创建kml风格
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="kml_Path">kml路径</param>
					/// <param name="rootElement">CXmlElement对象</param>
					/// <param name="styles">风格结构体</param>
					/// <returns>无</returns>
					void parseStyleUrl(const kmldom::Placemark& placemark, EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path, const EarthView::World::Core::CXmlElement& rootElement, AllStyle &styles);
					/// <summary>
					/// 创建kml点
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="kml_Path">地标的图标路径</param>
					/// <returns></returns>
					ev_void parsePoint(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_Path);
					/// <summary>
					/// 创建kml线
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns></returns>
					ev_void parseLineString(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					/// <summary>
					/// 创建kml多边形
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns></returns>
					ev_void parsePolygon(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					/// <summary>
					/// 创建kml模型
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns></returns>
					ev_void parseModel(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					/// <summary>
					/// 解析360
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns></returns>
					ev_void parsePanorama360(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);
					/// <summary>
					/// 解析Model ExtendedData
					/// </summary>
					/// <param name="exData">ExtendedData对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void parseModelExData(const kmldom::ExtendedDataPtr& exData,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);	
					/// <summary>
					/// 解析Arrow ExtendedData
					/// </summary>
					/// <param name="exData">ExtendedData对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns></returns>
					ev_void parseArrowExData(const kmldom::ExtendedDataPtr& exData,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);	
					/// <summary>
					/// 创建MultiGeometry
					/// </summary>
					/// <param name="placemark">kml地标对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void parseMultiGeometry(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					/// <summary>
					/// 创建MultiLineString
					/// </summary>
					/// <param name="lineString">kml LineString对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns>无</returns>
					ev_void parseMultiLineString(const kmldom::LineStringPtr& lineString,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);
					/// <summary>
					/// 创建MultiPoint
					/// </summary>
					/// <param name="point">kml Point对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void parseMultiPoint(const kmldom::PointPtr& point,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					/// <summary>
					/// 创建MultiPolygon
					/// </summary>
					/// <param name="polygon">kml Polygon对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <returns>无</returns>
					ev_void parseMultiPolygon(const kmldom::PolygonPtr& polygon,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);
					/// <summary>
					/// 创建MultiGeometryModel
					/// </summary>
					/// <param name="model">kml Model对象</param>
					/// <param name="geoobj">地理对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns>无</returns>
					ev_void parseMultiGeomerryModel(const kmldom::ModelPtr& model,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					
					/// <summary>
					/// 解析360全景
					/// </summary>
					/// <param name="geoobj">kml地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns></returns>
					ev_bool Panorama360ToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, EVString kml_path);
					/// <summary>
					/// 解析Point
					/// </summary>
					/// <param name="geoobj">kml地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="stylemap">kml StyleMap的map对象</param>
					/// <param name="style">kml Style的map对象</param>
					/// <returns></returns>
					ev_bool PointToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, EVString kml_path, ev_map<EVString, kmldom::StyleMapPtr>& stylemap, ev_map<EVString, kmldom::StylePtr>& style);
					/// <summary>
					/// 解析LineString
					/// </summary>
					/// <param name="geoobj">kml地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="stylemap">kml StyleMap的map对象</param>
					/// <param name="style">kml Style的map对象</param>
					/// <returns></returns>
					ev_bool LineStringToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, EVString kml_path, ev_map<EVString, kmldom::StyleMapPtr>& stylemap, ev_map<EVString, kmldom::StylePtr>& style);
					/// <summary>
					/// 解析Polygon
					/// </summary>
					/// <param name="geoobj">kml地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <param name="stylemap">kml StyleMap的map对象</param>
					/// <param name="style">kml Style的map对象</param>
					/// <returns></returns>
					ev_bool PolygonToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, EVString kml_path, ev_map<EVString, kmldom::StyleMapPtr>& stylemap, ev_map<EVString, kmldom::StylePtr>& style);
					/// <summary>
					/// 解析Model
					/// </summary>
					/// <param name="geoobj">kml地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="kml_path">kml路径</param>
					/// <returns></returns>
					ev_bool ModelToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, EVString kml_path);
					
					/// <summary>
					/// MultiGeometry对象转换成kml定义的Placemark对象
					/// </summary>
					/// <param name="geoobj">地理对象</param>
					/// <param name="placemark">地标对象</param>
					/// <param name="stylemap">风格容器键值对</param>
					/// <param name="style">风格键值对</param>
					/// <returns>ev_bool</returns>
					ev_bool MultiGeoToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark
						, EVString kml_path, ev_map<EVString, kmldom::StyleMapPtr>& stylemap, ev_map<EVString, kmldom::StylePtr>& style);
					ev_bool MultiPointToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark
						, EVString kml_path, ev_map<EVString, kmldom::StylePtr>& style);
					ev_bool MultiLineStringToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, ev_map<EVString, kmldom::StylePtr>& style);
					ev_bool MultiPolygonToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, kmldom::PlacemarkPtr& placemark, ev_map<EVString, kmldom::StylePtr>& style);
					ev_bool MultiGeoModelToPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj,kmldom::PlacemarkPtr& placemark, EVString kml_path);
					
					/// <summary>
					/// 下载kml文件
					/// </summary>
					/// <param name="href">kml文件地址</param>
					/// <returns>返回kml文件内容</returns>
					EVString downLoadFile(const EVString& href);	

					// kmlaltitude与自定义altitude互转
					EarthView::World::Spatial::Utility::EVAltitudeMode kmlAlt2GeoAltMode(ev_bool isNormalAlt,int altIndex);
					void geoAlt2KmlAltMode(EarthView::World::Spatial::Utility::EVAltitudeMode model,_out ev_bool& isNormalAlt,_out int& altIndex);
					
					/// <summary>
					/// 计算GeoObjectExtension的Region
					/// </summary>
					/// <param name="geoobj">GeoObjectExtension对象</param>
					/// <returns>无</returns>
					void computeGeoObjectExtensionRegion(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);

				private:
					/// <summary>
					/// 解析GroundOverlay的Region
					/// </summary>
					/// <param name="overlay">GroundOverlay对象</param>
					/// <param name="geoobj">GeoObjectExtension对象</param>
					/// <returns>无</returns>
					ev_void parseGroundOverlayRegion(const kmldom::GroundOverlay& overlay,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj );
					/// <summary>
					/// 解析Placemark的Region
					/// </summary>
					/// <param name="placemark">Placemark对象</param>
					/// <param name="geoobj">GeoObjectExtension对象</param>
					/// <returns>无</returns>
					ev_void parseRegion(const kmldom::Placemark& placemark,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj );
					/// <summary>
					/// 创建kml扩展数据
					/// </summary>
					/// <param name="geoobj">GeoObject对象</param>
					/// <returns>返回kml扩展数据</returns>
					kmldom::ExtendedDataPtr createExtendedDataFromFresnelSurface(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);
					kmldom::ExtendedDataPtr createExtendedDataFromPoint(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);
					kmldom::ExtendedDataPtr createExtendedDataFromModel(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					kmldom::ExtendedDataPtr createExtendedDataFromArrow(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);
					kmldom::ExtendedDataPtr createExtendedDataFromSurfaceTexture(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj, EVString kml_path);
					
					EVString getCoordinates(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoobj);

					ev_bool getRelativePathReferToKmlPath(const EVString& fullpath, EVString& relpath);
					/// <summary>
					/// 文件路径转换为Geo路径
					/// </summary>
					/// <param name="fullpath">GeoObject对象</param>
					/// <param name="relpath">GeoObject对象</param>
					/// <returns></returns>
					EVString filePathToGeoPath(EVString& filepath,EVString& kmlpath);
					/// <summary>
					/// Geo路径转换为文件路径
					/// </summary>
					/// <param name="fullpath">GeoObject对象</param>
					/// <param name="relpath">GeoObject对象</param>
					/// <returns></returns>
					EVString geoPathToFilePath(EVString& filepath,EVString& geopath);
					
					ev_uint32 findElement(EarthView::World::Core::CXmlElement rootElement,const EVString& name,EarthView::World::Core::CXmlElement& reslut);
					
					CSceneOverlayData::EVSceneOverlayType toGeoSceneOverlayType(ev_int32 i);
					ev_int32 tolibkmlSceneOverlayType(CSceneOverlayData::EVSceneOverlayType type);
					/// <summary>
					/// 指定路径是否为kmz格式
					/// </summary>
					/// <param name="url">kml路径</param>
					/// <returns>true为是</returns>
					ev_bool isKmz( const EVString& url );
				};
			}
		}		
	}
}

#endif