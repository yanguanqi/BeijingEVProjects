#ifndef EV_METAOBJECTINFO_SERIALIZE_H
#define EV_METAOBJECTINFO_SERIALIZE_H
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
			class MetaObjectInfoSerialize
			{
			public:
				static void serLayerInfo(EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* reserLayerInfo(EarthView::World::Core::CXmlElement& xmlElement);
			private:
				static void serEVLayerInfo(CEVLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserEVLayerInfo(CEVLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);

				static void serEVWMTSLayerInfo(CEVWMTSLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVWMTSLayerInfo* reserEVWMTSLayerInfo(EarthView::World::Core::CXmlElement& xmlElement);

				static void serDEMLayerInfo(CEVDEMLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVDEMLayerInfo* reserDEMLayerInfo(EarthView::World::Core::CXmlElement& xmlElement);

				static void serCServerFont(EarthView::World::Spatial::CServerFont* pFont, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserCServerFont(EarthView::World::Spatial::CServerFont* pFont, EarthView::World::Core::CXmlElement& xmlElement);

				static void serCServerAnnotation(EarthView::World::Spatial::CServerAnnotation* pAn, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserCServerAnnotation(EarthView::World::Spatial::CServerAnnotation* pAn, EarthView::World::Core::CXmlElement& xmlElement);

				static ev_void serCServerStyle(EarthView::World::Spatial::CServerStyle* pStyle, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserCServerStyle(EarthView::World::Spatial::CServerStyle* pStyle, EarthView::World::Core::CXmlElement& xmlElement);

				static ev_void serCServerTheme(EarthView::World::Spatial::CServerTheme* pTheme, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserCServerTheme(EarthView::World::Spatial::CServerTheme* pTheme, EarthView::World::Core::CXmlElement& xmlElement);

				static ev_void serCServerCacheLayerInfo(EarthView::World::Spatial::CServerCacheLayerInfo* pCacheLayerInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserCServerCacheLayerInfo(EarthView::World::Spatial::CServerCacheLayerInfo* pCacheLayerInfo, EarthView::World::Core::CXmlElement& xmlElement);

				static void serMapLayerInfo(CEVMapLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static ev_bool reserMapLayerInfo(CEVMapLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				
				static void serWMSMapInfo(CEVWMSMapInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVWMSMapInfo* reserWMSMapInfo(EarthView::World::Core::CXmlElement& xmlElement);

				static void serWMSChartObjectInfo(CEVWMSChartObjectInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVWMSChartObjectInfo* reserWMSChartObjectInfo(EarthView::World::Core::CXmlElement& xmlElement);

				static void serKMLLayerInfo(CEVKMLLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVKMLLayerInfo* reserKMLLayerInfo(EarthView::World::Core::CXmlElement& xmlElement);

				static void serModelLayerInfo(CEVModelLayerInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVModelLayerInfo* reserModelLayerInfo(EarthView::World::Core::CXmlElement& xmlElement);

				static void serServerOctreeNode(CServerOctreeNode* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CServerOctreeNode* reserServerOctreeNode(EarthView::World::Core::CXmlElement& xmlElement);

				static void serServerDBField(CServerDBField* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CServerDBField* reserServerDBField(EarthView::World::Core::CXmlElement& xmlElement);

				static void serWMSImageInfo(CEVWMSImageInfo* pInfo, EarthView::World::Core::CXmlElement& xmlElement);
				static _extfree CEVWMSImageInfo* reserWMSImageInfo(EarthView::World::Core::CXmlElement& xmlElement);


			protected:
			private:
			};
		}
	}
}
#endif
