/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/numerics.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_NumericSolver_solveNxNLinearSysDestr_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jint n_j, jlong coeff_j, jlong col_j)
			{
				ev_int32 n = (ev_int32) n_j;
				ev_real64 **coeff = (ev_real64**) coeff_j;
				ev_real64 *col = (ev_real64*) col_j;
				ev_bool __values1 = EarthView::World::Graphic::CNumericSolver::solveNxNLinearSysDestr(n, coeff, col);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
