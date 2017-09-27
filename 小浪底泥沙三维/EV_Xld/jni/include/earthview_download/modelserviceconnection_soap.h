#ifndef ModelServiceConnection_SOAP_H_
#define ModelServiceConnection_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/modelserviceconnection.h"

using namespace EarthView::World::Spatial::Download;
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class ModelServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL ModelServiceConnectionImp_soap : public EarthView::World::Spatial::Download::ModelServiceConnectionImp
				{
				public:
					ModelServiceConnectionImp_soap();
					~ModelServiceConnectionImp_soap();
					
				

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

				/*	virtual ev_int32 getServiceData(_in EVString& servicename, _out EarthView::World::Spatial::Download::ModelServiceData& servicedata);

					virtual ev_int32 getServices(_out EarthView::World::Core::CStringArray& names);

					virtual ev_int32 getServiceCapabilities(_in const EVString& servicename, _out EarthView::World::Spatial::Download::ServiceCapabilitys& capabilitys);*/

					virtual ev_int32 getServiceData(_in const EVString& servicename, _out ModelServiceData& servicedata);

					virtual ev_int32 getServices(_out EarthView::World::Core::CStringArray& names);

					//virtual ev_int32 getMetaData(_in const EVString& servicename,_out )

					virtual ev_int32 getServiceCapabilities(_in const EVString& servicename, _out ServiceCapabilitys& capabilitys);


					


				protected:
					ModelServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif