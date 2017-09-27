/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			public enum WORKQUEUEPRIORITY
			{
						Work_Queue_Tile = 100,
						Work_Queue_Vector = 200,
						Work_Queue_Model = 300,
						Work_Queue_Effect = 400,
						Work_Queue_Kml = 500,
						Work_Queue_Default = 600,
						Work_Queue_Custom = 1000
			
			}

			public class WorkQueueChannelListener : EarthView.World.Core.AllocatedObject
			{
				public WorkQueueChannelListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CWorkQueueChannelListenerProxy", null);
					if (!"EarthView.World.Core.WorkQueueChannelListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte preRequestSorted_CallBack_ev_bool_ev_uint16(ushort channelID);

				protected preRequestSorted_CallBack_ev_bool_ev_uint16 m_preRequestSorted_CallBack_ev_bool_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort channelID);

				public virtual bool PreRequestSorted_NoVirtual(ushort channelID)
				{
					byte ret=EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_NoVirtual(this.NativeObject, channelID);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Function(ushort channelID)
				{
					bool csret=PreRequestSorted(channelID);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(IntPtr pNativeObject, ushort channelID);

				public virtual bool PreRequestSorted(ushort channelID)
				{
					byte ret=EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(this.NativeObject, channelID);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void postRequestSorted_CallBack_void_ev_uint16(ushort channelID);

				protected postRequestSorted_CallBack_void_ev_uint16 m_postRequestSorted_CallBack_void_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort channelID);

				public virtual void PostRequestSorted_NoVirtual(ushort channelID)
				{
					EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_NoVirtual(this.NativeObject, channelID);
					
				}

				protected  void EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Function(ushort channelID)
				{
					PostRequestSorted(channelID);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(IntPtr pNativeObject, ushort channelID);

				public virtual void PostRequestSorted(ushort channelID)
				{
					EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(this.NativeObject, channelID);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadWorkQueueChannelListener = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadWorkQueueChannelListener = LoadDll.Load("EV_Core.so");
						private static bool csbLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadWorkQueueChannelListener = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadWorkQueueChannelListener = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueueChannelListener", new WorkQueueChannelListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueueChannelListenerProxy", new WorkQueueChannelListenerClassFactory());

				public WorkQueueChannelListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(IntPtr pObject, preRequestSorted_CallBack_ev_bool_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(IntPtr pObject, postRequestSorted_CallBack_void_ev_uint16 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_preRequestSorted_CallBack_ev_bool_ev_uint16 = EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Function;
						GC.KeepAlive(m_preRequestSorted_CallBack_ev_bool_ev_uint16);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(this.NativeObject, m_preRequestSorted_CallBack_ev_bool_ev_uint16);
						m_postRequestSorted_CallBack_void_ev_uint16 = EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Function;
						GC.KeepAlive(m_postRequestSorted_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(this.NativeObject, m_postRequestSorted_CallBack_void_ev_uint16);
					}
				}
				public static WorkQueueChannelListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					WorkQueueChannelListener obj = baseObj as  WorkQueueChannelListener;
					if (object.Equals(obj, null))
					{
						obj = new WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CWorkQueueChannelListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class WorkQueueChannelListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					WorkQueueChannelListener emptyInstance = new WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class WorkQueue : EarthView.World.Core.AllocatedObject
			{
				public class RequestPara : EarthView.World.Core.BaseObject
				{
					public RequestPara() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("RequestParaProxy", null);
						if (!"EarthView.World.Core.WorkQueue+RequestPara".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr clone_CallBack_RequestPara();

					protected clone_CallBack_RequestPara m_clone_CallBack_RequestPara;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_NoVirtual(IntPtr pNativeObject);

					public virtual EarthView.World.Core.WorkQueue.RequestPara Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.RequestPara csObj = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RequestPara");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
							csObj.BindNativeObject(__ptr, "RequestPara");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Function()
					{
						EarthView.World.Core.WorkQueue.RequestPara csret=Clone();
						
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
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(IntPtr pNativeObject);

					public virtual EarthView.World.Core.WorkQueue.RequestPara Clone()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.RequestPara csObj = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RequestPara");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
							csObj.BindNativeObject(__ptr, "RequestPara");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_RequestPara_getRequest_CRequest(IntPtr pNativeObject);

					public EarthView.World.Core.WorkQueue.Request GetRequest()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_RequestPara_getRequest_CRequest(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.Request csObj = new EarthView.World.Core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRequest");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.Request;
							csObj.BindNativeObject(__ptr, "CRequest");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CWorkQueue_RequestPara_setRequest_void_CRequest(IntPtr pNativeObject, IntPtr parent);

					public void SetRequest(EarthView.World.Core.WorkQueue.Request parent)
					{
						EarthView_World_Core_CWorkQueue_RequestPara_setRequest_void_CRequest(this.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRequestPara = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequestPara = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRequestPara = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadRequestPara = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadRequestPara = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequestPara = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRequestPara = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequestPara = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadRequestPara = LoadDll.Load("EV_Core.so");
							private static bool csbLoadRequestPara = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadRequestPara = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequestPara = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::RequestPara", new RequestParaClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::RequestParaProxy", new RequestParaClassFactory());

					public RequestPara(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(IntPtr pObject, clone_CallBack_RequestPara pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_clone_CallBack_RequestPara = EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Function;
							GC.KeepAlive(m_clone_CallBack_RequestPara);
							EV_RegisterCallback_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(this.NativeObject, m_clone_CallBack_RequestPara);
						}
					}
					public static RequestPara FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RequestPara obj = baseObj as  RequestPara;
						if (object.Equals(obj, null))
						{
							obj = new RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "RequestPara");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RequestParaClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RequestPara emptyInstance = new RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResponsePara : EarthView.World.Core.BaseObject
				{
					public ResponsePara() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ResponseParaProxy", null);
						if (!"EarthView.World.Core.WorkQueue+ResponsePara".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr clone_CallBack_ResponsePara();

					protected clone_CallBack_ResponsePara m_clone_CallBack_ResponsePara;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_NoVirtual(IntPtr pNativeObject);

					public virtual EarthView.World.Core.WorkQueue.ResponsePara Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.ResponsePara csObj = new EarthView.World.Core.WorkQueue.ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResponsePara");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.ResponsePara;
							csObj.BindNativeObject(__ptr, "ResponsePara");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Function()
					{
						EarthView.World.Core.WorkQueue.ResponsePara csret=Clone();
						
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
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(IntPtr pNativeObject);

					public virtual EarthView.World.Core.WorkQueue.ResponsePara Clone()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.ResponsePara csObj = new EarthView.World.Core.WorkQueue.ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResponsePara");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.ResponsePara;
							csObj.BindNativeObject(__ptr, "ResponsePara");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_ResponsePara_getResponse_CResponse(IntPtr pNativeObject);

					public EarthView.World.Core.WorkQueue.Response GetResponse()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_ResponsePara_getResponse_CResponse(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.Response csObj = new EarthView.World.Core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CResponse");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.Response;
							csObj.BindNativeObject(__ptr, "CResponse");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CWorkQueue_ResponsePara_setResponse_void_CResponse(IntPtr pNativeObject, IntPtr parent);

					public void SetResponse(EarthView.World.Core.WorkQueue.Response parent)
					{
						EarthView_World_Core_CWorkQueue_ResponsePara_setResponse_void_CResponse(this.NativeObject, object.Equals(parent, null) ? IntPtr.Zero : parent.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResponsePara = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadResponsePara = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResponsePara = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadResponsePara = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadResponsePara = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadResponsePara = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResponsePara = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadResponsePara = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadResponsePara = LoadDll.Load("EV_Core.so");
							private static bool csbLoadResponsePara = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadResponsePara = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadResponsePara = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::ResponsePara", new ResponseParaClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::ResponseParaProxy", new ResponseParaClassFactory());

					public ResponsePara(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(IntPtr pObject, clone_CallBack_ResponsePara pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_clone_CallBack_ResponsePara = EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Function;
							GC.KeepAlive(m_clone_CallBack_ResponsePara);
							EV_RegisterCallback_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(this.NativeObject, m_clone_CallBack_ResponsePara);
						}
					}
					public static ResponsePara FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResponsePara obj = baseObj as  ResponsePara;
						if (object.Equals(obj, null))
						{
							obj = new ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResponsePara");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResponseParaClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResponsePara emptyInstance = new ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Request : EarthView.World.Core.AllocatedObject
				{
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong Get_EarthView_World_Core_CWorkQueue_CRequest_mID(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Core_CWorkQueue_CRequest_mID( IntPtr pObject, ulong value );

					public 					ulong MID
					{
						get
						{
							ulong ret=Get_EarthView_World_Core_CWorkQueue_CRequest_mID(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Core_CWorkQueue_CRequest_mID(this.NativeObject,value);
						}
					}

					public Request(ushort channel, ushort rtype, EarthView.World.Core.WorkQueue.RequestPara rData, byte retry, ulong rid) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuechannel = new BasePtr(channel);
						list.Add("channel", valuechannel.PtrVal);
						BasePtr valuertype = new BasePtr(rtype);
						list.Add("rtype", valuertype.PtrVal);
						BasePtr valuerData = new BasePtr(rData);
						list.Add("rData", valuerData.PtrVal);
						BasePtr valueretry = new BasePtr(retry);
						list.Add("retry", valueretry.PtrVal);
						BasePtr valuerid = new BasePtr(rid);
						list.Add("rid", valuerid.PtrVal);
						Create("CRequest", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public Request(ushort channel, ushort rtype, EarthView.World.Core.WorkQueue.RequestPara rData, byte retry, ulong rid, ulong filter) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuechannel = new BasePtr(channel);
						list.Add("channel", valuechannel.PtrVal);
						BasePtr valuertype = new BasePtr(rtype);
						list.Add("rtype", valuertype.PtrVal);
						BasePtr valuerData = new BasePtr(rData);
						list.Add("rData", valuerData.PtrVal);
						BasePtr valueretry = new BasePtr(retry);
						list.Add("retry", valueretry.PtrVal);
						BasePtr valuerid = new BasePtr(rid);
						list.Add("rid", valuerid.PtrVal);
						BasePtr valuefilter = new BasePtr(filter);
						list.Add("filter", valuefilter.PtrVal);
						Create("CRequest", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CWorkQueue_CRequest_abortRequest_void(IntPtr pNativeObject);

					public void AbortRequest()
					{
						EarthView_World_Core_CWorkQueue_CRequest_abortRequest_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_World_Core_CWorkQueue_CRequest_getChannel_ev_uint16(IntPtr pNativeObject);

					public ushort GetChannel()
					{
						ushort ret=EarthView_World_Core_CWorkQueue_CRequest_getChannel_ev_uint16(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_World_Core_CWorkQueue_CRequest_getType_ev_uint16(IntPtr pNativeObject);

					public ushort GetType()
					{
						ushort ret=EarthView_World_Core_CWorkQueue_CRequest_getType_ev_uint16(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_CRequest_getData_RequestPara(IntPtr pNativeObject);

					public EarthView.World.Core.WorkQueue.RequestPara GetData()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_CRequest_getData_RequestPara(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.RequestPara csObj = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RequestPara");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
							csObj.BindNativeObject(__ptr, "RequestPara");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CRequest_getRetryCount_ev_uint8(IntPtr pNativeObject);

					public byte GetRetryCount()
					{
						byte ret=EarthView_World_Core_CWorkQueue_CRequest_getRetryCount_ev_uint8(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Core_CWorkQueue_CRequest_getID_ev_uint64(IntPtr pNativeObject);

					public ulong GetID()
					{
						ulong ret=EarthView_World_Core_CWorkQueue_CRequest_getID_ev_uint64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CRequest_getAborted_ev_bool(IntPtr pNativeObject);

					public bool GetAborted()
					{
						byte ret=EarthView_World_Core_CWorkQueue_CRequest_getAborted_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Core_CWorkQueue_CRequest_getFilter_ev_uint64(IntPtr pNativeObject);

					public ulong GetFilter()
					{
						ulong ret=EarthView_World_Core_CWorkQueue_CRequest_getFilter_ev_uint64(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRequest = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequest = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRequest = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadRequest = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadRequest = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequest = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRequest = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequest = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadRequest = LoadDll.Load("EV_Core.so");
							private static bool csbLoadRequest = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadRequest = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequest = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CRequest", new RequestClassFactory());

					public Request(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Request FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Request obj = baseObj as  Request;
						if (object.Equals(obj, null))
						{
							obj = new Request(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRequest");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RequestClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Request emptyInstance = new Request(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Response : EarthView.World.Core.AllocatedObject
				{
					public Response(EarthView.World.Core.WorkQueue.Request rq, bool success, EarthView.World.Core.WorkQueue.ResponsePara data, string msg) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerq = new BasePtr(rq);
						list.Add("rq", valuerq.PtrVal);
						BasePtr valuesuccess = new BasePtr(success);
						list.Add("success", valuesuccess.PtrVal);
						BasePtr valuedata = new BasePtr(data);
						list.Add("data", valuedata.PtrVal);
						BasePtr valuemsg = new BasePtr(msg);
						list.Add("msg", valuemsg.PtrVal);
						Create("CResponse", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public Response(EarthView.World.Core.WorkQueue.Request rq, bool success, EarthView.World.Core.WorkQueue.ResponsePara data) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerq = new BasePtr(rq);
						list.Add("rq", valuerq.PtrVal);
						BasePtr valuesuccess = new BasePtr(success);
						list.Add("success", valuesuccess.PtrVal);
						BasePtr valuedata = new BasePtr(data);
						list.Add("data", valuedata.PtrVal);
						Create("CResponse", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_CResponse_getRequest_CRequest(IntPtr pNativeObject);

					public EarthView.World.Core.WorkQueue.Request GetRequest()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_CResponse_getRequest_CRequest(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.Request csObj = new EarthView.World.Core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRequest");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.Request;
							csObj.BindNativeObject(__ptr, "CRequest");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CResponse_succeeded_ev_bool(IntPtr pNativeObject);

					public bool Succeeded()
					{
						byte ret=EarthView_World_Core_CWorkQueue_CResponse_succeeded_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_CResponse_getMessages_EVString(IntPtr pNativeObject);

					public string GetMessages()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_CResponse_getMessages_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CWorkQueue_CResponse_abortRequest_void(IntPtr pNativeObject);

					public void AbortRequest()
					{
						EarthView_World_Core_CWorkQueue_CResponse_abortRequest_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_CResponse_getData_ResponsePara(IntPtr pNativeObject);

					public EarthView.World.Core.WorkQueue.ResponsePara GetData()
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_CResponse_getData_ResponsePara(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.ResponsePara csObj = new EarthView.World.Core.WorkQueue.ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ResponsePara");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.ResponsePara;
							csObj.BindNativeObject(__ptr, "ResponsePara");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResponse = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadResponse = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResponse = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadResponse = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadResponse = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadResponse = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResponse = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadResponse = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadResponse = LoadDll.Load("EV_Core.so");
							private static bool csbLoadResponse = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadResponse = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadResponse = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CResponse", new ResponseClassFactory());

					public Response(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Response FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Response obj = baseObj as  Response;
						if (object.Equals(obj, null))
						{
							obj = new Response(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CResponse");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResponseClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Response emptyInstance = new Response(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RequestHandler : EarthView.World.Core.BaseObject
				{
					public RequestHandler() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRequestHandlerProxy", null);
						if (!"EarthView.World.Core.WorkQueue+RequestHandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue(IntPtr req, IntPtr srcQ);

					protected canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public virtual bool CanHandleRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Function(IntPtr req, IntPtr srcQ)
					{
						EarthView.World.Core.WorkQueue.Request csobj_req = new EarthView.World.Core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_req.BindNativeObject(req,"CRequest");
						csobj_req.Delegate = true;
						IClassFactory csobj_reqClassFactory = GlobalClassFactoryMap.Get(csobj_req.GetCppInstanceTypeName());
						if (csobj_reqClassFactory != null)
						{
							csobj_req.Delegate = true;
							csobj_req = csobj_reqClassFactory.Create() as EarthView.World.Core.WorkQueue.Request;
							csobj_req.BindNativeObject(req, "CRequest");
							csobj_req.Delegate = true;
						}
						EarthView.World.Core.WorkQueue csobj_srcQ = new EarthView.World.Core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcQ.BindNativeObject(srcQ,"CWorkQueue");
						csobj_srcQ.Delegate = true;
						IClassFactory csobj_srcQClassFactory = GlobalClassFactoryMap.Get(csobj_srcQ.GetCppInstanceTypeName());
						if (csobj_srcQClassFactory != null)
						{
							csobj_srcQ.Delegate = true;
							csobj_srcQ = csobj_srcQClassFactory.Create() as EarthView.World.Core.WorkQueue;
							csobj_srcQ.BindNativeObject(srcQ, "CWorkQueue");
							csobj_srcQ.Delegate = true;
						}
						
						bool csret=CanHandleRequest(csobj_req, csobj_srcQ);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public virtual bool CanHandleRequest(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr handleRequest_CallBack_CResponse_CRequest_CWorkQueue(IntPtr req, IntPtr srcQ);

					protected handleRequest_CallBack_CResponse_CRequest_CWorkQueue m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public virtual EarthView.World.Core.WorkQueue.Response HandleRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.Response csObj = new EarthView.World.Core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CResponse");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.Response;
							csObj.BindNativeObject(__ptr, "CResponse");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Function(IntPtr req, IntPtr srcQ)
					{
						EarthView.World.Core.WorkQueue.Request csobj_req = new EarthView.World.Core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_req.BindNativeObject(req,"CRequest");
						csobj_req.Delegate = true;
						IClassFactory csobj_reqClassFactory = GlobalClassFactoryMap.Get(csobj_req.GetCppInstanceTypeName());
						if (csobj_reqClassFactory != null)
						{
							csobj_req.Delegate = true;
							csobj_req = csobj_reqClassFactory.Create() as EarthView.World.Core.WorkQueue.Request;
							csobj_req.BindNativeObject(req, "CRequest");
							csobj_req.Delegate = true;
						}
						EarthView.World.Core.WorkQueue csobj_srcQ = new EarthView.World.Core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcQ.BindNativeObject(srcQ,"CWorkQueue");
						csobj_srcQ.Delegate = true;
						IClassFactory csobj_srcQClassFactory = GlobalClassFactoryMap.Get(csobj_srcQ.GetCppInstanceTypeName());
						if (csobj_srcQClassFactory != null)
						{
							csobj_srcQ.Delegate = true;
							csobj_srcQ = csobj_srcQClassFactory.Create() as EarthView.World.Core.WorkQueue;
							csobj_srcQ.BindNativeObject(srcQ, "CWorkQueue");
							csobj_srcQ.Delegate = true;
						}
						
						EarthView.World.Core.WorkQueue.Response csret=HandleRequest(csobj_req, csobj_srcQ);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public virtual EarthView.World.Core.WorkQueue.Response HandleRequest(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						IntPtr __ptr = EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.Response csObj = new EarthView.World.Core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CResponse");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.Response;
							csObj.BindNativeObject(__ptr, "CResponse");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRequestHandler = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequestHandler = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRequestHandler = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadRequestHandler = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadRequestHandler = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequestHandler = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRequestHandler = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequestHandler = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadRequestHandler = LoadDll.Load("EV_Core.so");
							private static bool csbLoadRequestHandler = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadRequestHandler = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequestHandler = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CRequestHandler", new RequestHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CRequestHandlerProxy", new RequestHandlerClassFactory());

					public RequestHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(IntPtr pObject, canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pObject, handleRequest_CallBack_CResponse_CRequest_CWorkQueue pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue = EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Function;
							GC.KeepAlive(m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(this.NativeObject, m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue);
							m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue = EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Function;
							GC.KeepAlive(m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue);
						}
					}
					public static RequestHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RequestHandler obj = baseObj as  RequestHandler;
						if (object.Equals(obj, null))
						{
							obj = new RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRequestHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RequestHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RequestHandler emptyInstance = new RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResponseHandler : EarthView.World.Core.BaseObject
				{
					public ResponseHandler() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CResponseHandlerProxy", null);
						if (!"EarthView.World.Core.WorkQueue+ResponseHandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue(IntPtr res, IntPtr srcQ);

					protected canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public virtual bool CanHandleResponse_NoVirtual(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Function(IntPtr res, IntPtr srcQ)
					{
						EarthView.World.Core.WorkQueue.Response csobj_res = new EarthView.World.Core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_res.BindNativeObject(res,"CResponse");
						csobj_res.Delegate = true;
						IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
						if (csobj_resClassFactory != null)
						{
							csobj_res.Delegate = true;
							csobj_res = csobj_resClassFactory.Create() as EarthView.World.Core.WorkQueue.Response;
							csobj_res.BindNativeObject(res, "CResponse");
							csobj_res.Delegate = true;
						}
						EarthView.World.Core.WorkQueue csobj_srcQ = new EarthView.World.Core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcQ.BindNativeObject(srcQ,"CWorkQueue");
						csobj_srcQ.Delegate = true;
						IClassFactory csobj_srcQClassFactory = GlobalClassFactoryMap.Get(csobj_srcQ.GetCppInstanceTypeName());
						if (csobj_srcQClassFactory != null)
						{
							csobj_srcQ.Delegate = true;
							csobj_srcQ = csobj_srcQClassFactory.Create() as EarthView.World.Core.WorkQueue;
							csobj_srcQ.BindNativeObject(srcQ, "CWorkQueue");
							csobj_srcQ.Delegate = true;
						}
						
						bool csret=CanHandleResponse(csobj_res, csobj_srcQ);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public virtual bool CanHandleResponse(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void handleResponse_CallBack_void_CResponse_CWorkQueue(IntPtr res, IntPtr srcQ);

					protected handleResponse_CallBack_void_CResponse_CWorkQueue m_handleResponse_CallBack_void_CResponse_CWorkQueue;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public virtual void HandleResponse_NoVirtual(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
					}

					protected  void EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Function(IntPtr res, IntPtr srcQ)
					{
						EarthView.World.Core.WorkQueue.Response csobj_res = new EarthView.World.Core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_res.BindNativeObject(res,"CResponse");
						csobj_res.Delegate = true;
						IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
						if (csobj_resClassFactory != null)
						{
							csobj_res.Delegate = true;
							csobj_res = csobj_resClassFactory.Create() as EarthView.World.Core.WorkQueue.Response;
							csobj_res.BindNativeObject(res, "CResponse");
							csobj_res.Delegate = true;
						}
						EarthView.World.Core.WorkQueue csobj_srcQ = new EarthView.World.Core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_srcQ.BindNativeObject(srcQ,"CWorkQueue");
						csobj_srcQ.Delegate = true;
						IClassFactory csobj_srcQClassFactory = GlobalClassFactoryMap.Get(csobj_srcQ.GetCppInstanceTypeName());
						if (csobj_srcQClassFactory != null)
						{
							csobj_srcQ.Delegate = true;
							csobj_srcQ = csobj_srcQClassFactory.Create() as EarthView.World.Core.WorkQueue;
							csobj_srcQ.BindNativeObject(srcQ, "CWorkQueue");
							csobj_srcQ.Delegate = true;
						}
						
						HandleResponse(csobj_res, csobj_srcQ);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public virtual void HandleResponse(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResponseHandler = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadResponseHandler = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResponseHandler = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadResponseHandler = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadResponseHandler = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadResponseHandler = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResponseHandler = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadResponseHandler = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadResponseHandler = LoadDll.Load("EV_Core.so");
							private static bool csbLoadResponseHandler = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadResponseHandler = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadResponseHandler = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CResponseHandler", new ResponseHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue::CResponseHandlerProxy", new ResponseHandlerClassFactory());

					public ResponseHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(IntPtr pObject, canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(IntPtr pObject, handleResponse_CallBack_void_CResponse_CWorkQueue pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue = EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Function;
							GC.KeepAlive(m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(this.NativeObject, m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue);
							m_handleResponse_CallBack_void_CResponse_CWorkQueue = EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Function;
							GC.KeepAlive(m_handleResponse_CallBack_void_CResponse_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(this.NativeObject, m_handleResponse_CallBack_void_CResponse_CWorkQueue);
						}
					}
					public static ResponseHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResponseHandler obj = baseObj as  ResponseHandler;
						if (object.Equals(obj, null))
						{
							obj = new ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CResponseHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResponseHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResponseHandler emptyInstance = new ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public WorkQueue() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CWorkQueueProxy", null);
					if (!"EarthView.World.Core.WorkQueue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void startup_CallBack_void_ev_bool(bool forceRestart);

				protected startup_CallBack_void_ev_bool m_startup_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_startup_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte forceRestart);

				public virtual void Startup_NoVirtual(bool forceRestart)
				{
					EarthView_World_Core_CWorkQueue_startup_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(forceRestart));
					
				}

				protected  void EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Function(bool forceRestart)
				{
					Startup(forceRestart);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_startup_void_ev_bool(IntPtr pNativeObject, byte forceRestart);

				public virtual void Startup(bool forceRestart)
				{
					EarthView_World_Core_CWorkQueue_startup_void_ev_bool(this.NativeObject, Convert.ToByte(forceRestart));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void startup_CallBack_void();

				protected startup_CallBack_void m_startup_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_startup_void_NoVirtual(IntPtr pNativeObject);

				public virtual void Startup_NoVirtual()
				{
					EarthView_World_Core_CWorkQueue_startup_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_startup_void_Function()
				{
					Startup();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_startup_void(IntPtr pNativeObject);

				public virtual void Startup()
				{
					EarthView_World_Core_CWorkQueue_startup_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addRequestHandler_CallBack_void_ev_uint16_CRequestHandler(ushort channel, IntPtr rh);

				protected addRequestHandler_CallBack_void_ev_uint16_CRequestHandler m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void AddRequestHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Function(ushort channel, IntPtr rh)
				{
					EarthView.World.Core.WorkQueue.RequestHandler csobj_rh = new EarthView.World.Core.WorkQueue.RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rh.BindNativeObject(rh,"CRequestHandler");
					csobj_rh.Delegate = true;
					IClassFactory csobj_rhClassFactory = GlobalClassFactoryMap.Get(csobj_rh.GetCppInstanceTypeName());
					if (csobj_rhClassFactory != null)
					{
						csobj_rh.Delegate = true;
						csobj_rh = csobj_rhClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestHandler;
						csobj_rh.BindNativeObject(rh, "CRequestHandler");
						csobj_rh.Delegate = true;
					}
					
					AddRequestHandler(channel, csobj_rh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void AddRequestHandler(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler(ushort channel, IntPtr rh);

				protected removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void RemoveRequestHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Function(ushort channel, IntPtr rh)
				{
					EarthView.World.Core.WorkQueue.RequestHandler csobj_rh = new EarthView.World.Core.WorkQueue.RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rh.BindNativeObject(rh,"CRequestHandler");
					csobj_rh.Delegate = true;
					IClassFactory csobj_rhClassFactory = GlobalClassFactoryMap.Get(csobj_rh.GetCppInstanceTypeName());
					if (csobj_rhClassFactory != null)
					{
						csobj_rh.Delegate = true;
						csobj_rh = csobj_rhClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestHandler;
						csobj_rh.BindNativeObject(rh, "CRequestHandler");
						csobj_rh.Delegate = true;
					}
					
					RemoveRequestHandler(channel, csobj_rh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void RemoveRequestHandler(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addResponseHandler_CallBack_void_ev_uint16_CResponseHandler(ushort channel, IntPtr rh);

				protected addResponseHandler_CallBack_void_ev_uint16_CResponseHandler m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void AddResponseHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Function(ushort channel, IntPtr rh)
				{
					EarthView.World.Core.WorkQueue.ResponseHandler csobj_rh = new EarthView.World.Core.WorkQueue.ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rh.BindNativeObject(rh,"CResponseHandler");
					csobj_rh.Delegate = true;
					IClassFactory csobj_rhClassFactory = GlobalClassFactoryMap.Get(csobj_rh.GetCppInstanceTypeName());
					if (csobj_rhClassFactory != null)
					{
						csobj_rh.Delegate = true;
						csobj_rh = csobj_rhClassFactory.Create() as EarthView.World.Core.WorkQueue.ResponseHandler;
						csobj_rh.BindNativeObject(rh, "CResponseHandler");
						csobj_rh.Delegate = true;
					}
					
					AddResponseHandler(channel, csobj_rh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void AddResponseHandler(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler(ushort channel, IntPtr rh);

				protected removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void RemoveResponseHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Function(ushort channel, IntPtr rh)
				{
					EarthView.World.Core.WorkQueue.ResponseHandler csobj_rh = new EarthView.World.Core.WorkQueue.ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rh.BindNativeObject(rh,"CResponseHandler");
					csobj_rh.Delegate = true;
					IClassFactory csobj_rhClassFactory = GlobalClassFactoryMap.Get(csobj_rh.GetCppInstanceTypeName());
					if (csobj_rhClassFactory != null)
					{
						csobj_rh.Delegate = true;
						csobj_rh = csobj_rhClassFactory.Create() as EarthView.World.Core.WorkQueue.ResponseHandler;
						csobj_rh.BindNativeObject(rh, "CResponseHandler");
						csobj_rh.Delegate = true;
					}
					
					RemoveResponseHandler(channel, csobj_rh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public virtual void RemoveResponseHandler(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(ushort channel, ushort requestType, IntPtr rData, byte retryCount, bool forceSynchronous, ulong filter);

				protected addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public virtual ulong AddRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Function(ushort channel, ushort requestType, IntPtr rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					EarthView.World.Core.WorkQueue.RequestPara csobj_rData = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rData.BindNativeObject(rData,"RequestPara");
					csobj_rData.Delegate = true;
					IClassFactory csobj_rDataClassFactory = GlobalClassFactoryMap.Get(csobj_rData.GetCppInstanceTypeName());
					if (csobj_rDataClassFactory != null)
					{
						csobj_rData.Delegate = true;
						csobj_rData = csobj_rDataClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
						csobj_rData.BindNativeObject(rData, "RequestPara");
						csobj_rData.Delegate = true;
					}
					
					ulong csret=AddRequest(channel, requestType, csobj_rData, retryCount, forceSynchronous, filter);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public virtual ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(ushort channel, ushort requestType, IntPtr rData, byte retryCount, bool forceSynchronous);

				protected addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous);

				public virtual ulong AddRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous));
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Function(ushort channel, ushort requestType, IntPtr rData, byte retryCount, bool forceSynchronous)
				{
					EarthView.World.Core.WorkQueue.RequestPara csobj_rData = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rData.BindNativeObject(rData,"RequestPara");
					csobj_rData.Delegate = true;
					IClassFactory csobj_rDataClassFactory = GlobalClassFactoryMap.Get(csobj_rData.GetCppInstanceTypeName());
					if (csobj_rDataClassFactory != null)
					{
						csobj_rData.Delegate = true;
						csobj_rData = csobj_rDataClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
						csobj_rData.BindNativeObject(rData, "RequestPara");
						csobj_rData.Delegate = true;
					}
					
					ulong csret=AddRequest(channel, requestType, csobj_rData, retryCount, forceSynchronous);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous);

				public virtual ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous));
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(ushort channel, ushort requestType, IntPtr rData, byte retryCount);

				protected addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8 m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount);

				public virtual ulong AddRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Function(ushort channel, ushort requestType, IntPtr rData, byte retryCount)
				{
					EarthView.World.Core.WorkQueue.RequestPara csobj_rData = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rData.BindNativeObject(rData,"RequestPara");
					csobj_rData.Delegate = true;
					IClassFactory csobj_rDataClassFactory = GlobalClassFactoryMap.Get(csobj_rData.GetCppInstanceTypeName());
					if (csobj_rDataClassFactory != null)
					{
						csobj_rData.Delegate = true;
						csobj_rData = csobj_rDataClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
						csobj_rData.BindNativeObject(rData, "RequestPara");
						csobj_rData.Delegate = true;
					}
					
					ulong csret=AddRequest(channel, requestType, csobj_rData, retryCount);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount);

				public virtual ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara(ushort channel, ushort requestType, IntPtr rData);

				protected addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData);

				public virtual ulong AddRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Function(ushort channel, ushort requestType, IntPtr rData)
				{
					EarthView.World.Core.WorkQueue.RequestPara csobj_rData = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rData.BindNativeObject(rData,"RequestPara");
					csobj_rData.Delegate = true;
					IClassFactory csobj_rDataClassFactory = GlobalClassFactoryMap.Get(csobj_rData.GetCppInstanceTypeName());
					if (csobj_rDataClassFactory != null)
					{
						csobj_rData.Delegate = true;
						csobj_rData = csobj_rDataClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
						csobj_rData.BindNativeObject(rData, "RequestPara");
						csobj_rData.Delegate = true;
					}
					
					ulong csret=AddRequest(channel, requestType, csobj_rData);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData);

				public virtual ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong addRequest_CallBack_ev_uint64_CRequest(IntPtr request);

				protected addRequest_CallBack_ev_uint64_CRequest m_addRequest_CallBack_ev_uint64_CRequest;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_NoVirtual(IntPtr pNativeObject, IntPtr request);

				public virtual ulong AddRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request request)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_NoVirtual(this.NativeObject, object.Equals(request, null) ? IntPtr.Zero : request.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Function(IntPtr request)
				{
					EarthView.World.Core.WorkQueue.Request csobj_request = new EarthView.World.Core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_request.BindNativeObject(request,"CRequest");
					csobj_request.Delegate = true;
					IClassFactory csobj_requestClassFactory = GlobalClassFactoryMap.Get(csobj_request.GetCppInstanceTypeName());
					if (csobj_requestClassFactory != null)
					{
						csobj_request.Delegate = true;
						csobj_request = csobj_requestClassFactory.Create() as EarthView.World.Core.WorkQueue.Request;
						csobj_request.BindNativeObject(request, "CRequest");
						csobj_request.Delegate = true;
					}
					
					ulong csret=AddRequest(csobj_request);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(IntPtr pNativeObject, IntPtr request);

				public virtual ulong AddRequest(EarthView.World.Core.WorkQueue.Request request)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(this.NativeObject, object.Equals(request, null) ? IntPtr.Zero : request.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(ushort channel, ushort requestType, IntPtr rData, byte retryCount, bool forceSynchronous, ulong filter);

				protected addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public virtual ulong AddOrReplaceRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Function(ushort channel, ushort requestType, IntPtr rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					EarthView.World.Core.WorkQueue.RequestPara csobj_rData = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_rData.BindNativeObject(rData,"RequestPara");
					csobj_rData.Delegate = true;
					IClassFactory csobj_rDataClassFactory = GlobalClassFactoryMap.Get(csobj_rData.GetCppInstanceTypeName());
					if (csobj_rDataClassFactory != null)
					{
						csobj_rData.Delegate = true;
						csobj_rData = csobj_rDataClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
						csobj_rData.BindNativeObject(rData, "RequestPara");
						csobj_rData.Delegate = true;
					}
					
					ulong csret=AddOrReplaceRequest(channel, requestType, csobj_rData, retryCount, forceSynchronous, filter);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public virtual ulong AddOrReplaceRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void abortRequest_CallBack_void_ev_uint64(ulong id);

				protected abortRequest_CallBack_void_ev_uint64 m_abortRequest_CallBack_void_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong id);

				public virtual void AbortRequest_NoVirtual(ulong id)
				{
					EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_NoVirtual(this.NativeObject, id);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Function(ulong id)
				{
					AbortRequest(id);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(IntPtr pNativeObject, ulong id);

				public virtual void AbortRequest(ulong id)
				{
					EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(this.NativeObject, id);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void abortRequestsByChannel_CallBack_void_ev_uint16(ushort channel);

				protected abortRequestsByChannel_CallBack_void_ev_uint16 m_abortRequestsByChannel_CallBack_void_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort channel);

				public virtual void AbortRequestsByChannel_NoVirtual(ushort channel)
				{
					EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_NoVirtual(this.NativeObject, channel);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Function(ushort channel)
				{
					AbortRequestsByChannel(channel);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(IntPtr pNativeObject, ushort channel);

				public virtual void AbortRequestsByChannel(ushort channel)
				{
					EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(this.NativeObject, channel);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64(ushort channel, ulong filter);

				protected abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64 m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_NoVirtual(IntPtr pNativeObject, ushort channel, ulong filter);

				public virtual void AbortRequestsByFilter_NoVirtual(ushort channel, ulong filter)
				{
					EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_NoVirtual(this.NativeObject, channel, filter);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Function(ushort channel, ulong filter)
				{
					AbortRequestsByFilter(channel, filter);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(IntPtr pNativeObject, ushort channel, ulong filter);

				public virtual void AbortRequestsByFilter(ushort channel, ulong filter)
				{
					EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(this.NativeObject, channel, filter);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void abortAllRequests_CallBack_void();

				protected abortAllRequests_CallBack_void m_abortAllRequests_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortAllRequests_void_NoVirtual(IntPtr pNativeObject);

				public virtual void AbortAllRequests_NoVirtual()
				{
					EarthView_World_Core_CWorkQueue_abortAllRequests_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_abortAllRequests_void_Function()
				{
					AbortAllRequests();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_abortAllRequests_void(IntPtr pNativeObject);

				public virtual void AbortAllRequests()
				{
					EarthView_World_Core_CWorkQueue_abortAllRequests_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPaused_CallBack_void_ev_bool(bool pause);

				protected setPaused_CallBack_void_ev_bool m_setPaused_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte pause);

				public virtual void SetPaused_NoVirtual(bool pause)
				{
					EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(pause));
					
				}

				protected  void EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Function(bool pause)
				{
					SetPaused(pause);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(IntPtr pNativeObject, byte pause);

				public virtual void SetPaused(bool pause)
				{
					EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(this.NativeObject, Convert.ToByte(pause));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isPaused_CallBack_ev_bool();

				protected isPaused_CallBack_ev_bool m_isPaused_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueue_isPaused_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool IsPaused_NoVirtual()
				{
					byte ret=EarthView_World_Core_CWorkQueue_isPaused_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Function()
				{
					bool csret=IsPaused();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueue_isPaused_ev_bool(IntPtr pNativeObject);

				public virtual bool IsPaused()
				{
					byte ret=EarthView_World_Core_CWorkQueue_isPaused_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setRequestsAccepted_CallBack_void_ev_bool(bool accept);

				protected setRequestsAccepted_CallBack_void_ev_bool m_setRequestsAccepted_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte accept);

				public virtual void SetRequestsAccepted_NoVirtual(bool accept)
				{
					EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(accept));
					
				}

				protected  void EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Function(bool accept)
				{
					SetRequestsAccepted(accept);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(IntPtr pNativeObject, byte accept);

				public virtual void SetRequestsAccepted(bool accept)
				{
					EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(this.NativeObject, Convert.ToByte(accept));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getRequestsAccepted_CallBack_ev_bool();

				protected getRequestsAccepted_CallBack_ev_bool m_getRequestsAccepted_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool GetRequestsAccepted_NoVirtual()
				{
					byte ret=EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Function()
				{
					bool csret=GetRequestsAccepted();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(IntPtr pNativeObject);

				public virtual bool GetRequestsAccepted()
				{
					byte ret=EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void processResponses_CallBack_void();

				protected processResponses_CallBack_void m_processResponses_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_processResponses_void_NoVirtual(IntPtr pNativeObject);

				public virtual void ProcessResponses_NoVirtual()
				{
					EarthView_World_Core_CWorkQueue_processResponses_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_processResponses_void_Function()
				{
					ProcessResponses();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_processResponses_void(IntPtr pNativeObject);

				public virtual void ProcessResponses()
				{
					EarthView_World_Core_CWorkQueue_processResponses_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate uint getResponseProcessingTimeLimit_CallBack_ev_uint32();

				protected getResponseProcessingTimeLimit_CallBack_ev_uint32 m_getResponseProcessingTimeLimit_CallBack_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_NoVirtual(IntPtr pNativeObject);

				public virtual uint GetResponseProcessingTimeLimit_NoVirtual()
				{
					uint ret=EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  uint EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Function()
				{
					uint csret=GetResponseProcessingTimeLimit();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(IntPtr pNativeObject);

				public virtual uint GetResponseProcessingTimeLimit()
				{
					uint ret=EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setResponseProcessingTimeLimit_CallBack_void_ev_uint32(uint ms);

				protected setResponseProcessingTimeLimit_CallBack_void_ev_uint32 m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_NoVirtual(IntPtr pNativeObject, uint ms);

				public virtual void SetResponseProcessingTimeLimit_NoVirtual(uint ms)
				{
					EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_NoVirtual(this.NativeObject, ms);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Function(uint ms)
				{
					SetResponseProcessingTimeLimit(ms);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(IntPtr pNativeObject, uint ms);

				public virtual void SetResponseProcessingTimeLimit(uint ms)
				{
					EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(this.NativeObject, ms);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void shutdown_CallBack_void();

				protected shutdown_CallBack_void m_shutdown_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_shutdown_void_NoVirtual(IntPtr pNativeObject);

				public virtual void Shutdown_NoVirtual()
				{
					EarthView_World_Core_CWorkQueue_shutdown_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CWorkQueue_shutdown_void_Function()
				{
					Shutdown();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CWorkQueue_shutdown_void(IntPtr pNativeObject);

				public virtual void Shutdown()
				{
					EarthView_World_Core_CWorkQueue_shutdown_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ushort getChannel_CallBack_ev_uint16_ev_uint32(uint priority);

				protected getChannel_CallBack_ev_uint16_ev_uint32 m_getChannel_CallBack_ev_uint16_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_NoVirtual(IntPtr pNativeObject, uint priority);

				public virtual ushort GetChannel_NoVirtual(uint priority)
				{
					ushort ret=EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_NoVirtual(this.NativeObject, priority);
					
					return ret;
					
				}

				protected  ushort EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Function(uint priority)
				{
					ushort csret=GetChannel(priority);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(IntPtr pNativeObject, uint priority);

				public virtual ushort GetChannel(uint priority)
				{
					ushort ret=EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(this.NativeObject, priority);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener(ushort channelID, IntPtr pListener);

				protected setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_NoVirtual(IntPtr pNativeObject, ushort channelID, IntPtr pListener);

				public virtual bool SetChannelListener_NoVirtual(ushort channelID, EarthView.World.Core.WorkQueueChannelListener pListener)
				{
					byte ret=EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_NoVirtual(this.NativeObject, channelID, object.Equals(pListener, null) ? IntPtr.Zero : pListener.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Function(ushort channelID, IntPtr pListener)
				{
					EarthView.World.Core.WorkQueueChannelListener csobj_pListener = new EarthView.World.Core.WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pListener.BindNativeObject(pListener,"CWorkQueueChannelListener");
					csobj_pListener.Delegate = true;
					IClassFactory csobj_pListenerClassFactory = GlobalClassFactoryMap.Get(csobj_pListener.GetCppInstanceTypeName());
					if (csobj_pListenerClassFactory != null)
					{
						csobj_pListener.Delegate = true;
						csobj_pListener = csobj_pListenerClassFactory.Create() as EarthView.World.Core.WorkQueueChannelListener;
						csobj_pListener.BindNativeObject(pListener, "CWorkQueueChannelListener");
						csobj_pListener.Delegate = true;
					}
					
					bool csret=SetChannelListener(channelID, csobj_pListener);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(IntPtr pNativeObject, ushort channelID, IntPtr pListener);

				public virtual bool SetChannelListener(ushort channelID, EarthView.World.Core.WorkQueueChannelListener pListener)
				{
					byte ret=EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(this.NativeObject, channelID, object.Equals(pListener, null) ? IntPtr.Zero : pListener.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16(ushort channelID);

				protected getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16 m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort channelID);

				public virtual EarthView.World.Core.WorkQueueChannelListener GetChannelListener_NoVirtual(ushort channelID)
				{
					IntPtr __ptr = EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_NoVirtual(this.NativeObject, channelID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.WorkQueueChannelListener csObj = new EarthView.World.Core.WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWorkQueueChannelListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueueChannelListener;
						csObj.BindNativeObject(__ptr, "CWorkQueueChannelListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Function(ushort channelID)
				{
					EarthView.World.Core.WorkQueueChannelListener csret=GetChannelListener(channelID);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(IntPtr pNativeObject, ushort channelID);

				public virtual EarthView.World.Core.WorkQueueChannelListener GetChannelListener(ushort channelID)
				{
					IntPtr __ptr = EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(this.NativeObject, channelID);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.WorkQueueChannelListener csObj = new EarthView.World.Core.WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CWorkQueueChannelListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueueChannelListener;
						csObj.BindNativeObject(__ptr, "CWorkQueueChannelListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadWorkQueue = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadWorkQueue = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadWorkQueue = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadWorkQueue = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadWorkQueue = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadWorkQueue = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadWorkQueue = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadWorkQueue = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadWorkQueue = LoadDll.Load("EV_Core.so");
						private static bool csbLoadWorkQueue = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadWorkQueue = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadWorkQueue = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueue", new WorkQueueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWorkQueueProxy", new WorkQueueClassFactory());

				public WorkQueue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_startup_void_ev_bool(IntPtr pObject, startup_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_startup_void(IntPtr pObject, startup_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pObject, addRequestHandler_CallBack_void_ev_uint16_CRequestHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pObject, removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pObject, addResponseHandler_CallBack_void_ev_uint16_CResponseHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pObject, removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(IntPtr pObject, addRequest_CallBack_ev_uint64_CRequest pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pObject, addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(IntPtr pObject, abortRequest_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(IntPtr pObject, abortRequestsByChannel_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(IntPtr pObject, abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortAllRequests_void(IntPtr pObject, abortAllRequests_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(IntPtr pObject, setPaused_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_isPaused_ev_bool(IntPtr pObject, isPaused_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(IntPtr pObject, setRequestsAccepted_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(IntPtr pObject, getRequestsAccepted_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_processResponses_void(IntPtr pObject, processResponses_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(IntPtr pObject, getResponseProcessingTimeLimit_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(IntPtr pObject, setResponseProcessingTimeLimit_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_shutdown_void(IntPtr pObject, shutdown_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(IntPtr pObject, getChannel_CallBack_ev_uint16_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(IntPtr pObject, setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(IntPtr pObject, getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_startup_CallBack_void_ev_bool = EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Function;
						GC.KeepAlive(m_startup_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_startup_void_ev_bool(this.NativeObject, m_startup_CallBack_void_ev_bool);
						m_startup_CallBack_void = EarthView_World_Core_CWorkQueue_startup_void_Function;
						GC.KeepAlive(m_startup_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_startup_void(this.NativeObject, m_startup_CallBack_void);
						m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler = EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Function;
						GC.KeepAlive(m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler = EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Function;
						GC.KeepAlive(m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler = EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Function;
						GC.KeepAlive(m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler = EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Function;
						GC.KeepAlive(m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8 = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara);
						m_addRequest_CallBack_ev_uint64_CRequest = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_CRequest);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(this.NativeObject, m_addRequest_CallBack_ev_uint64_CRequest);
						m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 = EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						m_abortRequest_CallBack_void_ev_uint64 = EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Function;
						GC.KeepAlive(m_abortRequest_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(this.NativeObject, m_abortRequest_CallBack_void_ev_uint64);
						m_abortRequestsByChannel_CallBack_void_ev_uint16 = EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Function;
						GC.KeepAlive(m_abortRequestsByChannel_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(this.NativeObject, m_abortRequestsByChannel_CallBack_void_ev_uint16);
						m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64 = EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Function;
						GC.KeepAlive(m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(this.NativeObject, m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64);
						m_abortAllRequests_CallBack_void = EarthView_World_Core_CWorkQueue_abortAllRequests_void_Function;
						GC.KeepAlive(m_abortAllRequests_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortAllRequests_void(this.NativeObject, m_abortAllRequests_CallBack_void);
						m_setPaused_CallBack_void_ev_bool = EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Function;
						GC.KeepAlive(m_setPaused_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(this.NativeObject, m_setPaused_CallBack_void_ev_bool);
						m_isPaused_CallBack_ev_bool = EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Function;
						GC.KeepAlive(m_isPaused_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_isPaused_ev_bool(this.NativeObject, m_isPaused_CallBack_ev_bool);
						m_setRequestsAccepted_CallBack_void_ev_bool = EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Function;
						GC.KeepAlive(m_setRequestsAccepted_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(this.NativeObject, m_setRequestsAccepted_CallBack_void_ev_bool);
						m_getRequestsAccepted_CallBack_ev_bool = EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Function;
						GC.KeepAlive(m_getRequestsAccepted_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(this.NativeObject, m_getRequestsAccepted_CallBack_ev_bool);
						m_processResponses_CallBack_void = EarthView_World_Core_CWorkQueue_processResponses_void_Function;
						GC.KeepAlive(m_processResponses_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_processResponses_void(this.NativeObject, m_processResponses_CallBack_void);
						m_getResponseProcessingTimeLimit_CallBack_ev_uint32 = EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Function;
						GC.KeepAlive(m_getResponseProcessingTimeLimit_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(this.NativeObject, m_getResponseProcessingTimeLimit_CallBack_ev_uint32);
						m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32 = EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Function;
						GC.KeepAlive(m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(this.NativeObject, m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32);
						m_shutdown_CallBack_void = EarthView_World_Core_CWorkQueue_shutdown_void_Function;
						GC.KeepAlive(m_shutdown_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_shutdown_void(this.NativeObject, m_shutdown_CallBack_void);
						m_getChannel_CallBack_ev_uint16_ev_uint32 = EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Function;
						GC.KeepAlive(m_getChannel_CallBack_ev_uint16_ev_uint32);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(this.NativeObject, m_getChannel_CallBack_ev_uint16_ev_uint32);
						m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener = EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Function;
						GC.KeepAlive(m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(this.NativeObject, m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener);
						m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16 = EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Function;
						GC.KeepAlive(m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16);
						EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(this.NativeObject, m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16);
					}
				}
				public static WorkQueue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					WorkQueue obj = baseObj as  WorkQueue;
					if (object.Equals(obj, null))
					{
						obj = new WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CWorkQueue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class WorkQueueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					WorkQueue emptyInstance = new WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DefaultWorkQueueBase : EarthView.World.Core.WorkQueue
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_registerPreExtraThreadsStartedFunc_void_void(IntPtr pNativeObject, IntPtr preExtraThreadsStartedFunc);

				public void RegisterPreExtraThreadsStartedFunc(IntPtr preExtraThreadsStartedFunc)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_registerPreExtraThreadsStartedFunc_void_void(this.NativeObject, preExtraThreadsStartedFunc);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_registerPostExtraThreadsStartedFunc_void_void(IntPtr pNativeObject, IntPtr postExtraThreadsStartedFunc);

				public void RegisterPostExtraThreadsStartedFunc(IntPtr postExtraThreadsStartedFunc)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_registerPostExtraThreadsStartedFunc_void_void(this.NativeObject, postExtraThreadsStartedFunc);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_registerThreadFunc_void_void(IntPtr pNativeObject, IntPtr pThreadFunc);

				public void RegisterThreadFunc(IntPtr pThreadFunc)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_registerThreadFunc_void_void(this.NativeObject, pThreadFunc);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_registerThreadFunc2_void_void(IntPtr pNativeObject, IntPtr pThreadFunc);

				public void RegisterThreadFunc2(IntPtr pThreadFunc)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_registerThreadFunc2_void_void(this.NativeObject, pThreadFunc);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_registerflushRenderSystemFunc_void_void(IntPtr pNativeObject, IntPtr pflushRenderSystemFunc);

				public void RegisterflushRenderSystemFunc(IntPtr pflushRenderSystemFunc)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_registerflushRenderSystemFunc_void_void(this.NativeObject, pflushRenderSystemFunc);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_unregisterPreExtraThreadsStartedFunc_void(IntPtr pNativeObject);

				public void UnregisterPreExtraThreadsStartedFunc()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_unregisterPreExtraThreadsStartedFunc_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_unregisterPostExtraThreadsStartedFunc_void(IntPtr pNativeObject);

				public void UnregisterPostExtraThreadsStartedFunc()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_unregisterPostExtraThreadsStartedFunc_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_unregisterThreadFunc_void(IntPtr pNativeObject);

				public void UnregisterThreadFunc()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_unregisterThreadFunc_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_unregisterThreadFunc2_void(IntPtr pNativeObject);

				public void UnregisterThreadFunc2()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_unregisterThreadFunc2_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_unregisterflushRenderSystemFunc_void(IntPtr pNativeObject);

				public void UnregisterflushRenderSystemFunc()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_unregisterflushRenderSystemFunc_void(this.NativeObject);
					
				}

				public DefaultWorkQueueBase(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					Create("CDefaultWorkQueueBaseProxy", list);
					if (!"EarthView.World.Core.DefaultWorkQueueBase".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public DefaultWorkQueueBase() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDefaultWorkQueueBaseProxy", null);
					if (!"EarthView.World.Core.DefaultWorkQueueBase".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CDefaultWorkQueueBase_getName_EVString(IntPtr pNativeObject);

				public string GetName()
				{
					IntPtr __ptr = EarthView_World_Core_CDefaultWorkQueueBase_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getWorkerThreadCount_CallBack_ev_size_t();

				protected getWorkerThreadCount_CallBack_ev_size_t m_getWorkerThreadCount_CallBack_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_NoVirtual(IntPtr pNativeObject);

				public virtual ulong GetWorkerThreadCount_NoVirtual()
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Function()
				{
					ulong csret=GetWorkerThreadCount();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(IntPtr pNativeObject);

				public virtual ulong GetWorkerThreadCount()
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setWorkerThreadCount_CallBack_void_ev_size_t(ulong c);

				protected setWorkerThreadCount_CallBack_void_ev_size_t m_setWorkerThreadCount_CallBack_void_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong c);

				public virtual void SetWorkerThreadCount_NoVirtual(ulong c)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_NoVirtual(this.NativeObject, c);
					
				}

				protected  void EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Function(ulong c)
				{
					SetWorkerThreadCount(c);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(IntPtr pNativeObject, ulong c);

				public virtual void SetWorkerThreadCount(ulong c)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(this.NativeObject, c);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getWorkersCanAccessRenderSystem_CallBack_ev_bool();

				protected getWorkersCanAccessRenderSystem_CallBack_ev_bool m_getWorkersCanAccessRenderSystem_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool GetWorkersCanAccessRenderSystem_NoVirtual()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Function()
				{
					bool csret=GetWorkersCanAccessRenderSystem();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(IntPtr pNativeObject);

				public virtual bool GetWorkersCanAccessRenderSystem()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setWorkersCanAccessRenderSystem_CallBack_void_ev_bool(bool access);

				protected setWorkersCanAccessRenderSystem_CallBack_void_ev_bool m_setWorkersCanAccessRenderSystem_CallBack_void_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte access);

				public virtual void SetWorkersCanAccessRenderSystem_NoVirtual(bool access)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(access));
					
				}

				protected  void EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Function(bool access)
				{
					SetWorkersCanAccessRenderSystem(access);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(IntPtr pNativeObject, byte access);

				public virtual void SetWorkersCanAccessRenderSystem(bool access)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(this.NativeObject, Convert.ToByte(access));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _processNextRequest_CallBack_void();

				protected _processNextRequest_CallBack_void m__processNextRequest_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_NoVirtual(IntPtr pNativeObject);

				public virtual void _processNextRequest_NoVirtual()
				{
					EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Function()
				{
					_processNextRequest();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(IntPtr pNativeObject);

				public virtual void _processNextRequest()
				{
					EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _threadMain_CallBack_void();

				protected _threadMain_CallBack_void m__threadMain_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_NoVirtual(IntPtr pNativeObject);

				public virtual void _threadMain_NoVirtual()
				{
					EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Function()
				{
					_threadMain();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(IntPtr pNativeObject);

				public virtual void _threadMain()
				{
					EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isShuttingDown_CallBack_ev_bool();

				protected isShuttingDown_CallBack_ev_bool m_isShuttingDown_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool IsShuttingDown_NoVirtual()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Function()
				{
					bool csret=IsShuttingDown();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(IntPtr pNativeObject);

				public virtual bool IsShuttingDown()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public new void AddRequestHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public override void AddRequestHandler(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public new void RemoveRequestHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public override void RemoveRequestHandler(ushort channel, EarthView.World.Core.WorkQueue.RequestHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public new void AddResponseHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public override void AddResponseHandler(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public new void RemoveResponseHandler_NoVirtual(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pNativeObject, ushort channel, IntPtr rh);

				public override void RemoveResponseHandler(ushort channel, EarthView.World.Core.WorkQueue.ResponseHandler rh)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, channel, object.Equals(rh, null) ? IntPtr.Zero : rh.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public new ulong AddRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public override ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_NoVirtual(IntPtr pNativeObject, IntPtr request);

				public new ulong AddRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request request)
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_NoVirtual(this.NativeObject, object.Equals(request, null) ? IntPtr.Zero : request.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(IntPtr pNativeObject, IntPtr request);

				public override ulong AddRequest(EarthView.World.Core.WorkQueue.Request request)
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(this.NativeObject, object.Equals(request, null) ? IntPtr.Zero : request.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public new ulong AddOrReplaceRequest_NoVirtual(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ulong EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pNativeObject, ushort channel, ushort requestType, IntPtr rData, byte retryCount, byte forceSynchronous, ulong filter);

				public override ulong AddOrReplaceRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous, ulong filter)
				{
					ulong ret=EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, channel, requestType, object.Equals(rData, null) ? IntPtr.Zero : rData.NativeObject, retryCount, Convert.ToByte(forceSynchronous), filter);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong id);

				public new void AbortRequest_NoVirtual(ulong id)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_NoVirtual(this.NativeObject, id);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(IntPtr pNativeObject, ulong id);

				public override void AbortRequest(ulong id)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(this.NativeObject, id);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_NoVirtual(IntPtr pNativeObject, ushort channel);

				public new void AbortRequestsByChannel_NoVirtual(ushort channel)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_NoVirtual(this.NativeObject, channel);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(IntPtr pNativeObject, ushort channel);

				public override void AbortRequestsByChannel(ushort channel)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(this.NativeObject, channel);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_NoVirtual(IntPtr pNativeObject, ushort channel, ulong filter);

				public new void AbortRequestsByFilter_NoVirtual(ushort channel, ulong filter)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_NoVirtual(this.NativeObject, channel, filter);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(IntPtr pNativeObject, ushort channel, ulong filter);

				public override void AbortRequestsByFilter(ushort channel, ulong filter)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(this.NativeObject, channel, filter);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_NoVirtual(IntPtr pNativeObject);

				public new void AbortAllRequests_NoVirtual()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(IntPtr pNativeObject);

				public override void AbortAllRequests()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte pause);

				public new void SetPaused_NoVirtual(bool pause)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(pause));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(IntPtr pNativeObject, byte pause);

				public override void SetPaused(bool pause)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(this.NativeObject, Convert.ToByte(pause));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_NoVirtual(IntPtr pNativeObject);

				public new bool IsPaused_NoVirtual()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(IntPtr pNativeObject);

				public override bool IsPaused()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte accept);

				public new void SetRequestsAccepted_NoVirtual(bool accept)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(accept));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(IntPtr pNativeObject, byte accept);

				public override void SetRequestsAccepted(bool accept)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(this.NativeObject, Convert.ToByte(accept));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_NoVirtual(IntPtr pNativeObject);

				public new bool GetRequestsAccepted_NoVirtual()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(IntPtr pNativeObject);

				public override bool GetRequestsAccepted()
				{
					byte ret=EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_NoVirtual(IntPtr pNativeObject);

				public new void ProcessResponses_NoVirtual()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_NoVirtual(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(IntPtr pNativeObject);

				public override void ProcessResponses()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_NoVirtual(IntPtr pNativeObject);

				public new uint GetResponseProcessingTimeLimit_NoVirtual()
				{
					uint ret=EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern uint EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(IntPtr pNativeObject);

				public override uint GetResponseProcessingTimeLimit()
				{
					uint ret=EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_NoVirtual(IntPtr pNativeObject, uint ms);

				public new void SetResponseProcessingTimeLimit_NoVirtual(uint ms)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_NoVirtual(this.NativeObject, ms);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(IntPtr pNativeObject, uint ms);

				public override void SetResponseProcessingTimeLimit(uint ms)
				{
					EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(this.NativeObject, ms);
					
				}

				public class RequestHandlerHolder : EarthView.World.Core.AllocatedObject
				{
					public RequestHandlerHolder(EarthView.World.Core.WorkQueue.RequestHandler handler) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuehandler = new BasePtr(handler);
						list.Add("handler", valuehandler.PtrVal);
						Create("CRequestHandlerHolder", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_disconnectHandler_void(IntPtr pNativeObject);

					public void DisconnectHandler()
					{
						EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_disconnectHandler_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_getHandler_CRequestHandler(IntPtr pNativeObject);

					public EarthView.World.Core.WorkQueue.RequestHandler GetHandler()
					{
						IntPtr __ptr = EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_getHandler_CRequestHandler(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.RequestHandler csObj = new EarthView.World.Core.WorkQueue.RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRequestHandler");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestHandler;
							csObj.BindNativeObject(__ptr, "CRequestHandler");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public EarthView.World.Core.WorkQueue.Response HandleRequest(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						IntPtr __ptr = EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.WorkQueue.Response csObj = new EarthView.World.Core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CResponse");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.WorkQueue.Response;
							csObj.BindNativeObject(__ptr, "CResponse");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRequestHandlerHolder = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequestHandlerHolder = LoadDll.Load("EV_Core_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRequestHandlerHolder = LoadDll.Load("EV_Core_d.so");
							private static bool csbLoadRequestHandlerHolder = LoadDll.Load("EV_Core_CSharp_d.so");

						#else 
							private static bool bLoadRequestHandlerHolder = LoadDll.Load("EV_Core_d.dll");
							private static bool csbLoadRequestHandlerHolder = LoadDll.Load("EV_Core_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRequestHandlerHolder = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequestHandlerHolder = LoadDll.Load("EV_Core_CSharp.dll");

						#elif Linux 
							private static bool bLoadRequestHandlerHolder = LoadDll.Load("EV_Core.so");
							private static bool csbLoadRequestHandlerHolder = LoadDll.Load("EV_Core_CSharp.so");

						#else 
							private static bool bLoadRequestHandlerHolder = LoadDll.Load("EV_Core.dll");
							private static bool csbLoadRequestHandlerHolder = LoadDll.Load("EV_Core_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder", new RequestHandlerHolderClassFactory());

					public RequestHandlerHolder(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RequestHandlerHolder FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RequestHandlerHolder obj = baseObj as  RequestHandlerHolder;
						if (object.Equals(obj, null))
						{
							obj = new RequestHandlerHolder(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRequestHandlerHolder");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RequestHandlerHolderClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RequestHandlerHolder emptyInstance = new RequestHandlerHolder(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void notifyWorkers_CallBack_void();

				protected notifyWorkers_CallBack_void m_notifyWorkers_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_NoVirtual(IntPtr pNativeObject);

				protected virtual void NotifyWorkers_NoVirtual()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Function()
				{
					NotifyWorkers();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(IntPtr pNativeObject);

				protected virtual void NotifyWorkers()
				{
					EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core.so");
						private static bool csbLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadDefaultWorkQueueBase = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueBase", new DefaultWorkQueueBaseClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CDefaultWorkQueueBaseProxy", new DefaultWorkQueueBaseClassFactory());

				public DefaultWorkQueueBase(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(IntPtr pObject, getWorkerThreadCount_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(IntPtr pObject, setWorkerThreadCount_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(IntPtr pObject, getWorkersCanAccessRenderSystem_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(IntPtr pObject, setWorkersCanAccessRenderSystem_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(IntPtr pObject, _processNextRequest_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(IntPtr pObject, _threadMain_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(IntPtr pObject, isShuttingDown_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(IntPtr pObject, notifyWorkers_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool(IntPtr pObject, startup_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void(IntPtr pObject, startup_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pObject, addRequestHandler_CallBack_void_ev_uint16_CRequestHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(IntPtr pObject, removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pObject, addResponseHandler_CallBack_void_ev_uint16_CResponseHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(IntPtr pObject, removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(IntPtr pObject, addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(IntPtr pObject, addRequest_CallBack_ev_uint64_CRequest pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(IntPtr pObject, addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(IntPtr pObject, abortRequest_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(IntPtr pObject, abortRequestsByChannel_CallBack_void_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(IntPtr pObject, abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(IntPtr pObject, abortAllRequests_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(IntPtr pObject, setPaused_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(IntPtr pObject, isPaused_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(IntPtr pObject, setRequestsAccepted_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(IntPtr pObject, getRequestsAccepted_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(IntPtr pObject, processResponses_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(IntPtr pObject, getResponseProcessingTimeLimit_CallBack_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(IntPtr pObject, setResponseProcessingTimeLimit_CallBack_void_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void(IntPtr pObject, shutdown_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32(IntPtr pObject, getChannel_CallBack_ev_uint16_ev_uint32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(IntPtr pObject, setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16(IntPtr pObject, getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getWorkerThreadCount_CallBack_ev_size_t = EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Function;
						GC.KeepAlive(m_getWorkerThreadCount_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(this.NativeObject, m_getWorkerThreadCount_CallBack_ev_size_t);
						m_setWorkerThreadCount_CallBack_void_ev_size_t = EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Function;
						GC.KeepAlive(m_setWorkerThreadCount_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(this.NativeObject, m_setWorkerThreadCount_CallBack_void_ev_size_t);
						m_getWorkersCanAccessRenderSystem_CallBack_ev_bool = EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Function;
						GC.KeepAlive(m_getWorkersCanAccessRenderSystem_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(this.NativeObject, m_getWorkersCanAccessRenderSystem_CallBack_ev_bool);
						m_setWorkersCanAccessRenderSystem_CallBack_void_ev_bool = EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Function;
						GC.KeepAlive(m_setWorkersCanAccessRenderSystem_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(this.NativeObject, m_setWorkersCanAccessRenderSystem_CallBack_void_ev_bool);
						m__processNextRequest_CallBack_void = EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Function;
						GC.KeepAlive(m__processNextRequest_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(this.NativeObject, m__processNextRequest_CallBack_void);
						m__threadMain_CallBack_void = EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Function;
						GC.KeepAlive(m__threadMain_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(this.NativeObject, m__threadMain_CallBack_void);
						m_isShuttingDown_CallBack_ev_bool = EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Function;
						GC.KeepAlive(m_isShuttingDown_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(this.NativeObject, m_isShuttingDown_CallBack_ev_bool);
						m_notifyWorkers_CallBack_void = EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Function;
						GC.KeepAlive(m_notifyWorkers_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(this.NativeObject, m_notifyWorkers_CallBack_void);
						m_startup_CallBack_void_ev_bool = EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Function;
						GC.KeepAlive(m_startup_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool(this.NativeObject, m_startup_CallBack_void_ev_bool);
						m_startup_CallBack_void = EarthView_World_Core_CWorkQueue_startup_void_Function;
						GC.KeepAlive(m_startup_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void(this.NativeObject, m_startup_CallBack_void);
						m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler = EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Function;
						GC.KeepAlive(m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, m_addRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler = EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Function;
						GC.KeepAlive(m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(this.NativeObject, m_removeRequestHandler_CallBack_void_ev_uint16_CRequestHandler);
						m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler = EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Function;
						GC.KeepAlive(m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, m_addResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler = EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Function;
						GC.KeepAlive(m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(this.NativeObject, m_removeResponseHandler_CallBack_void_ev_uint16_CResponseHandler);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8 = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8);
						m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(this.NativeObject, m_addRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara);
						m_addRequest_CallBack_ev_uint64_CRequest = EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Function;
						GC.KeepAlive(m_addRequest_CallBack_ev_uint64_CRequest);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(this.NativeObject, m_addRequest_CallBack_ev_uint64_CRequest);
						m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64 = EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.NativeObject, m_addOrReplaceRequest_CallBack_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64);
						m_abortRequest_CallBack_void_ev_uint64 = EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Function;
						GC.KeepAlive(m_abortRequest_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(this.NativeObject, m_abortRequest_CallBack_void_ev_uint64);
						m_abortRequestsByChannel_CallBack_void_ev_uint16 = EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Function;
						GC.KeepAlive(m_abortRequestsByChannel_CallBack_void_ev_uint16);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(this.NativeObject, m_abortRequestsByChannel_CallBack_void_ev_uint16);
						m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64 = EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Function;
						GC.KeepAlive(m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(this.NativeObject, m_abortRequestsByFilter_CallBack_void_ev_uint16_ev_uint64);
						m_abortAllRequests_CallBack_void = EarthView_World_Core_CWorkQueue_abortAllRequests_void_Function;
						GC.KeepAlive(m_abortAllRequests_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(this.NativeObject, m_abortAllRequests_CallBack_void);
						m_setPaused_CallBack_void_ev_bool = EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Function;
						GC.KeepAlive(m_setPaused_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(this.NativeObject, m_setPaused_CallBack_void_ev_bool);
						m_isPaused_CallBack_ev_bool = EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Function;
						GC.KeepAlive(m_isPaused_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(this.NativeObject, m_isPaused_CallBack_ev_bool);
						m_setRequestsAccepted_CallBack_void_ev_bool = EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Function;
						GC.KeepAlive(m_setRequestsAccepted_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(this.NativeObject, m_setRequestsAccepted_CallBack_void_ev_bool);
						m_getRequestsAccepted_CallBack_ev_bool = EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Function;
						GC.KeepAlive(m_getRequestsAccepted_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(this.NativeObject, m_getRequestsAccepted_CallBack_ev_bool);
						m_processResponses_CallBack_void = EarthView_World_Core_CWorkQueue_processResponses_void_Function;
						GC.KeepAlive(m_processResponses_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(this.NativeObject, m_processResponses_CallBack_void);
						m_getResponseProcessingTimeLimit_CallBack_ev_uint32 = EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Function;
						GC.KeepAlive(m_getResponseProcessingTimeLimit_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(this.NativeObject, m_getResponseProcessingTimeLimit_CallBack_ev_uint32);
						m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32 = EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Function;
						GC.KeepAlive(m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(this.NativeObject, m_setResponseProcessingTimeLimit_CallBack_void_ev_uint32);
						m_shutdown_CallBack_void = EarthView_World_Core_CWorkQueue_shutdown_void_Function;
						GC.KeepAlive(m_shutdown_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void(this.NativeObject, m_shutdown_CallBack_void);
						m_getChannel_CallBack_ev_uint16_ev_uint32 = EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Function;
						GC.KeepAlive(m_getChannel_CallBack_ev_uint16_ev_uint32);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32(this.NativeObject, m_getChannel_CallBack_ev_uint16_ev_uint32);
						m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener = EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Function;
						GC.KeepAlive(m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(this.NativeObject, m_setChannelListener_CallBack_ev_bool_ev_uint16_CWorkQueueChannelListener);
						m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16 = EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Function;
						GC.KeepAlive(m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16);
						EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16(this.NativeObject, m_getChannelListener_CallBack_CWorkQueueChannelListener_ev_uint16);
					}
				}
				public override void Startup(bool forceRestart)
				{
					base.Startup_NoVirtual(forceRestart);
				}
				public override void Startup()
				{
					base.Startup_NoVirtual();
				}
				public override ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount, bool forceSynchronous)
				{
					return base.AddRequest_NoVirtual(channel,requestType,rData,retryCount,forceSynchronous);
				}
				public override ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData, byte retryCount)
				{
					return base.AddRequest_NoVirtual(channel,requestType,rData,retryCount);
				}
				public override ulong AddRequest(ushort channel, ushort requestType, EarthView.World.Core.WorkQueue.RequestPara rData)
				{
					return base.AddRequest_NoVirtual(channel,requestType,rData);
				}
				public override void Shutdown()
				{
					base.Shutdown_NoVirtual();
				}
				public override ushort GetChannel(uint priority)
				{
					return base.GetChannel_NoVirtual(priority);
				}
				public override bool SetChannelListener(ushort channelID, EarthView.World.Core.WorkQueueChannelListener pListener)
				{
					return base.SetChannelListener_NoVirtual(channelID,pListener);
				}
				public override EarthView.World.Core.WorkQueueChannelListener GetChannelListener(ushort channelID)
				{
					return base.GetChannelListener_NoVirtual(channelID);
				}
				public static DefaultWorkQueueBase FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultWorkQueueBase obj = baseObj as  DefaultWorkQueueBase;
					if (object.Equals(obj, null))
					{
						obj = new DefaultWorkQueueBase(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultWorkQueueBase");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultWorkQueueBaseClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultWorkQueueBase emptyInstance = new DefaultWorkQueueBase(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class BackgroundQueue : EarthView.World.Core.AllocatedObject
			{
				public BackgroundQueue() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CBackgroundQueueProxy", null);
					if (!"EarthView.World.Core.BackgroundQueue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void initialise_CallBack_void();

				protected initialise_CallBack_void m_initialise_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueue_initialise_void_NoVirtual(IntPtr pNativeObject);

				public virtual void Initialise_NoVirtual()
				{
					EarthView_World_Core_CBackgroundQueue_initialise_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CBackgroundQueue_initialise_void_Function()
				{
					Initialise();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueue_initialise_void(IntPtr pNativeObject);

				public virtual void Initialise()
				{
					EarthView_World_Core_CBackgroundQueue_initialise_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void shutdown_CallBack_void();

				protected shutdown_CallBack_void m_shutdown_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueue_shutdown_void_NoVirtual(IntPtr pNativeObject);

				public virtual void Shutdown_NoVirtual()
				{
					EarthView_World_Core_CBackgroundQueue_shutdown_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Core_CBackgroundQueue_shutdown_void_Function()
				{
					Shutdown();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueue_shutdown_void(IntPtr pNativeObject);

				public virtual void Shutdown()
				{
					EarthView_World_Core_CBackgroundQueue_shutdown_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getGroupName_CallBack_EVString();

				protected getGroupName_CallBack_EVString m_getGroupName_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetGroupName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Function()
				{
					string csret=GetGroupName();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(IntPtr pNativeObject);

				public virtual string GetGroupName()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getName_CallBack_EVString();

				protected getName_CallBack_EVString m_getName_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueue_getName_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueue_getName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Core_CBackgroundQueue_getName_EVString_Function()
				{
					string csret=GetName();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueue_getName_EVString(IntPtr pNativeObject);

				public virtual string GetName()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueue_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadBackgroundQueue = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadBackgroundQueue = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBackgroundQueue = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadBackgroundQueue = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadBackgroundQueue = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadBackgroundQueue = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBackgroundQueue = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadBackgroundQueue = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadBackgroundQueue = LoadDll.Load("EV_Core.so");
						private static bool csbLoadBackgroundQueue = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadBackgroundQueue = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadBackgroundQueue = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CBackgroundQueue", new BackgroundQueueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CBackgroundQueueProxy", new BackgroundQueueClassFactory());

				public BackgroundQueue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_initialise_void(IntPtr pObject, initialise_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_shutdown_void(IntPtr pObject, shutdown_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(IntPtr pObject, getGroupName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_initialise_CallBack_void = EarthView_World_Core_CBackgroundQueue_initialise_void_Function;
						GC.KeepAlive(m_initialise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_initialise_void(this.NativeObject, m_initialise_CallBack_void);
						m_shutdown_CallBack_void = EarthView_World_Core_CBackgroundQueue_shutdown_void_Function;
						GC.KeepAlive(m_shutdown_CallBack_void);
						EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_shutdown_void(this.NativeObject, m_shutdown_CallBack_void);
						m_getGroupName_CallBack_EVString = EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Function;
						GC.KeepAlive(m_getGroupName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(this.NativeObject, m_getGroupName_CallBack_EVString);
						m_getName_CallBack_EVString = EarthView_World_Core_CBackgroundQueue_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
					}
				}
				public static BackgroundQueue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BackgroundQueue obj = baseObj as  BackgroundQueue;
					if (object.Equals(obj, null))
					{
						obj = new BackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CBackgroundQueue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BackgroundQueueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BackgroundQueue emptyInstance = new BackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class BackgroundQueueManager : EarthView.World.Core.AllocatedObject
			{
				public BackgroundQueueManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CBackgroundQueueManager",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueueManager_getSingletonPtr_CBackgroundQueueManager();

				public static EarthView.World.Core.BackgroundQueueManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueueManager_getSingletonPtr_CBackgroundQueueManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.BackgroundQueueManager csObj = new EarthView.World.Core.BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CBackgroundQueueManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.BackgroundQueueManager;
						csObj.BindNativeObject(__ptr, "CBackgroundQueueManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueueManager_getSingleton_CBackgroundQueueManager();

				public static EarthView.World.Core.BackgroundQueueManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueueManager_getSingleton_CBackgroundQueueManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.BackgroundQueueManager csObj = new EarthView.World.Core.BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CBackgroundQueueManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.BackgroundQueueManager;
						csObj.BindNativeObject(__ptr, "CBackgroundQueueManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_registerBackgroundQueue_void_CBackgroundQueue(IntPtr pNativeObject, IntPtr queue);

				public void RegisterBackgroundQueue(EarthView.World.Core.BackgroundQueue queue)
				{
					EarthView_World_Core_CBackgroundQueueManager_registerBackgroundQueue_void_CBackgroundQueue(this.NativeObject, object.Equals(queue, null) ? IntPtr.Zero : queue.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_unregisterBackgroundQueue_void_CBackgroundQueue(IntPtr pNativeObject, IntPtr queue);

				public void UnregisterBackgroundQueue(EarthView.World.Core.BackgroundQueue queue)
				{
					EarthView_World_Core_CBackgroundQueueManager_unregisterBackgroundQueue_void_CBackgroundQueue(this.NativeObject, object.Equals(queue, null) ? IntPtr.Zero : queue.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueueManager_getBackgroundQueue_CBackgroundQueue_EVString(IntPtr pNativeObject, string name);

				public EarthView.World.Core.BackgroundQueue GetBackgroundQueue(string name)
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueueManager_getBackgroundQueue_CBackgroundQueue_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.BackgroundQueue csObj = new EarthView.World.Core.BackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CBackgroundQueue");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.BackgroundQueue;
						csObj.BindNativeObject(__ptr, "CBackgroundQueue");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueueManager_getRegisterBackgroundQueueNames_StringVector(IntPtr pNativeObject);

				public EarthView.World.Core.StringVector GetRegisterBackgroundQueueNames()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueueManager_getRegisterBackgroundQueueNames_StringVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CBackgroundQueueManager_getRegisterBackgroundGroupNames_StringVector(IntPtr pNativeObject);

				public EarthView.World.Core.StringVector GetRegisterBackgroundGroupNames()
				{
					IntPtr __ptr = EarthView_World_Core_CBackgroundQueueManager_getRegisterBackgroundGroupNames_StringVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_clearBackgroundQueues_void(IntPtr pNativeObject);

				public void ClearBackgroundQueues()
				{
					EarthView_World_Core_CBackgroundQueueManager_clearBackgroundQueues_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_initialiseAllGroups_void(IntPtr pNativeObject);

				public void InitialiseAllGroups()
				{
					EarthView_World_Core_CBackgroundQueueManager_initialiseAllGroups_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_initialise_void_EVString(IntPtr pNativeObject, string groupName);

				public void Initialise(string groupName)
				{
					EarthView_World_Core_CBackgroundQueueManager_initialise_void_EVString(this.NativeObject, groupName);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_shutdownAllGroups_void(IntPtr pNativeObject);

				public void ShutdownAllGroups()
				{
					EarthView_World_Core_CBackgroundQueueManager_shutdownAllGroups_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CBackgroundQueueManager_shutdown_void_EVString(IntPtr pNativeObject, string groupName);

				public void Shutdown(string groupName)
				{
					EarthView_World_Core_CBackgroundQueueManager_shutdown_void_EVString(this.NativeObject, groupName);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadBackgroundQueueManager = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadBackgroundQueueManager = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBackgroundQueueManager = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadBackgroundQueueManager = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadBackgroundQueueManager = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadBackgroundQueueManager = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBackgroundQueueManager = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadBackgroundQueueManager = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadBackgroundQueueManager = LoadDll.Load("EV_Core.so");
						private static bool csbLoadBackgroundQueueManager = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadBackgroundQueueManager = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadBackgroundQueueManager = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CBackgroundQueueManager", new BackgroundQueueManagerClassFactory());

				public BackgroundQueueManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static BackgroundQueueManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BackgroundQueueManager obj = baseObj as  BackgroundQueueManager;
					if (object.Equals(obj, null))
					{
						obj = new BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CBackgroundQueueManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BackgroundQueueManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BackgroundQueueManager emptyInstance = new BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
