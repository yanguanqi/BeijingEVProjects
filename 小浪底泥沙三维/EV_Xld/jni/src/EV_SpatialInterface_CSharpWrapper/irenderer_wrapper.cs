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
			namespace Display
			{
				public enum EVRENDERERTYPE
				{
								RT_UNKNOWN = 0,
								RT_FEATURERENDERER = 1,
								RT_RASTERRENDERER = 2,
								RT_LABELRENDERER = 3
				
				}

				public class Irenderer : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getType_CallBack_EVRendererType();

					protected getType_CallBack_EVRendererType m_getType_CallBack_EVRendererType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Display.EVRENDERERTYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Display.EVRENDERERTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Function()
					{
						EarthView.World.Spatial.Display.EVRENDERERTYPE csret=GetType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(IntPtr pNativeObject);

					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Display.EVRENDERERTYPE GetType()
					{
						int ret=EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(this.NativeObject);
						
						return (EarthView.World.Spatial.Display.EVRENDERERTYPE)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIrenderer = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIrenderer = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIrenderer = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIrenderer = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIrenderer = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIrenderer = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIrenderer = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIrenderer = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIrenderer = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIrenderer = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIrenderer = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIrenderer = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IRenderer", new IrendererClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IRendererProxy", new IrendererClassFactory());

					public Irenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(IntPtr pObject, getType_CallBack_EVRendererType pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVRendererType = EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Function;
							GC.KeepAlive(m_getType_CallBack_EVRendererType);
							EV_RegisterCallback_EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType(this.NativeObject, m_getType_CallBack_EVRendererType);
						}
					}
					public static Irenderer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Irenderer obj = baseObj as  Irenderer;
						if (object.Equals(obj, null))
						{
							obj = new Irenderer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IRenderer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IrendererClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Irenderer emptyInstance = new Irenderer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
