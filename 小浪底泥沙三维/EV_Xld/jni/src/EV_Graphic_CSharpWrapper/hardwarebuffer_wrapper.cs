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
			/// <summary>
			/// 硬件缓存类
			/// 定义内存中缓存的相关操作
			/// </summary>
			public class HardwareBuffer : EarthView.World.Core.AllocatedObject
			{
				public enum USAGE
				{
								HBU_STATIC = 1,
								HBU_DYNAMIC = 2,
								HBU_WRITE_ONLY = 4,
								HBU_DISCARDABLE = 8,
								HBU_STATIC_WRITE_ONLY = 5,
								HBU_DYNAMIC_WRITE_ONLY = 6,
								HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE = 14
				
				}

				public enum LOCKOPTIONS
				{
								HBL_NORMAL,
								HBL_DISCARD,
								HBL_READ_ONLY,
								HBL_NO_OVERWRITE
				
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				protected lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions;

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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// Internal implementation of lock()
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected virtual IntPtr LockImpl_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
					return __ptr;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Function(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr csret=LockImpl(offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// Internal implementation of lock()
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected virtual IntPtr LockImpl(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
					return __ptr;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unlockImpl_CallBack_void();

				protected unlockImpl_CallBack_void m_unlockImpl_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_NoVirtual(IntPtr pNativeObject);

				//// Internal implementation of unlock()
				/// <summary>
				/// 解锁Impl函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void UnlockImpl_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Function()
				{
					UnlockImpl();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(IntPtr pNativeObject);

				//// Internal implementation of unlock()
				/// <summary>
				/// 解锁Impl函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void UnlockImpl()
				{
					EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(this.NativeObject);
					
				}

				//// Constructor, to be called by CHardwareBufferManager only
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="usage">缓存方法</param>
				/// <param name="systemMemory">是否使用系统内存</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns></returns>
				public HardwareBuffer(EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool systemMemory, bool useShadowBuffer) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueusage = new BasePtr(usage);
					list.Add("usage", valueusage.PtrVal);
					BasePtr valuesystemMemory = new BasePtr(systemMemory);
					list.Add("systemMemory", valuesystemMemory.PtrVal);
					BasePtr valueuseShadowBuffer = new BasePtr(useShadowBuffer);
					list.Add("useShadowBuffer", valueuseShadowBuffer.PtrVal);
					Create("CHardwareBufferProxy", list);
					if (!"EarthView.World.Graphic.HardwareBuffer".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr lock_CallBack_void_ev_size_t_ev_size_t_LockOptions(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				protected lock_CallBack_void_ev_size_t_ev_size_t_LockOptions m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions;

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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 写锁
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public virtual IntPtr Lock_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
					return __ptr;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Function(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr csret=Lock(offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 写锁
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public virtual IntPtr Lock(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
					return __ptr;
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareBuffer_lock_void_LockOptions(IntPtr pNativeObject, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 写锁
				/// </summary>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public IntPtr Lock(EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareBuffer_lock_void_LockOptions(this.NativeObject, options);
					
					return __ptr;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unlock_CallBack_void();

				protected unlock_CallBack_void m_unlock_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_unlock_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void Unlock_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBuffer_unlock_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_unlock_void_Function()
				{
					Unlock();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_unlock_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void Unlock()
				{
					EarthView_World_Graphic_CHardwareBuffer_unlock_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void readData_CallBack_void_ev_size_t_ev_size_t_void(ulong offset, ulong length, IntPtr pDest);

				protected readData_CallBack_void_ev_size_t_ev_size_t_void m_readData_CallBack_void_ev_size_t_ev_size_t_void;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public virtual void ReadData_NoVirtual(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pDest);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Function(ulong offset, ulong length, IntPtr pDest)
				{
					ReadData(offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public virtual void ReadData(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pDest);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool(ulong offset, ulong length, IntPtr pSource, bool discardWholeBuffer);

				protected writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				public virtual void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource, bool discardWholeBuffer)
				{
					EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Function(ulong offset, ulong length, IntPtr pSource, bool discardWholeBuffer)
				{
					WriteData(offset, length, pSource, discardWholeBuffer);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				public virtual void WriteData(ulong offset, ulong length, IntPtr pSource, bool discardWholeBuffer)
				{
					EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void writeData_CallBack_void_ev_size_t_ev_size_t_void(ulong offset, ulong length, IntPtr pSource);

				protected writeData_CallBack_void_ev_size_t_ev_size_t_void m_writeData_CallBack_void_ev_size_t_ev_size_t_void;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				public virtual void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pSource);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Function(ulong offset, ulong length, IntPtr pSource)
				{
					WriteData(offset, length, pSource);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				public virtual void WriteData(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pSource);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, bool discardWholeBuffer);

				protected copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, byte discardWholeBuffer);

				/// <summary>
				/// 复制数据
				/// </summary>
				/// <param name="srcBuffer">资源缓存</param>
				/// <param name="srcOffset">资源偏移量</param>
				/// <param name="dstOffset">指令操作缓存</param>
				/// <param name="length">长度</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				public virtual void CopyData_NoVirtual(ref EarthView.World.Graphic.HardwareBuffer srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, bool discardWholeBuffer)
				{
					EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(this.NativeObject, object.Equals(srcBuffer, null) ? IntPtr.Zero : srcBuffer.NativeObject, srcOffset, dstOffset, length, Convert.ToByte(discardWholeBuffer));
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function(IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, bool discardWholeBuffer)
				{
					EarthView.World.Graphic.HardwareBuffer csobj_srcBuffer = new EarthView.World.Graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_srcBuffer.BindNativeObject(srcBuffer,"CHardwareBuffer");
					csobj_srcBuffer.Delegate = true;
					IClassFactory csobj_srcBufferClassFactory = GlobalClassFactoryMap.Get(csobj_srcBuffer.GetCppInstanceTypeName());
					if (csobj_srcBufferClassFactory != null)
					{
						csobj_srcBuffer.Delegate = true;
						csobj_srcBuffer = csobj_srcBufferClassFactory.Create() as EarthView.World.Graphic.HardwareBuffer;
						csobj_srcBuffer.BindNativeObject(srcBuffer, "CHardwareBuffer");
						csobj_srcBuffer.Delegate = true;
					}
					
					CopyData(ref csobj_srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pNativeObject, IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, byte discardWholeBuffer);

				/// <summary>
				/// 复制数据
				/// </summary>
				/// <param name="srcBuffer">资源缓存</param>
				/// <param name="srcOffset">资源偏移量</param>
				/// <param name="dstOffset">指令操作缓存</param>
				/// <param name="length">长度</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				public virtual void CopyData(ref EarthView.World.Graphic.HardwareBuffer srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, bool discardWholeBuffer)
				{
					EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, object.Equals(srcBuffer, null) ? IntPtr.Zero : srcBuffer.NativeObject, srcOffset, dstOffset, length, Convert.ToByte(discardWholeBuffer));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length);

				protected copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length);

				/// <summary>
				/// 复制数据
				/// </summary>
				/// <param name="srcBuffer">资源缓存</param>
				/// <param name="srcOffset">资源偏移量</param>
				/// <param name="dstOffset">指令操作缓存</param>
				/// <param name="length">长度</param>
				/// <returns></returns>
				public virtual void CopyData_NoVirtual(ref EarthView.World.Graphic.HardwareBuffer srcBuffer, ulong srcOffset, ulong dstOffset, ulong length)
				{
					EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_NoVirtual(this.NativeObject, object.Equals(srcBuffer, null) ? IntPtr.Zero : srcBuffer.NativeObject, srcOffset, dstOffset, length);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Function(IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length)
				{
					EarthView.World.Graphic.HardwareBuffer csobj_srcBuffer = new EarthView.World.Graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_srcBuffer.BindNativeObject(srcBuffer,"CHardwareBuffer");
					csobj_srcBuffer.Delegate = true;
					IClassFactory csobj_srcBufferClassFactory = GlobalClassFactoryMap.Get(csobj_srcBuffer.GetCppInstanceTypeName());
					if (csobj_srcBufferClassFactory != null)
					{
						csobj_srcBuffer.Delegate = true;
						csobj_srcBuffer = csobj_srcBufferClassFactory.Create() as EarthView.World.Graphic.HardwareBuffer;
						csobj_srcBuffer.BindNativeObject(srcBuffer, "CHardwareBuffer");
						csobj_srcBuffer.Delegate = true;
					}
					
					CopyData(ref csobj_srcBuffer, srcOffset, dstOffset, length);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr pNativeObject, IntPtr srcBuffer, ulong srcOffset, ulong dstOffset, ulong length);

				/// <summary>
				/// 复制数据
				/// </summary>
				/// <param name="srcBuffer">资源缓存</param>
				/// <param name="srcOffset">资源偏移量</param>
				/// <param name="dstOffset">指令操作缓存</param>
				/// <param name="length">长度</param>
				/// <returns></returns>
				public virtual void CopyData(ref EarthView.World.Graphic.HardwareBuffer srcBuffer, ulong srcOffset, ulong dstOffset, ulong length)
				{
					EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, object.Equals(srcBuffer, null) ? IntPtr.Zero : srcBuffer.NativeObject, srcOffset, dstOffset, length);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void copyData_CallBack_void_CHardwareBuffer(IntPtr srcBuffer);

				protected copyData_CallBack_void_CHardwareBuffer m_copyData_CallBack_void_CHardwareBuffer;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_NoVirtual(IntPtr pNativeObject, IntPtr srcBuffer);

				/// <summary>
				/// 复制数据
				/// </summary>
				/// <param name="srcBuffer">资源缓存</param>
				/// <returns></returns>
				public virtual void CopyData_NoVirtual(ref EarthView.World.Graphic.HardwareBuffer srcBuffer)
				{
					EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_NoVirtual(this.NativeObject, object.Equals(srcBuffer, null) ? IntPtr.Zero : srcBuffer.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Function(IntPtr srcBuffer)
				{
					EarthView.World.Graphic.HardwareBuffer csobj_srcBuffer = new EarthView.World.Graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_srcBuffer.BindNativeObject(srcBuffer,"CHardwareBuffer");
					csobj_srcBuffer.Delegate = true;
					IClassFactory csobj_srcBufferClassFactory = GlobalClassFactoryMap.Get(csobj_srcBuffer.GetCppInstanceTypeName());
					if (csobj_srcBufferClassFactory != null)
					{
						csobj_srcBuffer.Delegate = true;
						csobj_srcBuffer = csobj_srcBufferClassFactory.Create() as EarthView.World.Graphic.HardwareBuffer;
						csobj_srcBuffer.BindNativeObject(srcBuffer, "CHardwareBuffer");
						csobj_srcBuffer.Delegate = true;
					}
					
					CopyData(ref csobj_srcBuffer);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(IntPtr pNativeObject, IntPtr srcBuffer);

				/// <summary>
				/// 复制数据
				/// </summary>
				/// <param name="srcBuffer">资源缓存</param>
				/// <returns></returns>
				public virtual void CopyData(ref EarthView.World.Graphic.HardwareBuffer srcBuffer)
				{
					EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(this.NativeObject, object.Equals(srcBuffer, null) ? IntPtr.Zero : srcBuffer.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _updateFromShadow_CallBack_void();

				protected _updateFromShadow_CallBack_void m__updateFromShadow_CallBack_void;

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
				private static extern void EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_NoVirtual(IntPtr pNativeObject);

				//// Updates the real buffer from the shadow buffer, if required
				/// <summary>
				/// 从阴影缓存中更新
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _updateFromShadow_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Function()
				{
					_updateFromShadow();
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(IntPtr pNativeObject);

				//// Updates the real buffer from the shadow buffer, if required
				/// <summary>
				/// 从阴影缓存中更新
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void _updateFromShadow()
				{
					EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CHardwareBuffer_getSizeInBytes_ev_size_t(IntPtr pNativeObject);

				//// Returns the size of this buffer in bytes
				/// <summary>
				/// 获得缓存的字节大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>字节大小</returns>
				public ulong GetSizeInBytes()
				{
					ulong ret=EarthView_World_Graphic_CHardwareBuffer_getSizeInBytes_ev_size_t(this.NativeObject);
					
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
				private static extern int EarthView_World_Graphic_CHardwareBuffer_getUsage_Usage(IntPtr pNativeObject);

				//// Returns the EarthView::World::Graphic::CHardwareBuffer::Usage flags with which this buffer was created
				/// <summary>
				/// 获得缓存的方法
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Graphic::CHardwareBuffer::Usage方法</returns>
				public EarthView.World.Graphic.HardwareBuffer.USAGE GetUsage()
				{
					int ret=EarthView_World_Graphic_CHardwareBuffer_getUsage_Usage(this.NativeObject);
					
					return (EarthView.World.Graphic.HardwareBuffer.USAGE)ret;
					
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
				private static extern byte EarthView_World_Graphic_CHardwareBuffer_isSystemMemory_ev_bool(IntPtr pNativeObject);

				//// Returns whether this buffer is held in system memory
				/// <summary>
				/// 是否是系统内存
				/// </summary>
				/// <param name=""></param>
				/// <returns>是系统内存返回true，否则返回false</returns>
				public bool IsSystemMemory()
				{
					byte ret=EarthView_World_Graphic_CHardwareBuffer_isSystemMemory_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CHardwareBuffer_hasShadowBuffer_ev_bool(IntPtr pNativeObject);

				//// Returns whether this buffer has a system memory shadow for quicker reading
				/// <summary>
				/// 是否有阴影缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>有阴影缓存返回true，否则返回false</returns>
				public bool HasShadowBuffer()
				{
					byte ret=EarthView_World_Graphic_CHardwareBuffer_hasShadowBuffer_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CHardwareBuffer_isLocked_ev_bool(IntPtr pNativeObject);

				//// Returns whether or not this buffer is currently locked.
				/// <summary>
				/// 是否上锁
				/// </summary>
				/// <param name=""></param>
				/// <returns>上锁返回true，否则返回false</returns>
				public bool IsLocked()
				{
					byte ret=EarthView_World_Graphic_CHardwareBuffer_isLocked_ev_bool(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareBuffer_suppressHardwareUpdate_void_ev_bool(IntPtr pNativeObject, byte suppress);

				//// CPass true to suppress hardware upload of shadow buffer changes
				/// <summary>
				/// 禁止硬件更新
				/// </summary>
				/// <param name="suppress">是否禁止</param>
				/// <returns></returns>
				public void SuppressHardwareUpdate(bool suppress)
				{
					EarthView_World_Graphic_CHardwareBuffer_suppressHardwareUpdate_void_ev_bool(this.NativeObject, Convert.ToByte(suppress));
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwareBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwareBuffer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwareBuffer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwareBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwareBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwareBuffer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwareBuffer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwareBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBuffer", new HardwareBufferClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareBufferProxy", new HardwareBufferClassFactory());

				public HardwareBuffer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(IntPtr pObject, unlockImpl_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lock_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_unlock_void(IntPtr pObject, unlock_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pObject, readData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(IntPtr pObject, _updateFromShadow_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlockImpl_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Function;
						GC.KeepAlive(m_unlockImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(this.NativeObject, m_unlockImpl_CallBack_void);
						m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlock_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlock_void_Function;
						GC.KeepAlive(m_unlock_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_unlock_void(this.NativeObject, m_unlock_CallBack_void);
						m_readData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						m_copyData_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer);
						m__updateFromShadow_CallBack_void = EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Function;
						GC.KeepAlive(m__updateFromShadow_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(this.NativeObject, m__updateFromShadow_CallBack_void);
					}
				}
				public static HardwareBuffer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwareBuffer obj = baseObj as  HardwareBuffer;
					if (object.Equals(obj, null))
					{
						obj = new HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwareBuffer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwareBufferClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwareBuffer emptyInstance = new HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
