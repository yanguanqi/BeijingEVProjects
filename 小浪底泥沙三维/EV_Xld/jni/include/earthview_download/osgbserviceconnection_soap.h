#ifndef OSGBSERVICECONNECTION_SOAP_H_
#define OSGBSERVICECONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/osgbserviceconnection.h"
#include "core/xml.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class COsgbServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL COSGBServiceConnectionImp_soap : public EarthView::World::Spatial::Download::COSGBServiceConnectionImp
				{
				public:
					COSGBServiceConnectionImp_soap();
					~COSGBServiceConnectionImp_soap();



					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);


					virtual ev_int32 getMetaData(const EVString& servicename,_out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata);


					virtual  ev_int32 getOSGBData(const EVString& servicename,const EVString& fileName,_out EarthView::World::Core::MemoryDataStreamPtr& osgbData);
					

				protected:
					COsgbServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif