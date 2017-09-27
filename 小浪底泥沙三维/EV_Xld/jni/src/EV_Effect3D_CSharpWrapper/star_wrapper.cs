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
			namespace Effect3D
			{
				/// <summary>
				/// 星空控制类
				/// </summary>
				public class Stars : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					public Stars() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CStars",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CStars_setVisible_void_ev_bool(IntPtr pNativeObject, byte visible);

					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					public void SetVisible(bool visible)
					{
						EarthView_World_Spatial_Effect3D_CStars_setVisible_void_ev_bool(this.NativeObject, Convert.ToByte(visible));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Effect3D_CStars_isVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取可见性
					/// </summary>
					/// <returns>可见性</returns>
					public bool IsVisible()
					{
						byte ret=EarthView_World_Spatial_Effect3D_CStars_isVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Effect3D_CStars_setStarsBrightness_void_Real(IntPtr pNativeObject, double brightness);

					/// <summary>
					/// 设置星星亮度
					/// </summary>
					/// <param name="brihtness">亮度（0.0~1.0）</param>
					/// <returns></returns>
					public void SetStarsBrightness(double brightness)
					{
						EarthView_World_Spatial_Effect3D_CStars_setStarsBrightness_void_Real(this.NativeObject, brightness);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Effect3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Effect3D_CStars_getStarsBrightness_Real(IntPtr pNativeObject);

					/// <summary>
					/// 返回当前亮度
					/// </summary>
					/// <returns>星星亮度</returns>
					public double GetStarsBrightness()
					{
						double ret=EarthView_World_Spatial_Effect3D_CStars_getStarsBrightness_Real(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadStars = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadStars = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadStars = LoadDll.Load("EV_Effect3D_d.so");
							private static bool csbLoadStars = LoadDll.Load("EV_Effect3D_CSharp_d.so");

						#else 
							private static bool bLoadStars = LoadDll.Load("EV_Effect3D_d.dll");
							private static bool csbLoadStars = LoadDll.Load("EV_Effect3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadStars = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadStars = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadStars = LoadDll.Load("EV_Effect3D.so");
							private static bool csbLoadStars = LoadDll.Load("EV_Effect3D_CSharp.so");

						#else 
							private static bool bLoadStars = LoadDll.Load("EV_Effect3D.dll");
							private static bool csbLoadStars = LoadDll.Load("EV_Effect3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Effect3D::CStars", new StarsClassFactory());

					public Stars(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Stars FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Stars obj = baseObj as  Stars;
						if (object.Equals(obj, null))
						{
							obj = new Stars(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CStars");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class StarsClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Stars emptyInstance = new Stars(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
