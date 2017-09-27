#ifndef EARTHVIEW_WORLD_SPATIAL_CEVSERVERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CEVSERVERINFO_H
#include "spatialserverclient/serverinfo.h"

// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class CEVServerInfo
				:public CServerInfo
			{
			public:
				CEVServerInfo(void);
				~CEVServerInfo(void);
			ev_private:
				CEVServerInfo(_in EarthView::World::Core::CNameValuePairList* pList);
				friend class CDataSourceServerFactory;
			};
		}
	}
}
#endif

