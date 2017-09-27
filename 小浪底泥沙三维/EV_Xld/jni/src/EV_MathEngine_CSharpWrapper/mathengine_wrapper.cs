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
		namespace Spatial
		{
			namespace Math
			{
				public class MathEngine : EarthView.World.Spatial.Math.Math
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadMathEngine = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMathEngine = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMathEngine = LoadDll.Load("EV_MathEngine_d.so");
							private static bool csbLoadMathEngine = LoadDll.Load("EV_MathEngine_CSharp_d.so");

						#else 
							private static bool bLoadMathEngine = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMathEngine = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMathEngine = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMathEngine = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadMathEngine = LoadDll.Load("EV_MathEngine.so");
							private static bool csbLoadMathEngine = LoadDll.Load("EV_MathEngine_CSharp.so");

						#else 
							private static bool bLoadMathEngine = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMathEngine = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMathEngine", new MathEngineClassFactory());

					public MathEngine(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MathEngine FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MathEngine obj = baseObj as  MathEngine;
						if (object.Equals(obj, null))
						{
							obj = new MathEngine(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMathEngine");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MathEngineClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MathEngine emptyInstance = new MathEngine(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
