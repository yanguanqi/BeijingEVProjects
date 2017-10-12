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
		namespace Spatial2D
		{
			namespace Analyst
			{
				public class RasterMosaic : EarthView.World.Core.AllocatedObject
				{
					public RasterMosaic() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRasterMosaic",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_d.so");
							private static bool csbLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_d.dll");
							private static bool csbLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis.so");
							private static bool csbLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp.so");

						#else 
							private static bool bLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis.dll");
							private static bool csbLoadRasterMosaic = LoadDll.Load("EV_RasterAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterMosaic", new RasterMosaicClassFactory());

					public RasterMosaic(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RasterMosaic FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RasterMosaic obj = baseObj as  RasterMosaic;
						if (object.Equals(obj, null))
						{
							obj = new RasterMosaic(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRasterMosaic");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RasterMosaicClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RasterMosaic emptyInstance = new RasterMosaic(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
