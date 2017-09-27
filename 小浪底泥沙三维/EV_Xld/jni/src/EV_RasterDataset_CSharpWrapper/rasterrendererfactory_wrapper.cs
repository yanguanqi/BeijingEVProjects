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
			namespace Raster
			{
				public class RasterRendererFactory : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterRendererFactory_createRendererFromStream_IRasterRenderer_CDataStream(IntPtr stream);

					public static EarthView.World.Spatial2D.Raster.Irasterrenderer CreateRendererFromStream(ref EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterRendererFactory_createRendererFromStream_IRasterRenderer_CDataStream(object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.Irasterrenderer csObj = new EarthView.World.Spatial2D.Raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IRasterRenderer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.Irasterrenderer;
							csObj.BindNativeObject(__ptr, "IRasterRenderer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterRendererFactory_createRendererFromXmlElement_IRasterRenderer_CXmlElement(IntPtr element);

					public static EarthView.World.Spatial2D.Raster.Irasterrenderer CreateRendererFromXmlElement(ref EarthView.World.Core.XmlElement element)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterRendererFactory_createRendererFromXmlElement_IRasterRenderer_CXmlElement(object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.Irasterrenderer csObj = new EarthView.World.Spatial2D.Raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IRasterRenderer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.Irasterrenderer;
							csObj.BindNativeObject(__ptr, "IRasterRenderer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Raster_CRasterRendererFactory_destroyRenderer_void_IRasterRenderer(IntPtr pRenderer);

					public static void DestroyRenderer(EarthView.World.Spatial2D.Raster.Irasterrenderer pRenderer)
					{
						EarthView_World_Spatial2D_Raster_CRasterRendererFactory_destroyRenderer_void_IRasterRenderer(object.Equals(pRenderer, null) ? IntPtr.Zero : pRenderer.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_d.so");
							private static bool csbLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_CSharp_d.so");

						#else 
							private static bool bLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset.so");
							private static bool csbLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_CSharp.so");

						#else 
							private static bool bLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadRasterRendererFactory = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterRendererFactory", new RasterRendererFactoryClassFactory());

					public RasterRendererFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RasterRendererFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RasterRendererFactory obj = baseObj as  RasterRendererFactory;
						if (object.Equals(obj, null))
						{
							obj = new RasterRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRasterRendererFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RasterRendererFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RasterRendererFactory emptyInstance = new RasterRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
