/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			/// <summary>
			/// 关于异常类
			/// 在发生错误时跳出异常信息
			/// </summary>
			public class Exception : EarthView.World.Core.BaseObject
			{
				public enum EXCEPTIONCODES
				{
								ERR_CANNOT_WRITE_TO_FILE,
								ERR_INVALID_STATE,
								ERR_INVALIDPARAMS,
								ERR_RENDERINGAPI_ERROR,
								ERR_DUPLICATE_ITEM,
								ERR_ITEM_NOT_FOUND,
								ERR_FILE_NOT_FOUND,
								ERR_INTERNAL_ERROR,
								ERR_RT_ASSERTION_FAILED,
								ERR_NOT_IMPLEMENTED,
								ERR_NOT_LICENSED
				
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="number">错误编码</param>
				/// <param name="description">错误描述</param>
				/// <param name="source">发生错误的函数</param>
				/// <returns></returns>
				public Exception(int number, string description, string source) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuenumber = new BasePtr(number);
					list.Add("number", valuenumber.PtrVal);
					BasePtr valuedescription = new BasePtr(description);
					list.Add("description", valuedescription.PtrVal);
					BasePtr valuesource = new BasePtr(source);
					list.Add("source", valuesource.PtrVal);
					Create("CExceptionProxy", list);
					if (!"EarthView.World.Core.Exception".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="number">错误编码</param>
				/// <param name="description">错误描述</param>
				/// <param name="source">发生错误的函数</param>
				/// <param name="type">错误的类型</param>
				/// <param name="file">错误所在的文件</param>
				/// <param name="line">错误所在的文件的行数</param>
				/// <returns></returns>
				public Exception(int number, string description, string source, byte[] type, byte[] file, int line) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuenumber = new BasePtr(number);
					list.Add("number", valuenumber.PtrVal);
					BasePtr valuedescription = new BasePtr(description);
					list.Add("description", valuedescription.PtrVal);
					BasePtr valuesource = new BasePtr(source);
					list.Add("source", valuesource.PtrVal);
					BasePtr valuetype = new BasePtr(type);
					list.Add("type", valuetype.PtrVal);
					BasePtr valuefile = new BasePtr(file);
					list.Add("file", valuefile.PtrVal);
					BasePtr valueline = new BasePtr(line);
					list.Add("line", valueline.PtrVal);
					Create("CExceptionProxy", list);
					if (!"EarthView.World.Core.Exception".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="rhs">EarthView::World::Core::CException类的引用</param>
				/// <returns></returns>
				public Exception(EarthView.World.Core.Exception rhs) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuerhs = new BasePtr(rhs);
					list.Add("rhs", valuerhs.PtrVal);
					Create("CExceptionProxy", list);
					if (!"EarthView.World.Core.Exception".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CException_OperatorAssign_void_CException(IntPtr pNativeObject, IntPtr rhs);

				/// <summary>
				/// 赋值符号"="的重载
				/// </summary>
				/// <param name="rhs">EarthView::World::Core::CException类的引用</param>
				/// <returns></returns>
				public void OperatorAssign(EarthView.World.Core.Exception rhs)
				{
					EarthView_World_Core_CException_OperatorAssign_void_CException(this.NativeObject, object.Equals(rhs, null) ? IntPtr.Zero : rhs.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getFullDescription_CallBack_EVString();

				protected getFullDescription_CallBack_EVString m_getFullDescription_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getFullDescription_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到错误的完整描述，包括错误编码，发生错误的行数以及发生错误的函数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误描述</returns>
				public virtual string GetFullDescription_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getFullDescription_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CException_getFullDescription_EVString_Function()
				{
					string csret=GetFullDescription();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getFullDescription_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 得到错误的完整描述，包括错误编码，发生错误的行数以及发生错误的函数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误描述</returns>
				public virtual string GetFullDescription()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getFullDescription_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getNumber_CallBack_ev_int32();

				protected getNumber_CallBack_ev_int32 m_getNumber_CallBack_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Core_CException_getNumber_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到错误编码
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误编码</returns>
				public virtual int GetNumber_NoVirtual()
				{
					int ret=EarthView_World_Core_CException_getNumber_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Core_CException_getNumber_ev_int32_Function()
				{
					int csret=GetNumber();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Core_CException_getNumber_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 得到错误编码
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误编码</returns>
				public virtual int GetNumber()
				{
					int ret=EarthView_World_Core_CException_getNumber_ev_int32(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getSource_CallBack_EVString();

				protected getSource_CallBack_EVString m_getSource_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getSource_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的函数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误函数</returns>
				public virtual string GetSource_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getSource_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CException_getSource_EVString_Function()
				{
					string csret=GetSource();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getSource_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的函数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误函数</returns>
				public virtual string GetSource()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getSource_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getFile_CallBack_EVString();

				protected getFile_CallBack_EVString m_getFile_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getFile_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的文件
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误文件</returns>
				public virtual string GetFile_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getFile_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CException_getFile_EVString_Function()
				{
					string csret=GetFile();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getFile_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的文件
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误文件</returns>
				public virtual string GetFile()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getFile_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getLine_CallBack_ev_int32();

				protected getLine_CallBack_ev_int32 m_getLine_CallBack_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Core_CException_getLine_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的行数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误行数</returns>
				public virtual int GetLine_NoVirtual()
				{
					int ret=EarthView_World_Core_CException_getLine_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Core_CException_getLine_ev_int32_Function()
				{
					int csret=GetLine();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Core_CException_getLine_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的行数
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误行数</returns>
				public virtual int GetLine()
				{
					int ret=EarthView_World_Core_CException_getLine_ev_int32(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getDescription_CallBack_EVString();

				protected getDescription_CallBack_EVString m_getDescription_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getDescription_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的描述（只是单纯的描述）
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误描述</returns>
				public virtual string GetDescription_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getDescription_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CException_getDescription_EVString_Function()
				{
					string csret=GetDescription();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_getDescription_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 得到发生错误的描述（只是单纯的描述）
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回错误描述</returns>
				public virtual string GetDescription()
				{
					IntPtr __ptr = EarthView_World_Core_CException_getDescription_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CException_what_ev_char(IntPtr pNativeObject);

				/// <summary>
				/// 跳过标准库中异常类中what函数
				/// </summary>
				/// <param name=""></param>
				/// <returns>直接返回getFullDescription函数返回值</returns>
				public IntPtr What()
				{
					IntPtr __ptr = EarthView_World_Core_CException_what_ev_char(this.NativeObject);
					
					return __ptr;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CException", new ExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CExceptionProxy", new ExceptionClassFactory());

				public Exception(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public static Exception FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Exception obj = baseObj as  Exception;
					if (object.Equals(obj, null))
					{
						obj = new Exception(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Exception emptyInstance = new Exception(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 未实现的异常类
			/// 跳出未实现异常信息
			/// </summary>
			public class UnimplementedException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public UnimplementedException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CUnimplementedExceptionProxy", list);
					if (!"EarthView.World.Core.UnimplementedException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadUnimplementedException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadUnimplementedException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadUnimplementedException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadUnimplementedException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadUnimplementedException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadUnimplementedException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadUnimplementedException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadUnimplementedException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadUnimplementedException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadUnimplementedException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadUnimplementedException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadUnimplementedException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CUnimplementedException", new UnimplementedExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CUnimplementedExceptionProxy", new UnimplementedExceptionClassFactory());

				public UnimplementedException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CUnimplementedException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static UnimplementedException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					UnimplementedException obj = baseObj as  UnimplementedException;
					if (object.Equals(obj, null))
					{
						obj = new UnimplementedException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CUnimplementedException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class UnimplementedExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					UnimplementedException emptyInstance = new UnimplementedException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 未许可的异常类
			/// 跳出未实现异常信息
			/// </summary>
			public class NotLicensedException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public NotLicensedException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CNotLicensedExceptionProxy", list);
					if (!"EarthView.World.Core.NotLicensedException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadNotLicensedException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadNotLicensedException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadNotLicensedException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadNotLicensedException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadNotLicensedException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadNotLicensedException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadNotLicensedException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadNotLicensedException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadNotLicensedException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadNotLicensedException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadNotLicensedException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadNotLicensedException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CNotLicensedException", new NotLicensedExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CNotLicensedExceptionProxy", new NotLicensedExceptionClassFactory());

				public NotLicensedException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CNotLicensedException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static NotLicensedException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					NotLicensedException obj = baseObj as  NotLicensedException;
					if (object.Equals(obj, null))
					{
						obj = new NotLicensedException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CNotLicensedException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class NotLicensedExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					NotLicensedException emptyInstance = new NotLicensedException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 文件未找到的异常类
			/// 跳出文件未找到异常信息
			/// </summary>
			public class FileNotFoundException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public FileNotFoundException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CFileNotFoundExceptionProxy", list);
					if (!"EarthView.World.Core.FileNotFoundException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadFileNotFoundException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadFileNotFoundException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadFileNotFoundException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadFileNotFoundException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadFileNotFoundException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadFileNotFoundException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadFileNotFoundException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadFileNotFoundException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadFileNotFoundException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadFileNotFoundException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadFileNotFoundException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadFileNotFoundException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CFileNotFoundException", new FileNotFoundExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CFileNotFoundExceptionProxy", new FileNotFoundExceptionClassFactory());

				public FileNotFoundException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CFileNotFoundException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static FileNotFoundException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					FileNotFoundException obj = baseObj as  FileNotFoundException;
					if (object.Equals(obj, null))
					{
						obj = new FileNotFoundException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CFileNotFoundException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class FileNotFoundExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					FileNotFoundException emptyInstance = new FileNotFoundException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 输入输出的异常类
			/// 跳出输入输出异常信息
			/// </summary>
			public class Ioexception : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public Ioexception(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CIOExceptionProxy", list);
					if (!"EarthView.World.Core.Ioexception".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadIoexception = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadIoexception = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIoexception = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadIoexception = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadIoexception = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadIoexception = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIoexception = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadIoexception = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadIoexception = LoadDll.Load("EV_Core.so");
						private static bool csbLoadIoexception = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadIoexception = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadIoexception = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CIOException", new IoexceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CIOExceptionProxy", new IoexceptionClassFactory());

				public Ioexception(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CIOException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CIOException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CIOException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CIOException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CIOException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CIOException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CIOException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CIOException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CIOException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CIOException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CIOException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CIOException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static Ioexception FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ioexception obj = baseObj as  Ioexception;
					if (object.Equals(obj, null))
					{
						obj = new Ioexception(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CIOException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IoexceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ioexception emptyInstance = new Ioexception(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 无效声明的异常类
			/// 跳出无效声明异常信息
			/// </summary>
			public class InvalidStateException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public InvalidStateException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CInvalidStateExceptionProxy", list);
					if (!"EarthView.World.Core.InvalidStateException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadInvalidStateException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadInvalidStateException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadInvalidStateException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadInvalidStateException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadInvalidStateException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadInvalidStateException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadInvalidStateException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadInvalidStateException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadInvalidStateException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadInvalidStateException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadInvalidStateException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadInvalidStateException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidStateException", new InvalidStateExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidStateExceptionProxy", new InvalidStateExceptionClassFactory());

				public InvalidStateException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidStateException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static InvalidStateException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					InvalidStateException obj = baseObj as  InvalidStateException;
					if (object.Equals(obj, null))
					{
						obj = new InvalidStateException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CInvalidStateException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class InvalidStateExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					InvalidStateException emptyInstance = new InvalidStateException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 无效参数的异常类
			/// 跳出无效参数异常信息
			/// </summary>
			public class InvalidParametersException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public InvalidParametersException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CInvalidParametersExceptionProxy", list);
					if (!"EarthView.World.Core.InvalidParametersException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadInvalidParametersException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadInvalidParametersException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadInvalidParametersException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadInvalidParametersException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadInvalidParametersException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadInvalidParametersException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadInvalidParametersException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadInvalidParametersException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadInvalidParametersException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadInvalidParametersException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadInvalidParametersException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadInvalidParametersException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidParametersException", new InvalidParametersExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CInvalidParametersExceptionProxy", new InvalidParametersExceptionClassFactory());

				public InvalidParametersException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInvalidParametersException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static InvalidParametersException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					InvalidParametersException obj = baseObj as  InvalidParametersException;
					if (object.Equals(obj, null))
					{
						obj = new InvalidParametersException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CInvalidParametersException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class InvalidParametersExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					InvalidParametersException emptyInstance = new InvalidParametersException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 项目一致性的异常类
			/// 跳出项目一致性异常信息
			/// </summary>
			public class ItemIdentityException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public ItemIdentityException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CItemIdentityExceptionProxy", list);
					if (!"EarthView.World.Core.ItemIdentityException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadItemIdentityException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadItemIdentityException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadItemIdentityException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadItemIdentityException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadItemIdentityException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadItemIdentityException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadItemIdentityException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadItemIdentityException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadItemIdentityException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadItemIdentityException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadItemIdentityException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadItemIdentityException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CItemIdentityException", new ItemIdentityExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CItemIdentityExceptionProxy", new ItemIdentityExceptionClassFactory());

				public ItemIdentityException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CItemIdentityException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static ItemIdentityException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ItemIdentityException obj = baseObj as  ItemIdentityException;
					if (object.Equals(obj, null))
					{
						obj = new ItemIdentityException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CItemIdentityException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ItemIdentityExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ItemIdentityException emptyInstance = new ItemIdentityException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 内部错误的异常类
			/// 跳出内部错误异常信息
			/// </summary>
			public class InternalErrorException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public InternalErrorException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CInternalErrorExceptionProxy", list);
					if (!"EarthView.World.Core.InternalErrorException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadInternalErrorException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadInternalErrorException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadInternalErrorException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadInternalErrorException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadInternalErrorException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadInternalErrorException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadInternalErrorException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadInternalErrorException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadInternalErrorException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadInternalErrorException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadInternalErrorException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadInternalErrorException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CInternalErrorException", new InternalErrorExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CInternalErrorExceptionProxy", new InternalErrorExceptionClassFactory());

				public InternalErrorException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CInternalErrorException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static InternalErrorException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					InternalErrorException obj = baseObj as  InternalErrorException;
					if (object.Equals(obj, null))
					{
						obj = new InternalErrorException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CInternalErrorException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class InternalErrorExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					InternalErrorException emptyInstance = new InternalErrorException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 渲染接口的异常类
			/// 跳出渲染接口异常信息
			/// </summary>
			public class RenderingAPIException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public RenderingAPIException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CRenderingAPIExceptionProxy", list);
					if (!"EarthView.World.Core.RenderingAPIException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadRenderingAPIException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadRenderingAPIException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRenderingAPIException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadRenderingAPIException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadRenderingAPIException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadRenderingAPIException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRenderingAPIException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadRenderingAPIException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadRenderingAPIException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadRenderingAPIException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadRenderingAPIException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadRenderingAPIException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CRenderingAPIException", new RenderingAPIExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CRenderingAPIExceptionProxy", new RenderingAPIExceptionClassFactory());

				public RenderingAPIException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRenderingAPIException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static RenderingAPIException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RenderingAPIException obj = baseObj as  RenderingAPIException;
					if (object.Equals(obj, null))
					{
						obj = new RenderingAPIException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRenderingAPIException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RenderingAPIExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RenderingAPIException emptyInstance = new RenderingAPIException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 运行时断言的异常类
			/// 跳出运行时断言异常信息
			/// </summary>
			public class RuntimeAssertionException : EarthView.World.Core.Exception
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="inNumber">错误编码</param>
				/// <param name="inDescription">错误描述</param>
				/// <param name="inSource">发生错误的函数</param>
				/// <param name="inFile">错误所在的文件</param>
				/// <param name="inLine">错误所在的文件的行数</param>
				/// <returns></returns>
				public RuntimeAssertionException(int inNumber, string inDescription, string inSource, byte[] inFile, int inLine) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueinNumber = new BasePtr(inNumber);
					list.Add("inNumber", valueinNumber.PtrVal);
					BasePtr valueinDescription = new BasePtr(inDescription);
					list.Add("inDescription", valueinDescription.PtrVal);
					BasePtr valueinSource = new BasePtr(inSource);
					list.Add("inSource", valueinSource.PtrVal);
					BasePtr valueinFile = new BasePtr(inFile);
					list.Add("inFile", valueinFile.PtrVal);
					BasePtr valueinLine = new BasePtr(inLine);
					list.Add("inLine", valueinLine.PtrVal);
					Create("CRuntimeAssertionExceptionProxy", list);
					if (!"EarthView.World.Core.RuntimeAssertionException".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadRuntimeAssertionException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadRuntimeAssertionException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRuntimeAssertionException = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadRuntimeAssertionException = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadRuntimeAssertionException = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadRuntimeAssertionException = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRuntimeAssertionException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadRuntimeAssertionException = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadRuntimeAssertionException = LoadDll.Load("EV_Core.so");
						private static bool csbLoadRuntimeAssertionException = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadRuntimeAssertionException = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadRuntimeAssertionException = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CRuntimeAssertionException", new RuntimeAssertionExceptionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CRuntimeAssertionExceptionProxy", new RuntimeAssertionExceptionClassFactory());

				public RuntimeAssertionException(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString(IntPtr pObject, getFullDescription_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32(IntPtr pObject, getNumber_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString(IntPtr pObject, getSource_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString(IntPtr pObject, getFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32(IntPtr pObject, getLine_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFullDescription_CallBack_EVString = EarthView_World_Core_CException_getFullDescription_EVString_Function;
						GC.KeepAlive(m_getFullDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getFullDescription_EVString(this.NativeObject, m_getFullDescription_CallBack_EVString);
						m_getNumber_CallBack_ev_int32 = EarthView_World_Core_CException_getNumber_ev_int32_Function;
						GC.KeepAlive(m_getNumber_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getNumber_ev_int32(this.NativeObject, m_getNumber_CallBack_ev_int32);
						m_getSource_CallBack_EVString = EarthView_World_Core_CException_getSource_EVString_Function;
						GC.KeepAlive(m_getSource_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getSource_EVString(this.NativeObject, m_getSource_CallBack_EVString);
						m_getFile_CallBack_EVString = EarthView_World_Core_CException_getFile_EVString_Function;
						GC.KeepAlive(m_getFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getFile_EVString(this.NativeObject, m_getFile_CallBack_EVString);
						m_getLine_CallBack_ev_int32 = EarthView_World_Core_CException_getLine_ev_int32_Function;
						GC.KeepAlive(m_getLine_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getLine_ev_int32(this.NativeObject, m_getLine_CallBack_ev_int32);
						m_getDescription_CallBack_EVString = EarthView_World_Core_CException_getDescription_EVString_Function;
						GC.KeepAlive(m_getDescription_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CRuntimeAssertionException_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
					}
				}
				public override string GetFullDescription()
				{
					return base.GetFullDescription_NoVirtual();
				}
				public override int GetNumber()
				{
					return base.GetNumber_NoVirtual();
				}
				public override string GetSource()
				{
					return base.GetSource_NoVirtual();
				}
				public override string GetFile()
				{
					return base.GetFile_NoVirtual();
				}
				public override int GetLine()
				{
					return base.GetLine_NoVirtual();
				}
				public override string GetDescription()
				{
					return base.GetDescription_NoVirtual();
				}
				public static RuntimeAssertionException FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RuntimeAssertionException obj = baseObj as  RuntimeAssertionException;
					if (object.Equals(obj, null))
					{
						obj = new RuntimeAssertionException(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRuntimeAssertionException");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RuntimeAssertionExceptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RuntimeAssertionException emptyInstance = new RuntimeAssertionException(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
