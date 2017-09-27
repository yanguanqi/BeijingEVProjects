#ifndef EARTHVIEW_WORLD_SPATIAL_WEB_DATA_DEFINE_H
#define EARTHVIEW_WORLD_SPATIAL_WEB_DATA_DEFINE_H
#include "core/datastream.h"
#include "download/downloadglobal.h"


#define __WebIn 
#define __WebOut 
#define __WebInOut
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

			class EV_DOWNLOAD_DLL CBinaryWebData : public EarthView::World::Core::CAllocatedObject
			{

			public:
				CBinaryWebData();
				virtual ~CBinaryWebData();
				virtual ev_bool saveToFile(EVString& filename);
				virtual  EarthView::World::Core::MemoryDataStreamPtr getData();
				virtual ev_void writeData(ev_char* buf, ev_int32 len);
			protected:
			private:
				C_DISABLE_COPY(CBinaryWebData);
				__WebOut EarthView::World:: Core::MemoryDataStreamPtr mData;
			};

			enum DBFieldType {fieldType__FT_USCOREUNKNOWN = 0, fieldType__FT_USCOREINTEGER = 1, fieldType__FT_USCOREREAL = 2, fieldType__FT_USCORESTRING = 3, fieldType__FT_USCOREBOOLEAN = 4, fieldType__FT_USCOREBINARY = 5, fieldType__FT_USCOREXML = 6, fieldType__FT_USCOREDATE = 7, fieldType__FT_USCOREEVID = 8, fieldType__FT_USCOREGEOMETRY = 9, fieldType__FT_USCORELENGTH = 10, fieldType__FT_USCOREAREA = 11, fieldType__FT_USCOREHEIGHT = 12};

			enum DataSetType {dataSetType__UnKnown = 0, dataSetType__Image = 1, dataSetType__Tile = 2, dataSetType__Vector = 3, dataSetType__DEM = 4, dataSetType__KML = 5, dataSetType__GeoCode = 6, dataSetType__File = 7, dataSetType__Model = 8, dataSetType__Network = 9, dataSetType__EVData = 10, dataSetType__EVProj = 11, dataSetType__DT_USCOREVECTOR_USCOREFEATURECLASS = 12, dataSetType__DT_USCOREVECTOR_USCOREDATASETS = 13, dataSetType__DT_USCOREVECTOR_USCORENETWORK = 14, dataSetType__DT_USCOREVECTOR_USCORECHART = 15, dataSetType__DT_USCORERASTER_USCOREDATASET = 16, dataSetType__DT_USCORERASTER_USCOREBAND = 17, dataSetType__DT_USCOREENTITY_USCORETEMPL_USCOREDATASET = 18, dataSetType__DT_USCOREENTITY_USCOREDATASET = 19, dataSetType__DT_USCOREMESHTEMPLATE_USCOREDATASET = 20, dataSetType__DT_USCOREEFFECT_USCOREDATASET = 21};


			//typedef ev_int32 CacheMode;
			//enum ev1__cacheMode {ev1__cacheMode__Centre = 0, ev1__cacheMode__LeftBottom = 1, ev1__cacheMode__LeftTop = 2, ev1__cacheMode__RightBottom = 3, ev1__cacheMode__RightTop = 4, ev1__cacheMode__Unknown = 5};
			enum CacheMode{cacheMode__Centre = 0, cacheMode__LeftBottom = 1, cacheMode__LeftTop = 2, cacheMode__RightBottom = 3, cacheMode__RightTop = 4, cacheMode__Unknown = 5};
			
			//typedef ev_int32 FileFormat;
			//enum ev1__fileFormat {ev1__fileFormat__BIL = 0, ev1__fileFormat__BIL_USCORECompress_USCORE7Z = 1, ev1__fileFormat__EVP = 2, ev1__fileFormat__EVP_USCORECompress_USCORE7Z = 3, ev1__fileFormat__EVV = 4, ev1__fileFormat__EVV_USCORECompress_USCORE7Z = 5, ev1__fileFormat__JPG = 6, ev1__fileFormat__JPG_USCORECompress_USCORE7Z = 7, ev1__fileFormat__BMP_USCORECompress_USCORE7Z = 8, ev1__fileFormat__PNG = 9, ev1__fileFormat__UnKnown = 10};
			enum FileFormat {fileFormat__BIL = 0, fileFormat__BIL_USCORECompress_USCORE7Z = 1, fileFormat__EVP = 2, fileFormat__EVP_USCORECompress_USCORE7Z = 3, fileFormat__EVV = 4, fileFormat__EVV_USCORECompress_USCORE7Z = 5, fileFormat__JPG = 6, fileFormat__JPG_USCORECompress_USCORE7Z = 7, fileFormat__BMP_USCORECompress_USCORE7Z = 8, fileFormat__PNG = 9, fileFormat__UnKnown = 10};

			//typedef ev_int32 CacheDataType;
			//enum ev1__cacheDataType {ev1__cacheDataType__Image = 0, ev1__cacheDataType__Dem = 1, ev1__cacheDataType__Vector = 2};
			enum CacheDataType {cacheDataType__Image = 0, cacheDataType__Dem = 1, cacheDataType__Vector = 2, cacheDataType__UnKnown = 3, cacheDataType__Chart = 4};

			//typedef ev_int32 GeometryType;
			//enum ev1__geometryType {ev1__geometryType__GeometryCollection = 0, ev1__geometryType__Line = 1, ev1__geometryType__MultiPoint = 2, ev1__geometryType__Point = 3, ev1__geometryType__Polygon = 4, ev1__geometryType__Polyline = 5, ev1__geometryType__Ring = 6, ev1__geometryType__Unknown = 7};
			enum GeometryType {geometryType__GeometryCollection = 0, geometryType__Line = 1, geometryType__MultiPoint = 2, geometryType__Point = 3, geometryType__Polygon = 4, geometryType__Polyline = 5, geometryType__Ring = 6, geometryType__Unknown = 7};

			//typedef ev_int32 LayerDataType;
			//enum ev1__layerDataType {ev1__layerDataType__DEM_USCOREInt = 0, ev1__layerDataType__DEM_USCOREFloat = 1, ev1__layerDataType__DEM_USCOREInt8 = 2, ev1__layerDataType__DEM_USCOREInt16 = 3, ev1__layerDataType__Image_USCORESingle = 4, ev1__layerDataType__Image_USCOREMulti = 5, ev1__layerDataType__Vector_USCOREPoint = 6, ev1__layerDataType__Vector_USCOREPolygon = 7, ev1__layerDataType__Vector_USCOREPolyline = 8, ev1__layerDataType__Unknown = 9};
			enum LayerDataType {layerDataType__DEM_USCOREInt = 0, layerDataType__DEM_USCOREFloat = 1, layerDataType__DEM_USCOREInt8 = 2, layerDataType__DEM_USCOREInt16 = 3, layerDataType__Image_USCORESingle = 4, layerDataType__Image_USCOREMulti = 5, layerDataType__Vector_USCOREPoint = 6, layerDataType__Vector_USCOREPolygon = 7, layerDataType__Vector_USCOREPolyline = 8, layerDataType__Chart = 9, layerDataType__Unknown = 10};
			//typedef ev_int32 SRS;
			//enum ev1__srs {ev1__srs__Beijing_USCORE1954 = 0, ev1__srs__China_USCORE2000 = 1, ev1__srs__Mercator = 2, ev1__srs__Mercator_USCOREWeb = 3, ev1__srs__Unknown = 4, ev1__srs__WGS_USCORE1984 = 5, ev1__srs__Xian_USCORE1980 = 6};
			enum SRS {Beijing_USCORE1954 = 0, China_USCORE2000 = 1, Mercator = 2, Mercator_USCOREWeb = 3, Unknown = 4, WGS_USCORE1984 = 5, Xian_USCORE1980 = 6};

			//typedef ev_int32 ThemeType;
			//enum ev1__themeType {ev1__themeType__Unique = 0, ev1__themeType__Range = 1};
			enum ThemeType {themeType__Unique = 0, themeType__Range = 1};

			//typedef ev_int32 GeometryFormat;
			//enum ev1__geometryFormat {ev1__geometryFormat__WKB = 0, ev1__geometryFormat__WKT = 1, ev1__geometryFormat__UnKnown = 2};
			enum GeometryFormat {geometryFormat__WKB = 0, geometryFormat__WKT = 1, geometryFormat__UnKnown = 2};


			class EV_DOWNLOAD_DLL Envelope: public EarthView::World::Core::CAllocatedObject
			{
			public:
				ev_real64 maxX;
				ev_real64 maxY;
				ev_real64 maxZ;
				ev_real64 minX;
				ev_real64 minY;
				ev_real64 minZ;
			public:
				Envelope();

			protected:
			private:
			};

			class EV_DOWNLOAD_DLL Point: public EarthView::World::Core::CAllocatedObject
			{
			public:
				ev_real64 x;
				ev_real64 y;
				ev_real64 z;
			public:
				Point();

			};

			class EV_DOWNLOAD_DLL SearchCondition: public EarthView::World::Core::CAllocatedObject
			{
			public:
				GeometryType geometryType;
				vector<Point> searchPoint;
				EVString sqlCondition;
				EVString serchFilds;
			public:
				SearchCondition();

			protected:
			private:
			};


			class EV_DOWNLOAD_DLL Symbol: public EarthView::World::Core::CAllocatedObject
			{
			public:
			protected:
			private:
			};

			class EV_DOWNLOAD_DLL Geometry : public EarthView::World::Core::CAllocatedObject
			{
			public:
				EarthView::World::Core::MemoryDataStreamPtr geometryData;
				GeometryFormat geometryFormat;
				EVString geometryString;
				EVString propertyName;
			public:
				Geometry();

			protected:
			private:
			};


			class EV_DOWNLOAD_DLL Record : public EarthView::World::Core::CAllocatedObject
			{
			public:
				Envelope bBox;	
				vector<EVString > fieldValues;	
				ev_int32 oID;	
			public:
				Record();

			protected:
			private:
			};

			class  EV_DOWNLOAD_DLL RecordSet: public EarthView::World::Core::CAllocatedObject
			{
			public:
				EVString fieldNames;
				ev_int32 layerID;
				EVString layerName;
				EVString mapName;
				vector<Record*>records;	
				ev_int32 totalRecords;	
			public:
				RecordSet();

			protected:
			private:
			}; 

			class EV_DOWNLOAD_DLL Feature: public EarthView::World::Core::CAllocatedObject
			{
			public:
				ev_int32 featureID;	
				vector<EVString >fieldList;
				Geometry geometry;	
			public:
				Feature();

			};

			class  EV_DOWNLOAD_DLL Font : public EarthView::World::Core::CAllocatedObject
			{
			public:
				EVString fontFamily;	
				ev_int32 fontSize;	
				EVString fontColor;	
				EVString backColor;	
				ev_bool isFontBold;
				ev_bool isFontItalic;
				ev_bool isFontUnderlined;
			public:
				Font();

			};

			class  EV_DOWNLOAD_DLL Icon : public EarthView::World::Core::CAllocatedObject
			{
			public:
				EVString iconData;	
				ev_int32 iconHeight;
				ev_int32 iconWidth;
				ev_bool isIconVisible;
			public:
				Icon();

			};

			class EV_DOWNLOAD_DLL OctreeNode : public EarthView::World::Core::CAllocatedObject
			{
			public:
				EVString nodeCode;	
				double minX;	
				double minY;	
				double minZ;	
				double maxX;	
				double maxY;	
				double maxZ;	
				int version;
				EarthView::World::Core::MemoryDataStreamPtr objects;
			public:
				OctreeNode();

			protected:
			private:
			};

			class EV_DOWNLOAD_DLL DBField : public EarthView::World::Core::CAllocatedObject
			{
			public:
				EVString aliasName;
				EVString description;
				DBFieldType fieldtype;
				EVString name;
				ev_int32 precision;
				ev_int32 size;
			public:
				DBField();

			protected:
			private:
			};
			
#define  CONVERT_SEND_STR(inStr, outStr)  EVString outStr##_t = inStr;  std::string outStr(CWebServiceConnection::convertSendStringCode(outStr##_t).c_str()); 
#define  CONVERT_RECV_STR(inStrPtr, outStr) outStr = EVString(inStrPtr->c_str()); CWebServiceConnection::convertRecvStringCode(outStr);

			EVString strBBox(ev_int32 minx, ev_int32 miny, ev_int32 maxx, ev_int32 maxy);

		}}}}
#endif

