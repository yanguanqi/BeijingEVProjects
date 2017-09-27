#ifndef	EARTHVIEW_WORLD_SPATIAL_COGCWFSSERVERCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_COGCWFSSERVERCONNECTION_H
#include "spatialserverclient/serverconnection.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WFS 服务连接类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWFSServerConnection
				:public EarthView::World::Spatial::CServerConnection
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				COGCWFSServerConnection();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~COGCWFSServerConnection();
			ev_private:
				COGCWFSServerConnection(_in EarthView::World::Core::CNameValuePairList* pList);
			};
		}
	}
}
#endif


