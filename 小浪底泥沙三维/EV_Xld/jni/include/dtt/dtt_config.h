#ifndef DTT_CONFIG_H
#define DTT_CONFIG_H
#include "core/stringdefines.h"
#include "download/webmetadataserviceconnection.h"
using namespace EarthView::World::Spatial::Download;
namespace DTT{


	class DttConfig
	{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		DttConfig();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		~DttConfig();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		static DttConfig& instance();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		EVString getLogType();		

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		EVString imageTileReqFormat(EVString layerName);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		EVString demTileReqFormat();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		EVString getServiceList(const EVString& serviceType);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		EVString getServiceType(const EVString& servicename);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ev_bool getServiceInfo(WMTSLayerInfo& info);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ev_bool getServiceInfo(DEMObjectInfo& info);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ev_int32 getWMTSTileType(const EVString& layerName);

	protected:
	private:
		map<EVString, ev_int32> mWMTSTileTypeMap;

	};
}
#endif