#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MODELDATADRIVER_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MODELDATADRIVER_H


#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换驱动类
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CModelDataDriver
					:public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CModelDataDriver(_in EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CModelDataDriver();
					/// <summary>
					/// 获取数据驱动类型
					/// </summary>
					/// <returns>数据驱动类型                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                </returns>
					EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType getType();

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CModelDataDriver();

				//private:
                protected:
					EarthView::World::Spatial3D::DataExchange::EVModelDataDriverType mnType;
				};
				
			}
		}
	}
}
#endif


