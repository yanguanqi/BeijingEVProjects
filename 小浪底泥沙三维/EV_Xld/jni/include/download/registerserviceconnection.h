#ifndef EARTHVIEW_WORLD_SPATIAL_REGISTERSERVERCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_REGISTERSERVERCONNECTION_H
#include "webserviceconnection.h"
#include "downloadglobal.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			class EV_DOWNLOAD_DLL RegisterServiceConnection : public CWebServiceConnection
			{
				friend class CWebManager;
ev_private:
				RegisterServiceConnection(CNameValuePairList* plist);
			public:
				RegisterServiceConnection(const CWebInitParameter& param);

				RegisterServiceConnection(String& name, String& url);

				~RegisterServiceConnection();
			protected:
				RegisterServiceConnection();

			private:
				C_DISABLE_COPY(RegisterServiceConnection);

			};
		}}}
#endif