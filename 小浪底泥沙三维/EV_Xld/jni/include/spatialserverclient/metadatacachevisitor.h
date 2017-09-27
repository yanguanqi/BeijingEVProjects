#ifndef EV_METADATA_CACHE_VISITOR_H
#define EV_METADATA_CACHE_VISITOR_H
#include "core/stringdefines.h"
//#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialinterface/idataset.h"
#include "spatialserverclient/evmetaobjectinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// 
			/// </summary>
			class CEVSpatialServerMetadataCacheVisitor
			{
			public:
				static CEVSpatialServerMetadataCacheVisitor getVisitor(const EVString& serverurl, const EVString& servername);
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CEVSpatialServerMetadataCacheVisitor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CEVSpatialServerMetadataCacheVisitor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void setCacheURL(const EVString& serverurl, const EVString& servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void readServiceFileSet(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type, _out EVString& fileSetStr);
				void readWMTSLayerInfo(CEVWMTSLayerInfo& layerinfo);
				void readWMSMapInfo();
				void readWMSChartObjectInfo();
				void readWMSImageInfo();
				void readWFSMapInfo();
				void readKMLObjectInfo();
				void readModelObjectInfo();
				void readModelTemplateObjectInfo();
				void readGeoCodeObjectInfo();
				void readDEMObjectInfo(CEVDEMLayerInfo& objectinfo);
				ev_bool readServiceVersion(EVString& version);
				bool readLayerInfo(EarthView::World::Spatial::CEVLayerInfo* pLayerInfo);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void writeServiceFileSet(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type, _in const EVString& fileSetStr);
				void writeWMTSLayerInfo(const CEVWMTSLayerInfo& layerinfo);
				void writeWMSMapInfo();
				void writeWMSChartObjectInfo();
				void writeWMSImageInfo();
				void writeWFSMapInfo();
				void writeKMLObjectInfo();
				void writeModelObjectInfo();
				void writeModelTemplateObjectInfo();
				void writeGeoCodeObjectInfo();
				void writeDEMObjectInfo(const CEVDEMLayerInfo& objectinfo);
				bool writeServiceVersion(const EVString& version);
				bool writeLayerInfo(const EarthView::World::Spatial::CEVLayerInfo* pLayerInfo);

			protected:
			private:
				EVString mURL;
				EVString mServerName;
			};
		}
	}
}

#endif