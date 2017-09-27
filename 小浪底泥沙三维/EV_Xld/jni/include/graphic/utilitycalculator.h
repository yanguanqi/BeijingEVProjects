#ifndef __UTILITYCALCULATOR_H__
#define __UTILITYCALCULATOR_H__


#include "core/global.h"
#include "graphic/graphic_config.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class EV_GRAPHIC_DLL CUtilityCalculator : public EarthView::World::Core::CBaseObject
			{
			public:
				CUtilityCalculator();

				/// <summary>
				/// 计算当前渲染窗口尺寸下,保持固定屏幕尺寸的物体所需变换的缩放比例
				/// </summary>
				/// <param name="nodePos">物体所在场景节点位置</param>
				/// <param name="cam">当前相机</param>
				/// <returns>缩放比例值</returns> 
				static Real screensizefix_scale(const EarthView::World::Spatial::Math::CVector3& nodePos,EarthView::World::Graphic::CCamera* cam);

				static Real screensizefix_scale(const EarthView::World::Spatial::Math::CVector3& nodePos,EarthView::World::Graphic::CCamera* cam,Real& node2camDis);
				/// <param name="distance">物体与相机的距离</param>
				/// <param name="cam">当前相机</param>
				/// <returns>缩放比例值</returns> 
				static Real screensizefix_scale(Real distance, EarthView::World::Graphic::CCamera* cam);

				~CUtilityCalculator();
			ev_private:
				CUtilityCalculator(EarthView::World::Core::CNameValuePairList* pList);
			};
		}
	}
}

#endif
