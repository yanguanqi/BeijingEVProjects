#ifndef  EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_LISTENER_H
#define  EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_LISTENER_H

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "spatial3ddataexchange/modeldataexchange.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换进程监听类
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CModelDataExchangeListener
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					CModelDataExchangeListener(){}
ev_private:
					CModelDataExchangeListener(_in EarthView::World::Core::CNameValuePairList *pList){}

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CModelDataExchangeListener(){}

					/// <summary>
					/// 数据导入时日志信息（回调）
					/// <param name="info">信息</param>
					/// </summary>
					/// <returns></returns>
					virtual ev_void processLog(EVString info){}

					/// <summary>
					/// 数据导入时当前进度（回调）
					/// <param name="num">总个数</param>
					/// <param name="count">当前第几个</param>
					/// </summary>
					/// <returns></returns>
					virtual ev_void getCurrentCount(ev_int32 num, ev_int32 count){}

					/// <summary>
					/// 结束、暂停信息（回调）
					/// <param name="info">信息</param>
					/// </summary>
					/// <returns></returns>
					virtual ev_void pauseOrStop(EVString info){}
				};
			}
		}
	}
}
#endif


