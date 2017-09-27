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
			namespace Theme
			{
				public class Evwmsvectortheme : EarthView.World.Spatial.Theme.Itheme
				{
					public enum EVWMSREQUESTTYPE
					{
										EV_RT_RequestByMap = 0,
										EV_RT_RequestByTile = 1
					
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public Evwmsvectortheme() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CEVWMSVectorThemeProxy", null);
						if (!"EarthView.World.Spatial.Theme.Evwmsvectortheme".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(IntPtr pNativeObject, int r, int g, int b, byte trans);

					/// <summary>
					/// 设置图层背景色
					/// </summary>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <param name="trans">是否透明</param>
					/// <returns></returns>
					public void SetBackColor(int r, int g, int b, bool trans)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(this.NativeObject, r, g, b, Convert.ToByte(trans));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(IntPtr pNativeObject, ref int r, ref int g, ref int b, ref bool trans);

					/// <summary>
					/// 获取图层背景色
					/// </summary>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <param name="trans">是否透明</param>
					/// <returns></returns>
					public void GetBackColor(ref int r, ref int g, ref int b, ref bool trans)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(this.NativeObject, ref r, ref g, ref b, ref trans);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestStyle_void_EVString(IntPtr pNativeObject, string style);

					/// <summary>
					/// 设置请求样式
					/// </summary>
					/// <param name="style">请求样式</param>
					/// <returns></returns>
					public void SetRequestStyle(string style)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestStyle_void_EVString(this.NativeObject, style);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestStyle_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取请求样式
					/// </summary>
					/// <returns></returns>
					public string GetRequestStyle()
					{
						IntPtr __ptr = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestStyle_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestFormat_void_EVString(IntPtr pNativeObject, string format);

					/// <summary>
					/// 设置请求格式
					/// </summary>
					/// <param name="style">请求格式</param>
					/// <returns></returns>
					public void SetRequestFormat(string format)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestFormat_void_EVString(this.NativeObject, format);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestFormat_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取请求格式
					/// </summary>
					/// <returns></returns>
					public string GetRequestFormat()
					{
						IntPtr __ptr = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestFormat_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Theme_CEVWMSVectorTheme_clone_ITheme_NoVirtual(IntPtr pNativeObject);

					public new EarthView.World.Spatial.Theme.Itheme Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_clone_ITheme_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Theme.Itheme csObj = new EarthView.World.Spatial.Theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ITheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Theme.Itheme;
							csObj.BindNativeObject(__ptr, "ITheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Theme_CEVWMSVectorTheme_clone_ITheme(IntPtr pNativeObject);

					public override EarthView.World.Spatial.Theme.Itheme Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_clone_ITheme(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Theme.Itheme csObj = new EarthView.World.Spatial.Theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ITheme");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Theme.Itheme;
							csObj.BindNativeObject(__ptr, "ITheme");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Theme_CEVWMSVectorTheme_equals_ev_bool_ITheme_NoVirtual(IntPtr pNativeObject, IntPtr theme);

					/// <summary>
					/// 是否与指定专题图相同
					/// </summary>
					/// <param name="theme">指定的专题图</param>
					/// <returns>如果是返回true；否则返回false</returns>
					public new bool Equals_NoVirtual(EarthView.World.Spatial.Theme.Itheme theme)
					{
						byte ret=EarthView_World_Spatial_Theme_CEVWMSVectorTheme_equals_ev_bool_ITheme_NoVirtual(this.NativeObject, object.Equals(theme, null) ? IntPtr.Zero : theme.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Theme_CEVWMSVectorTheme_equals_ev_bool_ITheme(IntPtr pNativeObject, IntPtr theme);

					/// <summary>
					/// 是否与指定专题图相同
					/// </summary>
					/// <param name="theme">指定的专题图</param>
					/// <returns>如果是返回true；否则返回false</returns>
					public override bool Equals(EarthView.World.Spatial.Theme.Itheme theme)
					{
						byte ret=EarthView_World_Spatial_Theme_CEVWMSVectorTheme_equals_ev_bool_ITheme(this.NativeObject, object.Equals(theme, null) ? IntPtr.Zero : theme.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromXmlElement_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从EarthView::World::Core::CXmlElement读取专题图
					/// </summary>
					/// <param name="element">指定的EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					public new void FromXmlElement_NoVirtual(ref EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromXmlElement_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromXmlElement_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从EarthView::World::Core::CXmlElement读取专题图
					/// </summary>
					/// <param name="element">指定的EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					public override void FromXmlElement(ref EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromXmlElement_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toXmlElement_CXmlElement_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 将专题图输出为EarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回EarthView::World::Core::CXmlElement</returns>
					public new EarthView.World.Core.XmlElement ToXmlElement_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toXmlElement_CXmlElement_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toXmlElement_CXmlElement(IntPtr pNativeObject);

					/// <summary>
					/// 将专题图输出为EarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回EarthView::World::Core::CXmlElement</returns>
					public override EarthView.World.Core.XmlElement ToXmlElement()
					{
						IntPtr __ptr = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toXmlElement_CXmlElement(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流序列化专题图
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public new void ToStream_NoVirtual(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流序列化专题图
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public override void ToStream(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流序列化专题图
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					protected new void FromStream_NoVirtual(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流序列化专题图
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					protected override void FromStream(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setRequestType_CallBack_void_EVWMSRequestType(EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE requestType);

					protected setRequestType_CallBack_void_EVWMSRequestType m_setRequestType_CallBack_void_EVWMSRequestType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE requestType);

					protected virtual void SetRequestType_NoVirtual(EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE requestType)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType_NoVirtual(this.NativeObject, requestType);
						
					}

					protected  void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType_Function(EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE requestType)
					{
						SetRequestType(requestType);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType(IntPtr pNativeObject, EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE requestType);

					protected virtual void SetRequestType(EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE requestType)
					{
						EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType(this.NativeObject, requestType);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getRequestType_CallBack_EVWMSRequestType();

					protected getRequestType_CallBack_EVWMSRequestType m_getRequestType_CallBack_EVWMSRequestType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType_NoVirtual(IntPtr pNativeObject);

					protected virtual EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE GetRequestType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType_Function()
					{
						EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE csret=GetRequestType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType(IntPtr pNativeObject);

					protected virtual EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE GetRequestType()
					{
						int ret=EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType(this.NativeObject);
						
						return (EarthView.World.Spatial.Theme.Evwmsvectortheme.EVWMSREQUESTTYPE)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_d.so");
							private static bool csbLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.so");

						#else 
							private static bool bLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#elif Linux 
							private static bool bLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer.so");
							private static bool csbLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_CSharp.so");

						#else 
							private static bool bLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadEvwmsvectortheme = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMSVectorTheme", new EvwmsvectorthemeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMSVectorThemeProxy", new EvwmsvectorthemeClassFactory());

					public Evwmsvectortheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType(IntPtr pObject, setRequestType_CallBack_void_EVWMSRequestType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType(IntPtr pObject, getRequestType_CallBack_EVWMSRequestType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getType_EVThemeType(IntPtr pObject, getType_CallBack_EVThemeType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getCaption_EVString(IntPtr pObject, getCaption_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setCaption_void_EVString(IntPtr pObject, setCaption_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_useDefaultSymbol_ev_bool(IntPtr pObject, useDefaultSymbol_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setUseDefaultSymbol_void_ev_bool(IntPtr pObject, setUseDefaultSymbol_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getDefaultSymbol_ISymbol(IntPtr pObject, getDefaultSymbol_CallBack_ISymbol pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setDefaultSymbol_void_ISymbol(IntPtr pObject, setDefaultSymbol_CallBack_void_ISymbol pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_equals_ev_bool_ITheme(IntPtr pObject, equals_CallBack_ev_bool_ITheme pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_clone_ITheme(IntPtr pObject, clone_CallBack_ITheme pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromXmlElement_void_CXmlElement(IntPtr pObject, fromXmlElement_CallBack_void_CXmlElement pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(IntPtr pObject, onBeforeQuery_CallBack_void_IFeatureClass_IQueryFilter pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_onAfterQuery_void_IFeatureSelection_IGeometry(IntPtr pObject, onAfterQuery_CallBack_void_IFeatureSelection_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromStream_void_CDataStream(IntPtr pObject, fromStream_CallBack_void_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setRequestType_CallBack_void_EVWMSRequestType = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType_Function;
							GC.KeepAlive(m_setRequestType_CallBack_void_EVWMSRequestType);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setRequestType_void_EVWMSRequestType(this.NativeObject, m_setRequestType_CallBack_void_EVWMSRequestType);
							m_getRequestType_CallBack_EVWMSRequestType = EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType_Function;
							GC.KeepAlive(m_getRequestType_CallBack_EVWMSRequestType);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getRequestType_EVWMSRequestType(this.NativeObject, m_getRequestType_CallBack_EVWMSRequestType);
							m_getType_CallBack_EVThemeType = EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Function;
							GC.KeepAlive(m_getType_CallBack_EVThemeType);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getType_EVThemeType(this.NativeObject, m_getType_CallBack_EVThemeType);
							m_getCaption_CallBack_EVString = EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Function;
							GC.KeepAlive(m_getCaption_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getCaption_EVString(this.NativeObject, m_getCaption_CallBack_EVString);
							m_setCaption_CallBack_void_EVString = EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Function;
							GC.KeepAlive(m_setCaption_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setCaption_void_EVString(this.NativeObject, m_setCaption_CallBack_void_EVString);
							m_useDefaultSymbol_CallBack_ev_bool = EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Function;
							GC.KeepAlive(m_useDefaultSymbol_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_useDefaultSymbol_ev_bool(this.NativeObject, m_useDefaultSymbol_CallBack_ev_bool);
							m_setUseDefaultSymbol_CallBack_void_ev_bool = EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Function;
							GC.KeepAlive(m_setUseDefaultSymbol_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setUseDefaultSymbol_void_ev_bool(this.NativeObject, m_setUseDefaultSymbol_CallBack_void_ev_bool);
							m_getDefaultSymbol_CallBack_ISymbol = EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Function;
							GC.KeepAlive(m_getDefaultSymbol_CallBack_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_getDefaultSymbol_ISymbol(this.NativeObject, m_getDefaultSymbol_CallBack_ISymbol);
							m_setDefaultSymbol_CallBack_void_ISymbol = EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Function;
							GC.KeepAlive(m_setDefaultSymbol_CallBack_void_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_setDefaultSymbol_void_ISymbol(this.NativeObject, m_setDefaultSymbol_CallBack_void_ISymbol);
							m_equals_CallBack_ev_bool_ITheme = EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Function;
							GC.KeepAlive(m_equals_CallBack_ev_bool_ITheme);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_equals_ev_bool_ITheme(this.NativeObject, m_equals_CallBack_ev_bool_ITheme);
							m_clone_CallBack_ITheme = EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Function;
							GC.KeepAlive(m_clone_CallBack_ITheme);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_clone_ITheme(this.NativeObject, m_clone_CallBack_ITheme);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_toXmlElement_CallBack_CXmlElement = EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Function;
							GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_toXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement);
							m_fromXmlElement_CallBack_void_CXmlElement = EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXmlElement_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromXmlElement_void_CXmlElement(this.NativeObject, m_fromXmlElement_CallBack_void_CXmlElement);
							m_onBeforeQuery_CallBack_void_IFeatureClass_IQueryFilter = EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Function;
							GC.KeepAlive(m_onBeforeQuery_CallBack_void_IFeatureClass_IQueryFilter);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(this.NativeObject, m_onBeforeQuery_CallBack_void_IFeatureClass_IQueryFilter);
							m_onAfterQuery_CallBack_void_IFeatureSelection_IGeometry = EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Function;
							GC.KeepAlive(m_onAfterQuery_CallBack_void_IFeatureSelection_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_onAfterQuery_void_IFeatureSelection_IGeometry(this.NativeObject, m_onAfterQuery_CallBack_void_IFeatureSelection_IGeometry);
							m_fromStream_CallBack_void_CDataStream = EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Function;
							GC.KeepAlive(m_fromStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Theme_CEVWMSVectorTheme_fromStream_void_CDataStream(this.NativeObject, m_fromStream_CallBack_void_CDataStream);
						}
					}
					public override EarthView.World.Spatial.Theme.EVTHEMETYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public override string GetCaption()
					{
						return base.GetCaption_NoVirtual();
					}
					public override void SetCaption(string caption)
					{
						base.SetCaption_NoVirtual(caption);
					}
					public override bool UseDefaultSymbol()
					{
						return base.UseDefaultSymbol_NoVirtual();
					}
					public override void SetUseDefaultSymbol(bool usable)
					{
						base.SetUseDefaultSymbol_NoVirtual(usable);
					}
					public override EarthView.World.Spatial.Display.Isymbol GetDefaultSymbol()
					{
						return base.GetDefaultSymbol_NoVirtual();
					}
					public override void SetDefaultSymbol(EarthView.World.Spatial.Display.Isymbol symbol)
					{
						base.SetDefaultSymbol_NoVirtual(symbol);
					}
					public override void OnBeforeQuery(EarthView.World.Spatial.GeoDataset.Ifeatureclass fc, EarthView.World.Spatial.GeoDataset.Iqueryfilter filter)
					{
						base.OnBeforeQuery_NoVirtual(fc,filter);
					}
					public override void OnAfterQuery(EarthView.World.Spatial.GeoDataset.Ifeatureselection fs, EarthView.World.Spatial.Geometry.Igeometry dst)
					{
						base.OnAfterQuery_NoVirtual(fs,dst);
					}
					public static Evwmsvectortheme FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Evwmsvectortheme obj = baseObj as  Evwmsvectortheme;
						if (object.Equals(obj, null))
						{
							obj = new Evwmsvectortheme(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEVWMSVectorTheme");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EvwmsvectorthemeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Evwmsvectortheme emptyInstance = new Evwmsvectortheme(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
