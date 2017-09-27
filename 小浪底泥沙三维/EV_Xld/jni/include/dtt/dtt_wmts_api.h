#ifndef DTT_WMTS_API_H
#define DTT_WMTS_API_H
#include "dtt/dtt_global.h"
#include "download/wmtsconnection.h"
// using namespace EarthView::World::Spatial::Download;

namespace DTT{
	class EV_DTT_DLL WMTSApi : public EarthView::World::Spatial::Download::WMTSConnectionImp
	{
	public:
		WMTSApi();
		~WMTSApi();
		ev_int32 getCapabilities(EarthView::World::Spatial::Download::WMTSCapabilities& capabilities);
		ev_int32 getTile(EarthView::World::Spatial::Download::WMTSTile& tile);
		ev_int32 getFeatureInfo(EarthView::World::Spatial::Download::WMTSFeatureInfo& featureInfo);
		ev_int32 getTileProperty(EarthView::World::Spatial::Download::TileProperty& tileProperty);
		ev_bool openConnection();
		ev_bool closeConnection();
		ev_void setConnectTimeout(ev_int32 timeout);

	protected:

	private:
	};

}

#endif