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
		namespace Graphic
		{
			public class FrameTimeControllerValue : EarthView.World.Graphic.ControllerValue
			{
				public FrameTimeControllerValue() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CFrameTimeControllerValueProxy", null);
					if (!"EarthView.World.Graphic.FrameTimeControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_NoVirtual(IntPtr pNativeObject);

				public new double GetValue_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(IntPtr pNativeObject);

				public override double GetValue()
				{
					double ret=EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_NoVirtual(IntPtr pNativeObject, double value);

				public new void SetValue_NoVirtual(double value)
				{
					EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_NoVirtual(this.NativeObject, value);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(IntPtr pNativeObject, double value);

				public override void SetValue(double value)
				{
					EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(this.NativeObject, value);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFrameTimeControllerValue_getTimeFactor_Real(IntPtr pNativeObject);

				public double GetTimeFactor()
				{
					double ret=EarthView_World_Graphic_CFrameTimeControllerValue_getTimeFactor_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFrameTimeControllerValue_setTimeFactor_void_Real(IntPtr pNativeObject, double tf);

				public void SetTimeFactor(double tf)
				{
					EarthView_World_Graphic_CFrameTimeControllerValue_setTimeFactor_void_Real(this.NativeObject, tf);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFrameTimeControllerValue_getFrameDelay_Real(IntPtr pNativeObject);

				public double GetFrameDelay()
				{
					double ret=EarthView_World_Graphic_CFrameTimeControllerValue_getFrameDelay_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFrameTimeControllerValue_setFrameDelay_void_Real(IntPtr pNativeObject, double fd);

				public void SetFrameDelay(double fd)
				{
					EarthView_World_Graphic_CFrameTimeControllerValue_setFrameDelay_void_Real(this.NativeObject, fd);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFrameTimeControllerValue_getElapsedTime_Real(IntPtr pNativeObject);

				public double GetElapsedTime()
				{
					double ret=EarthView_World_Graphic_CFrameTimeControllerValue_getElapsedTime_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFrameTimeControllerValue_setElapsedTime_void_Real(IntPtr pNativeObject, double elapsedTime);

				public void SetElapsedTime(double elapsedTime)
				{
					EarthView_World_Graphic_CFrameTimeControllerValue_setElapsedTime_void_Real(this.NativeObject, elapsedTime);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte frameStarted_CallBack_ev_bool_FrameEvent(ref EarthView.World.Graphic.FRAMEEVENT evt);

				protected frameStarted_CallBack_ev_bool_FrameEvent m_frameStarted_CallBack_ev_bool_FrameEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				public virtual bool FrameStarted_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Function(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					bool csret=FrameStarted(ref evt);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				public virtual bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				public class InternalFrameListener : EarthView.World.Graphic.FrameListener
				{
					public InternalFrameListener(EarthView.World.Graphic.FrameTimeControllerValue ref_parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_parent = new BasePtr(ref_parent);
						list.Add("ref_parent", valueref_parent.PtrVal);
						Create("CInternalFrameListenerProxy", list);
						if (!"EarthView.World.Graphic.FrameTimeControllerValue+InternalFrameListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

					public new bool FrameEnded_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
					{
						byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

					public override bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
					{
						byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(this.NativeObject, ref evt);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

					public new bool FrameStarted_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
					{
						byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

					public override bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
					{
						byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, ref evt);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadInternalFrameListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadInternalFrameListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadInternalFrameListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadInternalFrameListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadInternalFrameListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadInternalFrameListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadInternalFrameListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadInternalFrameListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadInternalFrameListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadInternalFrameListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadInternalFrameListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadInternalFrameListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener", new InternalFrameListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListenerProxy", new InternalFrameListenerClassFactory());

					public InternalFrameListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pObject, frameRenderingQueued_CallBack_ev_bool_FrameEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function;
							GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
							EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
							m_frameRenderingQueued_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function;
							GC.KeepAlive(m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
							EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
							m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function;
							GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
							EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
						}
					}
					public override bool FrameRenderingQueued(ref EarthView.World.Graphic.FRAMEEVENT evt)
					{
						return base.FrameRenderingQueued_NoVirtual(ref evt);
					}
					public static InternalFrameListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						InternalFrameListener obj = baseObj as  InternalFrameListener;
						if (object.Equals(obj, null))
						{
							obj = new InternalFrameListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CInternalFrameListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class InternalFrameListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						InternalFrameListener emptyInstance = new InternalFrameListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte frameEnded_CallBack_ev_bool_FrameEvent(ref EarthView.World.Graphic.FRAMEEVENT evt);

				protected frameEnded_CallBack_ev_bool_FrameEvent m_frameEnded_CallBack_ev_bool_FrameEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				public virtual bool FrameEnded_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Function(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					bool csret=FrameEnded(ref evt);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				public virtual bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getListenerPtr_CallBack_CFrameListener();

				protected getListenerPtr_CallBack_CFrameListener m_getListenerPtr_CallBack_CFrameListener;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.FrameListener GetListenerPtr_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.FrameListener csObj = new EarthView.World.Graphic.FrameListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CFrameListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.FrameListener;
						csObj.BindNativeObject(__ptr, "CFrameListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Function()
				{
					EarthView.World.Graphic.FrameListener csret=GetListenerPtr();
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.FrameListener GetListenerPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.FrameListener csObj = new EarthView.World.Graphic.FrameListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CFrameListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.FrameListener;
						csObj.BindNativeObject(__ptr, "CFrameListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFrameTimeControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFrameTimeControllerValue", new FrameTimeControllerValueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFrameTimeControllerValueProxy", new FrameTimeControllerValueClassFactory());

				public FrameTimeControllerValue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(IntPtr pObject, getListenerPtr_CallBack_CFrameListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(IntPtr pObject, getValue_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(IntPtr pObject, setValue_CallBack_void_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
						m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
						m_getListenerPtr_CallBack_CFrameListener = EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Function;
						GC.KeepAlive(m_getListenerPtr_CallBack_CFrameListener);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(this.NativeObject, m_getListenerPtr_CallBack_CFrameListener);
						m_getValue_CallBack_Real = EarthView_World_Graphic_CControllerValue_getValue_Real_Function;
						GC.KeepAlive(m_getValue_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(this.NativeObject, m_getValue_CallBack_Real);
						m_setValue_CallBack_void_Real = EarthView_World_Graphic_CControllerValue_setValue_void_Real_Function;
						GC.KeepAlive(m_setValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(this.NativeObject, m_setValue_CallBack_void_Real);
					}
				}
				public static FrameTimeControllerValue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					FrameTimeControllerValue obj = baseObj as  FrameTimeControllerValue;
					if (object.Equals(obj, null))
					{
						obj = new FrameTimeControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CFrameTimeControllerValue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class FrameTimeControllerValueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					FrameTimeControllerValue emptyInstance = new FrameTimeControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TextureFrameControllerValue : EarthView.World.Graphic.ControllerValue
			{
				public TextureFrameControllerValue(EarthView.World.Graphic.TextureUnitState ref_t) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					Create("CTextureFrameControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TextureFrameControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_NoVirtual(IntPtr pNativeObject);

				public new double GetValue_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(IntPtr pNativeObject);

				public override double GetValue()
				{
					double ret=EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_NoVirtual(IntPtr pNativeObject, double value);

				public new void SetValue_NoVirtual(double value)
				{
					EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_NoVirtual(this.NativeObject, value);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(IntPtr pNativeObject, double value);

				public override void SetValue(double value)
				{
					EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(this.NativeObject, value);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureFrameControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureFrameControllerValue", new TextureFrameControllerValueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureFrameControllerValueProxy", new TextureFrameControllerValueClassFactory());

				public TextureFrameControllerValue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(IntPtr pObject, getValue_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(IntPtr pObject, setValue_CallBack_void_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getValue_CallBack_Real = EarthView_World_Graphic_CControllerValue_getValue_Real_Function;
						GC.KeepAlive(m_getValue_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(this.NativeObject, m_getValue_CallBack_Real);
						m_setValue_CallBack_void_Real = EarthView_World_Graphic_CControllerValue_setValue_void_Real_Function;
						GC.KeepAlive(m_setValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(this.NativeObject, m_setValue_CallBack_void_Real);
					}
				}
				public static TextureFrameControllerValue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextureFrameControllerValue obj = baseObj as  TextureFrameControllerValue;
					if (object.Equals(obj, null))
					{
						obj = new TextureFrameControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextureFrameControllerValue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextureFrameControllerValueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextureFrameControllerValue emptyInstance = new TextureFrameControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TexCoordModifierControllerValue : EarthView.World.Graphic.ControllerValue
			{
				public TexCoordModifierControllerValue(EarthView.World.Graphic.TextureUnitState ref_t) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					Create("CTexCoordModifierControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TexCoordModifierControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TexCoordModifierControllerValue(EarthView.World.Graphic.TextureUnitState ref_t, bool translateU) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					BasePtr valuetranslateU = new BasePtr(translateU);
					list.Add("translateU", valuetranslateU.PtrVal);
					Create("CTexCoordModifierControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TexCoordModifierControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TexCoordModifierControllerValue(EarthView.World.Graphic.TextureUnitState ref_t, bool translateU, bool translateV) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					BasePtr valuetranslateU = new BasePtr(translateU);
					list.Add("translateU", valuetranslateU.PtrVal);
					BasePtr valuetranslateV = new BasePtr(translateV);
					list.Add("translateV", valuetranslateV.PtrVal);
					Create("CTexCoordModifierControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TexCoordModifierControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TexCoordModifierControllerValue(EarthView.World.Graphic.TextureUnitState ref_t, bool translateU, bool translateV, bool scaleU) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					BasePtr valuetranslateU = new BasePtr(translateU);
					list.Add("translateU", valuetranslateU.PtrVal);
					BasePtr valuetranslateV = new BasePtr(translateV);
					list.Add("translateV", valuetranslateV.PtrVal);
					BasePtr valuescaleU = new BasePtr(scaleU);
					list.Add("scaleU", valuescaleU.PtrVal);
					Create("CTexCoordModifierControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TexCoordModifierControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TexCoordModifierControllerValue(EarthView.World.Graphic.TextureUnitState ref_t, bool translateU, bool translateV, bool scaleU, bool scaleV) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					BasePtr valuetranslateU = new BasePtr(translateU);
					list.Add("translateU", valuetranslateU.PtrVal);
					BasePtr valuetranslateV = new BasePtr(translateV);
					list.Add("translateV", valuetranslateV.PtrVal);
					BasePtr valuescaleU = new BasePtr(scaleU);
					list.Add("scaleU", valuescaleU.PtrVal);
					BasePtr valuescaleV = new BasePtr(scaleV);
					list.Add("scaleV", valuescaleV.PtrVal);
					Create("CTexCoordModifierControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TexCoordModifierControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public TexCoordModifierControllerValue(EarthView.World.Graphic.TextureUnitState ref_t, bool translateU, bool translateV, bool scaleU, bool scaleV, bool rotate) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_t = new BasePtr(ref_t);
					list.Add("ref_t", valueref_t.PtrVal);
					BasePtr valuetranslateU = new BasePtr(translateU);
					list.Add("translateU", valuetranslateU.PtrVal);
					BasePtr valuetranslateV = new BasePtr(translateV);
					list.Add("translateV", valuetranslateV.PtrVal);
					BasePtr valuescaleU = new BasePtr(scaleU);
					list.Add("scaleU", valuescaleU.PtrVal);
					BasePtr valuescaleV = new BasePtr(scaleV);
					list.Add("scaleV", valuescaleV.PtrVal);
					BasePtr valuerotate = new BasePtr(rotate);
					list.Add("rotate", valuerotate.PtrVal);
					Create("CTexCoordModifierControllerValueProxy", list);
					if (!"EarthView.World.Graphic.TexCoordModifierControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_NoVirtual(IntPtr pNativeObject);

				public new double GetValue_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(IntPtr pNativeObject);

				public override double GetValue()
				{
					double ret=EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_NoVirtual(IntPtr pNativeObject, double value);

				public new void SetValue_NoVirtual(double value)
				{
					EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_NoVirtual(this.NativeObject, value);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(IntPtr pNativeObject, double value);

				public override void SetValue(double value)
				{
					EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(this.NativeObject, value);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTexCoordModifierControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTexCoordModifierControllerValue", new TexCoordModifierControllerValueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTexCoordModifierControllerValueProxy", new TexCoordModifierControllerValueClassFactory());

				public TexCoordModifierControllerValue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(IntPtr pObject, getValue_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(IntPtr pObject, setValue_CallBack_void_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getValue_CallBack_Real = EarthView_World_Graphic_CControllerValue_getValue_Real_Function;
						GC.KeepAlive(m_getValue_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(this.NativeObject, m_getValue_CallBack_Real);
						m_setValue_CallBack_void_Real = EarthView_World_Graphic_CControllerValue_setValue_void_Real_Function;
						GC.KeepAlive(m_setValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(this.NativeObject, m_setValue_CallBack_void_Real);
					}
				}
				public static TexCoordModifierControllerValue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TexCoordModifierControllerValue obj = baseObj as  TexCoordModifierControllerValue;
					if (object.Equals(obj, null))
					{
						obj = new TexCoordModifierControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTexCoordModifierControllerValue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TexCoordModifierControllerValueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TexCoordModifierControllerValue emptyInstance = new TexCoordModifierControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class FloatGpuParameterControllerValue : EarthView.World.Graphic.ControllerValue
			{
				public FloatGpuParameterControllerValue(EarthView.World.Graphic.GpuProgramParametersSharedPtr EVparams, ulong index) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueEVparams = new BasePtr(EVparams);
					list.Add("EVparams", valueEVparams.PtrVal);
					BasePtr valueindex = new BasePtr(index);
					list.Add("index", valueindex.PtrVal);
					Create("CFloatGpuParameterControllerValueProxy", list);
					if (!"EarthView.World.Graphic.FloatGpuParameterControllerValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_NoVirtual(IntPtr pNativeObject);

				public new double GetValue_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(IntPtr pNativeObject);

				public override double GetValue()
				{
					double ret=EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_NoVirtual(IntPtr pNativeObject, double value);

				public new void SetValue_NoVirtual(double value)
				{
					EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_NoVirtual(this.NativeObject, value);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(IntPtr pNativeObject, double value);

				public override void SetValue(double value)
				{
					EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(this.NativeObject, value);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFloatGpuParameterControllerValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFloatGpuParameterControllerValue", new FloatGpuParameterControllerValueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFloatGpuParameterControllerValueProxy", new FloatGpuParameterControllerValueClassFactory());

				public FloatGpuParameterControllerValue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(IntPtr pObject, getValue_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(IntPtr pObject, setValue_CallBack_void_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getValue_CallBack_Real = EarthView_World_Graphic_CControllerValue_getValue_Real_Function;
						GC.KeepAlive(m_getValue_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(this.NativeObject, m_getValue_CallBack_Real);
						m_setValue_CallBack_void_Real = EarthView_World_Graphic_CControllerValue_setValue_void_Real_Function;
						GC.KeepAlive(m_setValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(this.NativeObject, m_setValue_CallBack_void_Real);
					}
				}
				public static FloatGpuParameterControllerValue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					FloatGpuParameterControllerValue obj = baseObj as  FloatGpuParameterControllerValue;
					if (object.Equals(obj, null))
					{
						obj = new FloatGpuParameterControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CFloatGpuParameterControllerValue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class FloatGpuParameterControllerValueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					FloatGpuParameterControllerValue emptyInstance = new FloatGpuParameterControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class PassthroughControllerFunction : EarthView.World.Graphic.ControllerFunction
			{
				public PassthroughControllerFunction() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CPassthroughControllerFunctionProxy", null);
					if (!"EarthView.World.Graphic.PassthroughControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public PassthroughControllerFunction(bool deltaInput) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuedeltaInput = new BasePtr(deltaInput);
					list.Add("deltaInput", valuedeltaInput.PtrVal);
					Create("CPassthroughControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.PassthroughControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_NoVirtual(IntPtr pNativeObject, double source);

				public new double Calculate_NoVirtual(double source)
				{
					double ret=EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_NoVirtual(this.NativeObject, source);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(IntPtr pNativeObject, double source);

				public override double Calculate(double source)
				{
					double ret=EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(this.NativeObject, source);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPassthroughControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPassthroughControllerFunction", new PassthroughControllerFunctionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPassthroughControllerFunctionProxy", new PassthroughControllerFunctionClassFactory());

				public PassthroughControllerFunction(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(IntPtr pObject, calculate_CallBack_Real_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_calculate_CallBack_Real_Real = EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Function;
						GC.KeepAlive(m_calculate_CallBack_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(this.NativeObject, m_calculate_CallBack_Real_Real);
					}
				}
				public static PassthroughControllerFunction FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PassthroughControllerFunction obj = baseObj as  PassthroughControllerFunction;
					if (object.Equals(obj, null))
					{
						obj = new PassthroughControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPassthroughControllerFunction");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PassthroughControllerFunctionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PassthroughControllerFunction emptyInstance = new PassthroughControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class AnimationControllerFunction : EarthView.World.Graphic.ControllerFunction
			{
				public AnimationControllerFunction(double sequenceTime) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuesequenceTime = new BasePtr(sequenceTime);
					list.Add("sequenceTime", valuesequenceTime.PtrVal);
					Create("CAnimationControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.AnimationControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public AnimationControllerFunction(double sequenceTime, double timeOffset) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuesequenceTime = new BasePtr(sequenceTime);
					list.Add("sequenceTime", valuesequenceTime.PtrVal);
					BasePtr valuetimeOffset = new BasePtr(timeOffset);
					list.Add("timeOffset", valuetimeOffset.PtrVal);
					Create("CAnimationControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.AnimationControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_NoVirtual(IntPtr pNativeObject, double source);

				public new double Calculate_NoVirtual(double source)
				{
					double ret=EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_NoVirtual(this.NativeObject, source);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(IntPtr pNativeObject, double source);

				public override double Calculate(double source)
				{
					double ret=EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(this.NativeObject, source);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationControllerFunction_setTime_void_Real(IntPtr pNativeObject, double timeVal);

				public void SetTime(double timeVal)
				{
					EarthView_World_Graphic_CAnimationControllerFunction_setTime_void_Real(this.NativeObject, timeVal);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimationControllerFunction_setSequenceTime_void_Real(IntPtr pNativeObject, double seqVal);

				public void SetSequenceTime(double seqVal)
				{
					EarthView_World_Graphic_CAnimationControllerFunction_setSequenceTime_void_Real(this.NativeObject, seqVal);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimationControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationControllerFunction", new AnimationControllerFunctionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimationControllerFunctionProxy", new AnimationControllerFunctionClassFactory());

				public AnimationControllerFunction(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(IntPtr pObject, calculate_CallBack_Real_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_calculate_CallBack_Real_Real = EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Function;
						GC.KeepAlive(m_calculate_CallBack_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(this.NativeObject, m_calculate_CallBack_Real_Real);
					}
				}
				public static AnimationControllerFunction FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AnimationControllerFunction obj = baseObj as  AnimationControllerFunction;
					if (object.Equals(obj, null))
					{
						obj = new AnimationControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CAnimationControllerFunction");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AnimationControllerFunctionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AnimationControllerFunction emptyInstance = new AnimationControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ScaleControllerFunction : EarthView.World.Graphic.ControllerFunction
			{
				public ScaleControllerFunction(double scalefactor, bool deltaInput) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuescalefactor = new BasePtr(scalefactor);
					list.Add("scalefactor", valuescalefactor.PtrVal);
					BasePtr valuedeltaInput = new BasePtr(deltaInput);
					list.Add("deltaInput", valuedeltaInput.PtrVal);
					Create("CScaleControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.ScaleControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_NoVirtual(IntPtr pNativeObject, double source);

				public new double Calculate_NoVirtual(double source)
				{
					double ret=EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_NoVirtual(this.NativeObject, source);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(IntPtr pNativeObject, double source);

				public override double Calculate(double source)
				{
					double ret=EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(this.NativeObject, source);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScaleControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScaleControllerFunction = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadScaleControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScaleControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScaleControllerFunction", new ScaleControllerFunctionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScaleControllerFunctionProxy", new ScaleControllerFunctionClassFactory());

				public ScaleControllerFunction(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(IntPtr pObject, calculate_CallBack_Real_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_calculate_CallBack_Real_Real = EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Function;
						GC.KeepAlive(m_calculate_CallBack_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(this.NativeObject, m_calculate_CallBack_Real_Real);
					}
				}
				public static ScaleControllerFunction FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScaleControllerFunction obj = baseObj as  ScaleControllerFunction;
					if (object.Equals(obj, null))
					{
						obj = new ScaleControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScaleControllerFunction");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScaleControllerFunctionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScaleControllerFunction emptyInstance = new ScaleControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class WaveformControllerFunction : EarthView.World.Graphic.ControllerFunction
			{
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType, double EVbase) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					BasePtr valueEVbase = new BasePtr(EVbase);
					list.Add("EVbase", valueEVbase.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType, double EVbase, double frequency) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					BasePtr valueEVbase = new BasePtr(EVbase);
					list.Add("EVbase", valueEVbase.PtrVal);
					BasePtr valuefrequency = new BasePtr(frequency);
					list.Add("frequency", valuefrequency.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType, double EVbase, double frequency, double phase) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					BasePtr valueEVbase = new BasePtr(EVbase);
					list.Add("EVbase", valueEVbase.PtrVal);
					BasePtr valuefrequency = new BasePtr(frequency);
					list.Add("frequency", valuefrequency.PtrVal);
					BasePtr valuephase = new BasePtr(phase);
					list.Add("phase", valuephase.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType, double EVbase, double frequency, double phase, double amplitude) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					BasePtr valueEVbase = new BasePtr(EVbase);
					list.Add("EVbase", valueEVbase.PtrVal);
					BasePtr valuefrequency = new BasePtr(frequency);
					list.Add("frequency", valuefrequency.PtrVal);
					BasePtr valuephase = new BasePtr(phase);
					list.Add("phase", valuephase.PtrVal);
					BasePtr valueamplitude = new BasePtr(amplitude);
					list.Add("amplitude", valueamplitude.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType, double EVbase, double frequency, double phase, double amplitude, bool deltaInput) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					BasePtr valueEVbase = new BasePtr(EVbase);
					list.Add("EVbase", valueEVbase.PtrVal);
					BasePtr valuefrequency = new BasePtr(frequency);
					list.Add("frequency", valuefrequency.PtrVal);
					BasePtr valuephase = new BasePtr(phase);
					list.Add("phase", valuephase.PtrVal);
					BasePtr valueamplitude = new BasePtr(amplitude);
					list.Add("amplitude", valueamplitude.PtrVal);
					BasePtr valuedeltaInput = new BasePtr(deltaInput);
					list.Add("deltaInput", valuedeltaInput.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public WaveformControllerFunction(EarthView.World.Graphic.WAVEFORMTYPE wType, double EVbase, double frequency, double phase, double amplitude, bool deltaInput, double dutyCycle) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewType = new BasePtr(wType);
					list.Add("wType", valuewType.PtrVal);
					BasePtr valueEVbase = new BasePtr(EVbase);
					list.Add("EVbase", valueEVbase.PtrVal);
					BasePtr valuefrequency = new BasePtr(frequency);
					list.Add("frequency", valuefrequency.PtrVal);
					BasePtr valuephase = new BasePtr(phase);
					list.Add("phase", valuephase.PtrVal);
					BasePtr valueamplitude = new BasePtr(amplitude);
					list.Add("amplitude", valueamplitude.PtrVal);
					BasePtr valuedeltaInput = new BasePtr(deltaInput);
					list.Add("deltaInput", valuedeltaInput.PtrVal);
					BasePtr valuedutyCycle = new BasePtr(dutyCycle);
					list.Add("dutyCycle", valuedutyCycle.PtrVal);
					Create("CWaveformControllerFunctionProxy", list);
					if (!"EarthView.World.Graphic.WaveformControllerFunction".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_NoVirtual(IntPtr pNativeObject, double source);

				public new double Calculate_NoVirtual(double source)
				{
					double ret=EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_NoVirtual(this.NativeObject, source);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(IntPtr pNativeObject, double source);

				public override double Calculate(double source)
				{
					double ret=EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(this.NativeObject, source);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadWaveformControllerFunction = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CWaveformControllerFunction", new WaveformControllerFunctionClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CWaveformControllerFunctionProxy", new WaveformControllerFunctionClassFactory());

				public WaveformControllerFunction(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(IntPtr pObject, calculate_CallBack_Real_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_calculate_CallBack_Real_Real = EarthView_World_Graphic_CControllerFunction_calculate_Real_Real_Function;
						GC.KeepAlive(m_calculate_CallBack_Real_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(this.NativeObject, m_calculate_CallBack_Real_Real);
					}
				}
				public static WaveformControllerFunction FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					WaveformControllerFunction obj = baseObj as  WaveformControllerFunction;
					if (object.Equals(obj, null))
					{
						obj = new WaveformControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CWaveformControllerFunction");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class WaveformControllerFunctionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					WaveformControllerFunction emptyInstance = new WaveformControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
