#ifndef GEOMETRYSERVICECONNECTION_SOAP_H_
#define GEOMETRYSERVICECONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/geometryserviceconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{
				class GeometryServiceServiceSoapBindingProxyPool;
				class EV_EARTHVIEW_DOWNLOAD_DLL GeometryServiceImp_soap : public EarthView::World::Spatial::Download::GeometryServiceImp
				{
				public:
					GeometryServiceImp_soap();
					~GeometryServiceImp_soap();
					ev_int32 isBuffer(EarthView::World::Spatial::Download::Buffer& buffer);
					ev_int32 isContains(EarthView::World::Spatial::Download::Contains& contains);
					ev_int32 isCrosses(EarthView::World::Spatial::Download::Crosses& crosses);
					ev_int32  isDisjoint(EarthView::World::Spatial::Download::Disjoint& disjoint);
					ev_int32 getDistance(EarthView::World::Spatial::Download::Distance& distance);
					ev_int32 isIntersects(EarthView::World::Spatial::Download::Intersects& intersects);
					ev_int32 isOverlaps(EarthView::World::Spatial::Download::Overlaps& overlaps);
					ev_int32 isTouches(EarthView::World::Spatial::Download::Touches& touches);
					ev_int32 isWithin(EarthView::World::Spatial::Download::Within& within);

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);
				protected:
					GeometryServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};

			}}}}

#endif