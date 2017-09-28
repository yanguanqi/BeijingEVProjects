#ifndef STREETVIEWSERVICECONNECTION_SOAP_H_
#define STREETVIEWSERVICECONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/streetviewserviceconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class CStreetViewServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL CStreetViewServiceConnectionImp_soap : public EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp
				{
				public:
					CStreetViewServiceConnectionImp_soap();
					~CStreetViewServiceConnectionImp_soap();



					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

					virtual ev_int32 readintidata(const EVString& servicename, _out EarthView::World::Core::MemoryDataStreamPtr& stream);
					virtual ev_int32 getStreetPoints(const EVString& servicename,_in const EVString& mapCode,_out EarthView::World::Spatial::Download::CStreetPointList& streetPoints);
					virtual ev_int32 getPicture(const EVString& servicename,ev_int32 ID, ev_int32 level, ev_int32 row, ev_int32 col,_out EarthView::World::Core::MemoryDataStreamPtr& picMem);	


				protected:
					CStreetViewServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif