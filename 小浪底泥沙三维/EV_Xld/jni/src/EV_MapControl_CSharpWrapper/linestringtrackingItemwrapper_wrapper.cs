/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

public class LinestringTrackingItemWrapper : EarthView.World.Core.AllocatedObject
{
	/// <summary>
	/// 默认构造函数
	/// </summary>
	public LinestringTrackingItemWrapper(EarthView.World.Spatial2D.Controls.MapControl ref_mapcontrol) : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		NameValuePairList list = new NameValuePairList();
		BasePtr valueref_mapcontrol = new BasePtr(ref_mapcontrol);
		list.Add("ref_mapcontrol", valueref_mapcontrol.PtrVal);
		Create("CLinestringTrackingItemWrapper", list);
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
	}
	/// <summary>
	/// 构造函数
	///默认值：pointCountPerLine(100) 每条线最多点数
	///levelCount(10) 级别数
	///tolerance(5)   线段化简容差（像素，内部换算），越大表示化简力度越大。
	///使用此构造函数，还需调用
	/// </summary>
	public LinestringTrackingItemWrapper(EarthView.World.Spatial2D.Controls.MapControl ref_mapcontrol, int pointCountPerLine, int levelCount, int tolerance) : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		NameValuePairList list = new NameValuePairList();
		BasePtr valueref_mapcontrol = new BasePtr(ref_mapcontrol);
		list.Add("ref_mapcontrol", valueref_mapcontrol.PtrVal);
		BasePtr valuepointCountPerLine = new BasePtr(pointCountPerLine);
		list.Add("pointCountPerLine", valuepointCountPerLine.PtrVal);
		BasePtr valuelevelCount = new BasePtr(levelCount);
		list.Add("levelCount", valuelevelCount.PtrVal);
		BasePtr valuetolerance = new BasePtr(tolerance);
		list.Add("tolerance", valuetolerance.PtrVal);
		Create("CLinestringTrackingItemWrapper", list);
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
	}

	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CLinestringTrackingItemWrapper_setLevelScale_void_ev_int32_ev_real64(IntPtr pNativeObject, int level, double scale);

	/// <summary>
	///设置每个级别的最小比例尺,level从0开始
	/// </summary>
	public void SetLevelScale(int level, double scale)
	{
		CLinestringTrackingItemWrapper_setLevelScale_void_ev_int32_ev_real64(this.NativeObject, level, scale);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CLinestringTrackingItemWrapper_setSymbol_void_ISymbol(IntPtr pNativeObject, IntPtr pSymbol);

	/// <summary>
	///设置符号
	/// </summary>
	public void SetSymbol(EarthView.World.Spatial.Display.Isymbol pSymbol)
	{
		CLinestringTrackingItemWrapper_setSymbol_void_ISymbol(this.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CLinestringTrackingItemWrapper_addPoint_void_CPoint(IntPtr pNativeObject, IntPtr point);

	/// <summary>
	///添加点，通过距离判断是否添加。其中判断机制可修改
	/// </summary>
	public void AddPoint(EarthView.World.Spatial.Geometry.Point point)
	{
		CLinestringTrackingItemWrapper_addPoint_void_CPoint(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CLinestringTrackingItemWrapper_refresh_void(IntPtr pNativeObject);

	/// <summary>
	///刷新，此函数会在地图刷新前被调用，会选择与屏幕范围有交集的当前级别下的所有linestring添加到跟踪项
	/// </summary>
	public void Refresh()
	{
		CLinestringTrackingItemWrapper_refresh_void(this.NativeObject);
		
	}

	#if DEBUG 
		#if Windows 
			private static bool bLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_d.dll");
			private static bool csbLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_CSharp_d.dll");

		#elif Linux 
			private static bool bLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_d.so");
			private static bool csbLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_CSharp_d.so");

		#else 
			private static bool bLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_d.dll");
			private static bool csbLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_CSharp_d.dll");

		#endif 
	#else 
		#if Windows 
			private static bool bLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl.dll");
			private static bool csbLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_CSharp.dll");

		#elif Linux 
			private static bool bLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl.so");
			private static bool csbLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_CSharp.so");

		#else 
			private static bool bLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl.dll");
			private static bool csbLoadLinestringTrackingItemWrapper = LoadDll.Load("EV_MapControl_CSharp.dll");

		#endif 
	#endif 

	private static bool registerStatus = GlobalClassFactoryMap.Put("CLinestringTrackingItemWrapper", new LinestringTrackingItemWrapperClassFactory());

	public LinestringTrackingItemWrapper(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
	{
	}

	public override void RegisterCallBack()
	{
		if (this.NativeObject != IntPtr.Zero)
		{
		}
	}
	public static LinestringTrackingItemWrapper FromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
			return null;
		LinestringTrackingItemWrapper obj = baseObj as  LinestringTrackingItemWrapper;
		if (object.Equals(obj, null))
		{
			obj = new LinestringTrackingItemWrapper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.BindNativeObject(baseObj.NativeObject, "CLinestringTrackingItemWrapper");
			obj.IncreaseCast();
		}

		return obj;
	}
}

public class LinestringTrackingItemWrapperClassFactory : IClassFactory
{
	public BaseObject Create()
	{
		LinestringTrackingItemWrapper emptyInstance = new LinestringTrackingItemWrapper(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}

