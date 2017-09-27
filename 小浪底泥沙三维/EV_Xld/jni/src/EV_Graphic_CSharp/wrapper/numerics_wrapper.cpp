/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/numerics.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNumericSolver_solveNxNLinearSysDestr_ev_bool_ev_int32_ev_real64_ev_real64(_in ev_int32 n, _in ev_real64** coeff, _in ev_real64* col )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CNumericSolver::solveNxNLinearSysDestr(n, coeff, col);
				return objXXXX;
			}
		}
	}
}
