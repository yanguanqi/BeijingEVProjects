#ifndef	EARTHVIEW_WORLD_SPATIAL_COGCWMSSERVERCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_COGCWMSSERVERCONNECTION_H
#include "spatialserverclient/serverconnection.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 服务连接类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCWMSServerConnection
				:public EarthView::World::Spatial::CServerConnection
			{
			public:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMSServerConnection();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~COGCWMSServerConnection();
			ev_private:
				COGCWMSServerConnection(_in EarthView::World::Core::CNameValuePairList* pList);
			};
		}
	}
}
#endif


