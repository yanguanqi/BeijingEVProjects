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
				public enum EVSPATIALCONTROLTYPE
				{
								SCT_MapControl,
								SCT_GlobeControl,
								SCT_LayoutControl,
								SCT_Custom
				
				}

				public class Ispatialcontrol : EarthView.World.Core.AllocatedObject
				{
					public Ispatialcontrol() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ISpatialControlProxy", null);
						if (!"EarthView.World.Spatial.Atlas.Ispatialcontrol".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getType_CallBack_EVSpatialControlType();

					protected getType_CallBack_EVSpatialControlType m_getType_CallBack_EVSpatialControlType;

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
					private static extern int EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取控件类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					public virtual EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Function()
					{
						EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE csret=GetType();
						
						return (int)csret;
						
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
					private static extern int EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(IntPtr pNativeObject);

					/// <summary>
					/// 获取控件类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					public virtual EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE GetType()
					{
						int ret=EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE)ret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取控件的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Function()
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取控件的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>名称</returns>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getTypeString_CallBack_EVString();

					protected getTypeString_CallBack_EVString m_getTypeString_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取控件类型的字符串形式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual string GetTypeString_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Function()
					{
						string csret=GetTypeString();
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取控件类型的字符串形式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual string GetTypeString()
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void notifyViewChanged_CallBack_void_IViewArgs(IntPtr args);

					protected notifyViewChanged_CallBack_void_IViewArgs m_notifyViewChanged_CallBack_void_IViewArgs;

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
					private static extern void EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_NoVirtual(IntPtr pNativeObject, IntPtr args);

					/// <summary>
					/// 接收外部通知，刷新控件的视口区域
					/// </summary>
					/// <param name="args">视口参数</param>
					/// <returns></returns>
					public virtual void NotifyViewChanged_NoVirtual(EarthView.World.Spatial.Iviewargs args)
					{
						EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_NoVirtual(this.NativeObject, object.Equals(args, null) ? IntPtr.Zero : args.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Function(IntPtr args)
					{
						EarthView.World.Spatial.Iviewargs csobj_args = new EarthView.World.Spatial.Iviewargs(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_args.BindNativeObject(args,"IViewArgs");
						csobj_args.Delegate = true;
						IClassFactory csobj_argsClassFactory = GlobalClassFactoryMap.Get(csobj_args.GetCppInstanceTypeName());
						if (csobj_argsClassFactory != null)
						{
							csobj_args.Delegate = true;
							csobj_args = csobj_argsClassFactory.Create() as EarthView.World.Spatial.Iviewargs;
							csobj_args.BindNativeObject(args, "IViewArgs");
							csobj_args.Delegate = true;
						}
						
						NotifyViewChanged(csobj_args);
						
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
					private static extern void EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(IntPtr pNativeObject, IntPtr args);

					/// <summary>
					/// 接收外部通知，刷新控件的视口区域
					/// </summary>
					/// <param name="args">视口参数</param>
					/// <returns></returns>
					public virtual void NotifyViewChanged(EarthView.World.Spatial.Iviewargs args)
					{
						EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(this.NativeObject, object.Equals(args, null) ? IntPtr.Zero : args.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte addViewListener_CallBack_ev_bool_IViewListener(IntPtr ref_externalListener);

					protected addViewListener_CallBack_ev_bool_IViewListener m_addViewListener_CallBack_ev_bool_IViewListener;

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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_externalListener);

					/// <summary>
					/// 添加视口监听
					/// </summary>
					/// <param name="externalListener">监听器</param>
					/// <returns></returns>
					public virtual bool AddViewListener_NoVirtual(EarthView.World.Spatial.Iviewlistener ref_externalListener)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_NoVirtual(this.NativeObject, object.Equals(ref_externalListener, null) ? IntPtr.Zero : ref_externalListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Function(IntPtr ref_externalListener)
					{
						EarthView.World.Spatial.Iviewlistener csobj_ref_externalListener = new EarthView.World.Spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_externalListener.BindNativeObject(ref_externalListener,"IViewListener");
						csobj_ref_externalListener.Delegate = true;
						IClassFactory csobj_ref_externalListenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_externalListener.GetCppInstanceTypeName());
						if (csobj_ref_externalListenerClassFactory != null)
						{
							csobj_ref_externalListener.Delegate = true;
							csobj_ref_externalListener = csobj_ref_externalListenerClassFactory.Create() as EarthView.World.Spatial.Iviewlistener;
							csobj_ref_externalListener.BindNativeObject(ref_externalListener, "IViewListener");
							csobj_ref_externalListener.Delegate = true;
						}
						
						bool csret=AddViewListener(csobj_ref_externalListener);
						
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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(IntPtr pNativeObject, IntPtr ref_externalListener);

					/// <summary>
					/// 添加视口监听
					/// </summary>
					/// <param name="externalListener">监听器</param>
					/// <returns></returns>
					public virtual bool AddViewListener(EarthView.World.Spatial.Iviewlistener ref_externalListener)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(this.NativeObject, object.Equals(ref_externalListener, null) ? IntPtr.Zero : ref_externalListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate uint getViewListenerCount_CallBack_ev_uint32();

					protected getViewListenerCount_CallBack_ev_uint32 m_getViewListenerCount_CallBack_ev_uint32;

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
					private static extern uint EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取视口监听器的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					public virtual uint GetViewListenerCount_NoVirtual()
					{
						uint ret=EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  uint EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Function()
					{
						uint csret=GetViewListenerCount();
						
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
					private static extern uint EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取视口监听器的数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					public virtual uint GetViewListenerCount()
					{
						uint ret=EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getViewListener_CallBack_IViewListener_ev_uint32(uint index);

					protected getViewListener_CallBack_IViewListener_ev_uint32 m_getViewListener_CallBack_IViewListener_ev_uint32;

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
					private static extern IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取指定索引徙的视口监听对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Iviewlistener GetViewListener_NoVirtual(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_NoVirtual(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Iviewlistener csObj = new EarthView.World.Spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IViewListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Iviewlistener;
							csObj.BindNativeObject(__ptr, "IViewListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Function(uint index)
					{
						EarthView.World.Spatial.Iviewlistener csret=GetViewListener(index);
						
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
					private static extern IntPtr EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取指定索引徙的视口监听对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.Iviewlistener GetViewListener(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Iviewlistener csObj = new EarthView.World.Spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IViewListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Iviewlistener;
							csObj.BindNativeObject(__ptr, "IViewListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte existViewListener_CallBack_ev_bool_IViewListener(IntPtr externalListener);

					protected existViewListener_CallBack_ev_bool_IViewListener m_existViewListener_CallBack_ev_bool_IViewListener;

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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_NoVirtual(IntPtr pNativeObject, IntPtr externalListener);

					/// <summary>
					/// 判断指定的监听是否存在
					/// </summary>
					/// <param name="externalListener">监听</param>
					/// <returns></returns>
					public virtual bool ExistViewListener_NoVirtual(EarthView.World.Spatial.Iviewlistener externalListener)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_NoVirtual(this.NativeObject, object.Equals(externalListener, null) ? IntPtr.Zero : externalListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Function(IntPtr externalListener)
					{
						EarthView.World.Spatial.Iviewlistener csobj_externalListener = new EarthView.World.Spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_externalListener.BindNativeObject(externalListener,"IViewListener");
						csobj_externalListener.Delegate = true;
						IClassFactory csobj_externalListenerClassFactory = GlobalClassFactoryMap.Get(csobj_externalListener.GetCppInstanceTypeName());
						if (csobj_externalListenerClassFactory != null)
						{
							csobj_externalListener.Delegate = true;
							csobj_externalListener = csobj_externalListenerClassFactory.Create() as EarthView.World.Spatial.Iviewlistener;
							csobj_externalListener.BindNativeObject(externalListener, "IViewListener");
							csobj_externalListener.Delegate = true;
						}
						
						bool csret=ExistViewListener(csobj_externalListener);
						
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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(IntPtr pNativeObject, IntPtr externalListener);

					/// <summary>
					/// 判断指定的监听是否存在
					/// </summary>
					/// <param name="externalListener">监听</param>
					/// <returns></returns>
					public virtual bool ExistViewListener(EarthView.World.Spatial.Iviewlistener externalListener)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(this.NativeObject, object.Equals(externalListener, null) ? IntPtr.Zero : externalListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte removeViewListener_CallBack_ev_bool_ev_uint32(uint index);

					protected removeViewListener_CallBack_ev_bool_ev_uint32 m_removeViewListener_CallBack_ev_bool_ev_uint32;

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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_NoVirtual(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 移除指定索引处的监听
					/// </summary>
					/// <param name="index">监听索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					public virtual bool RemoveViewListener_NoVirtual(uint index)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_NoVirtual(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Function(uint index)
					{
						bool csret=RemoveViewListener(index);
						
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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 移除指定索引处的监听
					/// </summary>
					/// <param name="index">监听索引</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					public virtual bool RemoveViewListener(uint index)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(this.NativeObject, index);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte removeViewListener_CallBack_ev_bool_IViewListener(IntPtr externalListener);

					protected removeViewListener_CallBack_ev_bool_IViewListener m_removeViewListener_CallBack_ev_bool_IViewListener;

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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_NoVirtual(IntPtr pNativeObject, IntPtr externalListener);

					/// <summary>
					/// 移除指定的监听
					/// </summary>
					/// <param name="externalListener">监听</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					public virtual bool RemoveViewListener_NoVirtual(EarthView.World.Spatial.Iviewlistener externalListener)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_NoVirtual(this.NativeObject, object.Equals(externalListener, null) ? IntPtr.Zero : externalListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Function(IntPtr externalListener)
					{
						EarthView.World.Spatial.Iviewlistener csobj_externalListener = new EarthView.World.Spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_externalListener.BindNativeObject(externalListener,"IViewListener");
						csobj_externalListener.Delegate = true;
						IClassFactory csobj_externalListenerClassFactory = GlobalClassFactoryMap.Get(csobj_externalListener.GetCppInstanceTypeName());
						if (csobj_externalListenerClassFactory != null)
						{
							csobj_externalListener.Delegate = true;
							csobj_externalListener = csobj_externalListenerClassFactory.Create() as EarthView.World.Spatial.Iviewlistener;
							csobj_externalListener.BindNativeObject(externalListener, "IViewListener");
							csobj_externalListener.Delegate = true;
						}
						
						bool csret=RemoveViewListener(csobj_externalListener);
						
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
					private static extern byte EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(IntPtr pNativeObject, IntPtr externalListener);

					/// <summary>
					/// 移除指定的监听
					/// </summary>
					/// <param name="externalListener">监听</param>
					/// <returns>如果移除成功则返回true,反之则否</returns>
					public virtual bool RemoveViewListener(EarthView.World.Spatial.Iviewlistener externalListener)
					{
						byte ret=EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(this.NativeObject, object.Equals(externalListener, null) ? IntPtr.Zero : externalListener.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void clearViewListeners_CallBack_void();

					protected clearViewListeners_CallBack_void m_clearViewListeners_CallBack_void;

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
					private static extern void EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有的监听
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void ClearViewListeners_NoVirtual()
					{
						EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Function()
					{
						ClearViewListeners();
						
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
					private static extern void EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有的监听
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void ClearViewListeners()
					{
						EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_d.so");
							private static bool csbLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

						#else 
							private static bool bLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#elif Linux 
							private static bool bLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI.so");
							private static bool csbLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

						#else 
							private static bool bLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadIspatialcontrol = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialControl", new IspatialcontrolClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialControlProxy", new IspatialcontrolClassFactory());

					public Ispatialcontrol(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(IntPtr pObject, getType_CallBack_EVSpatialControlType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(IntPtr pObject, getTypeString_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(IntPtr pObject, notifyViewChanged_CallBack_void_IViewArgs pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(IntPtr pObject, addViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(IntPtr pObject, getViewListenerCount_CallBack_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(IntPtr pObject, getViewListener_CallBack_IViewListener_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(IntPtr pObject, existViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(IntPtr pObject, removeViewListener_CallBack_ev_bool_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(IntPtr pObject, removeViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(IntPtr pObject, clearViewListeners_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVSpatialControlType = EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Function;
							GC.KeepAlive(m_getType_CallBack_EVSpatialControlType);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType(this.NativeObject, m_getType_CallBack_EVSpatialControlType);
							m_getName_CallBack_EVString = EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getTypeString_CallBack_EVString = EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Function;
							GC.KeepAlive(m_getTypeString_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString(this.NativeObject, m_getTypeString_CallBack_EVString);
							m_notifyViewChanged_CallBack_void_IViewArgs = EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Function;
							GC.KeepAlive(m_notifyViewChanged_CallBack_void_IViewArgs);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs(this.NativeObject, m_notifyViewChanged_CallBack_void_IViewArgs);
							m_addViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_addViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener(this.NativeObject, m_addViewListener_CallBack_ev_bool_IViewListener);
							m_getViewListenerCount_CallBack_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Function;
							GC.KeepAlive(m_getViewListenerCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32(this.NativeObject, m_getViewListenerCount_CallBack_ev_uint32);
							m_getViewListener_CallBack_IViewListener_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Function;
							GC.KeepAlive(m_getViewListener_CallBack_IViewListener_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32(this.NativeObject, m_getViewListener_CallBack_IViewListener_ev_uint32);
							m_existViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_existViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener(this.NativeObject, m_existViewListener_CallBack_ev_bool_IViewListener);
							m_removeViewListener_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Function;
							GC.KeepAlive(m_removeViewListener_CallBack_ev_bool_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32(this.NativeObject, m_removeViewListener_CallBack_ev_bool_ev_uint32);
							m_removeViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_removeViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener(this.NativeObject, m_removeViewListener_CallBack_ev_bool_IViewListener);
							m_clearViewListeners_CallBack_void = EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Function;
							GC.KeepAlive(m_clearViewListeners_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void(this.NativeObject, m_clearViewListeners_CallBack_void);
						}
					}
					public static Ispatialcontrol FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ispatialcontrol obj = baseObj as  Ispatialcontrol;
						if (object.Equals(obj, null))
						{
							obj = new Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ISpatialControl");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IspatialcontrolClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ispatialcontrol emptyInstance = new Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
