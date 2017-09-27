#ifndef mstiledownload_wmts_h_H
#define mstiledownload_wmts_h_H
#include "mstiledownload/mstiledll.h"
#include "download/wmtsconnection.h"
using namespace EarthView::World::Spatial::Download;

namespace MSTile{
	class EV_MSTILE_DOWNLOAD_DLL MSTileWMTS : public WMTSConnectionImp
	{
	public:
		MSTileWMTS();
		~MSTileWMTS();
		ev_int32 getCapabilities(WMTSCapabilities& capabilities);
		ev_int32 getTile(WMTSTile& tile);
		ev_int32 getFeatureInfo(WMTSFeatureInfo& featureInfo);
		ev_int32 getTileProperty(TileProperty& tileProperty);
		ev_bool openConnection();
		ev_bool closeConnection();
		ev_void setConnectTimeout(ev_int32 timeout);

	protected:

	private:
	};

}
#endif