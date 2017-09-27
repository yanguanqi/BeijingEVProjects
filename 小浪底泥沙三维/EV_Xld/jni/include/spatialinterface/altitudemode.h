#ifndef _ALTITUDE_MODE_H
#define _ALTITUDE_MODE_H

namespace EarthView
{
    namespace World
    {
        namespace Spatial
        {
            namespace Utility
            {
                /// <summary>
                /// 枚举:高度模式                
                /// </summary>
                enum EVAltitudeMode
                {
					/// <summary>
					/// 未知
					/// </summary>
					AM_UNKNOW = -1,
					/// <summary>
					/// 整体抬高模式
					/// </summary>
					AM_Absolute_WithSceneHeight = -1,
					/// <summary>
					/// 贴近地面模式
					/// </summary>
                    AM_ClampToGround        = 0,
					/// <summary>
					/// 相对地面模式
					/// </summary>
                    AM_RelativeToGround,
					/// <summary>
					/// 贴近海底模式
					/// </summary>
                    AM_ClampToSeaFloor,
					/// <summary>
					/// 相对海底模式
					/// </summary>
                    AM_RelativeToSeaFloor,
					/// <summary>
					/// 绝对模式
					/// </summary>
                    AM_Absolute,					
                };
            }
        }
    }
}
#endif
