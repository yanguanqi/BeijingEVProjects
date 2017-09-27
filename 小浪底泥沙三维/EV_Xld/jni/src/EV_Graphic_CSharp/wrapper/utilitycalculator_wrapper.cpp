/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/utilitycalculator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_CVector3_CCamera(_in const void* nodePos, _in EarthView::World::Graphic::CCamera* cam )
			{
				Real objXXXX = EarthView::World::Graphic::CUtilityCalculator::screensizefix_scale(*(EarthView::World::Spatial::Math::CVector3*)nodePos, cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_CVector3_CCamera_Real(_in const void* nodePos, _in EarthView::World::Graphic::CCamera* cam, _inout Real& node2camDis )
			{
				Real objXXXX = EarthView::World::Graphic::CUtilityCalculator::screensizefix_scale(*(EarthView::World::Spatial::Math::CVector3*)nodePos, cam, node2camDis);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_Real_CCamera(_in Real distance, _in EarthView::World::Graphic::CCamera* cam )
			{
				Real objXXXX = EarthView::World::Graphic::CUtilityCalculator::screensizefix_scale(distance, cam);
				return objXXXX;
			}
		}
	}
}
