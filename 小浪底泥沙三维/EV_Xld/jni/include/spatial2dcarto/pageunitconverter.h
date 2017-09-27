#ifndef EARTHVIEW_WORLD_CARTO_UNITCONVERT_H
#define EARTHVIEW_WORLD_CARTO_UNITCONVERT_H

#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ipage.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace  Carto 
			{
				/// <summer>
				/// 纸张单位转换类，用于转换不同单位的数据
				/// </summer>
				class EV_SPATIAL2DCARTO_DLL CPageUnitConverter :  public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPageUnitConverter();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CPageUnitConverter();

					/// <summary>
					///将其他单位的数据转换成像素
					/// </summary>
					/// <param name="pageUnits">当前数据的单位</param>
					/// <param name="dValue">当前数据</param>
					/// <returns>其他单位的数据</returns>
					ev_real64 othersUnitToPixel(_in EarthView::World::Spatial::Carto::EVPageUnits pageUnits, _in ev_real64 dValue);
					
					/// <summary>
					///将像素转换成其他单位的数据
					/// </summary>
					/// <param name="pageUnits">需从像素转换成的目标单位</param>
					/// <param name="dValue">当前单位为像素的数据</param>
					/// <returns>其他单位的数据</returns>
					ev_real64 pixelToOthersUnit(_in EarthView::World::Spatial::Carto::EVPageUnits pageUnits, _in ev_real64 dValue);
					
					/// <summary>
					/// 获取纸张单位字符
					/// </summary>
					/// <param name="mapUnit">纸张单位类型</param>
					/// <returns>纸张单位字符</returns>
					EVString getPageUnitString(_in EarthView::World::Spatial::Carto::EVPageUnits lengthUnit);

					/// <summary>
					/// 获取纸张单位类型
					/// </summary>
					/// <param name="strUnit">纸张单位字符</param>
					/// <returns>纸张单位类型</returns>
					EarthView::World::Spatial::Carto::EVPageUnits getPageUnitType(_in EVString strUnit);
				};
			}
		}
	}
}

#endif