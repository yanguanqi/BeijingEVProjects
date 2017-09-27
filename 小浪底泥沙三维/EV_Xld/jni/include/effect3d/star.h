#pragma once;
#include "effect3d_config.h"
#include <graphic/colourvalue.h>
#include <mathengine/ev_math.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				/// <summary>
				/// 星空控制类
				/// </summary>
				class EV_EFFECT3D_DLL CStars : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CStars(EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CStars();
					/// <summary>
					/// 析构函数
					/// </summary>
					~CStars();
					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 获取可见性
					/// </summary>
					/// <returns>可见性</returns>
					ev_bool isVisible();
					/// <summary>
					/// 设置星星亮度
					/// </summary>
					/// <param name="brihtness">亮度（0.0~1.0）</param>
					/// <returns></returns>
					ev_void setStarsBrightness(Real brightness );
					/// <summary>
					/// 返回当前亮度
					/// </summary>
					/// <returns>星星亮度</returns>
					Real getStarsBrightness()const;
				protected:
					ev_bool mbVisible;
					Real mBrightness;
				};
			}
		}
	}
}
