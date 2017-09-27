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
		namespace Layout
		{
			namespace Controls
			{
				/// <summary>
				/// 辅助线渲染类，用于布局时绘图，调节坐标等
				/// </summary>
				public class LayoutSublineRender : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public LayoutSublineRender(EarthView.World.Layout.Controls.LayoutControl pControl) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuepControl = new BasePtr(pControl);
						list.Add("pControl", valuepControl.PtrVal);
						Create("CLayoutSublineRender", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Layout_Controls_CLayoutSublineRender_drawSubline_void_IGeometry_ISymbol(IntPtr pNativeObject, IntPtr pGeometry, IntPtr pSymbol);

					/// <summary>
					/// 绘制辅助线
					/// </summary>
					/// <param name="pGeometry">辅助线的几何</param>
					/// <param name="pSymbol">辅助线的风格</param>
					/// <returns></returns>
					public void DrawSubline(EarthView.World.Spatial.Geometry.Igeometry pGeometry, EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Layout_Controls_CLayoutSublineRender_drawSubline_void_IGeometry_ISymbol(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_LayoutControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Layout_Controls_CLayoutSublineRender_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空辅助线
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Layout_Controls_CLayoutSublineRender_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_d.dll");
							private static bool csbLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_d.so");
							private static bool csbLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_CSharp_d.so");

						#else 
							private static bool bLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_d.dll");
							private static bool csbLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl.dll");
							private static bool csbLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl.so");
							private static bool csbLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_CSharp.so");

						#else 
							private static bool bLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl.dll");
							private static bool csbLoadLayoutSublineRender = LoadDll.Load("EV_LayoutControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Layout::Controls::CLayoutSublineRender", new LayoutSublineRenderClassFactory());

					public LayoutSublineRender(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LayoutSublineRender FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LayoutSublineRender obj = baseObj as  LayoutSublineRender;
						if (object.Equals(obj, null))
						{
							obj = new LayoutSublineRender(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLayoutSublineRender");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LayoutSublineRenderClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LayoutSublineRender emptyInstance = new LayoutSublineRender(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
