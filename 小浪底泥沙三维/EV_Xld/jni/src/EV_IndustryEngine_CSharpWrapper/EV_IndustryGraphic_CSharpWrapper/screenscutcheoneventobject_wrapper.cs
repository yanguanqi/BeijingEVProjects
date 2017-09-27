/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			public class ScreenScutcheonEventObject : EarthView.World.Core.EventObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				public ScreenScutcheonEventObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CScreenScutcheonEventObjectProxy", null);
					if (!"EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEventObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent m_onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseDownEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnMouseDownEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseDownEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent m_onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标移动响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseMoveEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnMouseMoveEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标移动响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseMoveEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent m_onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseUpEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnMouseUpEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseUpEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent m_onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标滚轮响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseWheelEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnMouseWheelEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标滚轮响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseWheelEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent m_onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyDownEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnKeyDownEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyDownEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent m_onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyUpEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnKeyUpEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyUpEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onSelectedEvent_CallBack_bool_CScreenScutcheonEvent(IntPtr e);

				protected onSelectedEvent_CallBack_bool_CScreenScutcheonEvent m_onSelectedEvent_CallBack_bool_CScreenScutcheonEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 标牌选中响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnSelectedEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScreenScutcheonEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent;
						csobj_e.BindNativeObject(e, "CScreenScutcheonEvent");
						csobj_e.Delegate = true;
					}
					
					bool csret=OnSelectedEvent(csobj_e);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 标牌选中响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnSelectedEvent(EarthView.IndustryEngine.IndustryGraphic.ScreenScutcheonEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				protected override bool OnEvent(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScreenScutcheonEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject", new ScreenScutcheonEventObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObjectProxy", new ScreenScutcheonEventObjectClassFactory());

				public ScreenScutcheonEventObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(IntPtr pObject, onSelectedEvent_CallBack_bool_CScreenScutcheonEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_IndustryGraphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onMouseDownEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onMouseMoveEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onMouseUpEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onMouseWheelEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onKeyDownEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onKeyUpEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onSelectedEvent_CallBack_bool_CScreenScutcheonEvent = EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Function;
						GC.KeepAlive(m_onSelectedEvent_CallBack_bool_CScreenScutcheonEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(this.NativeObject, m_onSelectedEvent_CallBack_bool_CScreenScutcheonEvent);
						m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
						GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
						m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
						GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
						m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
						GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
					}
				}
				protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
				{
					base.OnTimerEvent_NoVirtual(e);
				}
				protected override void OnCustomEvent(EarthView.World.Core.Event e)
				{
					base.OnCustomEvent_NoVirtual(e);
				}
				public static ScreenScutcheonEventObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScreenScutcheonEventObject obj = baseObj as  ScreenScutcheonEventObject;
					if (object.Equals(obj, null))
					{
						obj = new ScreenScutcheonEventObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScreenScutcheonEventObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScreenScutcheonEventObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScreenScutcheonEventObject emptyInstance = new ScreenScutcheonEventObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
