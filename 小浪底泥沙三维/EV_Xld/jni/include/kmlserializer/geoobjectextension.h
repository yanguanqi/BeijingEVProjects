#ifndef EV_GEOOBJECTEXTENSION_H
#define EV_GEOOBJECTEXTENSION_H
#include "config.h"
#include "spatialobject/geoobject.h"
#include "mathengine/vector3.h"
#include "mathengine/vector4.h"
#include "core/workqueue.h"
#include "spatialinterface/altitudemode.h"

// using namespace EarthView::World::Spatial;
namespace EarthView
{////EarthView
	namespace World
	{////World
		namespace Spatial
		{  

			namespace Utility
			{   
				////declare
				class CSpatialReference;
			}
		}
	}
}
// using namespace EarthView::World::Spatial::Utility;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CMultiPoint;
				class CPolyline;
				class CPolygon;
			}
			namespace Kml
			{
				class CKmlDocument;
				enum EVGEXTYPE
				{
					GXT_POINT=0,
					GXT_LINE,
					GXT_POLYGON,
					GXT_SURFACEPOLYGON,
					GXT_GROUNDPOLYGON,
					GXT_IMAGEOVERLAYER,
					GXT_MODEL,
					GXT_PHOTOLAYER,
					GXT_TOUR,
					GXT_CUBE,
					GXT_CONE,
					GXT_HALFSPHERE,
					GXT_360,
					GXT_ARROW,
					GXT_SCREENOVERLAYER,
					GXT_MULTIGEOMETRY,
					GXT_UNKNOWN
				};
				/// <summary>
				/// 箭头类型
				/// </summary>
				enum ArrowType
				{
					/// <summary>
					/// 贴地箭头
					/// </summary>
					GroundArrow,
					/// <summary>
					/// 空中箭头
					/// </summary>
					ThreeDArrow
				};
				/// <summary>
				/// 半球的渲染模式
				/// </summary>
				enum HalfsPhereRenderMode
				{
					HPRM_WIREFRAME = 1,
					HPRM_SOLID = 2
				};
				/// <summary>
				/// 多边形的填充轮廓模式
				/// </summary>
				enum FillOutLineMode
				{
					Fill = 1,
					OutLine = 2,
					Fill_OutLine=3
				};

				class EV_KMLSERIALIZER_DLL CSceneOverlayData: public EarthView::World::Core::CAllocatedObject
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSceneOverlayData(_in EarthView::World::Core::CNameValuePairList *pList) {mDataType = SOT_Proportion;mDataValue = 0;}
				public:
					/// <summary>
					/// SceneOverlay数据类型
					/// </summary>
					enum EVSceneOverlayType
					{
						SOT_Proportion = 1,
						SOT_Pixels,
						SOT_InsetPixels
					};

					CSceneOverlayData(){mDataType = SOT_Proportion;mDataValue = 0;}

					~CSceneOverlayData(){}

					void setData(EVSceneOverlayType type,ev_real32 value)
					{
						mDataType = type;
						mDataValue = value;
					}

					EVSceneOverlayType getDataType()
					{
						return mDataType;
					}

					ev_real32 getDataValue()
					{
						return mDataValue;
					}
				private:
					EVSceneOverlayType mDataType;
					ev_real32 mDataValue;
				};
				class EV_KMLSERIALIZER_DLL CKmlWorkQueueState: public EarthView::World::Core::CAllocatedObject
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlWorkQueueState(_in EarthView::World::Core::CNameValuePairList *pList) {ReqID = 0;ReqAbort = false; WorkStateEnum = KWT_INIT;mDistance = -1;LayerVisible = true;NeedRefresh = false;GeoVisible = true;VisibleGeoObject = NULL;}
				public:
					enum EVKmlWorkQueueState
					{
						KWT_INIT = 0,
						KWT_LOADING,
						KWT_LOADED,
						KWT_UNLOADING,
						KWT_FAIL/*,
								KWT_RELOAD,
								KWT_LOADINGABORT,
								KWT_UNLOADINGABORT*/
					};
					enum EVKmlRequestType
					{
						KRT_LOAD = 0,
						KRT_UNLOAD,
						KRT_LOADKML,
						KRT_UNLOADKML/*,
									 KRT_CREATE*/
					};
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CKmlWorkQueueState() {ReqID = 0;ReqAbort = false; WorkStateEnum = KWT_INIT;mDistance = -1;LayerVisible = true;NeedRefresh = false;GeoVisible = true;VisibleGeoObject = NULL;}
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CKmlWorkQueueState() {}
					ev_uint64 ReqID;
					ev_bool ReqAbort;
					EVKmlRequestType ReqType;
					EVKmlWorkQueueState WorkStateEnum;
					volatile ev_uint32 mDistance;
					ev_bool LayerVisible;
					ev_bool NeedRefresh;
					ev_bool GeoVisible;
					EarthView::World::Spatial::CGeoObject* VisibleGeoObject;
				};
				enum LodStatus
				{
					LODPASS,
					MINERROR,
					MAXERROR,
					HIDDEN
				};
				enum EVPicLayout
				{
					EPL_TOP_LEFT = 0,
					EPL_TOP_CENTER,
					EPL_TOP_RIGHT,
					EPL_CENTER_LEFT,
					EPL_CENTER,
					EPL_CENTER_RIGHT,
					EPL_BOTTOM_LEFT,
					EPL_BOTTOM_CENTER,
					EPL_BOTTOM_RIGHT
				};
				class EV_KMLSERIALIZER_DLL CGeoObjectExtensionAttribute:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CGeoObjectExtensionAttribute(_in EarthView::World::Core::CNameValuePairList * pList);
				public:
					CGeoObjectExtensionAttribute();
					CGeoObjectExtensionAttribute(const CGeoObjectExtensionAttribute& geoAttr);
					CGeoObjectExtensionAttribute&  operator=( const CGeoObjectExtensionAttribute& geoAttr);
					~CGeoObjectExtensionAttribute();
					void update();
					CGeoObjectExtensionAttribute* mpOldAttr;
					void setParentKmldocument(EarthView::World::Spatial::Kml::CKmlDocument* parentDoc);
					EarthView::World::Spatial::Kml::CKmlDocument* getParentKmlDocument();


					void setRegionWest(ev_real64 RegionWest);
					ev_real64 getRegionWest() const;
					ev_real64 getOldRegionWest() const;

					void setRegionEast(ev_real64 RegionEast);
					ev_real64 getRegionEast() const;
					ev_real64 getOldRegionEast() const;

					void setRegionNorth(ev_real64 RegionNorth);
					ev_real64 getRegionNorth() const;
					ev_real64 getOldRegionNorth() const;

					void setRegionSouth(ev_real64 RegionSouth);
					ev_real64 getRegionSouth() const;
					ev_real64 getOldRegionSouth() const;

					void setRegionMaxAltitude(ev_real64 maxAltitude);
					ev_real64 getRegionMaxAltitude() const;
					ev_real64 getOldRegionMaxAltitude() const;

					void setRegionMinAltitude(ev_real64 minAltitude);
					ev_real64 getRegionMinAltitude() const;
					ev_real64 getOldRegionMinAltitude() const;



					void setMaxLodPixels(ev_real64 maxLodPixels);
					ev_real64 getMaxLodPixels() const;
					ev_real64 getOldMaxLodPixels() const;

					void setMinLodPixels(ev_real64 minLodPixels);
					ev_real64 getMinLodPixels() const;
					ev_real64 getOldMinLodPixels() const;

					void setMaxFadeExtent(ev_real64 maxFadeExtent);
					ev_real64 getMaxFadeExtent() const;
					ev_real64 getOldMaxFadeExtent() const;

					void setMinFadeExtent(ev_real64 minFadeExtent);
					ev_real64 getMinFadeExtent() const;
					ev_real64 getOldMinFadeExtent() const;



					EVString getNetLinkPath();
					EVString getOldNetLinkPath();
					void setNetLinkPath(EVString netLinkPath);

					//---360----
					EVString getPicPath360();
					EVString getOldPicPath360();
					void setPicPath360(const EVString& path);

					ev_real32 getRadius360();
					ev_real32 getOldRadius360();
					void setRadius360(ev_real32 r);
					ev_bool equal(const CGeoObjectExtensionAttribute& geoAttr);

					LodStatus mLodStatus;
					ev_bool mIsEditting;
					CKmlWorkQueueState* WorkState;
					ev_bool ParamChanged;
					ev_bool mIsBelongToNetLink;
					//---------

				private:
					//EVString m_name;
					//EVString m_description;
					//EVString m_id;
					//EVString m_styleUrlName;
					//EVString m_pictureUrl;

					//EVString m_originpictureUrl;


					//2013/11/13 add for imageoverlayer cache
					//EVString m_pictureId;	

					//
					//ev_bool m_isVisible;
					//ev_bool m_isExtrude;
					int m_referenceCount;
					//EarthView::World::Spatial::Kml::EVGEXTYPE m_gxType;




					ev_bool mIsNetLink;
					//ev_real64 m_Latitude;
					//ev_real64 m_Longitude;
					//ev_real64 m_Altitude;

					//					void* mModelObj;
					EVString mNetLinkPath;

					//---360--
					EVString mPicPath360;
					ev_real32 mRadius360;
					//---------

				public:
					//plackmark
					void setName(const EVString& name);
					EVString getName() const;
					EVString getOldName() const;

					void setDesc(const EVString& desc);
					EVString getDesc() const;
					EVString getOldDesc() const;

					void setID(const EVString& id);
					EVString getID() const;
					EVString getOldID() const;

					void setPicLayout(EVPicLayout piclayout);
					EVPicLayout getPicLayout() const;
					EVPicLayout getOldPicLayout() const;



					void setStyleUrlName(const EVString& styleUrlName);
					EVString getStyleUrlName() const;
					EVString getOldStyleUrlName() const;

					void setPictureUrl(const EVString& pictureUrl);
					EVString getPictureUrl() const;
					EVString getOldPictureUrl() const;

					void setPictureID(const EVString& pictureID);
					EVString getPictureID() const;
					EVString getOldPictureID() const;

					void setVisible(ev_bool isVisiable);
					ev_bool getVisible() const;
					ev_bool getOldVisible() const;

					void setExtrude(ev_bool isExtrude);
					ev_bool getExtrude() const;
					ev_bool getOldExtrude() const;

					void setKmlType(EarthView::World::Spatial::Kml::EVGEXTYPE kmlType);
					EarthView::World::Spatial::Kml::EVGEXTYPE getKmlType() const;

					void setPoints(EarthView::World::Spatial::Math::VertexList& points);
					EarthView::World::Spatial::Math::VertexList getPoints()const;
					EarthView::World::Spatial::Math::VertexList getOldPoints()const;

					void setLatitude( ev_real64 latitude );
					ev_real64 getLatitude()const;
					ev_real64 getOldLatitude()const;
					void setLongitude( ev_real64 lontitude );
					ev_real64 getLongitude()const;
					ev_real64 getOldLongitude()const;

					void setAltitude(ev_real64 altitude);
					ev_real64 getAltitude()const;
					ev_real64 getOldAltitude()const;

					void setNeedInterpolation(ev_bool needInterpolation);
					ev_bool getNeedInterpolation()const;
					ev_bool getOldNeedInterpolation()const;

					void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode altitudemode);
					EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeMode()const;
					EarthView::World::Spatial::Utility::EVAltitudeMode getOldAltitudeMode()const;

					void setFontName(EVString name);
					EVString getFontName()const;
					EVString getOldFontName()const;

					void setTextShadowEnabled(ev_bool flag);
					ev_bool getTextShadowEnabled()const;
					ev_bool getOldTextShadowEnabled()const;

					void setFontScale(ev_real32 fontScale);
					ev_real32 getFontScale()const;
					ev_real32 getOldFontScale()const;

					void setFontTransparency(ev_real32 fontTransparency);
					ev_real32 getFontTransparency()const;
					ev_real32 getOldFontTransparency()const;

					void setFontColor(EarthView::World::Spatial::Math::CVector3 fontColor);
					EarthView::World::Spatial::Math::CVector3 getFontColor()const;
					EarthView::World::Spatial::Math::CVector3 getOldFontColor()const;

					void setPictureTransparency(ev_real32 iconTransparency);
					ev_real32 getPictureTransparency()const;
					ev_real32 getOldPictureTransparency()const;

					void setIconScale(ev_real32 iconScale);
					ev_real32 getIconScale()const;
					ev_real32 getOldIconScale()const;
					//line and polygon
					void setLineColor(EarthView::World::Spatial::Math::CVector3 lineColor);
					EarthView::World::Spatial::Math::CVector3 getLineColor()const;
					EarthView::World::Spatial::Math::CVector3 getOldLineColor()const;

					void setLineTransparency(ev_real32 lineTransparency);
					ev_real32 getLineTransparency()const;
					ev_real32 getOldLineTransparency()const;

					void setLineWidth(ev_real32 width);
					ev_real32 getLineWidth()const;
					ev_real32 getOldLineWidth()const;

					void setPolygonColor(EarthView::World::Spatial::Math::CVector3 ploygonColor);
					EarthView::World::Spatial::Math::CVector3 getPolygonColor()const;
					EarthView::World::Spatial::Math::CVector3 getOldPolygonColor()const;

					ev_void setFillOutLineMode(FillOutLineMode mode);
					FillOutLineMode getFillOutLineMode();
					FillOutLineMode getOldFillOutLineMode();

					void setPolygonTransparency(ev_real32 polygonTransparency);
					ev_real32 getPolygonTransparency()const;
					ev_real32 getOldPolygonTransparency()const;

					void setLookAt(EarthView::World::Spatial::CGeoObject::CLookAt LookAtAttr);
					EarthView::World::Spatial::CGeoObject::CLookAt getLookAt();
					EarthView::World::Spatial::CGeoObject::CLookAt getOldLookAt();
					//fresnelesurface
					void setFresnelsurface(ev_bool underWaterEnable,ev_bool reflectionEnable,ev_bool reflectSky,ev_bool refractionEnable);
					void getFresnelsurface(ev_bool &underWaterEnable,ev_bool &reflectionEnable,ev_bool &reflectSky,ev_bool &refractionEnable)const;
					void getOldFresnelsurface(ev_bool &underWaterEnable,ev_bool &reflectionEnable,ev_bool &reflectSky,ev_bool &refractionEnable)const;

					void setFresnelsurfaceColor(ev_real32 waveDensity,ev_real32 flowSpeed,ev_real32 waterDeep,ev_real32 wavePower,ev_real32 lightPower,ev_real32 waveDir,EarthView::World::Spatial::Math::CVector4 waterColor);
					void getFresnelsurfaceColor(ev_real32 &waveDensity,ev_real32 &flowSpeed,ev_real32 &waterDeep,ev_real32 &wavePower,ev_real32 &lightPower,ev_real32 &waveDir,EarthView::World::Spatial::Math::CVector4 &waterColor)const;
					void getOldFresnelsurfaceColor(ev_real32 &waveDensity,ev_real32 &flowSpeed,ev_real32 &waterDeep,ev_real32 &wavePower,ev_real32 &lightPower,ev_real32 &waveDir,EarthView::World::Spatial::Math::CVector4 &waterColor)const;
					//model
					// 					void setModelID( const EVString& modelID );
					// 					EVString getModelID()const;

					void setModelHref( const EVString& modelHref );
					EVString getModelHref() const;
					EVString getOldModelHref() const;

					void setRotation(ev_real64 x, ev_real64 y, ev_real64 z);
					EarthView::World::Spatial::Math::CVector3 getRotation() const;
					EarthView::World::Spatial::Math::CVector3 getOldRotation() const;

					void setScale(ev_real64 x, ev_real64 y, ev_real64 z);
					EarthView::World::Spatial::Math::CVector3 getScale() const;
					EarthView::World::Spatial::Math::CVector3 getOldScale() const;





					//overlay
					// 					void setOriginTextureID(const EVString& originTextID);
					// 					EVString getOriginTextureID() const;

					void setRemovePictureCache(ev_bool val);
					ev_bool getRemovePictureCache() const;

					void setOverLayerLatLonBox(ev_real64 west,ev_real64 east,ev_real64 north,ev_real64 south);
					void getOverLayerLatLonBox(ev_real64 &west,ev_real64 &east,ev_real64 &north,ev_real64 &south)const;
					void getOldOverLayerLatLonBox(ev_real64 &west,ev_real64 &east,ev_real64 &north,ev_real64 &south)const;

					void setOverLayerRotateAngle(ev_real32 rotate);
					ev_real32 getOverLayerRotateAngle()const;
					ev_real32 getOldOverLayerRotateAngle()const;

					void setOverLayerSmooth(ev_bool enableSmooth);
					ev_bool getOverLayerSmooth()const;
					ev_bool getOldOverLayerSmooth()const;


					//region
					void setIsRegion(ev_bool flag);
					ev_bool getIsRegion()const;
					ev_bool getOldIsRegion()const;

					void setRegionLatLonAltBox(ev_real64 regionWest,ev_real64 regionEast,ev_real64 regionNorth,ev_real64 regionSouth,ev_real64 minAltitude,ev_real64 maxAltitude);
					void getRegionLatLonAltBox(ev_real64 &regionWest,ev_real64 &regionEast,ev_real64 &regionNorth,ev_real64 &regionSouth,ev_real64 &minAltitude,ev_real64 &maxAltitude);
					void getOldRegionLatLonAltBox(ev_real64 &regionWest,ev_real64 &regionEast,ev_real64 &regionNorth,ev_real64 &regionSouth,ev_real64 &minAltitude,ev_real64 &maxAltitude);

					void setIsLod(ev_bool IsLod);
					ev_bool getIsLod() const;
					ev_bool getOldIsLod() const;

					void setLodPixels(ev_real64 minLodPixels,ev_real64 maxLodPixels);
					void getLodPixels(ev_real64 &minLodPixels,ev_real64 &maxLodPixels);
					void getOldLodPixels(ev_real64 &minLodPixels,ev_real64 &maxLodPixels);

					void setRegionAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode altitudemode);
					EarthView::World::Spatial::Utility::EVAltitudeMode getRegionAltitudeMode() const;
					EarthView::World::Spatial::Utility::EVAltitudeMode getOldRegionAltitudeMode() const;

					void setOriginRegion(ev_bool originRegion);
					ev_bool getOriginRegion() const;
					ev_bool getOldOriginRegion() const;

					// biaohui 
					void setArrowType(ArrowType type);
					ArrowType getArrowType()const;
					ArrowType getOldArrowType()const;
					ev_void setArrowStartAltitude(ev_real32 startAtitude);
					ev_real32 getArrowStartAltitude();
					ev_real32 getOldArrowStartAltitude();

					ev_void setArrowEndAltitude(ev_real32 endAtitude);
					ev_real32 getArrowEndAltitude();
					ev_real32 getOldArrowEndAltitude();

					void setArrowKeyPoints(EVString arrowKeyPoints);
					EVString getArrowKeyPoints();
					EVString getOldArrowKeyPoints();
					// cube
					ev_real64 getLength()const;
					ev_real64 getOldLength()const;
					ev_real64 getWidth()const;
					ev_real64 getOldWidth()const;
					ev_real64 getHeight()const;
					ev_real64 getOldHeight()const;
					ev_void setLength(ev_real64 length);
					ev_void setWidth(ev_real64 width);
					ev_void setHeigth(ev_real64 height);

					// cone
					ev_void setIsUseTexture(ev_bool useTexture);
					ev_bool getIsUseTexture()const;
					ev_bool getOldIsUseTexture()const;
					ev_void setIsTextureFlow(ev_bool isTextureFlow);
					ev_bool getIsTextureFlow()const;
					ev_bool getOldIsTextureFlow()const;
					ev_void setIsTexturePositiveFlow(ev_bool isTexturePositiveFlow);
					ev_bool getIsTexturePositiveFlow()const;
					ev_bool getOldIsTexturePositiveFlow()const;

					ev_void setTextureFlowSpeed(ev_real64 flowSpeed);

					ev_real64 getTextureFlowSpeed()const;
					ev_real64 getOldTextureFlowSpeed()const;
					ev_void setBottomRadius(ev_real64 bottomRadius);
					ev_real64 getBottomRadius()const;
					ev_real64 getOldBottomRadius()const;

					ev_void setTopRadius(ev_real64 topRadius);
					ev_real64 getTopRadius()const;
					ev_real64 getOldTopRadius()const;
					ev_void setGranularity(ev_uint32 granularity);
					ev_uint32 getGranularity()const;
					ev_uint32 getOldGranularity()const;

					// 半球
					ev_void setHalfsPhereRenderMode(HalfsPhereRenderMode mode);
					HalfsPhereRenderMode getHalfsPhereRenderMode()const;
					HalfsPhereRenderMode getOldHalfsPhereRenderMode()const;

					CSceneOverlayData getScreenX();
					CSceneOverlayData getScreenY();
					void setScreenXY(CSceneOverlayData screenX,CSceneOverlayData screenY);

					CSceneOverlayData getOverlayX();
					CSceneOverlayData getOverlayY();
					void setOverlayXY(CSceneOverlayData overlayX,CSceneOverlayData overlayY);

					CSceneOverlayData getSizeX();
					CSceneOverlayData getSizeY();
					void setSizeXY(CSceneOverlayData sizeX,CSceneOverlayData sizeY);

					CSceneOverlayData getRotateX();
					CSceneOverlayData getRotateY();
					void setRotateXY(CSceneOverlayData rotateX,CSceneOverlayData rotateY);

					ev_void setMultiPoint(EarthView::World::Spatial::Geometry::CMultiPoint* ref_MultiPoint);
					EarthView::World::Spatial::Geometry::CMultiPoint* getMultiPoint();
					EarthView::World::Spatial::Geometry::CMultiPoint* getOldMultiPoint();

					ev_void setPolyLine(EarthView::World::Spatial::Geometry::CPolyline* ref_polyline);
					EarthView::World::Spatial::Geometry::CPolyline* getPolyLine();
					EarthView::World::Spatial::Geometry::CPolyline* getOldPolyLine();

					ev_void setPolygon(EarthView::World::Spatial::Geometry::CPolygon* ref_polygon);
					EarthView::World::Spatial::Geometry::CPolygon* getPolygon();
					EarthView::World::Spatial::Geometry::CPolygon* getOldPolygon();


					//------------线、面纹理设置				

					ev_void setTopSurfaceTextureEnable(ev_bool enable);
					ev_bool getTopSurfaceTextureEnable();
					ev_bool getOldTopSurfaceTextureEnable();

					ev_void setWallSurfaceTextureEnable(ev_bool enable);
					ev_bool getWallSurfaceTextureEnable();
					ev_bool getOldWallSurfaceTextureEnable();

					ev_void setTopSurfaceTextureScale(ev_real32 scale);
					ev_real32 getTopSurfaceTextureScale();
					ev_real32 getOldTopSurfaceTextureScale();

					ev_void setWallSurfaceTextureScale(ev_real32 scale);
					ev_real32 getWallSurfaceTextureScale();
					ev_real32 getOldWallSurfaceTextureScale();

					ev_void setTopSurfaceTextureTransparency(ev_real32 val);
					ev_real32 getTopSurfaceTextureTransparency();
					ev_real32 getOldTopSurfaceTextureTransparency();

					ev_void setWallSurfaceTextureTransparency(ev_real32 val);
					ev_real32 getWallSurfaceTextureTransparency();
					ev_real32 getOldWallSurfaceTextureTransparency();

					ev_void setTopSurfaceTexturePath(const EVString& path);
					EVString getTopSurfaceTexturePath();
					EVString getOldTopSurfaceTexturePath();

					ev_void setWallSurfaceTexturePath(const EVString& path);
					EVString getWallSurfaceTexturePath();
					EVString getOldWallSurfaceTexturePath();

					ev_void setTopSurfaceTextureUnitSizeX(ev_real32 unitSizeX);
					ev_real32 getTopSurfaceTextureUnitSizeX();
					ev_real32 getOldTopSurfaceTextureUnitSizeX();

					ev_void setTopSurfaceTextureUnitSizeY(ev_real32 unitSizeY);
					ev_real32 getTopSurfaceTextureUnitSizeY();
					ev_real32 getOldTopSurfaceTextureUnitSizeY();

					ev_void setWallSurfaceTextureUnitSizeX(ev_real32 unitSizeX);
					ev_real32 getWallSurfaceTextureUnitSizeX();
					ev_real32 getOldWallSurfaceTextureUnitSizeX();

					ev_void setWallSurfaceTextureUnitSizeY(ev_real32 unitSizeY);
					ev_real32 getWallSurfaceTextureUnitSizeY();
					ev_real32 getOldWallSurfaceTextureUnitSizeY();
					//------------

					//------------设置线宽是否为宽线
					ev_bool isPixelWidth();
					ev_bool isOldPixelWidth();
					ev_void setPixelWidth(ev_bool isPixelWidth);
					//------------
					ev_real32 getSymbolTextOffsetX();
					ev_real32 getOldSymbolTextOffsetX();
					void setSymbolTextOffsetX(ev_real32 x);
					ev_real32 getSymbolTextOffsetY();
					ev_real32 getOldSymbolTextOffsetY();
					void setSymbolTextOffsetY(ev_real32 y);
				private:
					ev_real32 mTextOffsetX;
					ev_real32 mTextOffsetY;

				private:
					ev_void updateLod();  //修改点的经纬度时自动更新lod

				private:
					CSceneOverlayData m_screenX;
					CSceneOverlayData m_screenY;
					CSceneOverlayData m_overlayX;
					CSceneOverlayData m_overlayY;
					CSceneOverlayData m_sizeX;
					CSceneOverlayData m_sizeY;
					CSceneOverlayData m_rotateX;
					CSceneOverlayData m_rotateY;
					//MultiGeometry
					EarthView::World::Spatial::Geometry::CMultiPoint* mpMultiPoint;
					EarthView::World::Spatial::Geometry::CPolyline* mpPolyLine;
					EarthView::World::Spatial::Geometry::CPolygon* mpPolygon;
					//point
					EVString m_name;
					EVString m_description;
					EVString m_id;
					EVString m_styleUrlName;
					EVString m_pictureUrl;
					EVString m_originpictureUrl;
					EVPicLayout m_picLayout;

					EVString m_pictureId;	
					ev_bool m_isVisible;
					ev_bool m_isExtrude;
					EarthView::World::Spatial::Kml::EVGEXTYPE m_gxType;

					ev_real64 m_Latitude;
					ev_real64 m_Longitude;
					ev_real64 m_Altitude;
					EarthView::World::Spatial::Utility::EVAltitudeMode m_AltitudeMode;
					ev_bool m_NeedInterpolation;

					EVString m_FontName;
					ev_bool m_IsTextShadowEnabled;
					ev_real32 m_FontScale;
					ev_real32 m_FontTransparency;
					EarthView::World::Spatial::Math::CVector3 m_FontColor;

					ev_real32 m_IconScale;
					ev_real32 m_PictureTransparency;

					EarthView::World::Spatial::CGeoObject::CLookAt m_LookAtAttr;
					//line and polygon
					EarthView::World::Spatial::Math::VertexList m_Points;
					ev_real32 m_LineTransparency;
					EarthView::World::Spatial::Math::CVector3 m_LineColor;
					ev_real32 m_PolyTransparency;
					EarthView::World::Spatial::Math::CVector3 m_PolyColor;
					ev_real32 m_LineWidth;
					FillOutLineMode m_FillOutLineMode;
					//fresnelsurface
					ev_bool m_UnderWaterEnable;
					ev_bool m_ReflectionEnable;
					ev_bool m_ReflectSky;
					ev_bool m_RefractionEnable;

					ev_real32 m_WaveDensity;
					ev_real32 m_FlowSpeed;
					ev_real32 m_WaterDeep;
					ev_real32 m_WavePower;
					ev_real32 m_LightPower;
					ev_real32 m_WaveDir;
					EarthView::World::Spatial::Math::CVector4 m_WaterColor;
					//model
					EVString m_modelhref;
					EarthView::World::Spatial::Math::CVector3 m_Roration;
					EarthView::World::Spatial::Math::CVector3 m_Scale;

					vector<EVString> m_sourceHref;
					vector<EVString> m_targetHref;
					vector<EVString> m_resourceHref;

					ev_bool mIsCreateModelObj;
					EarthView::World::Spatial::Math::CVector3 mModelMaxnum;
					EarthView::World::Spatial::Math::CVector3 mModelMinnum;
					//overlay
					EVString m_originTextureID;
					ev_bool m_isRemovePictureCache;
					ev_real64 m_rotateAngle;
					ev_real64 m_west;
					ev_real64 m_east;
					ev_real64 m_north;
					ev_real64 m_south;
					//region
					ev_bool m_isRegion;
					ev_real64 m_Regionwest;
					ev_real64 m_Regionnorth;
					ev_real64 m_Regioneast;
					ev_real64 m_Regionsouth;
					EarthView::World::Spatial::Utility::EVAltitudeMode m_RegionAltitudemode;
					ev_real64 m_minAltitude;
					ev_real64 m_maxAltitude;
					ev_bool m_isLod;
					ev_real64 m_minLodPixels;
					ev_real64 m_maxLodPixels;
					ev_real64 m_minFadeExtent;
					ev_real64 m_maxFadeExtent; 
					ev_bool m_originRegion;

					// biao hui
					ArrowType m_arrowType;
					// 颜色和透明度从多边形获取 m_PolyColor、m_PolyTransparency
					ev_real32 m_ArrowStartAltitude;
					ev_real32 m_ArrowEndAltitude;
					EVString m_ArrowKeyPoints;
					// 坐标从m_Points获取

					// cube 类型可以从m_gxType获取
					//颜色和透明度从多边形获取 m_PolyColor、m_PolyTransparency
					ev_real64 m_Length;
					ev_real64 m_Width;
					ev_real64 m_height;

					// cone 纹理应该可以从m_pictureUrl获取
					ev_bool m_IsUseTexture;
					ev_bool m_IsTextureFlow;
					ev_bool m_IsTexturePositiveFlow;
					ev_real64 m_TextureFlowSpeed;
					ev_real64 m_BottomRadius;
					ev_real64 m_TopRadius;
					ev_uint32 m_Granularity;

					ev_bool m_Smooth;
					//半球 取m_BottomRadius
					HalfsPhereRenderMode m_HalfsPhereRenderMode;

					//------------线、面纹理设置
					ev_bool m_TopSurfaceTextureEnable;
					ev_bool m_WallSurfaceTextureEnable;
					ev_real32 m_TopSurfaceTextureScale;
					ev_real32 m_WallSurfaceTextureScale;
					ev_real32 m_TopSurfaceTextureTransparency;
					ev_real32 m_WallSurfaceTextureTransparency;
					EVString m_TopSurfaceTexturePath;
					EVString m_WallSurfaceTexturePath;
					ev_real32 m_TopSurfaceTextureUnitSizeX;
					ev_real32 m_TopSurfaceTextureUnitSizeY;
					ev_real32 m_WallSurfaceTextureUnitSizeX;
					ev_real32 m_WallSurfaceTextureUnitSizeY;
					//------------
					ev_bool m_IsPixelWidth;


					EarthView::World::Spatial::Kml::CKmlDocument* mpParentDoc;

				};
				class EV_KMLSERIALIZER_DLL CGeoObjectExtension:public EarthView::World::Spatial::CGeoObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CGeoObjectExtension(_in EarthView::World::Core::CNameValuePairList * pList);
				private:
					static EarthView::World::Spatial::Utility::CSpatialReference* m_SpatialReference;
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGeoObjectExtension();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pGeometry">几何体对象</param>
					/// <param name="pSymbol">风格符号</param>
					/// <returns></returns>
					CGeoObjectExtension(EarthView::World::Spatial::Geometry::IGeometry* ref_pGeometry,EarthView::World::Spatial::Display::ISymbol* ref_pSymbol);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pGeometry">几何体对象</param>
					/// <param name="pSymbol">风格符号</param>
					/// <param name="bCloneGeometry">是否克隆几何体</param>
					/// <param name="bCloneSymbol">是否克隆风格符号</param>
					/// <returns></returns>
					CGeoObjectExtension(EarthView::World::Spatial::Geometry::IGeometry* ref_pGeometry,EarthView::World::Spatial::Display::ISymbol* ref_pSymbol,bool bCloneGeometry , bool bCloneSymbol);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CGeoObjectExtension();
					/// <summary>
					/// 枚举定义 扩展的类型
					/// </summary>

					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute GeoObjectExtAttr;
				public:
					CKmlWorkQueueState* WorkState;
					/// <summary>
					/// 获取WGS84空间参考
					/// </summary>
					/// <returns></returns>
					static EarthView::World::Spatial::Utility::CSpatialReference* getWGS84SpatialReference();
					//EVString m_name;
					//EVString m_description;
					//EVString m_id;
					//EVString m_styleUrlName;
					//EVString m_pictureUrl;
					////2013/11/13 add for imageoverlayer cache
					//EVString m_pictureId;
					//ev_bool m_isRemovePictureCache;
					////
					//ev_bool m_isVisible;
					//ev_bool m_isExtrude;
					//int m_referenceCount;
					/*EarthView::World::Spatial::Kml::EVGEXTYPE m_gxType;*/
					/// <summary>
					/// 克隆追加CGeoObjectExtension Property 到目标CGeoObjectExtension
					/// </summary>
					/// <param name="">目标CGeoObjectExtension</param>
					void cloneProperty(_out CGeoObjectExtension* ref_geoObject);
					CGeoObjectExtension* clone();
					
				};
			}
		}
	}
}

#endif
