#ifndef tdtdownload_tdtwmts_h_H
#define tdtdownload_tdtwmts_h_H
#include "tdtdownload/tdtdll.h"
#include "download/wmtsconnection.h"
using namespace EarthView::World::Spatial::Download;

namespace TDT{
	class EV_TDT_DOWNLOAD_DLL TDTWMTS : public WMTSConnectionImp
	{
	public:
		TDTWMTS();
		~TDTWMTS();
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