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
			/// 标牌遮蔽计算监听对象
			/// </summary>
			public class ScutcheonTextListener : EarthView.World.Graphic.FrameListener
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_control">EarthView::World::Spatial3D::Controls::CGlobeControl控件</param>
				public ScutcheonTextListener(EarthView.World.Spatial3D.Controls.GlobeControl ref_control) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_control = new BasePtr(ref_control);
					list.Add("ref_control", valueref_control.PtrVal);
					Create("CScutcheonTextListenerProxy", list);
					if (!"EarthView.IndustryEngine.IndustryGraphic.ScutcheonTextListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧监听
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public new bool FrameStarted_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
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
				private static extern byte EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧监听
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public override bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_addScutcheonText_void_CScutcheonText(IntPtr pNativeObject, IntPtr ref_scutcheonText);

				/// <summary>
				/// 添加需要考虑遮蔽的标牌对象
				/// </summary>
				/// <param name="ref_movable">标牌对象，需要保证其生命周期在进行遮蔽判断期间一直存在，直到移除标牌对象、或不再进行遮蔽判断后才可以将标牌对象释放</param>
				public void AddScutcheonText(EarthView.IndustryEngine.IndustryGraphic.ScutcheonText ref_scutcheonText)
				{
					EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_addScutcheonText_void_CScutcheonText(this.NativeObject, object.Equals(ref_scutcheonText, null) ? IntPtr.Zero : ref_scutcheonText.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_removeScutcheonText_void_CScutcheonText(IntPtr pNativeObject, IntPtr scutcheonText);

				/// <summary>
				/// 移除不再考虑遮蔽的标牌对象
				/// </summary>
				/// <param name="ref_movable">标牌对象</param>
				public void RemoveScutcheonText(EarthView.IndustryEngine.IndustryGraphic.ScutcheonText scutcheonText)
				{
					EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_removeScutcheonText_void_CScutcheonText(this.NativeObject, object.Equals(scutcheonText, null) ? IntPtr.Zero : scutcheonText.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_d.so");
						private static bool csbLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_CSharp_d.so");

					#else 
						private static bool bLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_d.dll");
						private static bool csbLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic.so");
						private static bool csbLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_CSharp.so");

					#else 
						private static bool bLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic.dll");
						private static bool csbLoadScutcheonTextListener = LoadDll.Load("EV_IndustryGraphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener", new ScutcheonTextListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListenerProxy", new ScutcheonTextListenerClassFactory());

				public ScutcheonTextListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pObject, frameRenderingQueued_CallBack_ev_bool_FrameEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
						m_frameRenderingQueued_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
					}
				}
				public override bool FrameRenderingQueued(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameRenderingQueued_NoVirtual(ref evt);
				}
				public override bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					return base.FrameEnded_NoVirtual(ref evt);
				}
				public static ScutcheonTextListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScutcheonTextListener obj = baseObj as  ScutcheonTextListener;
					if (object.Equals(obj, null))
					{
						obj = new ScutcheonTextListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScutcheonTextListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScutcheonTextListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScutcheonTextListener emptyInstance = new ScutcheonTextListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
