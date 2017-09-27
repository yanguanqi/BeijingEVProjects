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
			/// 硬件索引缓存类
			/// 定义内存中索引缓存的相关操作
			/// </summary>
			public class HardwareIndexBuffer : EarthView.World.Graphic.HardwareBuffer
			{
				public enum INDEXTYPE
				{
								IT_16BIT,
								IT_32BIT
				
				}

				//// Should be called by CHardwareBufferManager
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="mgr">缓存管理基类的指针</param>
				/// <param name="idxType">索引类型</param>
				/// <param name="numIndexes">索引编号</param>
				/// <param name="usage">缓存方法</param>
				/// <param name="systemMemory">是否使用系统内存</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns></returns>
				public HardwareIndexBuffer(EarthView.World.Graphic.HardwareBufferManagerBase ref_mgr, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE idxType, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useSystemMemory, bool useShadowBuffer) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_mgr = new BasePtr(ref_mgr);
					list.Add("ref_mgr", valueref_mgr.PtrVal);
					BasePtr valueidxType = new BasePtr(idxType);
					list.Add("idxType", valueidxType.PtrVal);
					BasePtr valuenumIndexes = new BasePtr(numIndexes);
					list.Add("numIndexes", valuenumIndexes.PtrVal);
					BasePtr valueusage = new BasePtr(usage);
					list.Add("usage", valueusage.PtrVal);
					BasePtr valueuseSystemMemory = new BasePtr(useSystemMemory);
					list.Add("useSystemMemory", valueuseSystemMemory.PtrVal);
					BasePtr valueuseShadowBuffer = new BasePtr(useShadowBuffer);
					list.Add("useShadowBuffer", valueuseShadowBuffer.PtrVal);
					Create("CHardwareIndexBufferProxy", list);
					if (!"EarthView.World.Graphic.HardwareIndexBuffer".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// Internal implementation of lock()
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected new IntPtr LockImpl_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// Internal implementation of lock()
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected override IntPtr LockImpl(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_NoVirtual(IntPtr pNativeObject);

				//// Internal implementation of unlock()
				/// <summary>
				/// 解锁Impl函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected new void UnlockImpl_NoVirtual()
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(IntPtr pNativeObject);

				//// Internal implementation of unlock()
				/// <summary>
				/// 解锁Impl函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected override void UnlockImpl()
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public new void ReadData_NoVirtual(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public override void ReadData(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				public new void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource, bool discardWholeBuffer)
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				public override void WriteData(ulong offset, ulong length, IntPtr pSource, bool discardWholeBuffer)
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				public new void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pSource);
					
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
				private static extern void EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				public override void WriteData(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pSource);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareIndexBuffer_getManager_CHardwareBufferManagerBase(IntPtr pNativeObject);

				//// Return the manager of this buffer, if any
				/// <summary>
				/// 获得硬件缓存管理方式
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存管理方式</returns>
				public EarthView.World.Graphic.HardwareBufferManagerBase GetManager()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareIndexBuffer_getManager_CHardwareBufferManagerBase(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareBufferManagerBase csObj = new EarthView.World.Graphic.HardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareBufferManagerBase");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareBufferManagerBase;
						csObj.BindNativeObject(__ptr, "CHardwareBufferManagerBase");
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
				private static extern int EarthView_World_Graphic_CHardwareIndexBuffer_getType_IndexType(IntPtr pNativeObject);

				//// Get the type of indexes used in this buffer
				/// <summary>
				/// 获得索引类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>索引类型</returns>
				public EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE GetType()
				{
					int ret=EarthView_World_Graphic_CHardwareIndexBuffer_getType_IndexType(this.NativeObject);
					
					return (EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE)ret;
					
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
				private static extern ulong EarthView_World_Graphic_CHardwareIndexBuffer_getNumIndexes_ev_size_t(IntPtr pNativeObject);

				//// Get the number of indexes in this buffer
				/// <summary>
				/// 获得索引编号
				/// </summary>
				/// <param name=""></param>
				/// <returns>索引编号</returns>
				public ulong GetNumIndexes()
				{
					ulong ret=EarthView_World_Graphic_CHardwareIndexBuffer_getNumIndexes_ev_size_t(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CHardwareIndexBuffer_getIndexSize_ev_size_t(IntPtr pNativeObject);

				//// Get the size in bytes of each index
				/// <summary>
				/// 获得每一个索引字节大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>索引字节大小</returns>
				public ulong GetIndexSize()
				{
					ulong ret=EarthView_World_Graphic_CHardwareIndexBuffer_getIndexSize_ev_size_t(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareIndexBuffer", new HardwareIndexBufferClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareIndexBufferProxy", new HardwareIndexBufferClassFactory());

				public HardwareIndexBuffer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(IntPtr pObject, unlockImpl_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lock_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void(IntPtr pObject, unlock_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pObject, readData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void(IntPtr pObject, _updateFromShadow_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlockImpl_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Function;
						GC.KeepAlive(m_unlockImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(this.NativeObject, m_unlockImpl_CallBack_void);
						m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlock_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlock_void_Function;
						GC.KeepAlive(m_unlock_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void(this.NativeObject, m_unlock_CallBack_void);
						m_readData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						m_copyData_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer);
						m__updateFromShadow_CallBack_void = EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Function;
						GC.KeepAlive(m__updateFromShadow_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void(this.NativeObject, m__updateFromShadow_CallBack_void);
					}
				}
				public override IntPtr Lock(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					return base.Lock_NoVirtual(offset,length,options);
				}
				public override void Unlock()
				{
					base.Unlock_NoVirtual();
				}
				public override void CopyData(ref EarthView.World.Graphic.HardwareBuffer srcBuffer, ulong srcOffset, ulong dstOffset, ulong length, bool discardWholeBuffer)
				{
					base.CopyData_NoVirtual(ref srcBuffer,srcOffset,dstOffset,length,discardWholeBuffer);
				}
				public override void CopyData(ref EarthView.World.Graphic.HardwareBuffer srcBuffer, ulong srcOffset, ulong dstOffset, ulong length)
				{
					base.CopyData_NoVirtual(ref srcBuffer,srcOffset,dstOffset,length);
				}
				public override void CopyData(ref EarthView.World.Graphic.HardwareBuffer srcBuffer)
				{
					base.CopyData_NoVirtual(ref srcBuffer);
				}
				public override void _updateFromShadow()
				{
					base._updateFromShadow_NoVirtual();
				}
				public static HardwareIndexBuffer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwareIndexBuffer obj = baseObj as  HardwareIndexBuffer;
					if (object.Equals(obj, null))
					{
						obj = new HardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwareIndexBuffer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwareIndexBufferClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwareIndexBuffer emptyInstance = new HardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class HardwareIndexBufferSharedPtr : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public HardwareIndexBufferSharedPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CHardwareIndexBufferSharedPtr",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="buf">硬件索引缓存</param>
				/// <returns></returns>
				public HardwareIndexBufferSharedPtr(EarthView.World.Graphic.HardwareIndexBuffer ref_buf) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_buf = new BasePtr(ref_buf);
					list.Add("ref_buf", valueref_buf.PtrVal);
					if(!object.Equals(ref_buf, null))
					{
					ref_buf.NoFree = true;
					}
					Create("CHardwareIndexBufferSharedPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="buf">硬件索引缓存</param>
				/// <param name="inFreeMethod">共享方法</param>
				/// <returns></returns>
				public HardwareIndexBufferSharedPtr(EarthView.World.Graphic.HardwareIndexBuffer ref_buf, EarthView.World.Core.SHAREDPTRFREEMETHOD inFreeMethod) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_buf = new BasePtr(ref_buf);
					list.Add("ref_buf", valueref_buf.PtrVal);
					if(!object.Equals(ref_buf, null))
					{
					ref_buf.NoFree = true;
					}
					BasePtr valueinFreeMethod = new BasePtr(inFreeMethod);
					list.Add("inFreeMethod", valueinFreeMethod.PtrVal);
					Create("CHardwareIndexBufferSharedPtr", list);
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
				private static extern IntPtr EarthView_World_Graphic_CHardwareIndexBufferSharedPtr_get_CHardwareIndexBuffer(IntPtr pNativeObject);

				/// <summary>
				/// 获取索引缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>索引缓存</returns>
				public EarthView.World.Graphic.HardwareIndexBuffer Get()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwareIndexBufferSharedPtr_get_CHardwareIndexBuffer(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBuffer csObj = new EarthView.World.Graphic.HardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBuffer");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBuffer;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBuffer");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwareIndexBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwareIndexBufferSharedPtr", new HardwareIndexBufferSharedPtrClassFactory());

				public HardwareIndexBufferSharedPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static HardwareIndexBufferSharedPtr FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwareIndexBufferSharedPtr obj = baseObj as  HardwareIndexBufferSharedPtr;
					if (object.Equals(obj, null))
					{
						obj = new HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwareIndexBufferSharedPtr");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwareIndexBufferSharedPtrClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwareIndexBufferSharedPtr emptyInstance = new HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
