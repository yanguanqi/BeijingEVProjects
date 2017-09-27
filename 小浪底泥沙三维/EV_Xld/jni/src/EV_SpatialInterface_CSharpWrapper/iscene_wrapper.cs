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
				public class Iscene : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>场景名字</returns>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Atlas_IScene_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>场景名字</returns>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setName_CallBack_void_EVString(ref IntPtr name);

					protected setName_CallBack_void_EVString m_setName_CallBack_void_EVString;

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
					private static extern void EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置场景名称
					/// </summary>
					/// <param name="name">场景名称</param>
					/// <returns></returns>
					public virtual void SetName_NoVirtual(string name)
					{
						EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_NoVirtual(this.NativeObject, name);
						
					}

					protected  void EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						SetName(strname);
						
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
					private static extern void EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置场景名称
					/// </summary>
					/// <param name="name">场景名称</param>
					/// <returns></returns>
					public virtual void SetName(string name)
					{
						EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(this.NativeObject, name);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isActive_CallBack_ev_bool();

					protected isActive_CallBack_ev_bool m_isActive_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 是否被打开
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual bool IsActive_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Function()
					{
						bool csret=IsActive();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否被打开
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual bool IsActive()
					{
						byte ret=EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setActive_CallBack_void_ev_bool(bool active);

					protected setActive_CallBack_void_ev_bool m_setActive_CallBack_void_ev_bool;

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
					private static extern void EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte active);

					/// <summary>
					/// 标记打开状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void SetActive_NoVirtual(bool active)
					{
						EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(active));
						
					}

					protected  void EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Function(bool active)
					{
						SetActive(active);
						
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
					private static extern void EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(IntPtr pNativeObject, byte active);

					/// <summary>
					/// 标记打开状态
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void SetActive(bool active)
					{
						EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(this.NativeObject, Convert.ToByte(active));
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getDescription_CallBack_EVString();

					protected getDescription_CallBack_EVString m_getDescription_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取关于场景的描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>场景的描述</returns>
					public virtual string GetDescription_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Function()
					{
						string csret=GetDescription();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取关于场景的描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>场景的描述</returns>
					public virtual string GetDescription()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setDescription_CallBack_void_EVString(ref IntPtr desc);

					protected setDescription_CallBack_void_EVString m_setDescription_CallBack_void_EVString;

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
					private static extern void EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_NoVirtual(IntPtr pNativeObject, string desc);

					/// <summary>
					/// 设置关于场景的描述
					/// </summary>
					/// <param name="desc">场景描述</param>
					/// <returns></returns>
					public virtual void SetDescription_NoVirtual(string desc)
					{
						EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_NoVirtual(this.NativeObject, desc);
						
					}

					protected  void EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Function(ref IntPtr desc)
					{
						string strdesc= Marshal.PtrToStringAnsi(desc);
						ClassFactory.FreeString(ref desc);
						
						SetDescription(strdesc);
						
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
					private static extern void EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(IntPtr pNativeObject, string desc);

					/// <summary>
					/// 设置关于场景的描述
					/// </summary>
					/// <param name="desc">场景描述</param>
					/// <returns></returns>
					public virtual void SetDescription(string desc)
					{
						EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(this.NativeObject, desc);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getSpatialReference_CallBack_ISpatialReference();

					protected getSpatialReference_CallBack_ISpatialReference m_getSpatialReference_CallBack_ISpatialReference;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景当前坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					public virtual EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Function()
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csret=GetSpatialReference();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景当前坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					public virtual EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getKmlGroupLayer_CallBack_ILayer();

					protected getKmlGroupLayer_CallBack_ILayer m_getKmlGroupLayer_CallBack_ILayer;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获得KML图层组
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetKmlGroupLayer_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Function()
					{
						EarthView.World.Spatial.Atlas.Ilayer csret=GetKmlGroupLayer();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 获得KML图层组
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetKmlGroupLayer()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getFeatureGroupLayer_CallBack_ILayer();

					protected getFeatureGroupLayer_CallBack_ILayer m_getFeatureGroupLayer_CallBack_ILayer;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获得特征图层组(包括二维扩展图层、模型图层、特效图层)
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetFeatureGroupLayer_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Function()
					{
						EarthView.World.Spatial.Atlas.Ilayer csret=GetFeatureGroupLayer();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 获得特征图层组(包括二维扩展图层、模型图层、特效图层)
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetFeatureGroupLayer()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getImageGroupLayer_CallBack_ILayer();

					protected getImageGroupLayer_CallBack_ILayer m_getImageGroupLayer_CallBack_ILayer;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获得影像图层组
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetImageGroupLayer_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Function()
					{
						EarthView.World.Spatial.Atlas.Ilayer csret=GetImageGroupLayer();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 获得影像图层组
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetImageGroupLayer()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getTerrainGroupLayer_CallBack_ILayer();

					protected getTerrainGroupLayer_CallBack_ILayer m_getTerrainGroupLayer_CallBack_ILayer;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获得高程图层组
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetTerrainGroupLayer_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Function()
					{
						EarthView.World.Spatial.Atlas.Ilayer csret=GetTerrainGroupLayer();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 获得高程图层组
					/// </summary>                   
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Atlas.Ilayer GetTerrainGroupLayer()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr clone_CallBack_IScene();

					protected clone_CallBack_IScene m_clone_CallBack_IScene;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_clone_IScene_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 创建场景的克隆体
					/// </summary>
					/// <param name=""></param>
					/// <returns>场景的克隆体</returns>
					public virtual EarthView.World.Spatial.Atlas.Iscene Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_clone_IScene_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Iscene csObj = new EarthView.World.Spatial.Atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IScene");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Iscene;
							csObj.BindNativeObject(__ptr, "IScene");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_IScene_clone_IScene_Function()
					{
						EarthView.World.Spatial.Atlas.Iscene csret=Clone();
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_clone_IScene(IntPtr pNativeObject);

					/// <summary>
					/// 创建场景的克隆体
					/// </summary>
					/// <param name=""></param>
					/// <returns>场景的克隆体</returns>
					public virtual EarthView.World.Spatial.Atlas.Iscene Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_clone_IScene(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Iscene csObj = new EarthView.World.Spatial.Atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IScene");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Iscene;
							csObj.BindNativeObject(__ptr, "IScene");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toStream_CallBack_void_CDataStream(IntPtr stream);

					protected toStream_CallBack_void_CDataStream m_toStream_CallBack_void_CDataStream;

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
					private static extern void EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 将场景的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					public virtual void ToStream_NoVirtual(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Function(IntPtr stream)
					{
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						ToStream(ref csobj_stream);
						
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
					private static extern void EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 将场景的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					public virtual void ToStream(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string toXML_CallBack_EVString();

					protected toXML_CallBack_EVString m_toXML_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 将场景的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					public virtual string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Function()
					{
						string csret=ToXML();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_IScene_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 将场景的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					public virtual string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_IScene_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIscene = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIscene = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIscene = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIscene = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIscene = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIscene = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIscene = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIscene = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIscene = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIscene = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIscene = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIscene = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IScene", new IsceneClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISceneProxy", new IsceneClassFactory());

					public Iscene(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(IntPtr pObject, isActive_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(IntPtr pObject, setActive_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(IntPtr pObject, setDescription_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(IntPtr pObject, getSpatialReference_CallBack_ISpatialReference pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(IntPtr pObject, getKmlGroupLayer_CallBack_ILayer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(IntPtr pObject, getFeatureGroupLayer_CallBack_ILayer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(IntPtr pObject, getImageGroupLayer_CallBack_ILayer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(IntPtr pObject, getTerrainGroupLayer_CallBack_ILayer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_clone_IScene(IntPtr pObject, clone_CallBack_IScene pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Spatial_Atlas_IScene_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_World_Spatial_Atlas_IScene_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_isActive_CallBack_ev_bool = EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool_Function;
							GC.KeepAlive(m_isActive_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_isActive_ev_bool(this.NativeObject, m_isActive_CallBack_ev_bool);
							m_setActive_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool_Function;
							GC.KeepAlive(m_setActive_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setActive_void_ev_bool(this.NativeObject, m_setActive_CallBack_void_ev_bool);
							m_getDescription_CallBack_EVString = EarthView_World_Spatial_Atlas_IScene_getDescription_EVString_Function;
							GC.KeepAlive(m_getDescription_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
							m_setDescription_CallBack_void_EVString = EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString_Function;
							GC.KeepAlive(m_setDescription_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_setDescription_void_EVString(this.NativeObject, m_setDescription_CallBack_void_EVString);
							m_getSpatialReference_CallBack_ISpatialReference = EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference_Function;
							GC.KeepAlive(m_getSpatialReference_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getSpatialReference_ISpatialReference(this.NativeObject, m_getSpatialReference_CallBack_ISpatialReference);
							m_getKmlGroupLayer_CallBack_ILayer = EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer_Function;
							GC.KeepAlive(m_getKmlGroupLayer_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getKmlGroupLayer_ILayer(this.NativeObject, m_getKmlGroupLayer_CallBack_ILayer);
							m_getFeatureGroupLayer_CallBack_ILayer = EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer_Function;
							GC.KeepAlive(m_getFeatureGroupLayer_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getFeatureGroupLayer_ILayer(this.NativeObject, m_getFeatureGroupLayer_CallBack_ILayer);
							m_getImageGroupLayer_CallBack_ILayer = EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer_Function;
							GC.KeepAlive(m_getImageGroupLayer_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getImageGroupLayer_ILayer(this.NativeObject, m_getImageGroupLayer_CallBack_ILayer);
							m_getTerrainGroupLayer_CallBack_ILayer = EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer_Function;
							GC.KeepAlive(m_getTerrainGroupLayer_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_getTerrainGroupLayer_ILayer(this.NativeObject, m_getTerrainGroupLayer_CallBack_ILayer);
							m_clone_CallBack_IScene = EarthView_World_Spatial_Atlas_IScene_clone_IScene_Function;
							GC.KeepAlive(m_clone_CallBack_IScene);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_clone_IScene(this.NativeObject, m_clone_CallBack_IScene);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_Atlas_IScene_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_IScene_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
						}
					}
					public static Iscene FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iscene obj = baseObj as  Iscene;
						if (object.Equals(obj, null))
						{
							obj = new Iscene(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IScene");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IsceneClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iscene emptyInstance = new Iscene(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
