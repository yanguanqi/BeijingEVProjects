#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_COFING_H
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_COFING_H

#include "core/global.h"
#include "core/stringdefines.h"
#include "core/memoryallocatedobject.h"



#ifdef EV_BUILD_SPATIAL3DDATAEXCHANGE
#define EV_Spatial3DDataExchange_DLL EV_DLL_EXPORT
#else
#define EV_Spatial3DDataExchange_DLL EV_DLL_IMPORT
#endif

#ifndef USETRANSFORM
#define USETRANSFORM 1
#endif

#ifndef UNWARP_EXPORT
#define UNWARP_EXPORT EV_Spatial3DDataExchange_DLL
#endif

#include <core/platform.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{

				/// <summary>
				/// 数据交换驱动类型
				/// </summary>
				enum EVModelDataDriverType
				{
					/// <summary>
					/// 未知
					/// </summary>
					MDDT_Unknown = 0,
					/// <summary>
					/// 本地mesh格式驱动
					/// </summary>
					MDDT_MESHFILE = 1,
					/// <summary>
					/// EarthView数据驱动
					/// </summary>
					MDDT_EarthView = 2
				};
				/// <summary>
				/// 操作模式
				/// </summary>
				enum  EVModelDataExchangeOperateMode
				{
					/// <summary>
					/// 未知
					/// </summary>
					EV_MDEOM_UNKNOWN = 0,
					/// <summary>
					/// 写操作
					/// </summary>
					EV_MDEOM_WRITE = 1,
					/// <summary>
					/// 读操作
					/// </summary>
					EV_MDEOM_READ = 2
				};
				/// <summary>
				/// 操作结果的枚举
				/// </summary>
				enum EVModelDataExchangeError
				{
					/// <summary>
					/// 未知
					/// </summary>
					EV_MDEE_UNKNOWN = 0,
					/// <summary>
					/// 场景文件不存在或者错误
					/// </summary>
					EV_MDEE_PARSE_ERROR = 1,
					/// <summary>
					/// 场景文件成功
					/// </summary>
					EV_MDEE_PARSE_SUCCESS = 2,

					EV_MODE_IMPORT_ERROR = 3,
					EV_MODE_IMPORT_SUCCESS = 4,

					EV_MODE_OPEN_DREVER_ERROR = 7,
					EV_MODE_OPEN_DRIVER_SUCCESS = 8

				};
			}
		}
	}
}

#endif
