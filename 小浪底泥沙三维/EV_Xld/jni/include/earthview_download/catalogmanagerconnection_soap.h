#ifndef CatalogManagerConnection_SOAP_H_
#define CatalogManagerConnection_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/catalogmanagerconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class CatalogManagerSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL CatalogManagerConnectionImp_soap : public EarthView::World::Spatial::Download::CatalogManagerConnectionImp
				{
				public:
					CatalogManagerConnectionImp_soap();
					~CatalogManagerConnectionImp_soap();
					
				

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

					virtual ev_int32 queryRecordsByType(const EVString& type,_out EarthView::World::Core::CStringArray& names);



				protected:
					CatalogManagerSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif