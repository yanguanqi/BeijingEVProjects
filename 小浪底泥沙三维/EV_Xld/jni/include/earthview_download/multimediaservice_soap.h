#ifndef WMSCONNECTION_SOAP_H_
#define WMSCONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/multimediaservice.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{
				class MultimediaServiceServiceSoapBindingProxyPool;
				class EV_EARTHVIEW_DOWNLOAD_DLL MultiMedaServiceConnectionImp_soap : public EarthView::World::Spatial::Download::MultiMedaServiceConnectionImp
				{
				public:
					MultiMedaServiceConnectionImp_soap();
					~MultiMedaServiceConnectionImp_soap();

					ev_int32 getMediaFileLength(EarthView::World::Spatial::Download::MediaFileLength& mediaFileLength);
					ev_int32 getMediaFile(EarthView::World::Spatial::Download::MediaFileData& mediaFileData);
					ev_int32 getMediaFileByOffset(EarthView::World::Spatial::Download::MediaFileDataWithOffset& mediaFileDataWithOffset);

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);
				protected:
				private:
					MultimediaServiceServiceSoapBindingProxyPool* mpPool;
				};
			}}}}

#endif