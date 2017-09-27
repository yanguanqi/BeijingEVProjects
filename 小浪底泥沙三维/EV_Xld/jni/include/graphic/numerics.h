#ifndef __NumericSolvers_H__
#define __NumericSolvers_H__
#pragma once
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            typedef ev_real64 PreciseReal;
            /// <summary>
            /// 数字解算类
            /// 解决线性代数解算的问题
            /// </summary>
            class EV_GRAPHIC_DLL CNumericSolver : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CNumericSolver(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CNumericSolver();
                /// <summary>
                /// 解算线性方程组（采用高斯消元法来结算）
                /// </summary>
                /// <param name="n">变量个数</param>
                /// <param name="coeff">多项式系数的数组</param>
                /// <param name="col">存放方程组等式右边的数的数组</param>
                /// <returns>能够成功解算返回true，否则返回false</returns>
                static ev_bool solveNxNLinearSysDestr(_in ev_int32 n, _in PreciseReal **coeff, _in PreciseReal *col);
            };
        }
    }
}

#endif

