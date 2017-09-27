/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

public class Ftpclient : BaseObject
{
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public Ftpclient(string remotepath) : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		NameValuePairList list = new NameValuePairList();
		BasePtr valueremotepath = new BasePtr(remotepath);
		list.Add("remotepath", valueremotepath.PtrVal);
		Create("FTPClient", list);
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
	}
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public Ftpclient(string user, string password, string remotepath) : base(CreatedWhenConstruct.CWC_NotToCreate)
	{
		NameValuePairList list = new NameValuePairList();
		BasePtr valueuser = new BasePtr(user);
		list.Add("user", valueuser.PtrVal);
		BasePtr valuepassword = new BasePtr(password);
		list.Add("password", valuepassword.PtrVal);
		BasePtr valueremotepath = new BasePtr(remotepath);
		list.Add("remotepath", valueremotepath.PtrVal);
		Create("FTPClient", list);
		RegisterCallBack();
		this.needDispose = true;
		GlobalTraceInfoMap.Put(this);
	}

	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr FTPClient_pwd_EVString(IntPtr pNativeObject);

	/// <summary>
	/// 获取当前目录
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public string Pwd()
	{
		IntPtr __ptr = FTPClient_pwd_EVString(this.NativeObject);
		
		string ret = Marshal.PtrToStringAnsi(__ptr);
		ClassFactory.FreeString(ref __ptr);
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr FTPClient_dir_CStringArray(IntPtr pNativeObject);

	/// <summary>
	/// 当前目录文件和文件夹列表
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public EarthView.World.Core.StringArray Dir()
	{
		IntPtr __ptr = FTPClient_dir_CStringArray(this.NativeObject);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Core.StringArray csObj = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CStringArray");
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Core.StringArray;
			csObj.BindNativeObject(__ptr, "CStringArray");
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern byte FTPClient_cd_ev_bool_EVString(IntPtr pNativeObject, string param);

	/// <summary>
	/// 改变当前目录
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public bool Cd(string param)
	{
		byte ret=FTPClient_cd_ev_bool_EVString(this.NativeObject, param);
		
		return Convert.ToBoolean(ret);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr FTPClient_get_MemoryDataStreamPtr_EVString_ev_int32(IntPtr pNativeObject, string filename, int fileformat);

	/// <summary>
	/// 获取文件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public EarthView.World.Core.MemoryDataStreamPtr Get(string filename, int fileformat)
	{
		IntPtr __ptr = FTPClient_get_MemoryDataStreamPtr_EVString_ev_int32(this.NativeObject, filename, fileformat);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
			csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int FTPClient_put_ev_int32_MemoryDataStreamPtr_EVString_ev_int32(IntPtr pNativeObject, IntPtr data, string filename, int fileformat);

	/// <summary>
	/// 上传文件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public int Put(EarthView.World.Core.MemoryDataStreamPtr data, string filename, int fileformat)
	{
		int ret=FTPClient_put_ev_int32_MemoryDataStreamPtr_EVString_ev_int32(this.NativeObject, object.Equals(data, null) ? IntPtr.Zero : data.NativeObject, filename, fileformat);
		
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern byte FTPClient_remove_ev_bool_EVString(IntPtr pNativeObject, string filename);

	/// <summary>
	/// 删除文件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public bool Remove(string filename)
	{
		byte ret=FTPClient_remove_ev_bool_EVString(this.NativeObject, filename);
		
		return Convert.ToBoolean(ret);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int FTPClient_errorCode_ev_int32(IntPtr pNativeObject);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public int ErrorCode()
	{
		int ret=FTPClient_errorCode_ev_int32(this.NativeObject);
		
		return ret;
		
	}

	#if DEBUG 
		#if Windows 
			private static bool bLoadFtpclient = LoadDll.Load("EV_Download_d.dll");
			private static bool csbLoadFtpclient = LoadDll.Load("EV_Download_CSharp_d.dll");

		#elif Linux 
			private static bool bLoadFtpclient = LoadDll.Load("EV_Download_d.so");
			private static bool csbLoadFtpclient = LoadDll.Load("EV_Download_CSharp_d.so");

		#else 
			private static bool bLoadFtpclient = LoadDll.Load("EV_Download_d.dll");
			private static bool csbLoadFtpclient = LoadDll.Load("EV_Download_CSharp_d.dll");

		#endif 
	#else 
		#if Windows 
			private static bool bLoadFtpclient = LoadDll.Load("EV_Download.dll");
			private static bool csbLoadFtpclient = LoadDll.Load("EV_Download_CSharp.dll");

		#elif Linux 
			private static bool bLoadFtpclient = LoadDll.Load("EV_Download.so");
			private static bool csbLoadFtpclient = LoadDll.Load("EV_Download_CSharp.so");

		#else 
			private static bool bLoadFtpclient = LoadDll.Load("EV_Download.dll");
			private static bool csbLoadFtpclient = LoadDll.Load("EV_Download_CSharp.dll");

		#endif 
	#endif 

	private static bool registerStatus = GlobalClassFactoryMap.Put("FTPClient", new FtpclientClassFactory());

	public Ftpclient(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
	{
	}

	public override void RegisterCallBack()
	{
		if (this.NativeObject != IntPtr.Zero)
		{
		}
	}
	public static Ftpclient FromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
			return null;
		Ftpclient obj = baseObj as  Ftpclient;
		if (object.Equals(obj, null))
		{
			obj = new Ftpclient(CreatedWhenConstruct.CWC_NotToCreate);
			obj.BindNativeObject(baseObj.NativeObject, "FTPClient");
			obj.IncreaseCast();
		}

		return obj;
	}
}

public class FtpclientClassFactory : IClassFactory
{
	public BaseObject Create()
	{
		Ftpclient emptyInstance = new Ftpclient(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}

