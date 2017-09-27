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
			public class BackgroundProcessResult : EarthView.World.Core.BaseObject
			{
				#if DEBUG 
					#if Windows 
						private static bool bLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadBackgroundProcessResult = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::BackgroundProcessResult", new BackgroundProcessResultClassFactory());

				public BackgroundProcessResult(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static BackgroundProcessResult FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BackgroundProcessResult obj = baseObj as  BackgroundProcessResult;
					if (object.Equals(obj, null))
					{
						obj = new BackgroundProcessResult(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "BackgroundProcessResult");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BackgroundProcessResultClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BackgroundProcessResult emptyInstance = new BackgroundProcessResult(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ResourceBackgroundQueue : EarthView.World.Core.BackgroundQueue
			{
				private static string msBackgroundQueueGroupNameField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueGroupName( );

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
				private static extern void Set_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueGroupName( string value );

				public 				static string MsBackgroundQueueGroupName
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueGroupName();
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					set
					{
						msBackgroundQueueGroupNameField = value;
						Set_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueGroupName( value );
					}
				}

				private static string msBackgroundQueueNameField;
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
				private static extern IntPtr Get_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueName( );

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
				private static extern void Set_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueName( string value );

				public 				static string MsBackgroundQueueName
				{
					get
					{
						IntPtr __ptr = Get_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueName();
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					set
					{
						msBackgroundQueueNameField = value;
						Set_EarthView_World_Graphic_CResourceBackgroundQueue_msBackgroundQueueName( value );
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getGroupName_EVString_NoVirtual(IntPtr pNativeObject);

				public new string GetGroupName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getGroupName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getGroupName_EVString(IntPtr pNativeObject);

				public override string GetGroupName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getGroupName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getName_EVString_NoVirtual(IntPtr pNativeObject);

				public new string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getName_EVString(IntPtr pNativeObject);

				public override string GetName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getSingleton_CResourceBackgroundQueue();

				public static EarthView.World.Graphic.ResourceBackgroundQueue GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getSingleton_CResourceBackgroundQueue();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue csObj = new EarthView.World.Graphic.ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceBackgroundQueue");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue;
						csObj.BindNativeObject(__ptr, "CResourceBackgroundQueue");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getSingletonPtr_CResourceBackgroundQueue();

				public static EarthView.World.Graphic.ResourceBackgroundQueue GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getSingletonPtr_CResourceBackgroundQueue();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue csObj = new EarthView.World.Graphic.ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceBackgroundQueue");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue;
						csObj.BindNativeObject(__ptr, "CResourceBackgroundQueue");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue(IntPtr res, IntPtr srcQ);

				protected canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue;

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
				private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

				public virtual bool CanHandleResponse_NoVirtual(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
				{
					byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue_Function(IntPtr res, IntPtr srcQ)
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
				private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

				public virtual bool CanHandleResponse(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
				{
					byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue(IntPtr res, IntPtr srcQ);

				protected canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue;

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
				private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

				public virtual bool CanHandleRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request res, EarthView.World.Core.WorkQueue srcQ)
				{
					byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue_Function(IntPtr res, IntPtr srcQ)
				{
					EarthView.World.Core.WorkQueue.Request csobj_res = new EarthView.World.Core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_res.BindNativeObject(res,"CRequest");
					csobj_res.Delegate = true;
					IClassFactory csobj_resClassFactory = GlobalClassFactoryMap.Get(csobj_res.GetCppInstanceTypeName());
					if (csobj_resClassFactory != null)
					{
						csobj_res.Delegate = true;
						csobj_res = csobj_resClassFactory.Create() as EarthView.World.Core.WorkQueue.Request;
						csobj_res.BindNativeObject(res, "CRequest");
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
					
					bool csret=CanHandleRequest(csobj_res, csobj_srcQ);
					
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
				private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

				public virtual bool CanHandleRequest(EarthView.World.Core.WorkQueue.Request res, EarthView.World.Core.WorkQueue srcQ)
				{
					byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				public class ResourceBackgroundQueueInternalRequestHandler : EarthView.World.Core.WorkQueue.RequestHandler
				{
					public ResourceBackgroundQueueInternalRequestHandler(EarthView.World.Graphic.ResourceBackgroundQueue parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparent = new BasePtr(parent);
						list.Add("parent", valueparent.PtrVal);
						Create("CResourceBackgroundQueueInternalRequestHandlerProxy", list);
						if (!"EarthView.World.Graphic.ResourceBackgroundQueue+ResourceBackgroundQueueInternalRequestHandler".Equals(((Object)this).GetType().ToString()))
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
					private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public new bool CanHandleRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request res, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public override bool CanHandleRequest(EarthView.World.Core.WorkQueue.Request res, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public new EarthView.World.Core.WorkQueue.Response HandleRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

					public override EarthView.World.Core.WorkQueue.Response HandleRequest(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
					{
						IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
							private static bool bLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceBackgroundQueueInternalRequestHandler = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler", new ResourceBackgroundQueueInternalRequestHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandlerProxy", new ResourceBackgroundQueueInternalRequestHandlerClassFactory());

					public ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(IntPtr pObject, canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pObject, handleRequest_CallBack_CResponse_CRequest_CWorkQueue pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue = EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Function;
							GC.KeepAlive(m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(this.NativeObject, m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue);
							m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue = EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Function;
							GC.KeepAlive(m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue);
						}
					}
					public static ResourceBackgroundQueueInternalRequestHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceBackgroundQueueInternalRequestHandler obj = baseObj as  ResourceBackgroundQueueInternalRequestHandler;
						if (object.Equals(obj, null))
						{
							obj = new ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CResourceBackgroundQueueInternalRequestHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceBackgroundQueueInternalRequestHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceBackgroundQueueInternalRequestHandler emptyInstance = new ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ResourceBackgroundQueueInternalResponseHandler : EarthView.World.Core.WorkQueue.ResponseHandler
				{
					public ResourceBackgroundQueueInternalResponseHandler(EarthView.World.Graphic.ResourceBackgroundQueue parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparent = new BasePtr(parent);
						list.Add("parent", valueparent.PtrVal);
						Create("CResourceBackgroundQueueInternalResponseHandlerProxy", list);
						if (!"EarthView.World.Graphic.ResourceBackgroundQueue+ResourceBackgroundQueueInternalResponseHandler".Equals(((Object)this).GetType().ToString()))
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
					private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public new bool CanHandleResponse_NoVirtual(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public override bool CanHandleResponse(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_handleResponse_void_CResponse_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public new void HandleResponse_NoVirtual(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_handleResponse_void_CResponse_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_handleResponse_void_CResponse_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

					public override void HandleResponse(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
					{
						EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_handleResponse_void_CResponse_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceBackgroundQueueInternalResponseHandler = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler", new ResourceBackgroundQueueInternalResponseHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandlerProxy", new ResourceBackgroundQueueInternalResponseHandlerClassFactory());

					public ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(IntPtr pObject, canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_handleResponse_void_CResponse_CWorkQueue(IntPtr pObject, handleResponse_CallBack_void_CResponse_CWorkQueue pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue = EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Function;
							GC.KeepAlive(m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(this.NativeObject, m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue);
							m_handleResponse_CallBack_void_CResponse_CWorkQueue = EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Function;
							GC.KeepAlive(m_handleResponse_CallBack_void_CResponse_CWorkQueue);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueInternalResponseHandler_handleResponse_void_CResponse_CWorkQueue(this.NativeObject, m_handleResponse_CallBack_void_CResponse_CWorkQueue);
						}
					}
					public static ResourceBackgroundQueueInternalResponseHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceBackgroundQueueInternalResponseHandler obj = baseObj as  ResourceBackgroundQueueInternalResponseHandler;
						if (object.Equals(obj, null))
						{
							obj = new ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CResourceBackgroundQueueInternalResponseHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceBackgroundQueueInternalResponseHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceBackgroundQueueInternalResponseHandler emptyInstance = new ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void handleResponse_CallBack_void_CResponse_CWorkQueue(IntPtr res, IntPtr srcQ);

				protected handleResponse_CallBack_void_CResponse_CWorkQueue m_handleResponse_CallBack_void_CResponse_CWorkQueue;

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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

				public virtual void HandleResponse_NoVirtual(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue_Function(IntPtr res, IntPtr srcQ)
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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue(IntPtr pNativeObject, IntPtr res, IntPtr srcQ);

				public virtual void HandleResponse(EarthView.World.Core.WorkQueue.Response res, EarthView.World.Core.WorkQueue srcQ)
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr handleRequest_CallBack_CResponse_CRequest_CWorkQueue(IntPtr req, IntPtr srcQ);

				protected handleRequest_CallBack_CResponse_CRequest_CWorkQueue m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue;

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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

				public virtual EarthView.World.Core.WorkQueue.Response HandleRequest_NoVirtual(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
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

				protected  IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue_Function(IntPtr req, IntPtr srcQ)
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pNativeObject, IntPtr req, IntPtr srcQ);

				public virtual EarthView.World.Core.WorkQueue.Response HandleRequest(EarthView.World.Core.WorkQueue.Request req, EarthView.World.Core.WorkQueue srcQ)
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject, object.Equals(srcQ, null) ? IntPtr.Zero : srcQ.NativeObject);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler();

				protected getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler m_getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler;

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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler GetRequestHandlerPtr_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler csObj = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalRequestHandler");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler;
						csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalRequestHandler");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler_Function()
				{
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler csret=GetRequestHandlerPtr();
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler GetRequestHandlerPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler csObj = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalRequestHandler");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler;
						csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalRequestHandler");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler();

				protected getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler m_getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler;

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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler GetResponseHandlerPtr_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler csObj = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalResponseHandler");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler;
						csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalResponseHandler");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler_Function()
				{
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler csret=GetResponseHandlerPtr();
					
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
				private static extern IntPtr EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler GetResponseHandlerPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler csObj = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalResponseHandler");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler;
						csObj.BindNativeObject(__ptr, "CResourceBackgroundQueueInternalResponseHandler");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				public class ResourceBackgroundQueueListener : EarthView.World.Core.BaseObject
				{
					public ResourceBackgroundQueueListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CResourceBackgroundQueueListenerProxy", null);
						if (!"EarthView.World.Graphic.ResourceBackgroundQueue+ResourceBackgroundQueueListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult(ulong ticket, IntPtr result);

					protected operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult m_operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult;

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
					private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult_NoVirtual(IntPtr pNativeObject, ulong ticket, IntPtr result);

					public virtual void OperationCompleted_NoVirtual(ulong ticket, EarthView.World.Graphic.BackgroundProcessResult result)
					{
						EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult_NoVirtual(this.NativeObject, ticket, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult_Function(ulong ticket, IntPtr result)
					{
						EarthView.World.Graphic.BackgroundProcessResult csobj_result = new EarthView.World.Graphic.BackgroundProcessResult(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_result.BindNativeObject(result,"BackgroundProcessResult");
						csobj_result.Delegate = true;
						IClassFactory csobj_resultClassFactory = GlobalClassFactoryMap.Get(csobj_result.GetCppInstanceTypeName());
						if (csobj_resultClassFactory != null)
						{
							csobj_result.Delegate = true;
							csobj_result = csobj_resultClassFactory.Create() as EarthView.World.Graphic.BackgroundProcessResult;
							csobj_result.BindNativeObject(result, "BackgroundProcessResult");
							csobj_result.Delegate = true;
						}
						
						OperationCompleted(ticket, csobj_result);
						
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
					private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult(IntPtr pNativeObject, ulong ticket, IntPtr result);

					public virtual void OperationCompleted(ulong ticket, EarthView.World.Graphic.BackgroundProcessResult result)
					{
						EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult(this.NativeObject, ticket, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadResourceBackgroundQueueListener = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener", new ResourceBackgroundQueueListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListenerProxy", new ResourceBackgroundQueueListenerClassFactory());

					public ResourceBackgroundQueueListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult(IntPtr pObject, operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult = EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult_Function;
							GC.KeepAlive(m_operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult);
							EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_CResourceBackgroundQueueListener_operationCompleted_void_ev_uint64_BackgroundProcessResult(this.NativeObject, m_operationCompleted_CallBack_void_ev_uint64_BackgroundProcessResult);
						}
					}
					public static ResourceBackgroundQueueListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResourceBackgroundQueueListener obj = baseObj as  ResourceBackgroundQueueListener;
						if (object.Equals(obj, null))
						{
							obj = new ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CResourceBackgroundQueueListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResourceBackgroundQueueListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResourceBackgroundQueueListener emptyInstance = new ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public ResourceBackgroundQueue() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CResourceBackgroundQueueProxy", null);
					if (!"EarthView.World.Graphic.ResourceBackgroundQueue".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_initialise_void_NoVirtual(IntPtr pNativeObject);

				public new void Initialise_NoVirtual()
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_initialise_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_initialise_void(IntPtr pNativeObject);

				public override void Initialise()
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_initialise_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_shutdown_void_NoVirtual(IntPtr pNativeObject);

				public new void Shutdown_NoVirtual()
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_shutdown_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_shutdown_void(IntPtr pNativeObject);

				public override void Shutdown()
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_shutdown_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener(ref IntPtr name, IntPtr listener);

				protected initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener m_initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong InitialiseResourceGroup_NoVirtual(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function(ref IntPtr name, IntPtr listener)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=InitialiseResourceGroup(strname,csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong InitialiseResourceGroup(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong initialiseResourceGroup_CallBack_ev_uint64_EVString(ref IntPtr name);

				protected initialiseResourceGroup_CallBack_ev_uint64_EVString m_initialiseResourceGroup_CallBack_ev_uint64_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual ulong InitialiseResourceGroup_NoVirtual(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ulong csret=InitialiseResourceGroup(strname);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString(IntPtr pNativeObject, string name);

				public virtual ulong InitialiseResourceGroup(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener(IntPtr listener);

				protected initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener m_initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, IntPtr listener);

				public virtual ulong InitialiseAllResourceGroups_NoVirtual(EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener_Function(IntPtr listener)
				{
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=InitialiseAllResourceGroups(csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener(IntPtr pNativeObject, IntPtr listener);

				public virtual ulong InitialiseAllResourceGroups(EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong initialiseAllResourceGroups_CallBack_ev_uint64();

				protected initialiseAllResourceGroups_CallBack_ev_uint64 m_initialiseAllResourceGroups_CallBack_ev_uint64;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_NoVirtual(IntPtr pNativeObject);

				public virtual ulong InitialiseAllResourceGroups_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_Function()
				{
					ulong csret=InitialiseAllResourceGroups();
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64(IntPtr pNativeObject);

				public virtual ulong InitialiseAllResourceGroups()
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener(ref IntPtr name, IntPtr listener);

				protected prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener m_prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong PrepareResourceGroup_NoVirtual(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function(ref IntPtr name, IntPtr listener)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=PrepareResourceGroup(strname,csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong PrepareResourceGroup(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepareResourceGroup_CallBack_ev_uint64_EVString(ref IntPtr name);

				protected prepareResourceGroup_CallBack_ev_uint64_EVString m_prepareResourceGroup_CallBack_ev_uint64_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual ulong PrepareResourceGroup_NoVirtual(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ulong csret=PrepareResourceGroup(strname);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString(IntPtr pNativeObject, string name);

				public virtual ulong PrepareResourceGroup(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener(ref IntPtr name, IntPtr listener);

				protected loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener m_loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong LoadResourceGroup_NoVirtual(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function(ref IntPtr name, IntPtr listener)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=LoadResourceGroup(strname,csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong LoadResourceGroup(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong loadResourceGroup_CallBack_ev_uint64_EVString(ref IntPtr name);

				protected loadResourceGroup_CallBack_ev_uint64_EVString m_loadResourceGroup_CallBack_ev_uint64_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual ulong LoadResourceGroup_NoVirtual(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ulong csret=LoadResourceGroup(strname);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString(IntPtr pNativeObject, string name);

				public virtual ulong LoadResourceGroup(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener(ref IntPtr resType, ref IntPtr name, IntPtr listener);

				protected unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener m_unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string resType, string name, IntPtr listener);

				public virtual ulong Unload_NoVirtual(string resType, string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, resType, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener_Function(ref IntPtr resType, ref IntPtr name, IntPtr listener)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=Unload(strresType,strname,csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener(IntPtr pNativeObject, string resType, string name, IntPtr listener);

				public virtual ulong Unload(string resType, string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener(this.NativeObject, resType, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong unload_CallBack_ev_uint64_EVString_EVString(ref IntPtr resType, ref IntPtr name);

				protected unload_CallBack_ev_uint64_EVString_EVString m_unload_CallBack_ev_uint64_EVString_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_NoVirtual(IntPtr pNativeObject, string resType, string name);

				public virtual ulong Unload_NoVirtual(string resType, string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_NoVirtual(this.NativeObject, resType, name);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_Function(ref IntPtr resType, ref IntPtr name)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ulong csret=Unload(strresType,strname);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString(IntPtr pNativeObject, string resType, string name);

				public virtual ulong Unload(string resType, string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString(this.NativeObject, resType, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener(ref IntPtr resType, ulong handle, IntPtr listener);

				protected unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener m_unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string resType, ulong handle, IntPtr listener);

				public virtual ulong Unload_NoVirtual(string resType, ulong handle, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, resType, handle, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener_Function(ref IntPtr resType, ulong handle, IntPtr listener)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=Unload(strresType,handle, csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener(IntPtr pNativeObject, string resType, ulong handle, IntPtr listener);

				public virtual ulong Unload(string resType, ulong handle, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener(this.NativeObject, resType, handle, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong unload_CallBack_ev_uint64_EVString_ev_uint64(ref IntPtr resType, ulong handle);

				protected unload_CallBack_ev_uint64_EVString_ev_uint64 m_unload_CallBack_ev_uint64_EVString_ev_uint64;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_NoVirtual(IntPtr pNativeObject, string resType, ulong handle);

				public virtual ulong Unload_NoVirtual(string resType, ulong handle)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_NoVirtual(this.NativeObject, resType, handle);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_Function(ref IntPtr resType, ulong handle)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					
					ulong csret=Unload(strresType,handle);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64(IntPtr pNativeObject, string resType, ulong handle);

				public virtual ulong Unload(string resType, ulong handle)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64(this.NativeObject, resType, handle);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener(ref IntPtr name, IntPtr listener);

				protected unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener m_unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong UnloadResourceGroup_NoVirtual(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function(ref IntPtr name, IntPtr listener)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=UnloadResourceGroup(strname,csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pNativeObject, string name, IntPtr listener);

				public virtual ulong UnloadResourceGroup(string name, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, name, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong unloadResourceGroup_CallBack_ev_uint64_EVString(ref IntPtr name);

				protected unloadResourceGroup_CallBack_ev_uint64_EVString m_unloadResourceGroup_CallBack_ev_uint64_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual ulong UnloadResourceGroup_NoVirtual(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					ulong csret=UnloadResourceGroup(strname);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString(IntPtr pNativeObject, string name);

				public virtual ulong UnloadResourceGroup(string name)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener);

				protected prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener);

				public virtual ulong Prepare_NoVirtual(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=Prepare(strresType,strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams, csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener);

				public virtual ulong Prepare(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams);

				protected prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual ulong Prepare_NoVirtual(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					
					ulong csret=Prepare(strresType,strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual ulong Prepare(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual ulong Prepare_NoVirtual(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					ulong csret=Prepare(strresType,strname,strgroup,isManual, csobj_ref_loader);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual ulong Prepare(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual);

				protected prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual);

				public virtual ulong Prepare_NoVirtual(string resType, string name, string group, bool isManual)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual));
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					ulong csret=Prepare(strresType,strname,strgroup,isManual);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool(IntPtr pNativeObject, string resType, string name, string group, byte isManual);

				public virtual ulong Prepare(string resType, string name, string group, bool isManual)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool(this.NativeObject, resType, name, group, Convert.ToByte(isManual));
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong prepare_CallBack_ev_uint64_EVString_EVString_EVString(ref IntPtr resType, ref IntPtr name, ref IntPtr group);

				protected prepare_CallBack_ev_uint64_EVString_EVString_EVString m_prepare_CallBack_ev_uint64_EVString_EVString_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string resType, string name, string group);

				public virtual ulong Prepare_NoVirtual(string resType, string name, string group)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_NoVirtual(this.NativeObject, resType, name, group);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					ulong csret=Prepare(strresType,strname,strgroup);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString(IntPtr pNativeObject, string resType, string name, string group);

				public virtual ulong Prepare(string resType, string name, string group)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString(this.NativeObject, resType, name, group);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener);

				protected load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener);

				public virtual ulong Load_NoVirtual(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener csobj_listener = new EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_listener.BindNativeObject(listener,"CResourceBackgroundQueueListener");
					csobj_listener.Delegate = true;
					IClassFactory csobj_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_listener.GetCppInstanceTypeName());
					if (csobj_listenerClassFactory != null)
					{
						csobj_listener.Delegate = true;
						csobj_listener = csobj_listenerClassFactory.Create() as EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener;
						csobj_listener.BindNativeObject(listener, "CResourceBackgroundQueueListener");
						csobj_listener.Delegate = true;
					}
					
					ulong csret=Load(strresType,strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams, csobj_listener);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams, IntPtr listener);

				public virtual ulong Load(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, EarthView.World.Graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams);

				protected load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual ulong Load_NoVirtual(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader, IntPtr loadParams)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					EarthView.World.Core.CommonStringPairList csobj_loadParams = new EarthView.World.Core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_loadParams.BindNativeObject(loadParams,"CommonStringPairList");
					csobj_loadParams.Delegate = true;
					IClassFactory csobj_loadParamsClassFactory = GlobalClassFactoryMap.Get(csobj_loadParams.GetCppInstanceTypeName());
					if (csobj_loadParamsClassFactory != null)
					{
						csobj_loadParams.Delegate = true;
						csobj_loadParams = csobj_loadParamsClassFactory.Create() as EarthView.World.Core.CommonStringPairList;
						csobj_loadParams.BindNativeObject(loadParams, "CommonStringPairList");
						csobj_loadParams.Delegate = true;
					}
					
					ulong csret=Load(strresType,strname,strgroup,isManual, csobj_ref_loader, csobj_loadParams);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader, IntPtr loadParams);

				public virtual ulong Load(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(loadParams, null) ? IntPtr.Zero : loadParams.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual ulong Load_NoVirtual(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					ulong csret=Load(strresType,strname,strgroup,isManual, csobj_ref_loader);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string resType, string name, string group, byte isManual, IntPtr ref_loader);

				public virtual ulong Load(string resType, string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, resType, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual);

				protected load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string resType, string name, string group, byte isManual);

				public virtual ulong Load_NoVirtual(string resType, string name, string group, bool isManual)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, resType, name, group, Convert.ToByte(isManual));
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group, bool isManual)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					ulong csret=Load(strresType,strname,strgroup,isManual);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool(IntPtr pNativeObject, string resType, string name, string group, byte isManual);

				public virtual ulong Load(string resType, string name, string group, bool isManual)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool(this.NativeObject, resType, name, group, Convert.ToByte(isManual));
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong load_CallBack_ev_uint64_EVString_EVString_EVString(ref IntPtr resType, ref IntPtr name, ref IntPtr group);

				protected load_CallBack_ev_uint64_EVString_EVString_EVString m_load_CallBack_ev_uint64_EVString_EVString_EVString;

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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_NoVirtual(IntPtr pNativeObject, string resType, string name, string group);

				public virtual ulong Load_NoVirtual(string resType, string name, string group)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_NoVirtual(this.NativeObject, resType, name, group);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_Function(ref IntPtr resType, ref IntPtr name, ref IntPtr group)
				{
					string strresType= Marshal.PtrToStringAnsi(resType);
					ClassFactory.FreeString(ref resType);
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					
					ulong csret=Load(strresType,strname,strgroup);
					
					return csret;
					
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
				private static extern ulong EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString(IntPtr pNativeObject, string resType, string name, string group);

				public virtual ulong Load(string resType, string name, string group)
				{
					ulong ret=EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString(this.NativeObject, resType, name, group);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isProcessComplete_CallBack_ev_bool_ev_uint64(ulong ticket);

				protected isProcessComplete_CallBack_ev_bool_ev_uint64 m_isProcessComplete_CallBack_ev_bool_ev_uint64;

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
				private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64_NoVirtual(IntPtr pNativeObject, ulong ticket);

				public virtual bool IsProcessComplete_NoVirtual(ulong ticket)
				{
					byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64_NoVirtual(this.NativeObject, ticket);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64_Function(ulong ticket)
				{
					bool csret=IsProcessComplete(ticket);
					
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
				private static extern byte EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64(IntPtr pNativeObject, ulong ticket);

				public virtual bool IsProcessComplete(ulong ticket)
				{
					byte ret=EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64(this.NativeObject, ticket);
					
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
				private static extern void EarthView_World_Graphic_CResourceBackgroundQueue_abortRequest_void_ev_uint64(IntPtr pNativeObject, ulong ticket);

				public void AbortRequest(ulong ticket)
				{
					EarthView_World_Graphic_CResourceBackgroundQueue_abortRequest_void_ev_uint64(this.NativeObject, ticket);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadResourceBackgroundQueue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueue", new ResourceBackgroundQueueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CResourceBackgroundQueueProxy", new ResourceBackgroundQueueClassFactory());

				public ResourceBackgroundQueue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue(IntPtr pObject, canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue(IntPtr pObject, canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue(IntPtr pObject, handleResponse_CallBack_void_CResponse_CWorkQueue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue(IntPtr pObject, handleRequest_CallBack_CResponse_CRequest_CWorkQueue pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler(IntPtr pObject, getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler(IntPtr pObject, getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pObject, initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString(IntPtr pObject, initialiseResourceGroup_CallBack_ev_uint64_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener(IntPtr pObject, initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64(IntPtr pObject, initialiseAllResourceGroups_CallBack_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pObject, prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString(IntPtr pObject, prepareResourceGroup_CallBack_ev_uint64_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pObject, loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString(IntPtr pObject, loadResourceGroup_CallBack_ev_uint64_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener(IntPtr pObject, unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString(IntPtr pObject, unload_CallBack_ev_uint64_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener(IntPtr pObject, unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64(IntPtr pObject, unload_CallBack_ev_uint64_EVString_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(IntPtr pObject, unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString(IntPtr pObject, unloadResourceGroup_CallBack_ev_uint64_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(IntPtr pObject, prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString(IntPtr pObject, prepare_CallBack_ev_uint64_EVString_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(IntPtr pObject, load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString(IntPtr pObject, load_CallBack_ev_uint64_EVString_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64(IntPtr pObject, isProcessComplete_CallBack_ev_bool_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialise_void(IntPtr pObject, initialise_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_shutdown_void(IntPtr pObject, shutdown_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getGroupName_EVString(IntPtr pObject, getGroupName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue = EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue_Function;
						GC.KeepAlive(m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_canHandleResponse_ev_bool_CResponse_CWorkQueue(this.NativeObject, m_canHandleResponse_CallBack_ev_bool_CResponse_CWorkQueue);
						m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue = EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue_Function;
						GC.KeepAlive(m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_canHandleRequest_ev_bool_CRequest_CWorkQueue(this.NativeObject, m_canHandleRequest_CallBack_ev_bool_CRequest_CWorkQueue);
						m_handleResponse_CallBack_void_CResponse_CWorkQueue = EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue_Function;
						GC.KeepAlive(m_handleResponse_CallBack_void_CResponse_CWorkQueue);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_handleResponse_void_CResponse_CWorkQueue(this.NativeObject, m_handleResponse_CallBack_void_CResponse_CWorkQueue);
						m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue = EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue_Function;
						GC.KeepAlive(m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_handleRequest_CResponse_CRequest_CWorkQueue(this.NativeObject, m_handleRequest_CallBack_CResponse_CRequest_CWorkQueue);
						m_getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler = EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler_Function;
						GC.KeepAlive(m_getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getRequestHandlerPtr_CResourceBackgroundQueueInternalRequestHandler(this.NativeObject, m_getRequestHandlerPtr_CallBack_CResourceBackgroundQueueInternalRequestHandler);
						m_getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler = EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler_Function;
						GC.KeepAlive(m_getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getResponseHandlerPtr_CResourceBackgroundQueueInternalResponseHandler(this.NativeObject, m_getResponseHandlerPtr_CallBack_CResourceBackgroundQueueInternalResponseHandler);
						m_initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, m_initialiseResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						m_initialiseResourceGroup_CallBack_ev_uint64_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString_Function;
						GC.KeepAlive(m_initialiseResourceGroup_CallBack_ev_uint64_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseResourceGroup_ev_uint64_EVString(this.NativeObject, m_initialiseResourceGroup_CallBack_ev_uint64_EVString);
						m_initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_CResourceBackgroundQueueListener(this.NativeObject, m_initialiseAllResourceGroups_CallBack_ev_uint64_CResourceBackgroundQueueListener);
						m_initialiseAllResourceGroups_CallBack_ev_uint64 = EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64_Function;
						GC.KeepAlive(m_initialiseAllResourceGroups_CallBack_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialiseAllResourceGroups_ev_uint64(this.NativeObject, m_initialiseAllResourceGroups_CallBack_ev_uint64);
						m_prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, m_prepareResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						m_prepareResourceGroup_CallBack_ev_uint64_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString_Function;
						GC.KeepAlive(m_prepareResourceGroup_CallBack_ev_uint64_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepareResourceGroup_ev_uint64_EVString(this.NativeObject, m_prepareResourceGroup_CallBack_ev_uint64_EVString);
						m_loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, m_loadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						m_loadResourceGroup_CallBack_ev_uint64_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString_Function;
						GC.KeepAlive(m_loadResourceGroup_CallBack_ev_uint64_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_loadResourceGroup_ev_uint64_EVString(this.NativeObject, m_loadResourceGroup_CallBack_ev_uint64_EVString);
						m_unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener(this.NativeObject, m_unload_CallBack_ev_uint64_EVString_EVString_CResourceBackgroundQueueListener);
						m_unload_CallBack_ev_uint64_EVString_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_ev_uint64_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_EVString(this.NativeObject, m_unload_CallBack_ev_uint64_EVString_EVString);
						m_unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener(this.NativeObject, m_unload_CallBack_ev_uint64_EVString_ev_uint64_CResourceBackgroundQueueListener);
						m_unload_CallBack_ev_uint64_EVString_ev_uint64 = EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_ev_uint64_EVString_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unload_ev_uint64_EVString_ev_uint64(this.NativeObject, m_unload_CallBack_ev_uint64_EVString_ev_uint64);
						m_unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_CResourceBackgroundQueueListener(this.NativeObject, m_unloadResourceGroup_CallBack_ev_uint64_EVString_CResourceBackgroundQueueListener);
						m_unloadResourceGroup_CallBack_ev_uint64_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString_Function;
						GC.KeepAlive(m_unloadResourceGroup_CallBack_ev_uint64_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_unloadResourceGroup_ev_uint64_EVString(this.NativeObject, m_unloadResourceGroup_CallBack_ev_uint64_EVString);
						m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.NativeObject, m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener);
						m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool);
						m_prepare_CallBack_ev_uint64_EVString_EVString_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_prepare_CallBack_ev_uint64_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_prepare_ev_uint64_EVString_EVString_EVString(this.NativeObject, m_prepare_CallBack_ev_uint64_EVString_EVString_EVString);
						m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener = EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_Function;
						GC.KeepAlive(m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.NativeObject, m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener);
						m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ev_uint64_EVString_EVString_EVString_ev_bool);
						m_load_CallBack_ev_uint64_EVString_EVString_EVString = EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ev_uint64_EVString_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_load_ev_uint64_EVString_EVString_EVString(this.NativeObject, m_load_CallBack_ev_uint64_EVString_EVString_EVString);
						m_isProcessComplete_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_isProcessComplete_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_isProcessComplete_ev_bool_ev_uint64(this.NativeObject, m_isProcessComplete_CallBack_ev_bool_ev_uint64);
						m_initialise_CallBack_void = EarthView_World_Core_CBackgroundQueue_initialise_void_Function;
						GC.KeepAlive(m_initialise_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_initialise_void(this.NativeObject, m_initialise_CallBack_void);
						m_shutdown_CallBack_void = EarthView_World_Core_CBackgroundQueue_shutdown_void_Function;
						GC.KeepAlive(m_shutdown_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_shutdown_void(this.NativeObject, m_shutdown_CallBack_void);
						m_getGroupName_CallBack_EVString = EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Function;
						GC.KeepAlive(m_getGroupName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getGroupName_EVString(this.NativeObject, m_getGroupName_CallBack_EVString);
						m_getName_CallBack_EVString = EarthView_World_Core_CBackgroundQueue_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CResourceBackgroundQueue_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
					}
				}
				public static ResourceBackgroundQueue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ResourceBackgroundQueue obj = baseObj as  ResourceBackgroundQueue;
					if (object.Equals(obj, null))
					{
						obj = new ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CResourceBackgroundQueue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ResourceBackgroundQueueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ResourceBackgroundQueue emptyInstance = new ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
