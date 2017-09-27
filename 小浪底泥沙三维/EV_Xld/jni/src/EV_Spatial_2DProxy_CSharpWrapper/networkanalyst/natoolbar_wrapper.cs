/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

///namespace EarthView{
///	namespace World{
///		namespace Spatial2D{
///			namespace Controls{
///class CNACmdNew;
///class CNACmdLayer;
///class CNAToolStop;
///class CNAToolBarriar;
///class CNAToolAdjust;
///class CNAToolSolve;
///class CNACmdDataset;
//// <summary>
//// 网络分析工具条类
//// </summary>
public class NetworkAnalystToolBar : EarthView.World.Core.AllocatedObject
{
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public NetworkAnalystToolBar() : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		Create("CNetworkAnalystToolBar",  null);
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
	}

	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CNetworkAnalystToolBar_getCmdCount_ev_int32(IntPtr pNativeObject);

	/// <summary>
	/// 获取命令个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令个数</returns>
	public int GetCmdCount()
	{
		int ret=CNetworkAnalystToolBar_getCmdCount_ev_int32(this.NativeObject);
		
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_2DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CNetworkAnalystToolBar_getCommand_ICommand_ev_uint32(IntPtr pNativeObject, uint index);

	/// <summary>
	/// 获取给定索引处的命令
	/// </summary>
	/// <param name="index">索引号</param>
	/// <returns>命令</returns>
	public EarthView.World.Spatial.SystemUI.Icommand GetCommand(uint index)
	{
		IntPtr __ptr = CNetworkAnalystToolBar_getCommand_ICommand_ev_uint32(this.NativeObject, index);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Spatial.SystemUI.Icommand csObj = new EarthView.World.Spatial.SystemUI.Icommand(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "ICommand");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Icommand;
			csObj.BindNativeObject(__ptr, "ICommand");
			csObj.Delegate = true;
		}
		return csObj;
		
	}

	#if DEBUG 
		#if Windows 
			private static bool bLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_d.dll");
			private static bool csbLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_CSharp_d.dll");

		#elif Linux 
			private static bool bLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_d.so");
			private static bool csbLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_CSharp_d.so");

		#else 
			private static bool bLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_d.dll");
			private static bool csbLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_CSharp_d.dll");

		#endif 
	#else 
		#if Windows 
			private static bool bLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy.dll");
			private static bool csbLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_CSharp.dll");

		#elif Linux 
			private static bool bLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy.so");
			private static bool csbLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_CSharp.so");

		#else 
			private static bool bLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy.dll");
			private static bool csbLoadNetworkAnalystToolBar = LoadDll.Load("EV_Spatial_2DProxy_CSharp.dll");

		#endif 
	#endif 

	private static bool registerStatus = GlobalClassFactoryMap.Put("CNetworkAnalystToolBar", new NetworkAnalystToolBarClassFactory());

	public NetworkAnalystToolBar(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
	{
	}

	public override void RegisterCallBack()
	{
		if (this.NativeObject != IntPtr.Zero)
		{
		}
	}
	public static NetworkAnalystToolBar FromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
			return null;
		NetworkAnalystToolBar obj = baseObj as  NetworkAnalystToolBar;
		if (object.Equals(obj, null))
		{
			obj = new NetworkAnalystToolBar(CreatedWhenConstruct.CWC_NotToCreate);
			obj.BindNativeObject(baseObj.NativeObject, "CNetworkAnalystToolBar");
			obj.IncreaseCast();
		}

		return obj;
	}
}

public class NetworkAnalystToolBarClassFactory : IClassFactory
{
	public BaseObject Create()
	{
		NetworkAnalystToolBar emptyInstance = new NetworkAnalystToolBar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}

