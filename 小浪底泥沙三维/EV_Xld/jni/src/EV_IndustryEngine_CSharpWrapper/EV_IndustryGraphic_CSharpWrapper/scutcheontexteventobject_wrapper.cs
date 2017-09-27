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
			/// <summary>
			/// 标牌事件处理响应对象
			/// </summary>
			public class ScutcheonTextEventObject : EarthView.World.Core.EventObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				public ScutcheonTextEventObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CScutcheonTextEventObjectProxy", null);
					if (!"EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEventObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseDownEvent_CallBack_bool_CScutcheonTextEvent(IntPtr e);

				protected onMouseDownEvent_CallBack_bool_CScutcheonTextEvent m_onMouseDownEvent_CallBack_bool_CScutcheonTextEvent;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseDownEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScutcheonTextEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent;
						csobj_e.BindNativeObject(e, "CScutcheonTextEvent");
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseDownEvent(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent(IntPtr e);

				protected onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent m_onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标移动响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseMoveEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScutcheonTextEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent;
						csobj_e.BindNativeObject(e, "CScutcheonTextEvent");
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标移动响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseMoveEvent(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onMouseUpEvent_CallBack_bool_CScutcheonTextEvent(IntPtr e);

				protected onMouseUpEvent_CallBack_bool_CScutcheonTextEvent m_onMouseUpEvent_CallBack_bool_CScutcheonTextEvent;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseUpEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScutcheonTextEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent;
						csobj_e.BindNativeObject(e, "CScutcheonTextEvent");
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 鼠标弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnMouseUpEvent(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onKeyDownEvent_CallBack_bool_CScutcheonTextEvent(IntPtr e);

				protected onKeyDownEvent_CallBack_bool_CScutcheonTextEvent m_onKeyDownEvent_CallBack_bool_CScutcheonTextEvent;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyDownEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScutcheonTextEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent;
						csobj_e.BindNativeObject(e, "CScutcheonTextEvent");
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘按下响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyDownEvent(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onKeyUpEvent_CallBack_bool_CScutcheonTextEvent(IntPtr e);

				protected onKeyUpEvent_CallBack_bool_CScutcheonTextEvent m_onKeyUpEvent_CallBack_bool_CScutcheonTextEvent;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyUpEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScutcheonTextEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent;
						csobj_e.BindNativeObject(e, "CScutcheonTextEvent");
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 键盘弹起响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnKeyUpEvent(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte onSelectedEvent_CallBack_bool_CScutcheonTextEvent(IntPtr e);

				protected onSelectedEvent_CallBack_bool_CScutcheonTextEvent m_onSelectedEvent_CallBack_bool_CScutcheonTextEvent;

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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 标牌选中响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnSelectedEvent_NoVirtual(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Function(IntPtr e)
				{
					EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent csobj_e = new EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CScutcheonTextEvent");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent;
						csobj_e.BindNativeObject(e, "CScutcheonTextEvent");
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 标牌选中响应事件
				/// </summary>
				/// <param name="e">事件</param>
				public virtual bool OnSelectedEvent(EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextEvent e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 事件处理函数，可重载
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>已处理返回true，否则返回false</returns>
				protected override bool OnEvent(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScutcheonTextEventObject = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject", new ScutcheonTextEventObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObjectProxy", new ScutcheonTextEventObjectClassFactory());

				public ScutcheonTextEventObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(IntPtr pObject, onMouseDownEvent_CallBack_bool_CScutcheonTextEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(IntPtr pObject, onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(IntPtr pObject, onMouseUpEvent_CallBack_bool_CScutcheonTextEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(IntPtr pObject, onKeyDownEvent_CallBack_bool_CScutcheonTextEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(IntPtr pObject, onKeyUpEvent_CallBack_bool_CScutcheonTextEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(IntPtr pObject, onSelectedEvent_CallBack_bool_CScutcheonTextEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_onMouseDownEvent_CallBack_bool_CScutcheonTextEvent = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Function;
						GC.KeepAlive(m_onMouseDownEvent_CallBack_bool_CScutcheonTextEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(this.NativeObject, m_onMouseDownEvent_CallBack_bool_CScutcheonTextEvent);
						m_onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Function;
						GC.KeepAlive(m_onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(this.NativeObject, m_onMouseMoveEvent_CallBack_bool_CScutcheonTextEvent);
						m_onMouseUpEvent_CallBack_bool_CScutcheonTextEvent = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Function;
						GC.KeepAlive(m_onMouseUpEvent_CallBack_bool_CScutcheonTextEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(this.NativeObject, m_onMouseUpEvent_CallBack_bool_CScutcheonTextEvent);
						m_onKeyDownEvent_CallBack_bool_CScutcheonTextEvent = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Function;
						GC.KeepAlive(m_onKeyDownEvent_CallBack_bool_CScutcheonTextEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(this.NativeObject, m_onKeyDownEvent_CallBack_bool_CScutcheonTextEvent);
						m_onKeyUpEvent_CallBack_bool_CScutcheonTextEvent = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Function;
						GC.KeepAlive(m_onKeyUpEvent_CallBack_bool_CScutcheonTextEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(this.NativeObject, m_onKeyUpEvent_CallBack_bool_CScutcheonTextEvent);
						m_onSelectedEvent_CallBack_bool_CScutcheonTextEvent = EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Function;
						GC.KeepAlive(m_onSelectedEvent_CallBack_bool_CScutcheonTextEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(this.NativeObject, m_onSelectedEvent_CallBack_bool_CScutcheonTextEvent);
						m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
						GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
						m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
						GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
						m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
						GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
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
				public static ScutcheonTextEventObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScutcheonTextEventObject obj = baseObj as  ScutcheonTextEventObject;
					if (object.Equals(obj, null))
					{
						obj = new ScutcheonTextEventObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScutcheonTextEventObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScutcheonTextEventObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScutcheonTextEventObject emptyInstance = new ScutcheonTextEventObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
