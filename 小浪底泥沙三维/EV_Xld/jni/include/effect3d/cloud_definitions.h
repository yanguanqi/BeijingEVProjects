#pragma once;
#include "effect3d_config.h"
#include <core/global.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 云的类型枚举
				/// </summary>
				enum EVCloudType
				{
					CT_UNKNOW,
					// 低云族（2000m以下）
					CT_ST, // 层云
					CT_SC, // 层积云
					CT_NS, // 雨层云
					// 中云族（2000m~6000m）
					CT_AC, // 高积云
					CT_AS, // 高层云
					// 高云族（6000m以上）
					CT_CI, // 卷云
					CT_CS, // 卷层云
					CT_CC, // 卷积云
					// 直展云族
					CT_CU, // 积云
					CT_CB, // 积雨云
					// 平面动态云
					CT_DF,
					//云图云
					CT_MC
				};
			}
		}
	}
}
