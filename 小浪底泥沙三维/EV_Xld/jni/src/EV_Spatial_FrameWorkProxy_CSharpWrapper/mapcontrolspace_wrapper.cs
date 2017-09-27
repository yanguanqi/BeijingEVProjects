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
			namespace Atlas
			{
			}
		}
	}
}
public class MapControlSpace : ControlSpace
{
	public MapControlSpace(EarthView.World.Spatial.Atlas.Ispatialcontrol ref_ctrl) : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		NameValuePairList list = new NameValuePairList();
		BasePtr valueref_ctrl = new BasePtr(ref_ctrl);
		list.Add("ref_ctrl", valueref_ctrl.PtrVal);
		Create("CMapControlSpaceProxy", list);
		if (!"MapControlSpace".Equals(((Object)this).GetType().ToString()))
		{
			this.SetCustomExtend(true);
		}
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
	}
	#if DEBUG 
		#if Windows 
			private static bool bLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
			private static bool csbLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

		#elif Linux 
			private static bool bLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
			private static bool csbLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

		#else 
			private static bool bLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
			private static bool csbLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

		#endif 
	#else 
		#if Windows 
			private static bool bLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
			private static bool csbLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

		#elif Linux 
			private static bool bLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
			private static bool csbLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

		#else 
			private static bool bLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
			private static bool csbLoadMapControlSpace = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

		#endif 
	#endif 

	private static bool registerStatus = GlobalClassFactoryMap.Put("CMapControlSpace", new MapControlSpaceClassFactory());

	private static bool registerProxyStatus = GlobalClassFactoryMap.Put("CMapControlSpaceProxy", new MapControlSpaceClassFactory());

	public MapControlSpace(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
	{
	}

	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	protected static extern void EV_RegisterCallback_CMapControlSpace_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	protected static extern void EV_RegisterCallback_CMapControlSpace_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	protected static extern void EV_RegisterCallback_CMapControlSpace_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

	public override void RegisterCallBack()
	{
		if (this.NativeObject != IntPtr.Zero)
		{
			m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
			GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
			EV_RegisterCallback_CMapControlSpace_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
			m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
			GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
			EV_RegisterCallback_CMapControlSpace_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
			m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
			GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
			EV_RegisterCallback_CMapControlSpace_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
		}
	}
	protected override bool OnEvent(EarthView.World.Core.Event e)
	{
		return base.OnEvent_NoVirtual(e);
	}
	protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
	{
		base.OnTimerEvent_NoVirtual(e);
	}
	protected override void OnCustomEvent(EarthView.World.Core.Event e)
	{
		base.OnCustomEvent_NoVirtual(e);
	}
	public static MapControlSpace FromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
			return null;
		MapControlSpace obj = baseObj as  MapControlSpace;
		if (object.Equals(obj, null))
		{
			obj = new MapControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
			obj.BindNativeObject(baseObj.NativeObject, "CMapControlSpace");
			obj.IncreaseCast();
		}

		return obj;
	}
}

public class MapControlSpaceClassFactory : IClassFactory
{
	public BaseObject Create()
	{
		MapControlSpace emptyInstance = new MapControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}

