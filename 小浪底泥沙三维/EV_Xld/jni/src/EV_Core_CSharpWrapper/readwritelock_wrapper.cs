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
			/// <summary>
			/// 读加锁
			/// </summary>
			public class ReadWriteLock : EarthView.World.Core.BaseObject
			{
				public ReadWriteLock() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CReadWriteLock",  null);
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
				private static extern void EarthView_World_Core_CReadWriteLock_lockForRead_void(IntPtr pNativeObject);

				/// <summary>
				/// 读写锁类
				/// </summary>
				/// <param name=""></param>
				/// <returns</returns>
				public void LockForRead()
				{
					EarthView_World_Core_CReadWriteLock_lockForRead_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Core_CReadWriteLock_lockForWrite_void(IntPtr pNativeObject);

				/// <summary>
				/// 写加锁
				/// </summary>
				/// <param name=""></param>
				/// <returns</returns>
				public void LockForWrite()
				{
					EarthView_World_Core_CReadWriteLock_lockForWrite_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Core_CReadWriteLock_unlockForRead_void(IntPtr pNativeObject);

				/// <summary>
				/// 读解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns</returns>
				public void UnlockForRead()
				{
					EarthView_World_Core_CReadWriteLock_unlockForRead_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Core_CReadWriteLock_unlockForWrite_void(IntPtr pNativeObject);

				/// <summary>
				/// 写解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns</returns>
				public void UnlockForWrite()
				{
					EarthView_World_Core_CReadWriteLock_unlockForWrite_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadReadWriteLock = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadReadWriteLock = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadReadWriteLock = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadReadWriteLock = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadReadWriteLock = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadReadWriteLock = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadReadWriteLock = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadReadWriteLock = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadReadWriteLock = LoadDll.Load("EV_Core.so");
						private static bool csbLoadReadWriteLock = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadReadWriteLock = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadReadWriteLock = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CReadWriteLock", new ReadWriteLockClassFactory());

				public ReadWriteLock(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ReadWriteLock FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ReadWriteLock obj = baseObj as  ReadWriteLock;
					if (object.Equals(obj, null))
					{
						obj = new ReadWriteLock(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CReadWriteLock");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ReadWriteLockClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ReadWriteLock emptyInstance = new ReadWriteLock(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 自动读加锁、解锁类
			/// 构造的时候进行读加锁，析构的时候进行读解锁
			/// </summary>
			public class ReadLocker : EarthView.World.Core.BaseObject
			{
				public ReadLocker(EarthView.World.Core.ReadWriteLock pReadLocker) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuepReadLocker = new BasePtr(pReadLocker);
					list.Add("pReadLocker", valuepReadLocker.PtrVal);
					Create("CReadLocker", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadReadLocker = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadReadLocker = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadReadLocker = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadReadLocker = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadReadLocker = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadReadLocker = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadReadLocker = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadReadLocker = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadReadLocker = LoadDll.Load("EV_Core.so");
						private static bool csbLoadReadLocker = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadReadLocker = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadReadLocker = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CReadLocker", new ReadLockerClassFactory());

				public ReadLocker(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ReadLocker FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ReadLocker obj = baseObj as  ReadLocker;
					if (object.Equals(obj, null))
					{
						obj = new ReadLocker(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CReadLocker");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ReadLockerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ReadLocker emptyInstance = new ReadLocker(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 自动写加锁、解锁类
			/// 构造的时候进行写加锁，析构的时候进行写解锁
			/// </summary>
			public class WriteLocker : EarthView.World.Core.BaseObject
			{
				public WriteLocker(EarthView.World.Core.ReadWriteLock pWriteLocker) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuepWriteLocker = new BasePtr(pWriteLocker);
					list.Add("pWriteLocker", valuepWriteLocker.PtrVal);
					Create("CWriteLocker", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadWriteLocker = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadWriteLocker = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadWriteLocker = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadWriteLocker = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadWriteLocker = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadWriteLocker = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadWriteLocker = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadWriteLocker = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadWriteLocker = LoadDll.Load("EV_Core.so");
						private static bool csbLoadWriteLocker = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadWriteLocker = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadWriteLocker = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CWriteLocker", new WriteLockerClassFactory());

				public WriteLocker(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static WriteLocker FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					WriteLocker obj = baseObj as  WriteLocker;
					if (object.Equals(obj, null))
					{
						obj = new WriteLocker(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CWriteLocker");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class WriteLockerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					WriteLocker emptyInstance = new WriteLocker(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
