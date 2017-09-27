#ifndef EARTHVIEW_WORLD_SPATIAL_INNERCLASS_H
#define EARTHVIEW_WORLD_SPATIAL_INNERCLASS_H
#include "core/core_api.h"
#include "spatialserverclient/evmetaobjectinfo.h"
#include "spatialobject/coordinatesystem/spatialreference.h"
// using namespace EarthView::World::Spatial::Utility;
// using namespace EarthView::World::Core;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			EarthView::World::Spatial::Utility::CSpatialReference* stringSRSToSpatialReference(const EVString& srs);
			const EVString spatialReferenceToStringSRS(const EarthView::World::Spatial::Utility::CSpatialReference* srs);
			//////////////////////////////////////////////////////
			/*			CWMSServerRequest:格式化WMS命令			*/
			//////////////////////////////////////////////////////
			class CWMSServerRequest
			{
			public:
				static EVString getCapabilities(_in const ev_char* version,_in const ev_char* updatesequence);
			
				static EVString getMap(_in const EVString& version,_in const EVString& layers,_in const EVString& styles,_in const EVString& srs,
					_in	const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in ev_uint32 width,_in ev_uint32 height,_in const EVString& format,
					_in ev_bool transparent,_in ev_int32 bgcolor_red,_in ev_int32 bgcolor_green,_in ev_int32 bgcolor_blue,
					_in const ev_char* exception_format,_in const ev_char* time,_in const ev_char* elevation,
					_in const ev_char* styled_layer_descriptor_url,_in const ev_char* web_feature_service_URL);

				static EVString getFeatureInfo(_in const EVString& version,_in const EVString& layers,_in const EVString& srs,
					_in	const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in ev_uint32 width,_in ev_uint32 height,_in const EVString& querylayers,_in ev_uint32 x,_in ev_uint32 y,
					_in const ev_char* info_format,_in const ev_uint32* featurecount,_in const ev_char* exception_format);

				////未实现
				//static EVString& DescribeLayer();
				//static EVString& GetLegendGraphic();
				//static EVString& GetStyles();
				//static EVString& PutStyles();
			};
			//////////////////////////////////////////////////////
			/*			CWFSServerRequest:格式化WMS命令			*/
			//////////////////////////////////////////////////////
			class CWFSServerRequest
			{
			public:
				static EVString getCapabilities(_in const ev_char* version);
			
				static EVString getFeature(_in const ev_char* version,_in const EVString& layers,_in const EVString& srs,
					_in	const EarthView::World::Spatial::Geometry::IEnvelope* maprect,_in const EVString& filter);

				static EVString describeFeatureType(_in const ev_char* version,_in const EVString& layers);

			};
			//////////////////////////////////////////////////////
			/*			CWMTSServerRequest:格式化WMTS命令			*/
			//////////////////////////////////////////////////////
			class CWMTSServerRequest
			{
			public:
				static EVString getCapabilities(_in const ev_char* version,_in const ev_char* sections,_in const ev_char* updatesequence,_in const ev_char* acceptformats);
				static EVString getTile(_in const EVString& version,_in const EVString& layer,_in const EVString& style,_in const EVString& format,
					_in const EVString& tilematrixset,_in const EVString& tilematrix,_in ev_uint32 row,_in ev_uint32 col,_in ev_int32 dFalg); //dFalg : 0 other, 1 kvp, 2 restful
				static EVString getFeatureInfo(_in const EVString& version,_in const EVString& layer,_in const EVString& style,_in const EVString& srs,
					_in const EVString& tilematrixset,_in const EVString& tilematrix,_in ev_uint32 row,_in ev_uint32 col,
					_in ev_uint32 x,_in ev_uint32 y,_in const EVString& info_format/*,_in const ev_char* sampledimensions*/);
			};

						//////////////////////////////////////////////////////
			/*	CClientBaseFunction:公用函数，格式化字符串		*/
			//////////////////////////////////////////////////////
			class CClientBaseFunction
			{
			public:
				static ev_void parsePointFromString(_in EVString& value,_in ev_bool is3D,_out CServerPointList& pointlist);
				static ev_void formatPointsToString(_in CServerPointList& pointlist,_in ev_bool is3D,_out EVString& outpointlist);
				static ev_void formatBoxToString(_in const EarthView::World::Spatial::Geometry::IEnvelope* envelope,_out EVString& format);
				static ev_void formatInt32ToString(_in ev_int32 value,_out EVString& format);
				static ev_void formatColorToHexString(_in ev_uint32 red,_in ev_uint32 green,_in ev_uint32 blue,_out EVString& format);
				static ev_void formatColorToDecimalString(_in ev_uint32 red,_in ev_uint32 green,_in ev_uint32 blue,_out EVString& format);
				static ev_void formatSearchConditionToString(_in const CServerSearchCondition* condition,_out EVString& strcondition);
				static ev_void formatGeometryToString(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_out EVString& strgeom);
				static ev_void formatGeometryListToString(_in vector<EarthView::World::Spatial::Geometry::IGeometry*>& geometrylist,_out EVString& strgeometrys);
			};
			////unknown
			////utf-8 1
			////multibyte 2
			////unicode 3
			class CStringFormatConvertor
			{
			private:
				ev_int32 nSrcFormat;
				ev_int32 nDestFormat;

				ev_int32 getFormatEnum(const EVString& format);
			public:
				void setSrcFormat(ev_int32 format);
				void setDestFormat(ev_int32 format);

				ev_bool needConvert()const;
				ev_bool isValid()const;
				void convert(const ev_char* value,EVString& dest);
				CStringFormatConvertor();
				CStringFormatConvertor(const EVString& srcFormat,const EVString& destFormat);
				CStringFormatConvertor(ev_int32 srcFormat,ev_int32 destFormat);
				~CStringFormatConvertor();
			};
			/*class CPixelSizeTansformer
			{
			private:
				ev_map<EVString,ev_map<ev_real64,ev_real64>*> mmapWellknownScaleSetInfo;
			public:
				CPixelSizeTansformer();
				~CPixelSizeTansformer();
				bool scaleDenominatorToScaleSet(const EVString& wellknownScaleSet,ev_real64 scaleDenominator,_ev_real64& pixelSize);
			};*/
			class CEVWMTSLevelOperator
			{
			public:
				///datatype 0:image 1:vector  cachemode 0 wgs84 1 mercator
				static ev_bool getLevel(ev_real64 scale,ev_int32 beginlevel,ev_int32 endlevel,ev_int32 datatype,ev_int32 cachemode,ev_int32& level);
			};
		}
	}
}
#endif


