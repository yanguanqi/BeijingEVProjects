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
			/// 动态目标事件管理器
			/// </summary>
			public class DynamicObjectEventManager : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 动态目标事件管理器构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="ref_manager">动态目标管理器</param>
				public DynamicObjectEventManager(string name, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager ref_manager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_manager = new BasePtr(ref_manager);
					list.Add("ref_manager", valueref_manager.PtrVal);
					Create("CDynamicObjectEventManagerProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEventManager".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent(IntPtr ref_dynamicObjectEvent);

				protected addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent m_addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_NoVirtual(IntPtr pNativeObject, IntPtr ref_dynamicObjectEvent);

				/// <summary>
				/// 添加动态目标事件对象
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">动态目标事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void AddDynamicObjectEvent_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent ref_dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_NoVirtual(this.NativeObject, object.Equals(ref_dynamicObjectEvent, null) ? IntPtr.Zero : ref_dynamicObjectEvent.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Function(IntPtr ref_dynamicObjectEvent)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent csobj_ref_dynamicObjectEvent = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_dynamicObjectEvent.BindNativeObject(ref_dynamicObjectEvent,"CDynamicObjectEvent");
					csobj_ref_dynamicObjectEvent.Delegate = true;
					IClassFactory csobj_ref_dynamicObjectEventClassFactory = GlobalClassFactoryMap.Get(csobj_ref_dynamicObjectEvent.GetCppInstanceTypeName());
					if (csobj_ref_dynamicObjectEventClassFactory != null)
					{
						csobj_ref_dynamicObjectEvent.Delegate = true;
						csobj_ref_dynamicObjectEvent = csobj_ref_dynamicObjectEventClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent;
						csobj_ref_dynamicObjectEvent.BindNativeObject(ref_dynamicObjectEvent, "CDynamicObjectEvent");
						csobj_ref_dynamicObjectEvent.Delegate = true;
					}
					
					AddDynamicObjectEvent(csobj_ref_dynamicObjectEvent);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr ref_dynamicObjectEvent);

				/// <summary>
				/// 添加动态目标事件对象
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">动态目标事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void AddDynamicObjectEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent ref_dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(ref_dynamicObjectEvent, null) ? IntPtr.Zero : ref_dynamicObjectEvent.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent(IntPtr dynamicObjectEvent);

				protected removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent m_removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_NoVirtual(IntPtr pNativeObject, IntPtr dynamicObjectEvent);

				/// <summary>
				/// 移除动态目标事件
				/// </summary>
				/// <param name="dynamicObjectEvent">动态目标事件</param>
				public virtual void RemoveDynamicObjectEvent_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_NoVirtual(this.NativeObject, object.Equals(dynamicObjectEvent, null) ? IntPtr.Zero : dynamicObjectEvent.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Function(IntPtr dynamicObjectEvent)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent csobj_dynamicObjectEvent = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dynamicObjectEvent.BindNativeObject(dynamicObjectEvent,"CDynamicObjectEvent");
					csobj_dynamicObjectEvent.Delegate = true;
					IClassFactory csobj_dynamicObjectEventClassFactory = GlobalClassFactoryMap.Get(csobj_dynamicObjectEvent.GetCppInstanceTypeName());
					if (csobj_dynamicObjectEventClassFactory != null)
					{
						csobj_dynamicObjectEvent.Delegate = true;
						csobj_dynamicObjectEvent = csobj_dynamicObjectEventClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent;
						csobj_dynamicObjectEvent.BindNativeObject(dynamicObjectEvent, "CDynamicObjectEvent");
						csobj_dynamicObjectEvent.Delegate = true;
					}
					
					RemoveDynamicObjectEvent(csobj_dynamicObjectEvent);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(IntPtr pNativeObject, IntPtr dynamicObjectEvent);

				/// <summary>
				/// 移除动态目标事件
				/// </summary>
				/// <param name="dynamicObjectEvent">动态目标事件</param>
				public virtual void RemoveDynamicObjectEvent(EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEvent dynamicObjectEvent)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(this.NativeObject, object.Equals(dynamicObjectEvent, null) ? IntPtr.Zero : dynamicObjectEvent.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void beforeTimePosition_CallBack_void_Real_ev_bool(double time, bool isLooping);

				protected beforeTimePosition_CallBack_void_Real_ev_bool m_beforeTimePosition_CallBack_void_Real_ev_bool;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_NoVirtual(IntPtr pNativeObject, double time, byte isLooping);

				/// <summary>
				/// 到达该时间点之前触发
				/// </summary>
				/// <param name="time">时间点</param>
				/// <param name="isLooping">动画是否将要进入循环状态</param>
				public virtual void BeforeTimePosition_NoVirtual(double time, bool isLooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_NoVirtual(this.NativeObject, time, Convert.ToByte(isLooping));
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Function(double time, bool isLooping)
				{
					BeforeTimePosition(time, isLooping);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(IntPtr pNativeObject, double time, byte isLooping);

				/// <summary>
				/// 到达该时间点之前触发
				/// </summary>
				/// <param name="time">时间点</param>
				/// <param name="isLooping">动画是否将要进入循环状态</param>
				public virtual void BeforeTimePosition(double time, bool isLooping)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(this.NativeObject, time, Convert.ToByte(isLooping));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void afterTimePosition_CallBack_void_Real_ev_bool(double time, bool isEnd);

				protected afterTimePosition_CallBack_void_Real_ev_bool m_afterTimePosition_CallBack_void_Real_ev_bool;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_NoVirtual(IntPtr pNativeObject, double time, byte isEnd);

				/// <summary>
				/// 到达该时间点之后触发
				/// </summary>
				/// <param name="time">时间点</param>
				/// <param name="isEnd">动画是否结束</param>
				public virtual void AfterTimePosition_NoVirtual(double time, bool isEnd)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_NoVirtual(this.NativeObject, time, Convert.ToByte(isEnd));
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Function(double time, bool isEnd)
				{
					AfterTimePosition(time, isEnd);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(IntPtr pNativeObject, double time, byte isEnd);

				/// <summary>
				/// 到达该时间点之后触发
				/// </summary>
				/// <param name="time">时间点</param>
				/// <param name="isEnd">动画是否结束</param>
				public virtual void AfterTimePosition(double time, bool isEnd)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(this.NativeObject, time, Convert.ToByte(isEnd));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void resetEvent_CallBack_void();

				protected resetEvent_CallBack_void m_resetEvent_CallBack_void;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 重置事件
				/// </summary>
				public virtual void ResetEvent_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Function()
				{
					ResetEvent();
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(IntPtr pNativeObject);

				/// <summary>
				/// 重置事件
				/// </summary>
				public virtual void ResetEvent()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setTimePosition_CallBack_void_Real(double time);

				protected setTimePosition_CallBack_void_Real m_setTimePosition_CallBack_void_Real;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_NoVirtual(IntPtr pNativeObject, double time);

				/// <summary>
				/// 设置动画时间
				/// </summary>
				/// <param name="time">动画时间</param>
				public virtual void SetTimePosition_NoVirtual(double time)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_NoVirtual(this.NativeObject, time);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Function(double time)
				{
					SetTimePosition(time);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(IntPtr pNativeObject, double time);

				/// <summary>
				/// 设置动画时间
				/// </summary>
				/// <param name="time">动画时间</param>
				public virtual void SetTimePosition(double time)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(this.NativeObject, time);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getName_CallBack_EVString();

				protected getName_CallBack_EVString m_getName_CallBack_EVString;

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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				public virtual string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Function()
				{
					string csret=GetName();
					
					return csret;
					
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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获取名称
				/// </summary>
				/// <returns>名称</returns>
				public virtual string GetName()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setName_CallBack_void_EVString(ref IntPtr name);

				protected setName_CallBack_void_EVString m_setName_CallBack_void_EVString;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="name">名称</param>
				public virtual void SetName_NoVirtual(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetName(strname);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="name">名称</param>
				public virtual void SetName(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(this.NativeObject, name);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicObjectEventManager = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager", new DynamicObjectEventManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManagerProxy", new DynamicObjectEventManagerClassFactory());

				public DynamicObjectEventManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(IntPtr pObject, addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(IntPtr pObject, removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(IntPtr pObject, beforeTimePosition_CallBack_void_Real_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(IntPtr pObject, afterTimePosition_CallBack_void_Real_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(IntPtr pObject, resetEvent_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(IntPtr pObject, setTimePosition_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Function;
						GC.KeepAlive(m_addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(this.NativeObject, m_addDynamicObjectEvent_CallBack_void_CDynamicObjectEvent);
						m_removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Function;
						GC.KeepAlive(m_removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(this.NativeObject, m_removeDynamicObjectEvent_CallBack_void_CDynamicObjectEvent);
						m_beforeTimePosition_CallBack_void_Real_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Function;
						GC.KeepAlive(m_beforeTimePosition_CallBack_void_Real_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(this.NativeObject, m_beforeTimePosition_CallBack_void_Real_ev_bool);
						m_afterTimePosition_CallBack_void_Real_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Function;
						GC.KeepAlive(m_afterTimePosition_CallBack_void_Real_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(this.NativeObject, m_afterTimePosition_CallBack_void_Real_ev_bool);
						m_resetEvent_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Function;
						GC.KeepAlive(m_resetEvent_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(this.NativeObject, m_resetEvent_CallBack_void);
						m_setTimePosition_CallBack_void_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Function;
						GC.KeepAlive(m_setTimePosition_CallBack_void_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(this.NativeObject, m_setTimePosition_CallBack_void_Real);
						m_getName_CallBack_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_setName_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Function;
						GC.KeepAlive(m_setName_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
					}
				}
				public static DynamicObjectEventManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicObjectEventManager obj = baseObj as  DynamicObjectEventManager;
					if (object.Equals(obj, null))
					{
						obj = new DynamicObjectEventManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicObjectEventManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicObjectEventManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicObjectEventManager emptyInstance = new DynamicObjectEventManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
