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
			namespace Download
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
			/// <summary>
			/// EarthView空间服务类
			/// </summary>
			public class Evspatialserver : EarthView.World.Spatial.SpatialServer
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_currentConnectStatus_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否可连接到服务器
				/// </summary>
				/// <returns>如果可以连接，返回true</returns>
				public bool CurrentConnectStatus()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_currentConnectStatus_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 是否可连接到服务器
				/// </summary>
				/// <returns>如果可以连接，返回true</returns>
				public new bool IsConnected_NoVirtual()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否可连接到服务器
				/// </summary>
				/// <returns>如果可以连接，返回true</returns>
				public override bool IsConnected()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 重新连接
				/// </summary>
				/// <returns>重新连接成功，返回true</returns>
				public new bool Reconnect_NoVirtual()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 重新连接
				/// </summary>
				/// <returns>重新连接成功，返回true</returns>
				public override bool Reconnect()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CEVSpatialServer_disConnect_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 断开连接连接
				/// </summary>
				/// <returns></returns>
				public new void DisConnect_NoVirtual()
				{
					EarthView_World_Spatial_CEVSpatialServer_disConnect_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CEVSpatialServer_disConnect_void(IntPtr pNativeObject);

				/// <summary>
				/// 断开连接连接
				/// </summary>
				/// <returns></returns>
				public override void DisConnect()
				{
					EarthView_World_Spatial_CEVSpatialServer_disConnect_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务名称
				/// </summary>
				/// <returns>服务名称</returns>
				public new string GetServerName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务名称
				/// </summary>
				/// <returns>服务名称</returns>
				public override string GetServerName()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务描述
				/// </summary>
				/// <returns>服务描述</returns>
				public new string GetServerAbstract_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务描述
				/// </summary>
				/// <returns>服务描述</returns>
				public override string GetServerAbstract()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务标题
				/// </summary>
				/// <returns>服务标题</returns>
				public new string GetServerTitle_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务标题
				/// </summary>
				/// <returns>服务标题</returns>
				public override string GetServerTitle()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务器地址
				/// </summary>
				/// <returns>服务器地址</returns>
				public new string GetServerUrl_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务器地址
				/// </summary>
				/// <returns>服务器地址</returns>
				public override string GetServerUrl()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getServicePluginFile_CallBack_EVString();

				protected getServicePluginFile_CallBack_EVString m_getServicePluginFile_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务数据下载插件路径
				/// </summary>
				/// <returns>服务器地址</returns>
				public virtual string GetServicePluginFile_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Function()
				{
					string csret=GetServicePluginFile();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取服务数据下载插件路径
				/// </summary>
				/// <returns>服务器地址</returns>
				public virtual string GetServicePluginFile()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源KeyValue参数</returns>
				public new EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Ipropertyset csObj = new EarthView.World.Spatial.GeoDataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IPropertySet");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ipropertyset;
						csObj.BindNativeObject(__ptr, "IPropertySet");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源参数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据源KeyValue参数</returns>
				public override EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Ipropertyset csObj = new EarthView.World.Spatial.GeoDataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IPropertySet");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ipropertyset;
						csObj.BindNativeObject(__ptr, "IPropertySet");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 判断数据源是否有效
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				public new bool IsValid_NoVirtual()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断数据源是否有效
				/// </summary>
				/// <param name=""></param>
				/// <returns>是，返回true;否则，返回false</returns>
				public override bool IsValid()
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="name">指定名称，格式为: 数据名称 + '/' + WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY/MODEL 之一</param>
				/// <returns>数据元信息对象；需要外部释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="name">指定名称，格式为: 数据名称 + '/' + WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY/MODEL 之一</param>
				/// <returns>数据元信息对象；需要外部释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType(IntPtr pNativeObject, string name, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

				/// <summary>
				/// 获取指定类型的元数据
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息对象；需要外部释放</returns>
				public EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo(string name, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType(this.NativeObject, name, type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息集合对象；需要外部释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos_NoVirtual(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(this.NativeObject, type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfos csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfos");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfos;
						csObj.BindNativeObject(__ptr, "IDataMetaInfos");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

				/// <summary>
				/// 获取指定数据集类型的数据元信息
				/// </summary>
				/// <param name="type">数据集类型</param>
				/// <returns>数据元信息集合对象；需要外部释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatametainfos csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataMetaInfos");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfos;
						csObj.BindNativeObject(__ptr, "IDataMetaInfos");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 打开指定数据集名称的数据集
				/// </summary>
				/// <param name="name">指定名称，格式为: 数据名称 + '/' + WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY 之一 </param>
				/// <returns>数据集对象指针，需要外部释放；如果名字不存在，这返回null</returns>
				public new EarthView.World.Spatial.GeoDataset.Idataset OpenDataset_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 打开指定数据集名称的数据集
				/// </summary>
				/// <param name="name">指定名称，格式为: 数据名称 + '/' + WMTS/WMS/WFS/DEM/GEOCODE/KML/GEOMETRY 之一 </param>
				/// <returns>数据集对象指针，需要外部释放；如果名字不存在，这返回null</returns>
				public override EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr dataset);

				/// <summary>
				/// 关闭指定数据集名称的数据集，会删掉数据集指针
				/// </summary>
				/// <param name="name">数据集指针</param>
				/// <returns>成功删除，返回true;否则，返回false</returns>
				public new bool CloseDataset_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset dataset)
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_NoVirtual(this.NativeObject, object.Equals(dataset, null) ? IntPtr.Zero : dataset.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(IntPtr pNativeObject, IntPtr dataset);

				/// <summary>
				/// 关闭指定数据集名称的数据集，会删掉数据集指针
				/// </summary>
				/// <param name="name">数据集指针</param>
				/// <returns>成功删除，返回true;否则，返回false</returns>
				public override bool CloseDataset(EarthView.World.Spatial.GeoDataset.Idataset dataset)
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(this.NativeObject, object.Equals(dataset, null) ? IntPtr.Zero : dataset.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_EVDatasetType(IntPtr pNativeObject, string name, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

				/// <summary>
				/// 打开指定数据集名称的数据集
				/// </summary>
				/// <param name="name">数据集名称</param>
				/// <param name="type">数据集类型</param>
				/// <returns>数据集对象指针，需要外部释放；如果名字不存在，这返回null</returns>
				public EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string name, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_EVDatasetType(this.NativeObject, name, type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源的xml描述
				/// </summary>
				/// <returns>xml描述</returns>
				public new string ToXML_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源的xml描述
				/// </summary>
				/// <returns>xml描述</returns>
				public override string ToXML()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <returns></returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataSource");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csObj.BindNativeObject(__ptr, "IDataSource");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(IntPtr pNativeObject);

				/// <summary>
				/// 深度拷贝
				/// </summary>
				/// <returns></returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource Clone()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataSource");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csObj.BindNativeObject(__ptr, "IDataSource");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getServiceVersion_ev_int32_EVString(IntPtr pNativeObject, ref IntPtr version);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 获取服务版本
				/// </summary>
				/// <param name="version">版本信息</param>
				/// <returns>操作结果类型</returns>
				public int GetServiceVersion(ref string version)
				{
					IntPtr __ptrversion = Marshal.StringToHGlobalAnsi(version);
					IntPtr pTmpversion = __ptrversion;
					
					int ret=EarthView_World_Spatial_CEVSpatialServer_getServiceVersion_ev_int32_EVString(this.NativeObject, ref __ptrversion);
					
					 Marshal.FreeHGlobal(pTmpversion);
					version= Marshal.PtrToStringAnsi(__ptrversion);
					ClassFactory.FreeString(ref __ptrversion);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getServiceFileSet_ev_int32_EVDatasetType_CServerQueryResults(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type, IntPtr queryresult);

				/// <summary>
				/// 获取文件列表
				/// </summary>
				/// <param name="type">服务类型</param>
				/// <param name="queryresult">查询结果对象</param>
				/// <returns>操作结果类型，成功为0，参数错误400，服务操作未实现501，服务应用错误500</returns>
				public int GetServiceFileSet(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type, ref  EarthView.World.Spatial.ServerQueryResults queryresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getServiceFileSet_ev_int32_EVDatasetType_CServerQueryResults(this.NativeObject, type, object.Equals(queryresult, null) ? IntPtr.Zero : queryresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getServiceFileSetFromMetadataCache_ev_int32_EVDatasetType_EVString(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type, ref IntPtr fileSetStr);

				public int GetServiceFileSetFromMetadataCache(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type, ref string fileSetStr)
				{
					IntPtr __ptrfileSetStr = Marshal.StringToHGlobalAnsi(fileSetStr);
					IntPtr pTmpfileSetStr = __ptrfileSetStr;
					
					int ret=EarthView_World_Spatial_CEVSpatialServer_getServiceFileSetFromMetadataCache_ev_int32_EVDatasetType_EVString(this.NativeObject, type, ref __ptrfileSetStr);
					
					 Marshal.FreeHGlobal(pTmpfileSetStr);
					fileSetStr= Marshal.PtrToStringAnsi(__ptrfileSetStr);
					ClassFactory.FreeString(ref __ptrfileSetStr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getWMTSDataset_CEVWMTSDataset_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 打开指定名称的WMS数据集
				/// </summary>
				/// <param name="name">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evwmtsdataset GetWMTSDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getWMTSDataset_CEVWMTSDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwmtsdataset csObj = new EarthView.World.Spatial.Evwmtsdataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWMTSDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwmtsdataset;
						csObj.BindNativeObject(__ptr, "CEVWMTSDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDEMDataset_CEVDEMDataset_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 打开指定名称的DEM数据集
				/// </summary>
				/// <param name="name">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evdemdataset GetDEMDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDEMDataset_CEVDEMDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evdemdataset csObj = new EarthView.World.Spatial.Evdemdataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVDEMDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evdemdataset;
						csObj.BindNativeObject(__ptr, "CEVDEMDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getKMLDataset_CEVKMLDataset_EVString(IntPtr pNativeObject, string filename);

				/// <summary>
				/// 打开指定名称的KML数据集
				/// </summary>
				/// <param name="filename">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evkmldataset GetKMLDataset(string filename)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getKMLDataset_CEVKMLDataset_EVString(this.NativeObject, filename);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evkmldataset csObj = new EarthView.World.Spatial.Evkmldataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVKMLDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evkmldataset;
						csObj.BindNativeObject(__ptr, "CEVKMLDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getGeoCodeDataset_CEVGeoCodeDataset_EVString(IntPtr pNativeObject, string filename);

				/// <summary>
				/// 打开指定名称的地理编码数据集
				/// </summary>
				/// <param name="filename">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evgeocodedataset GetGeoCodeDataset(string filename)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getGeoCodeDataset_CEVGeoCodeDataset_EVString(this.NativeObject, filename);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evgeocodedataset csObj = new EarthView.World.Spatial.Evgeocodedataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVGeoCodeDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evgeocodedataset;
						csObj.BindNativeObject(__ptr, "CEVGeoCodeDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getGeometryDataset_CEVGeometryDataset_EVString(IntPtr pNativeObject, string mapname);

				/// <summary>
				/// 打开指定名称的几何数据集
				/// </summary>
				/// <param name="mapname">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evgeometrydataset GetGeometryDataset(string mapname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getGeometryDataset_CEVGeometryDataset_EVString(this.NativeObject, mapname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evgeometrydataset csObj = new EarthView.World.Spatial.Evgeometrydataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVGeometryDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evgeometrydataset;
						csObj.BindNativeObject(__ptr, "CEVGeometryDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getWFSDataset_CEVWFSDataset_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 打开指定名称的WFS数据集
				/// </summary>
				/// <param name="name">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evwfsdataset GetWFSDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getWFSDataset_CEVWFSDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwfsdataset csObj = new EarthView.World.Spatial.Evwfsdataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWFSDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwfsdataset;
						csObj.BindNativeObject(__ptr, "CEVWFSDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getWMSDataset_CEVWMSDataset_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 打开指定名称的WMS数据集
				/// </summary>
				/// <param name="name">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evwmsdataset GetWMSDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getWMSDataset_CEVWMSDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwmsdataset csObj = new EarthView.World.Spatial.Evwmsdataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWMSDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwmsdataset;
						csObj.BindNativeObject(__ptr, "CEVWMSDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getWMSChartDataset_CEVWMSChartDataset_EVString(IntPtr pNativeObject, string name);

				public EarthView.World.Spatial.Evwmschartdataset GetWMSChartDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getWMSChartDataset_CEVWMSChartDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwmschartdataset csObj = new EarthView.World.Spatial.Evwmschartdataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWMSChartDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwmschartdataset;
						csObj.BindNativeObject(__ptr, "CEVWMSChartDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getWMSImageDataset_CEVWMSImageDataset_EVString(IntPtr pNativeObject, string name);

				public EarthView.World.Spatial.Evwmsimagedataset GetWMSImageDataset(string name)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getWMSImageDataset_CEVWMSImageDataset_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evwmsimagedataset csObj = new EarthView.World.Spatial.Evwmsimagedataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVWMSImageDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evwmsimagedataset;
						csObj.BindNativeObject(__ptr, "CEVWMSImageDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getModelDataset_CEVModelDataset_EVString(IntPtr pNativeObject, string modelname);

				/// <summary>
				/// 打开指定名称的模型数据集
				/// </summary>
				/// <param name="modelname">数据名称</param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.Evmodeldataset GetModelDataset(string modelname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getModelDataset_CEVModelDataset_EVString(this.NativeObject, modelname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evmodeldataset csObj = new EarthView.World.Spatial.Evmodeldataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVModelDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evmodeldataset;
						csObj.BindNativeObject(__ptr, "CEVModelDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getModelTemplateDataset_CEVModelTemplateDataset_EVString(IntPtr pNativeObject, string datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Spatial.Evmodeltemplatedataset GetModelTemplateDataset(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getModelTemplateDataset_CEVModelTemplateDataset_EVString(this.NativeObject, datasetname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evmodeltemplatedataset csObj = new EarthView.World.Spatial.Evmodeltemplatedataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVModelTemplateDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evmodeltemplatedataset;
						csObj.BindNativeObject(__ptr, "CEVModelTemplateDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getSmart3DDataset_CWebSmart3DDataset_EVString(IntPtr pNativeObject, string datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				//EarthView::World::Spatial::CObqWeb7zDataset* getOBQDataset(_in const EVString& datasetname);
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Spatial.WebSmart3DDataset GetSmart3DDataset(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getSmart3DDataset_CWebSmart3DDataset_EVString(this.NativeObject, datasetname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.WebSmart3DDataset csObj = new EarthView.World.Spatial.WebSmart3DDataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWebSmart3DDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.WebSmart3DDataset;
						csObj.BindNativeObject(__ptr, "CWebSmart3DDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getMeshXDataset_CWebMeshXDataset_EVString(IntPtr pNativeObject, string datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Spatial.WebMeshXDataset GetMeshXDataset(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getMeshXDataset_CWebMeshXDataset_EVString(this.NativeObject, datasetname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.WebMeshXDataset csObj = new EarthView.World.Spatial.WebMeshXDataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWebMeshXDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.WebMeshXDataset;
						csObj.BindNativeObject(__ptr, "CWebMeshXDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getMeshXGDataset_CWebMeshXGDataset_EVString(IntPtr pNativeObject, string datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Spatial.WebMeshXGDataset GetMeshXGDataset(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getMeshXGDataset_CWebMeshXGDataset_EVString(this.NativeObject, datasetname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.WebMeshXGDataset csObj = new EarthView.World.Spatial.WebMeshXGDataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWebMeshXGDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.WebMeshXGDataset;
						csObj.BindNativeObject(__ptr, "CWebMeshXGDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getLasDataset_CWebLasDataset_EVString(IntPtr pNativeObject, string datasetname);

				public EarthView.World.Spatial.WebLasDataset GetLasDataset(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getLasDataset_CWebLasDataset_EVString(this.NativeObject, datasetname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.WebLasDataset csObj = new EarthView.World.Spatial.WebLasDataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWebLasDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.WebLasDataset;
						csObj.BindNativeObject(__ptr, "CWebLasDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getVector3DDataset_CWebVector3DDataset_EVString(IntPtr pNativeObject, string datasetname);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Spatial.WebVector3DDataset GetVector3DDataset(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getVector3DDataset_CWebVector3DDataset_EVString(this.NativeObject, datasetname);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.WebVector3DDataset csObj = new EarthView.World.Spatial.WebVector3DDataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWebVector3DDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.WebVector3DDataset;
						csObj.BindNativeObject(__ptr, "CWebVector3DDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getMultimediaDataset_CMultiMedaServiceDataset_EVString(IntPtr pNativeObject, string filename);

				/// <summary>
				/// 
				/// </summary>
				/// <param name="modelname"></param>
				/// <returns>打开的数据集对象指针，无此数据集时返回空</returns>
				public EarthView.World.Spatial.MultiMedaServiceDataset GetMultimediaDataset(string filename)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getMultimediaDataset_CMultiMedaServiceDataset_EVString(this.NativeObject, filename);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.MultiMedaServiceDataset csObj = new EarthView.World.Spatial.MultiMedaServiceDataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMultiMedaServiceDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.MultiMedaServiceDataset;
						csObj.BindNativeObject(__ptr, "CMultiMedaServiceDataset");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(IntPtr pNativeObject);

				/// <summary>
				/// 获取OGCWMTS描述
				/// </summary>
				/// <returns>WMTS属性对象</returns>
				public EarthView.World.Spatial.Wmtsserverinfo GetOGCWMTSCapabilitiesRef()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Wmtsserverinfo csObj = new EarthView.World.Spatial.Wmtsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWMTSServerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Wmtsserverinfo;
						csObj.BindNativeObject(__ptr, "CWMTSServerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getEVWMTSCapabilities_ev_int32_EVString(IntPtr pNativeObject, ref IntPtr value);

				public int GetEVWMTSCapabilities(ref string value)
				{
					IntPtr __ptrvalue = Marshal.StringToHGlobalAnsi(value);
					IntPtr pTmpvalue = __ptrvalue;
					
					int ret=EarthView_World_Spatial_CEVSpatialServer_getEVWMTSCapabilities_ev_int32_EVString(this.NativeObject, ref __ptrvalue);
					
					 Marshal.FreeHGlobal(pTmpvalue);
					value= Marshal.PtrToStringAnsi(__ptrvalue);
					ClassFactory.FreeString(ref __ptrvalue);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getMap_ev_int32_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(IntPtr pNativeObject, string layers, string styles, EarthView.World.Spatial.EVSSCSRS srs, IntPtr maprect, uint width, uint height, string format, byte transparent, int red, int green, int blue, string time, string elevation, IntPtr serverresult);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 获取map信息
				/// </summary>
				/// <param name="layers">图层列表</param>
				/// <param name="styles">风格列表</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="format">图片格式</param>
				/// <param name="transparent">是否透明</param>
				/// <param name="red">红色值</param>
				/// <param name="green">绿色值</param>
				/// <param name="blue">蓝色值</param>
				/// <param name="time">时间</param>
				/// <param name="elevation">高程值</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetMap(string layers, string styles, EarthView.World.Spatial.EVSSCSRS srs, EarthView.World.Spatial.Geometry.Ienvelope maprect, uint width, uint height, string format, bool transparent, int red, int green, int blue, string time, string elevation, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getMap_ev_int32_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(this.NativeObject, layers, styles, srs, object.Equals(maprect, null) ? IntPtr.Zero : maprect.NativeObject, width, height, format, Convert.ToByte(transparent), red, green, blue, time, elevation, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getWMSFeatureInfo_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_uint32_ev_int32_ev_int32_EVString(IntPtr pNativeObject, string layers, EarthView.World.Spatial.EVSSCSRS srs, IntPtr maprect, uint width, uint height, string infoformat, uint featurecount, int x, int y, ref IntPtr value);

				/// <summary>
				/// 获取FeatureInfo信息
				/// </summary>
				/// <param name="layers">图层列表</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="querylayers">查询图层</param>
				/// <param name="infoformat">数据格式</param>
				/// <param name="featurecount">每次最多返回的Feature数</param>
				/// <param name="x">图片像素x值</param>
				/// <param name="y">图片像素y值</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetWMSFeatureInfo(string layers, EarthView.World.Spatial.EVSSCSRS srs, EarthView.World.Spatial.Geometry.Ienvelope maprect, uint width, uint height, string infoformat, uint featurecount, int x, int y, ref string value)
				{
					IntPtr __ptrvalue = Marshal.StringToHGlobalAnsi(value);
					IntPtr pTmpvalue = __ptrvalue;
					
					int ret=EarthView_World_Spatial_CEVSpatialServer_getWMSFeatureInfo_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_uint32_ev_int32_ev_int32_EVString(this.NativeObject, layers, srs, object.Equals(maprect, null) ? IntPtr.Zero : maprect.NativeObject, width, height, infoformat, featurecount, x, y, ref __ptrvalue);
					
					 Marshal.FreeHGlobal(pTmpvalue);
					value= Marshal.PtrToStringAnsi(__ptrvalue);
					ClassFactory.FreeString(ref __ptrvalue);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getLayerLegend_ev_int32_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(IntPtr pNativeObject, string layer, uint legendwidth, uint legendheight, IntPtr serverresult);

				/// <summary>
				/// 获取图例信息
				/// </summary>
				/// <param name="layer">图层</param>
				/// <param name="legendwidth">图例宽度</param>
				/// <param name="legendheight">图利高度</param>
				/// <param name="serverresult">结果</param>
				/// <returns>操作结果类型</returns>
				public int GetLayerLegend(string layer, uint legendwidth, uint legendheight, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getLayerLegend_ev_int32_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(this.NativeObject, layer, legendwidth, legendheight, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getQueryMap_ev_int32_EVString_ISymbol_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerSearchCondition_EVString_CMemoryStreamResult(IntPtr pNativeObject, string layers, IntPtr symbol, EarthView.World.Spatial.EVSSCSRS srs, IntPtr maprect, uint width, uint height, IntPtr conditions, string format, IntPtr serverresult);

				/// <summary>
				/// 获取查询图层信息
				/// </summary>
				/// <param name="layers">图层列表</param>
				/// <param name="symbol">风格</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="conditions">查询条件</param>
				/// <param name="format">图片格式</param>
				/// <param name="serverresult">结果</param>
				/// <returns>操作结果类型</returns>
				public int GetQueryMap(string layers, EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.EVSSCSRS srs, EarthView.World.Spatial.Geometry.Ienvelope maprect, uint width, uint height, EarthView.World.Spatial.ServerSearchCondition conditions, string format, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getQueryMap_ev_int32_EVString_ISymbol_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerSearchCondition_EVString_CMemoryStreamResult(this.NativeObject, layers, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, srs, object.Equals(maprect, null) ? IntPtr.Zero : maprect.NativeObject, width, height, object.Equals(conditions, null) ? IntPtr.Zero : conditions.NativeObject, format, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_convertToLngLat_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerPointList_CServerPointList(IntPtr pNativeObject, string map, EarthView.World.Spatial.EVSSCSRS srs, IntPtr maprect, uint width, uint height, IntPtr pointlist, IntPtr outpointlist);

				/// <summary>
				/// 像素点转换为实际点
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="srs">投影类型</param>
				/// <param name="maprect">数据范围</param>
				/// <param name="imgrect">图片范围</param>
				/// <param name="pointlist">像素点串对象</param>
				/// <param name="outpointlist">实际坐标点串</param>
				/// <returns>操作结果类型</returns>
				public int ConvertToLngLat(string map, EarthView.World.Spatial.EVSSCSRS srs, EarthView.World.Spatial.Geometry.Ienvelope maprect, uint width, uint height, EarthView.World.Spatial.ServerPointList pointlist, ref  EarthView.World.Spatial.ServerPointList outpointlist)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_convertToLngLat_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerPointList_CServerPointList(this.NativeObject, map, srs, object.Equals(maprect, null) ? IntPtr.Zero : maprect.NativeObject, width, height, object.Equals(pointlist, null) ? IntPtr.Zero : pointlist.NativeObject, object.Equals(outpointlist, null) ? IntPtr.Zero : outpointlist.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getOGCWMSCapabilitiesRef_CWMSServerInfo(IntPtr pNativeObject);

				/// <summary>
				/// 获取OGCWMS信息
				/// </summary>
				/// <param name="wmsInfo">OGCWMS信息</param>
				/// <returns>WMS属性对象</returns>
				public EarthView.World.Spatial.Wmsserverinfo GetOGCWMSCapabilitiesRef()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getOGCWMSCapabilitiesRef_CWMSServerInfo(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Wmsserverinfo csObj = new EarthView.World.Spatial.Wmsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWMSServerInfo");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Wmsserverinfo;
						csObj.BindNativeObject(__ptr, "CWMSServerInfo");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getEVWMSCapabilities_ev_int32_EVString(IntPtr pNativeObject, ref IntPtr value);

				public int GetEVWMSCapabilities(ref string value)
				{
					IntPtr __ptrvalue = Marshal.StringToHGlobalAnsi(value);
					IntPtr pTmpvalue = __ptrvalue;
					
					int ret=EarthView_World_Spatial_CEVSpatialServer_getEVWMSCapabilities_ev_int32_EVString(this.NativeObject, ref __ptrvalue);
					
					 Marshal.FreeHGlobal(pTmpvalue);
					value= Marshal.PtrToStringAnsi(__ptrvalue);
					ClassFactory.FreeString(ref __ptrvalue);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getWMSChart_ev_int32_EVString_EVString_EVString_EVString_ev_int32_ev_int32_EVString_EVString_EVString_EVString_EVString_CMemoryStreamResult(IntPtr pNativeObject, string layer, string srs, string bBox, string format, int width, int height, string displayMode, string colorMode, string symbolMode, string isobath, string annotationMode, IntPtr serverresult);

				public int GetWMSChart(string layer, string srs, string bBox, string format, int width, int height, string displayMode, string colorMode, string symbolMode, string isobath, string annotationMode, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getWMSChart_ev_int32_EVString_EVString_EVString_EVString_ev_int32_ev_int32_EVString_EVString_EVString_EVString_EVString_CMemoryStreamResult(this.NativeObject, layer, srs, bBox, format, width, height, displayMode, colorMode, symbolMode, isobath, annotationMode, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getWMSImage_ev_int32_EVString_EVString_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(IntPtr pNativeObject, string imageName, string bBOX, int width, int height, string SRS, string format, IntPtr serverresult);

				public int GetWMSImage(string imageName, string bBOX, int width, int height, string SRS, string format, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getWMSImage_ev_int32_EVString_EVString_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(this.NativeObject, imageName, bBOX, width, height, SRS, format, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getQueryAttribute_ev_int32_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(IntPtr pNativeObject, string layer, IntPtr condition, int startrecord, int recordcount, IntPtr recordset);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 获取查询属性（针对单一图层）
				/// </summary>
				/// <param name="layer">图层名称</param>
				/// <param name="condition">查询条件</param>
				/// <param name="startrecord">开始记录索引</param>
				/// <param name="recordcount">每次返回记录数</param>
				/// <param name="recordset">查询结果集</param>
				/// <returns>操作结果类型</returns>
				public int GetQueryAttribute(string layer, EarthView.World.Spatial.ServerSearchCondition condition, int startrecord, int recordcount, ref  EarthView.World.Spatial.ServerSet recordset)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getQueryAttribute_ev_int32_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(this.NativeObject, layer, object.Equals(condition, null) ? IntPtr.Zero : condition.NativeObject, startrecord, recordcount, object.Equals(recordset, null) ? IntPtr.Zero : recordset.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getLayerAttributeValue_ev_int32_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(IntPtr pNativeObject, string querylayers, uint featurecount, double x, double y, string fieldname, IntPtr queryresult);

				/// <summary>
				/// 获取图层属性
				/// </summary>
				/// <param name="querylayer">查询图层</param>
				/// <param name="featurecount">每次返回要素数</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <param name="fieldname">查询字段名</param>
				/// <param name="queryresult">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetLayerAttributeValue(string querylayers, uint featurecount, double x, double y, string fieldname, ref  EarthView.World.Spatial.ServerQueryResults queryresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getLayerAttributeValue_ev_int32_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(this.NativeObject, querylayers, featurecount, x, y, fieldname, object.Equals(queryresult, null) ? IntPtr.Zero : queryresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getUniqueFieldValue_ev_int32_EVString_EVString_CServerQueryResults(IntPtr pNativeObject, string querylayer, string fieldname, IntPtr queryresult);

				/// <summary>
				/// 获取图层某唯一属性的属性值
				/// </summary>
				/// <param name="querylayer">查询图层</param>
				/// <param name="fieldname">字段名</param>
				/// <param name="valuelist">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetUniqueFieldValue(string querylayer, string fieldname, ref  EarthView.World.Spatial.ServerQueryResults queryresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getUniqueFieldValue_ev_int32_EVString_EVString_CServerQueryResults(this.NativeObject, querylayer, fieldname, object.Equals(queryresult, null) ? IntPtr.Zero : queryresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getLayerFeature_ev_int32_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(IntPtr pNativeObject, string layer, byte hasgeometry, byte hasattribute, string attributenames, IntPtr feature);

				/// <summary>
				/// 获取图层要素
				/// </summary>
				/// <param name="layer">图层名</param>
				/// <param name="featureid">要素ID</param>
				/// <param name="hasgeometry">要素包含几何对象</param>
				/// <param name="hasattribute">要素包含属性</param>
				/// <param name="geomformat">几何对象格式</param>
				/// <param name="attributenames">属性列表</param>
				/// <param name="feature">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetLayerFeature(string layer, bool hasgeometry, bool hasattribute, string attributenames, ref EarthView.World.Spatial.Evwebfeature feature)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getLayerFeature_ev_int32_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(this.NativeObject, layer, Convert.ToByte(hasgeometry), Convert.ToByte(hasattribute), attributenames, object.Equals(feature, null) ? IntPtr.Zero : feature.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getSearchGeometry_ev_int32_EVString_CServerSearchCondition_CGeometryList(IntPtr pNativeObject, string layer, IntPtr condition, IntPtr geometrylist);

				/// <summary>
				/// 获取几何对象
				/// </summary>
				/// <param name="layer">图层名</param>
				/// <param name="condition">查询条件D</param>
				/// <param name="geometrylist">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetSearchGeometry(string layer, EarthView.World.Spatial.ServerSearchCondition condition, ref  EarthView.World.Spatial.GeometryList geometrylist)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getSearchGeometry_ev_int32_EVString_CServerSearchCondition_CGeometryList(this.NativeObject, layer, object.Equals(condition, null) ? IntPtr.Zero : condition.NativeObject, object.Equals(geometrylist, null) ? IntPtr.Zero : geometrylist.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_buffer_ev_int32_EVString_CGeometryList_ev_real64_ev_bool_CGeometryList(IntPtr pNativeObject, string map, IntPtr geometrylist, double distance, byte isunion, IntPtr result_geometrylist);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 获取缓冲区对象
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometrylist">选择要素列表</param>
				/// <param name="distance">缓冲距离</param>
				/// <param name="isunion">结果是否融合</param>
				/// <param name="result_geometrylist">处理结果</param>
				/// <returns>操作结果类型</returns>
				public int Buffer(string map, EarthView.World.Spatial.GeometryList geometrylist, double distance, bool isunion, ref  EarthView.World.Spatial.GeometryList result_geometrylist)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_buffer_ev_int32_EVString_CGeometryList_ev_real64_ev_bool_CGeometryList(this.NativeObject, map, object.Equals(geometrylist, null) ? IntPtr.Zero : geometrylist.NativeObject, distance, Convert.ToByte(isunion), object.Equals(result_geometrylist, null) ? IntPtr.Zero : result_geometrylist.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_contains_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1是否包含geometry2
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Contains(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_contains_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_crosses_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1和geometry2是否相跨
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Crosses(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_crosses_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_disjoint_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1和geometry2相离
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Disjoint(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_disjoint_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_distance_ev_int32_EVString_IGeometry_IGeometry_ev_real64(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref double result);

				/// <summary>
				/// 查看geometri1和geometry2的距离
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Distance(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref double result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_distance_ev_int32_EVString_IGeometry_IGeometry_ev_real64(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_intersects_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1和geometry2是否相交
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Intersects(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_intersects_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_overlaps_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1是否压盖geometry2
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Overlaps(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_overlaps_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_touches_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1和geometry2是否相接
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Touches(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_touches_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_within_ev_int32_EVString_IGeometry_IGeometry_ev_bool(IntPtr pNativeObject, string map, IntPtr geometry1, IntPtr geometry2, ref bool result);

				/// <summary>
				/// 查看geometri1是否在geometry2内部
				/// </summary>
				/// <param name="map">图层名</param>
				/// <param name="geometry1">几何对象1</param>
				/// <param name="geometry2">几何对象2</param>
				/// <param name="result">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int Within(string map, EarthView.World.Spatial.Geometry.Igeometry geometry1, EarthView.World.Spatial.Geometry.Igeometry geometry2, ref bool result)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_within_ev_int32_EVString_IGeometry_IGeometry_ev_bool(this.NativeObject, map, object.Equals(geometry1, null) ? IntPtr.Zero : geometry1.NativeObject, object.Equals(geometry2, null) ? IntPtr.Zero : geometry2.NativeObject, ref result);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getGeoCodeFile_ev_int32_EVString_EVString_CMemoryStreamResult(IntPtr pNativeObject, string placename, string dataname, IntPtr serverresult);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 获取地理编码文件
				/// </summary>
				/// <param name="placename">地名</param>
				/// <param name="dataname">数据名</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetGeoCodeFile(string placename, string dataname, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getGeoCodeFile_ev_int32_EVString_EVString_CMemoryStreamResult(this.NativeObject, placename, dataname, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_queryPlacename_ev_int32_EVString_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(IntPtr pNativeObject, string layername, string namefield, string keyword, byte blurquery, int limitcount, IntPtr resultlist);

				/// <summary>
				/// 查询地名
				/// </summary>
				/// <param name="layername">图层名</param>
				/// <param name="namefield">名称字段名</param>
				/// <param name="keyword">关键字</param>
				/// <param name="blurquery">是否模糊查询</param>
				/// <param name="limitcount">最多返回结果</param>
				/// <param name="resultlist">查询结果列表</param>
				/// <returns>操作结果类型</returns>
				public int QueryPlacename(string layername, string namefield, string keyword, bool blurquery, int limitcount, ref  EarthView.World.Spatial.PlaceNameList resultlist)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_queryPlacename_ev_int32_EVString_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(this.NativeObject, layername, namefield, keyword, Convert.ToByte(blurquery), limitcount, object.Equals(resultlist, null) ? IntPtr.Zero : resultlist.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getKMLFile_ev_int32_EVString_EVString_CMemoryStreamResult(IntPtr pNativeObject, string filename, string dataName, IntPtr serverresult);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 获取KML文件
				/// </summary>
				/// <param name="filename">文件名</param>
				/// <param name="dataName">数据名1</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetKMLFile(string filename, string dataName, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getKMLFile_ev_int32_EVString_EVString_CMemoryStreamResult(this.NativeObject, filename, dataName, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getDEMFile_ev_int32_EVString_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(IntPtr pNativeObject, string filename, int level, int row, int col, IntPtr serverresult);

				/// <summary>
				/// 获取场景文件
				/// </summary>
				/// <param name="filename">图层名</param>
				/// <param name="dataName">数据名</param>
				/// <param name="stream">查询结果</param>
				/// <returns>操作结果类型</returns>
				//ev_int32 getSceneFile(_in const EVString filename,_in const EVString dataName,_out CMemoryDataStream& stream);
				/// <summary>
				/// 获取DEM文件
				/// </summary>
				/// <param name="filename">图层名</param>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="serverresult">查询结果</param>
				/// <returns>操作结果类型</returns>
				public int GetDEMFile(string filename, int level, int row, int col, ref  EarthView.World.Spatial.MemoryStreamResult serverresult)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getDEMFile_ev_int32_EVString_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(this.NativeObject, filename, level, row, col, object.Equals(serverresult, null) ? IntPtr.Zero : serverresult.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getEntityObject_ev_int32_CServerEntityObject(IntPtr pNativeObject, IntPtr entityObject);

				public int GetEntityObject(ref EarthView.World.Spatial.ServerEntityObject entityObject)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getEntityObject_ev_int32_CServerEntityObject(this.NativeObject, object.Equals(entityObject, null) ? IntPtr.Zero : entityObject.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getMesh_ev_int32_CServerMeshObject(IntPtr pNativeObject, IntPtr meshObject);

				public int GetMesh(ref EarthView.World.Spatial.ServerMeshObject meshObject)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getMesh_ev_int32_CServerMeshObject(this.NativeObject, object.Equals(meshObject, null) ? IntPtr.Zero : meshObject.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getResource_ev_int32_CServerResourceObject(IntPtr pNativeObject, IntPtr resourceObject);

				public int GetResource(ref EarthView.World.Spatial.ServerResourceObject resourceObject)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getResource_ev_int32_CServerResourceObject(this.NativeObject, object.Equals(resourceObject, null) ? IntPtr.Zero : resourceObject.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getResourceByID_ev_int32_CServerResourceObject(IntPtr pNativeObject, IntPtr resourceObject);

				public int GetResourceByID(ref EarthView.World.Spatial.ServerResourceObject resourceObject)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getResourceByID_ev_int32_CServerResourceObject(this.NativeObject, object.Equals(resourceObject, null) ? IntPtr.Zero : resourceObject.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getOrigTexture_ev_int32_CServerOrigTexture(IntPtr pNativeObject, IntPtr origTexture);

				public int GetOrigTexture(ref EarthView.World.Spatial.ServerOrigTexture origTexture)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getOrigTexture_ev_int32_CServerOrigTexture(this.NativeObject, object.Equals(origTexture, null) ? IntPtr.Zero : origTexture.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getTemplateEntityObject_ev_int32_CServerTemplateEntityObject(IntPtr pNativeObject, IntPtr entityObject);

				public int GetTemplateEntityObject(ref EarthView.World.Spatial.ServerTemplateEntityObject entityObject)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getTemplateEntityObject_ev_int32_CServerTemplateEntityObject(this.NativeObject, object.Equals(entityObject, null) ? IntPtr.Zero : entityObject.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getTemplateResourceByID_ev_int32_CServerResourceObject(IntPtr pNativeObject, IntPtr resourceObject);

				public int GetTemplateResourceByID(ref EarthView.World.Spatial.ServerResourceObject resourceObject)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getTemplateResourceByID_ev_int32_CServerResourceObject(this.NativeObject, object.Equals(resourceObject, null) ? IntPtr.Zero : resourceObject.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CEVSpatialServer_setValid_void_ev_bool(IntPtr pNativeObject, byte b);

				public void SetValid(bool b)
				{
					EarthView_World_Spatial_CEVSpatialServer_setValid_void_ev_bool(this.NativeObject, Convert.ToByte(b));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServer_getDatasetType_EVString_EVString(IntPtr pNativeObject, string datasetname);

				/// <summary>
				/// 通过数据集名称（不带数据集类型的，如 dem90非dem90/DEM）获取数据集类型
				/// </summary>
				/// <param name="datasetname">数据集名称</param>
				/// <returns>数据集类型，如果没有给的的数据集，返回空</returns>
				public string GetDatasetType(string datasetname)
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServer_getDatasetType_EVString_EVString(this.NativeObject, datasetname);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getMediaFileLength_ev_int32_EVString_EVString_ev_int64(IntPtr pNativeObject, string flename, string filetype, ref long fileLength);

				//////////////////////////////////////////////////////////////////////////////////////////////////////
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public int GetMediaFileLength(string flename, string filetype, ref long fileLength)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getMediaFileLength_ev_int32_EVString_EVString_ev_int64(this.NativeObject, flename, filetype, ref fileLength);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getMediaFile_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string flename, string filetype, IntPtr fileData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public int GetMediaFile(string flename, string filetype, EarthView.World.Core.MemoryDataStreamPtr fileData)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getMediaFile_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, flename, filetype, object.Equals(fileData, null) ? IntPtr.Zero : fileData.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Spatial_CEVSpatialServer_getMediaFileByOffset_ev_int32_EVString_EVString_ev_int64_ev_int64_MemoryDataStreamPtr(IntPtr pNativeObject, string flename, string filetype, long offset, long length, IntPtr fileData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public int GetMediaFileByOffset(string flename, string filetype, long offset, long length, EarthView.World.Core.MemoryDataStreamPtr fileData)
				{
					int ret=EarthView_World_Spatial_CEVSpatialServer_getMediaFileByOffset_ev_int32_EVString_EVString_ev_int64_ev_int64_MemoryDataStreamPtr(this.NativeObject, flename, filetype, offset, length, object.Equals(fileData, null) ? IntPtr.Zero : fileData.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadEvspatialserver = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CEVSpatialServer", new EvspatialserverClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CEVSpatialServerProxy", new EvspatialserverClassFactory());

				public Evspatialserver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(IntPtr pObject, getServicePluginFile_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(IntPtr pObject, getServerName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(IntPtr pObject, getServerAbstract_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(IntPtr pObject, getServerTitle_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(IntPtr pObject, getServerUrl_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(IntPtr pObject, isConnected_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(IntPtr pObject, reconnect_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_disConnect_void(IntPtr pObject, disConnect_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(IntPtr pObject, getPropertySet_CallBack_IPropertySet pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pObject, getDatasetInfo_CallBack_IDataMetaInfo_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pObject, getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pObject, createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(IntPtr pObject, openDataset_CallBack_IDataset_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString(IntPtr pObject, deleteDataset_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(IntPtr pObject, closeDataset_CallBack_ev_bool_IDataset pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(IntPtr pObject, clone_CallBack_IDataSource pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getServicePluginFile_CallBack_EVString = EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Function;
						GC.KeepAlive(m_getServicePluginFile_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(this.NativeObject, m_getServicePluginFile_CallBack_EVString);
						m_getServerName_CallBack_EVString = EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Function;
						GC.KeepAlive(m_getServerName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(this.NativeObject, m_getServerName_CallBack_EVString);
						m_getServerAbstract_CallBack_EVString = EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Function;
						GC.KeepAlive(m_getServerAbstract_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(this.NativeObject, m_getServerAbstract_CallBack_EVString);
						m_getServerTitle_CallBack_EVString = EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Function;
						GC.KeepAlive(m_getServerTitle_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(this.NativeObject, m_getServerTitle_CallBack_EVString);
						m_getServerUrl_CallBack_EVString = EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Function;
						GC.KeepAlive(m_getServerUrl_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(this.NativeObject, m_getServerUrl_CallBack_EVString);
						m_isConnected_CallBack_ev_bool = EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Function;
						GC.KeepAlive(m_isConnected_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(this.NativeObject, m_isConnected_CallBack_ev_bool);
						m_reconnect_CallBack_ev_bool = EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Function;
						GC.KeepAlive(m_reconnect_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(this.NativeObject, m_reconnect_CallBack_ev_bool);
						m_disConnect_CallBack_void = EarthView_World_Spatial_CSpatialServer_disConnect_void_Function;
						GC.KeepAlive(m_disConnect_CallBack_void);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_disConnect_void(this.NativeObject, m_disConnect_CallBack_void);
						m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_Function;
						GC.KeepAlive(m_getType_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
						m_getPropertySet_CallBack_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_Function;
						GC.KeepAlive(m_getPropertySet_CallBack_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(this.NativeObject, m_getPropertySet_CallBack_IPropertySet);
						m_isValid_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_Function;
						GC.KeepAlive(m_isValid_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
						m_getDatasetInfo_CallBack_IDataMetaInfo_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_Function;
						GC.KeepAlive(m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
						m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Function;
						GC.KeepAlive(m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
						m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Function;
						GC.KeepAlive(m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
						m_openDataset_CallBack_IDataset_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_Function;
						GC.KeepAlive(m_openDataset_CallBack_IDataset_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(this.NativeObject, m_openDataset_CallBack_IDataset_EVString);
						m_deleteDataset_CallBack_ev_bool_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_Function;
						GC.KeepAlive(m_deleteDataset_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString(this.NativeObject, m_deleteDataset_CallBack_ev_bool_EVString);
						m_closeDataset_CallBack_ev_bool_IDataset = EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_Function;
						GC.KeepAlive(m_closeDataset_CallBack_ev_bool_IDataset);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(this.NativeObject, m_closeDataset_CallBack_ev_bool_IDataset);
						m_toXML_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_Function;
						GC.KeepAlive(m_toXML_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
						m_clone_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_Function;
						GC.KeepAlive(m_clone_CallBack_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(this.NativeObject, m_clone_CallBack_IDataSource);
					}
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override int GetType()
				{
					return base.GetType_NoVirtual();
				}
				public override EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
				{
					return base.CreateFeatureClass_NoVirtual(name,ref geofield,fields);
				}
				public override bool DeleteDataset(string name)
				{
					return base.DeleteDataset_NoVirtual(name);
				}
				public static Evspatialserver FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Evspatialserver obj = baseObj as  Evspatialserver;
					if (object.Equals(obj, null))
					{
						obj = new Evspatialserver(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CEVSpatialServer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EvspatialserverClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Evspatialserver emptyInstance = new Evspatialserver(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
