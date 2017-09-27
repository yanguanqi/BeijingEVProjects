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
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
			}
		}
	}
}
public class CommandPool : EarthView.World.Core.BaseObject
{
	public CommandPool() : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		Create("CCommandPool",  null);
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
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
	private static extern void CCommandPool_connect_void_ISpatialControl(IntPtr pNativeObject, IntPtr ref_ctrl);

	/// <summary>
	/// 与指定控件相关联
	/// </summary>
	/// <param name="ctrl">指定控件</param>
	/// <returns></returns>
	/// <memo></memo>
	public void Connect(EarthView.World.Spatial.Atlas.Ispatialcontrol ref_ctrl)
	{
		CCommandPool_connect_void_ISpatialControl(this.NativeObject, object.Equals(ref_ctrl, null) ? IntPtr.Zero : ref_ctrl.NativeObject);
		
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
	private static extern IntPtr CCommandPool_getCommand_ICommand_ev_uint32(IntPtr pNativeObject, uint type);

	/// <summary>
	/// 获取指定类型的命令
	/// </summary>
	/// <param name="type">命令项的类型</param>
	/// <returns>命令项</returns>
	/// <memo></memo>
	public EarthView.World.Spatial.SystemUI.Icommand GetCommand(uint type)
	{
		IntPtr __ptr = CCommandPool_getCommand_ICommand_ev_uint32(this.NativeObject, type);
		
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
	private static extern void CCommandPool_addCommand_void_ICommand(IntPtr pNativeObject, IntPtr ref_cmd);

	/// <summary>
	/// 添加命令项
	/// </summary>
	/// <param name="cmd">命令项</param>
	/// <returns></returns>
	/// <memo></memo>
	public void AddCommand(EarthView.World.Spatial.SystemUI.Icommand ref_cmd)
	{
		CCommandPool_addCommand_void_ICommand(this.NativeObject, object.Equals(ref_cmd, null) ? IntPtr.Zero : ref_cmd.NativeObject);
		
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
	private static extern void CCommandPool_removeCommand_void_ev_uint32(IntPtr pNativeObject, uint type);

	/// <summary>
	/// 移除命令项
	/// </summary>
	/// <param name="type">待移除的命令项类型</param>
	/// <returns></returns>
	/// <memo></memo>
	public void RemoveCommand(uint type)
	{
		CCommandPool_removeCommand_void_ev_uint32(this.NativeObject, type);
		
	}

	#if DEBUG 
		#if Windows 
			private static bool bLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
			private static bool csbLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

		#elif Linux 
			private static bool bLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
			private static bool csbLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

		#else 
			private static bool bLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
			private static bool csbLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

		#endif 
	#else 
		#if Windows 
			private static bool bLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
			private static bool csbLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

		#elif Linux 
			private static bool bLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
			private static bool csbLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

		#else 
			private static bool bLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
			private static bool csbLoadCommandPool = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

		#endif 
	#endif 

	private static bool registerStatus = GlobalClassFactoryMap.Put("CCommandPool", new CommandPoolClassFactory());

	public CommandPool(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
	{
	}

	public override void RegisterCallBack()
	{
		if (this.NativeObject != IntPtr.Zero)
		{
		}
	}
	public static CommandPool FromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
			return null;
		CommandPool obj = baseObj as  CommandPool;
		if (object.Equals(obj, null))
		{
			obj = new CommandPool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.BindNativeObject(baseObj.NativeObject, "CCommandPool");
			obj.IncreaseCast();
		}

		return obj;
	}
}

public class CommandPoolClassFactory : IClassFactory
{
	public BaseObject Create()
	{
		CommandPool emptyInstance = new CommandPool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}

