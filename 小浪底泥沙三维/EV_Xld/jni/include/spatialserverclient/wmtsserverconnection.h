#ifndef	EARTHVIEW_WORLD_SPATIAL_COGCWMTSSERVERCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_COGCWMTSSERVERCONNECTION_H
#include "spatialserverclient/serverconnection.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMTS 服务连接类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMTSServerConnection
				:public EarthView::World::Spatial::CServerConnection
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMTSServerConnection();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~COGCWMTSServerConnection();
			ev_private:
				COGCWMTSServerConnection(_in EarthView::World::Core::CNameValuePairList* pList);
			};
		}
	}
}
#endif


