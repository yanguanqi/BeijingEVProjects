/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			/// <summary>
			/// 数字解算类
			/// 解决线性代数解算的问题
			/// </summary>
			public class NumericSolver : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public NumericSolver() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CNumericSolver",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CNumericSolver_solveNxNLinearSysDestr_ev_bool_ev_int32_ev_real64_ev_real64(int n, double[][] coeff, double[] col);

				/// <summary>
				/// 解算线性方程组（采用高斯消元法来结算）
				/// </summary>
				/// <param name="n">变量个数</param>
				/// <param name="coeff">多项式系数的数组</param>
				/// <param name="col">存放方程组等式右边的数的数组</param>
				/// <returns>能够成功解算返回true，否则返回false</returns>
				public static bool SolveNxNLinearSysDestr(int n, double[][] coeff, double[] col)
				{
					byte ret=EarthView_World_Graphic_CNumericSolver_solveNxNLinearSysDestr_ev_bool_ev_int32_ev_real64_ev_real64(n, coeff, col);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadNumericSolver = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadNumericSolver = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadNumericSolver = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadNumericSolver = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadNumericSolver = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadNumericSolver = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadNumericSolver = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadNumericSolver = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadNumericSolver = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadNumericSolver = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadNumericSolver = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadNumericSolver = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CNumericSolver", new NumericSolverClassFactory());

				public NumericSolver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static NumericSolver FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					NumericSolver obj = baseObj as  NumericSolver;
					if (object.Equals(obj, null))
					{
						obj = new NumericSolver(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CNumericSolver");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class NumericSolverClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					NumericSolver emptyInstance = new NumericSolver(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
