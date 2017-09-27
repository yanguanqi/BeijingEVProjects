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
			namespace SystemUI
			{
				public enum EV_MENUTYPE
				{
								MT_Operation_2D = 1
				
				}

				public class Imenu : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate uint getType_CallBack_ev_uint32();

					protected getType_CallBack_ev_uint32 m_getType_CallBack_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取菜单类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					public virtual uint GetType_NoVirtual()
					{
						uint ret=EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  uint EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Function()
					{
						uint csret=GetType();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取菜单类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					public virtual uint GetType()
					{
						uint ret=EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取菜单名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取菜单名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setName_CallBack_void_EVString(ref IntPtr name);

					protected setName_CallBack_void_EVString m_setName_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置菜单名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public virtual void SetName_NoVirtual(string name)
					{
						EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_NoVirtual(this.NativeObject, name);
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						SetName(strname);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置菜单名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public virtual void SetName(string name)
					{
						EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(this.NativeObject, name);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isEnabled_CallBack_ev_bool();

					protected isEnabled_CallBack_ev_bool m_isEnabled_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 检测是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可用则返回true,反之则否</returns>
					public virtual bool IsEnabled_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Function()
					{
						bool csret=IsEnabled();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 检测是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可用则返回true,反之则否</returns>
					public virtual bool IsEnabled()
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setEnabled_CallBack_void_ev_bool(bool enable);

					protected setEnabled_CallBack_void_ev_bool m_setEnabled_CallBack_void_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte enable);

					/// <summary>
					/// 设置是否可用
					/// </summary>
					/// <param name="enable">如果为true,则菜单可用,反之则否</param>
					/// <returns></returns>
					public virtual void SetEnabled_NoVirtual(bool enable)
					{
						EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(enable));
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Function(bool enable)
					{
						SetEnabled(enable);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(IntPtr pNativeObject, byte enable);

					/// <summary>
					/// 设置是否可用
					/// </summary>
					/// <param name="enable">如果为true,则菜单可用,反之则否</param>
					/// <returns></returns>
					public virtual void SetEnabled(bool enable)
					{
						EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(this.NativeObject, Convert.ToByte(enable));
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte appendItem_CallBack_ev_bool_ICommand(IntPtr ref_command);

					protected appendItem_CallBack_ev_bool_ICommand m_appendItem_CallBack_ev_bool_ICommand;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_NoVirtual(IntPtr pNativeObject, IntPtr ref_command);

					/// <summary>
					/// 追加一个命令项
					/// </summary>
					/// <param name="command">待追加的命令项</param>
					/// <returns></returns>
					public virtual bool AppendItem_NoVirtual(EarthView.World.Spatial.SystemUI.Icommand ref_command)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_NoVirtual(this.NativeObject, object.Equals(ref_command, null) ? IntPtr.Zero : ref_command.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Function(IntPtr ref_command)
					{
						EarthView.World.Spatial.SystemUI.Icommand csobj_ref_command = new EarthView.World.Spatial.SystemUI.Icommand(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_command.BindNativeObject(ref_command,"ICommand");
						csobj_ref_command.Delegate = true;
						IClassFactory csobj_ref_commandClassFactory = GlobalClassFactoryMap.Get(csobj_ref_command.GetCppInstanceTypeName());
						if (csobj_ref_commandClassFactory != null)
						{
							csobj_ref_command.Delegate = true;
							csobj_ref_command = csobj_ref_commandClassFactory.Create() as EarthView.World.Spatial.SystemUI.Icommand;
							csobj_ref_command.BindNativeObject(ref_command, "ICommand");
							csobj_ref_command.Delegate = true;
						}
						
						bool csret=AppendItem(csobj_ref_command);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(IntPtr pNativeObject, IntPtr ref_command);

					/// <summary>
					/// 追加一个命令项
					/// </summary>
					/// <param name="command">待追加的命令项</param>
					/// <returns></returns>
					public virtual bool AppendItem(EarthView.World.Spatial.SystemUI.Icommand ref_command)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(this.NativeObject, object.Equals(ref_command, null) ? IntPtr.Zero : ref_command.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte insertItem_CallBack_ev_bool_ev_uint32_ICommand(uint index, IntPtr ref_command);

					protected insertItem_CallBack_ev_bool_ev_uint32_ICommand m_insertItem_CallBack_ev_bool_ev_uint32_ICommand;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_NoVirtual(IntPtr pNativeObject, uint index, IntPtr ref_command);

					/// <summary>
					/// 添加命令项
					/// </summary>
					/// <param name="index">待插入的位置</param>
					/// <param name="command">待插入的命令项</param>
					/// <returns></returns>
					public virtual bool InsertItem_NoVirtual(uint index, EarthView.World.Spatial.SystemUI.Icommand ref_command)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_NoVirtual(this.NativeObject, index, object.Equals(ref_command, null) ? IntPtr.Zero : ref_command.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Function(uint index, IntPtr ref_command)
					{
						EarthView.World.Spatial.SystemUI.Icommand csobj_ref_command = new EarthView.World.Spatial.SystemUI.Icommand(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_command.BindNativeObject(ref_command,"ICommand");
						csobj_ref_command.Delegate = true;
						IClassFactory csobj_ref_commandClassFactory = GlobalClassFactoryMap.Get(csobj_ref_command.GetCppInstanceTypeName());
						if (csobj_ref_commandClassFactory != null)
						{
							csobj_ref_command.Delegate = true;
							csobj_ref_command = csobj_ref_commandClassFactory.Create() as EarthView.World.Spatial.SystemUI.Icommand;
							csobj_ref_command.BindNativeObject(ref_command, "ICommand");
							csobj_ref_command.Delegate = true;
						}
						
						bool csret=InsertItem(index, csobj_ref_command);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(IntPtr pNativeObject, uint index, IntPtr ref_command);

					/// <summary>
					/// 添加命令项
					/// </summary>
					/// <param name="index">待插入的位置</param>
					/// <param name="command">待插入的命令项</param>
					/// <returns></returns>
					public virtual bool InsertItem(uint index, EarthView.World.Spatial.SystemUI.Icommand ref_command)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(this.NativeObject, index, object.Equals(ref_command, null) ? IntPtr.Zero : ref_command.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate uint getItemCount_CallBack_ev_uint32();

					protected getItemCount_CallBack_ev_uint32 m_getItemCount_CallBack_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取命令项的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					public virtual uint GetItemCount_NoVirtual()
					{
						uint ret=EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  uint EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Function()
					{
						uint csret=GetItemCount();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取命令项的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					public virtual uint GetItemCount()
					{
						uint ret=EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte removeItem_CallBack_ev_bool_ev_uint32(uint index);

					protected removeItem_CallBack_ev_bool_ev_uint32 m_removeItem_CallBack_ev_bool_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 移除指定索引处的命令项
					/// </summary>
					/// <param name="index">待移除的命令项的索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					public virtual bool RemoveItem_NoVirtual(uint index)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_NoVirtual(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Function(uint index)
					{
						bool csret=RemoveItem(index);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 移除指定索引处的命令项
					/// </summary>
					/// <param name="index">待移除的命令项的索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					public virtual bool RemoveItem(uint index)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getItem_CallBack_IItem_ev_uint32(uint index);

					protected getItem_CallBack_IItem_ev_uint32 m_getItem_CallBack_IItem_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取指定索引处的显示项
					/// </summary>
					/// <param name="index">命令项的索引</param>
					/// <returns>命令项</returns>
					public virtual EarthView.World.Spatial.SystemUI.Iitem GetItem_NoVirtual(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_NoVirtual(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Iitem csObj = new EarthView.World.Spatial.SystemUI.Iitem(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IItem");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Iitem;
							csObj.BindNativeObject(__ptr, "IItem");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Function(uint index)
					{
						EarthView.World.Spatial.SystemUI.Iitem csret=GetItem(index);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取指定索引处的显示项
					/// </summary>
					/// <param name="index">命令项的索引</param>
					/// <returns>命令项</returns>
					public virtual EarthView.World.Spatial.SystemUI.Iitem GetItem(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Iitem csObj = new EarthView.World.Spatial.SystemUI.Iitem(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IItem");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Iitem;
							csObj.BindNativeObject(__ptr, "IItem");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void clear_CallBack_void();

					protected clear_CallBack_void m_clear_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_clear_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有的菜单项
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void Clear_NoVirtual()
					{
						EarthView_World_Spatial_SystemUI_IMenu_clear_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IMenu_clear_void_Function()
					{
						Clear();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有的菜单项
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void Clear()
					{
						EarthView_World_Spatial_SystemUI_IMenu_clear_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte appendSeperator_CallBack_ev_bool();

					protected appendSeperator_CallBack_ev_bool m_appendSeperator_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 添加分隔符
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual bool AppendSeperator_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Function()
					{
						bool csret=AppendSeperator();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 添加分隔符
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual bool AppendSeperator()
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte insertSeperator_CallBack_ev_bool_ev_uint32(uint index);

					protected insertSeperator_CallBack_ev_bool_ev_uint32 m_insertSeperator_CallBack_ev_bool_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 插入分隔符
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns></returns>
					public virtual bool InsertSeperator_NoVirtual(uint index)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_NoVirtual(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Function(uint index)
					{
						bool csret=InsertSeperator(index);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 插入分隔符
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns></returns>
					public virtual bool InsertSeperator(uint index)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr appendSubMenu_CallBack_IMenu();

					protected appendSubMenu_CallBack_IMenu m_appendSubMenu_CallBack_IMenu;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 追加子菜单
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu AppendSubMenu_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Function()
					{
						EarthView.World.Spatial.SystemUI.Imenu csret=AppendSubMenu();
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(IntPtr pNativeObject);

					/// <summary>
					/// 追加子菜单
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu AppendSubMenu()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr insertSubMenu_CallBack_IMenu_ev_uint32(uint index);

					protected insertSubMenu_CallBack_IMenu_ev_uint32 m_insertSubMenu_CallBack_IMenu_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 插入子菜单
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns>子菜单</returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu InsertSubMenu_NoVirtual(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_NoVirtual(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Function(uint index)
					{
						EarthView.World.Spatial.SystemUI.Imenu csret=InsertSubMenu(index);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 插入子菜单
					/// </summary>
					/// <param name="index">插入的位置</param>
					/// <returns>子菜单</returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu InsertSubMenu(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate uint getSubMenuCount_CallBack_ev_uint32();

					protected getSubMenuCount_CallBack_ev_uint32 m_getSubMenuCount_CallBack_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取子菜单的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>子菜单的个数</returns>
					public virtual uint GetSubMenuCount_NoVirtual()
					{
						uint ret=EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  uint EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Function()
					{
						uint csret=GetSubMenuCount();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取子菜单的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>子菜单的个数</returns>
					public virtual uint GetSubMenuCount()
					{
						uint ret=EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getSubMenu_CallBack_IMenu_ev_uint32(uint index);

					protected getSubMenu_CallBack_IMenu_ev_uint32 m_getSubMenu_CallBack_IMenu_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取指定索引处的子菜单
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>子菜单</returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu GetSubMenu_NoVirtual(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_NoVirtual(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Function(uint index)
					{
						EarthView.World.Spatial.SystemUI.Imenu csret=GetSubMenu(index);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取指定索引处的子菜单
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>子菜单</returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu GetSubMenu(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void popup_CallBack_void_ev_int32_ev_int32(int x, int y);

					protected popup_CallBack_void_ev_int32_ev_int32 m_popup_CallBack_void_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int x, int y);

					/// <summary>
					/// 弹出菜单
					/// </summary>
					/// <param name="x">弹出位置的x坐标</param>
					/// <param name="y">弹出位置的y坐标</param>
					/// <returns></returns>
					public virtual void Popup_NoVirtual(int x, int y)
					{
						EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_NoVirtual(this.NativeObject, x, y);
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Function(int x, int y)
					{
						Popup(x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(IntPtr pNativeObject, int x, int y);

					/// <summary>
					/// 弹出菜单
					/// </summary>
					/// <param name="x">弹出位置的x坐标</param>
					/// <param name="y">弹出位置的y坐标</param>
					/// <returns></returns>
					public virtual void Popup(int x, int y)
					{
						EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(this.NativeObject, x, y);
						
					}

					public Imenu(uint type) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuetype = new BasePtr(type);
						list.Add("type", valuetype.PtrVal);
						Create("IMenuProxy", list);
						if (!"EarthView.World.Spatial.SystemUI.Imenu".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadImenu = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadImenu = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadImenu = LoadDll.Load("EV_Spatial_GUI_d.so");
							private static bool csbLoadImenu = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

						#else 
							private static bool bLoadImenu = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadImenu = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadImenu = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadImenu = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#elif Linux 
							private static bool bLoadImenu = LoadDll.Load("EV_Spatial_GUI.so");
							private static bool csbLoadImenu = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

						#else 
							private static bool bLoadImenu = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadImenu = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IMenu", new ImenuClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IMenuProxy", new ImenuClassFactory());

					public Imenu(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(IntPtr pObject, getType_CallBack_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(IntPtr pObject, isEnabled_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(IntPtr pObject, setEnabled_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(IntPtr pObject, appendItem_CallBack_ev_bool_ICommand pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(IntPtr pObject, insertItem_CallBack_ev_bool_ev_uint32_ICommand pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(IntPtr pObject, getItemCount_CallBack_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(IntPtr pObject, removeItem_CallBack_ev_bool_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(IntPtr pObject, getItem_CallBack_IItem_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_clear_void(IntPtr pObject, clear_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(IntPtr pObject, appendSeperator_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(IntPtr pObject, insertSeperator_CallBack_ev_bool_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(IntPtr pObject, appendSubMenu_CallBack_IMenu pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(IntPtr pObject, insertSubMenu_CallBack_IMenu_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(IntPtr pObject, getSubMenuCount_CallBack_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(IntPtr pObject, getSubMenu_CallBack_IMenu_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(IntPtr pObject, popup_CallBack_void_ev_int32_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Function;
							GC.KeepAlive(m_getType_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(this.NativeObject, m_getType_CallBack_ev_uint32);
							m_getName_CallBack_EVString = EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_isEnabled_CallBack_ev_bool = EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Function;
							GC.KeepAlive(m_isEnabled_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(this.NativeObject, m_isEnabled_CallBack_ev_bool);
							m_setEnabled_CallBack_void_ev_bool = EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Function;
							GC.KeepAlive(m_setEnabled_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(this.NativeObject, m_setEnabled_CallBack_void_ev_bool);
							m_appendItem_CallBack_ev_bool_ICommand = EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Function;
							GC.KeepAlive(m_appendItem_CallBack_ev_bool_ICommand);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(this.NativeObject, m_appendItem_CallBack_ev_bool_ICommand);
							m_insertItem_CallBack_ev_bool_ev_uint32_ICommand = EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Function;
							GC.KeepAlive(m_insertItem_CallBack_ev_bool_ev_uint32_ICommand);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(this.NativeObject, m_insertItem_CallBack_ev_bool_ev_uint32_ICommand);
							m_getItemCount_CallBack_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Function;
							GC.KeepAlive(m_getItemCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(this.NativeObject, m_getItemCount_CallBack_ev_uint32);
							m_removeItem_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Function;
							GC.KeepAlive(m_removeItem_CallBack_ev_bool_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(this.NativeObject, m_removeItem_CallBack_ev_bool_ev_uint32);
							m_getItem_CallBack_IItem_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Function;
							GC.KeepAlive(m_getItem_CallBack_IItem_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(this.NativeObject, m_getItem_CallBack_IItem_ev_uint32);
							m_clear_CallBack_void = EarthView_World_Spatial_SystemUI_IMenu_clear_void_Function;
							GC.KeepAlive(m_clear_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_clear_void(this.NativeObject, m_clear_CallBack_void);
							m_appendSeperator_CallBack_ev_bool = EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Function;
							GC.KeepAlive(m_appendSeperator_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(this.NativeObject, m_appendSeperator_CallBack_ev_bool);
							m_insertSeperator_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Function;
							GC.KeepAlive(m_insertSeperator_CallBack_ev_bool_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(this.NativeObject, m_insertSeperator_CallBack_ev_bool_ev_uint32);
							m_appendSubMenu_CallBack_IMenu = EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Function;
							GC.KeepAlive(m_appendSubMenu_CallBack_IMenu);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(this.NativeObject, m_appendSubMenu_CallBack_IMenu);
							m_insertSubMenu_CallBack_IMenu_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Function;
							GC.KeepAlive(m_insertSubMenu_CallBack_IMenu_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(this.NativeObject, m_insertSubMenu_CallBack_IMenu_ev_uint32);
							m_getSubMenuCount_CallBack_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Function;
							GC.KeepAlive(m_getSubMenuCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(this.NativeObject, m_getSubMenuCount_CallBack_ev_uint32);
							m_getSubMenu_CallBack_IMenu_ev_uint32 = EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Function;
							GC.KeepAlive(m_getSubMenu_CallBack_IMenu_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(this.NativeObject, m_getSubMenu_CallBack_IMenu_ev_uint32);
							m_popup_CallBack_void_ev_int32_ev_int32 = EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_popup_CallBack_void_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(this.NativeObject, m_popup_CallBack_void_ev_int32_ev_int32);
						}
					}
					public static Imenu FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Imenu obj = baseObj as  Imenu;
						if (object.Equals(obj, null))
						{
							obj = new Imenu(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IMenu");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ImenuClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Imenu emptyInstance = new Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
