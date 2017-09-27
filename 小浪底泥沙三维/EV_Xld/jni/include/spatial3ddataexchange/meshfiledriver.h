#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHDATADRIVER_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHDATADRIVER_H


#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"

#include "spatial3ddataexchange/modeldatadriver.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				class EV_Spatial3DDataExchange_DLL CMeshFileDriver: public CModelDataDriver
				{
ev_private:
					CMeshFileDriver(_in EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CMeshFileDriver();
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CMeshFileDriver();

				private:
					friend class CModelDataDriverFactory;
				};
			}
		}
	}
}
#endif


