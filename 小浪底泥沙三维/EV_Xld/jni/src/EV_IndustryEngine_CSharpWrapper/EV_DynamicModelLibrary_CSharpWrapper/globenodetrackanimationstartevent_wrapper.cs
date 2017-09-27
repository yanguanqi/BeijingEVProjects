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
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 轨迹动画开始事件
			/// </summary>
			public class GlobeNodeTrackAnimationStartEvent : EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent
			{
				/// <summary>
				/// 轨迹动画开始事件构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="dynamicModelObjectName">与该事件关联的动态目标名称</param>
				/// <param name="timePosition">事件发生的时间</param>
				public GlobeNodeTrackAnimationStartEvent(string name, string dynamicModelObjectName, double timePosition) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valuedynamicModelObjectName = new BasePtr(dynamicModelObjectName);
					list.Add("dynamicModelObjectName", valuedynamicModelObjectName.PtrVal);
					BasePtr valuetimePosition = new BasePtr(timePosition);
					list.Add("timePosition", valuetimePosition.PtrVal);
					Create("CGlobeNodeTrackAnimationStartEventProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.GlobeNodeTrackAnimationStartEvent".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr manager, double curAnimationTime, byte islooping);

				/// <summary>
				/// 到达事件发生之前触发
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="islooping">是否将要进入动画循环</param>
				public new void BeforeEvent_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager manager, double curAnimationTime, bool islooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(this.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject, curAnimationTime, Convert.ToByte(islooping));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(IntPtr pNativeObject, IntPtr manager, double curAnimationTime, byte islooping);

				/// <summary>
				/// 到达事件发生之前触发
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="islooping">是否将要进入动画循环</param>
				public override void BeforeEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager manager, double curAnimationTime, bool islooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(this.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject, curAnimationTime, Convert.ToByte(islooping));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr manager, double curAnimationTime, byte isEnd);

				/// <summary>
				/// 到达事件发生点之后触发
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="isEnd">动画是否结束</param>
				public new void AfterEvent_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager manager, double curAnimationTime, bool isEnd)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(this.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject, curAnimationTime, Convert.ToByte(isEnd));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(IntPtr pNativeObject, IntPtr manager, double curAnimationTime, byte isEnd);

				/// <summary>
				/// 到达事件发生点之后触发
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="curAnimationTime">当前的动画时间</param>
				/// <param name="isEnd">动画是否结束</param>
				public override void AfterEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager manager, double curAnimationTime, bool isEnd)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(this.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject, curAnimationTime, Convert.ToByte(isEnd));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_NoVirtual(IntPtr pNativeObject, IntPtr manager);

				/// <summary>
				/// 重置事件
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public new void ResetEvent_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager manager)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_NoVirtual(this.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(IntPtr pNativeObject, IntPtr manager);

				/// <summary>
				/// 重置事件
				/// </summary>
				/// <param name="manager">动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public override void ResetEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager manager)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(this.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadGlobeNodeTrackAnimationStartEvent = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent", new GlobeNodeTrackAnimationStartEventClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEventProxy", new GlobeNodeTrackAnimationStartEventClassFactory());

				public GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(IntPtr pObject, beforeEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(IntPtr pObject, afterEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(IntPtr pObject, resetEvent_CallBack_void_CDynamicModelObjectManager pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real(IntPtr pObject, setTimePosition_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real(IntPtr pObject, getTimePosition_CallBack_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool(IntPtr pObject, setIsFired_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool(IntPtr pObject, getIsFired_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real(IntPtr pObject, canFired_CallBack_ev_bool_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string(IntPtr pObject, getName_CallBack_EarthView_World_Core_ev_string pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_beforeEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Function;
						GC.KeepAlive(m_beforeEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(this.NativeObject, m_beforeEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool);
						m_afterEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Function;
						GC.KeepAlive(m_afterEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(this.NativeObject, m_afterEvent_CallBack_void_CDynamicModelObjectManager_Real_ev_bool);
						m_resetEvent_CallBack_void_CDynamicModelObjectManager = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Function;
						GC.KeepAlive(m_resetEvent_CallBack_void_CDynamicModelObjectManager);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(this.NativeObject, m_resetEvent_CallBack_void_CDynamicModelObjectManager);
						m_setTimePosition_CallBack_void_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Function;
						GC.KeepAlive(m_setTimePosition_CallBack_void_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real(this.NativeObject, m_setTimePosition_CallBack_void_Real);
						m_getTimePosition_CallBack_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Function;
						GC.KeepAlive(m_getTimePosition_CallBack_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real(this.NativeObject, m_getTimePosition_CallBack_Real);
						m_setIsFired_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Function;
						GC.KeepAlive(m_setIsFired_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool(this.NativeObject, m_setIsFired_CallBack_void_ev_bool);
						m_getIsFired_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Function;
						GC.KeepAlive(m_getIsFired_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool(this.NativeObject, m_getIsFired_CallBack_ev_bool);
						m_canFired_CallBack_ev_bool_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Function;
						GC.KeepAlive(m_canFired_CallBack_ev_bool_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real(this.NativeObject, m_canFired_CallBack_ev_bool_Real);
						m_getName_CallBack_EarthView_World_Core_ev_string = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Function;
						GC.KeepAlive(m_getName_CallBack_EarthView_World_Core_ev_string);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string(this.NativeObject, m_getName_CallBack_EarthView_World_Core_ev_string);
						m_setName_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Function;
						GC.KeepAlive(m_setName_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
					}
				}
				public override void SetTimePosition(double timePosition)
				{
					base.SetTimePosition_NoVirtual(timePosition);
				}
				public override double GetTimePosition()
				{
					return base.GetTimePosition_NoVirtual();
				}
				public override void SetIsFired(bool fired)
				{
					base.SetIsFired_NoVirtual(fired);
				}
				public override bool GetIsFired()
				{
					return base.GetIsFired_NoVirtual();
				}
				public override bool CanFired(double timePosition)
				{
					return base.CanFired_NoVirtual(timePosition);
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override void SetName(string name)
				{
					base.SetName_NoVirtual(name);
				}
				public static GlobeNodeTrackAnimationStartEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GlobeNodeTrackAnimationStartEvent obj = baseObj as  GlobeNodeTrackAnimationStartEvent;
					if (object.Equals(obj, null))
					{
						obj = new GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGlobeNodeTrackAnimationStartEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GlobeNodeTrackAnimationStartEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GlobeNodeTrackAnimationStartEvent emptyInstance = new GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
