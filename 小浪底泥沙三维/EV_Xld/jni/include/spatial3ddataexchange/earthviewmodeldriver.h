#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_EARTHVIEWMODELDRIVER_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_EARTHVIEWMODELDRIVER_H

#include "spatial3ddataexchange/modeldatadriver.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 平台的模型数据交换驱动类，入库和导出
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CEarthViewModelDriver:public EarthView::World::Spatial3D::DataExchange::CModelDataDriver
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEarthViewModelDriver();

ev_private:
					CEarthViewModelDriver(_in EarthView::World::Core::CNameValuePairList* pList );
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEarthViewModelDriver();
					friend class CModelDataDriverFactory;
				};
			}
		}
	}
}
#endif
