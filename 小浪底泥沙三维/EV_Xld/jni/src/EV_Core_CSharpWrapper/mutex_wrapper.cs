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
			public enum MUTEXTYPE
			{
						Mutex_Normal,
						Mutex_Recursive
			
			}

			/// <summary>
			/// 互斥体类，提供加锁、解锁、以及尝试加锁的功能
			/// </summary>
			public class Mutex : EarthView.World.Core.BaseObject
			{
				public Mutex() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMutex",  null);
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
				private static extern void EarthView_World_Core_CMutex_lock_void(IntPtr pNativeObject);

				/// <summary>
				/// 加锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Lock()
				{
					EarthView_World_Core_CMutex_lock_void(this.NativeObject);
					
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
				private static extern byte EarthView_World_Core_CMutex_tryLock_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 尝试加锁
				/// </summary>
				/// <returns>尝试加锁成功返回true，否则返回false</returns>
				public bool TryLock()
				{
					byte ret=EarthView_World_Core_CMutex_tryLock_ev_bool(this.NativeObject);
					
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
				private static extern void EarthView_World_Core_CMutex_unlock_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Unlock()
				{
					EarthView_World_Core_CMutex_unlock_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMutex = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadMutex = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMutex = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadMutex = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadMutex = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadMutex = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMutex = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadMutex = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadMutex = LoadDll.Load("EV_Core.so");
						private static bool csbLoadMutex = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadMutex = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadMutex = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CMutex", new MutexClassFactory());

				public Mutex(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Mutex FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Mutex obj = baseObj as  Mutex;
					if (object.Equals(obj, null))
					{
						obj = new Mutex(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMutex");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MutexClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Mutex emptyInstance = new Mutex(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class RecursiveMutex : EarthView.World.Core.Mutex
			{
				public RecursiveMutex() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CRecursiveMutex",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadRecursiveMutex = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadRecursiveMutex = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadRecursiveMutex = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadRecursiveMutex = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadRecursiveMutex = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadRecursiveMutex = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadRecursiveMutex = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadRecursiveMutex = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadRecursiveMutex = LoadDll.Load("EV_Core.so");
						private static bool csbLoadRecursiveMutex = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadRecursiveMutex = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadRecursiveMutex = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CRecursiveMutex", new RecursiveMutexClassFactory());

				public RecursiveMutex(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static RecursiveMutex FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					RecursiveMutex obj = baseObj as  RecursiveMutex;
					if (object.Equals(obj, null))
					{
						obj = new RecursiveMutex(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CRecursiveMutex");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class RecursiveMutexClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					RecursiveMutex emptyInstance = new RecursiveMutex(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 自动加锁，解锁类，在构造时通过外部传进来的互斥体指针进行加锁
			///在其析构的时候进行解锁
			/// </summary>
			public class MutexLocker : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 与外部传进来的互斥体指针进行绑定
				/// </summary>
				/// <param name="mutex">外部的互斥体指针</param>
				/// <returns></returns>
				public MutexLocker(EarthView.World.Core.Mutex mutex) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuemutex = new BasePtr(mutex);
					list.Add("mutex", valuemutex.PtrVal);
					Create("CMutexLocker", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadMutexLocker = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadMutexLocker = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMutexLocker = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadMutexLocker = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadMutexLocker = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadMutexLocker = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMutexLocker = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadMutexLocker = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadMutexLocker = LoadDll.Load("EV_Core.so");
						private static bool csbLoadMutexLocker = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadMutexLocker = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadMutexLocker = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CMutexLocker", new MutexLockerClassFactory());

				public MutexLocker(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static MutexLocker FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MutexLocker obj = baseObj as  MutexLocker;
					if (object.Equals(obj, null))
					{
						obj = new MutexLocker(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMutexLocker");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MutexLockerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MutexLocker emptyInstance = new MutexLocker(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class Condition : EarthView.World.Core.BaseObject
			{
				public Condition() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCondition",  null);
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
				private static extern void EarthView_World_Core_CCondition_wait_void_CMutex(IntPtr pNativeObject, IntPtr mtx);

				public void Wait(ref EarthView.World.Core.Mutex mtx)
				{
					EarthView_World_Core_CCondition_wait_void_CMutex(this.NativeObject, object.Equals(mtx, null) ? IntPtr.Zero : mtx.NativeObject);
					
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
				private static extern void EarthView_World_Core_CCondition_notify_one_void(IntPtr pNativeObject);

				public void Notify_one()
				{
					EarthView_World_Core_CCondition_notify_one_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Core_CCondition_notify_all_void(IntPtr pNativeObject);

				public void Notify_all()
				{
					EarthView_World_Core_CCondition_notify_all_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCondition = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadCondition = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCondition = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadCondition = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadCondition = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadCondition = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCondition = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadCondition = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadCondition = LoadDll.Load("EV_Core.so");
						private static bool csbLoadCondition = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadCondition = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadCondition = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CCondition", new ConditionClassFactory());

				public Condition(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Condition FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Condition obj = baseObj as  Condition;
					if (object.Equals(obj, null))
					{
						obj = new Condition(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCondition");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ConditionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Condition emptyInstance = new Condition(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
