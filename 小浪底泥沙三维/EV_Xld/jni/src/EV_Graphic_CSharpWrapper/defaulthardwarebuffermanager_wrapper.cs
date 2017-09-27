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
			///// Specialisation of EarthView::World::Graphic::CHardwareVertexBuffer for emulation
			/// <summary>
			/// 默认硬件顶点缓存类
			/// 定义内存中缓存的相关操作
			/// </summary>
			public class DefaultHardwareVertexBuffer : EarthView.World.Graphic.HardwareVertexBuffer
			{

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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁的实现函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected new IntPtr LockImpl_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁的实现函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected override IntPtr LockImpl(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 解锁的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected new void UnlockImpl_NoVirtual()
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected override void UnlockImpl()
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(this.NativeObject);
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVertices">至高点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <returns></returns>
				public DefaultHardwareVertexBuffer(ulong vertexSize, ulong numVertices, EarthView.World.Graphic.HardwareBuffer.USAGE usage) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuevertexSize = new BasePtr(vertexSize);
					list.Add("vertexSize", valuevertexSize.PtrVal);
					BasePtr valuenumVertices = new BasePtr(numVertices);
					list.Add("numVertices", valuenumVertices.PtrVal);
					BasePtr valueusage = new BasePtr(usage);
					list.Add("usage", valueusage.PtrVal);
					Create("CDefaultHardwareVertexBufferProxy", list);
					if (!"EarthView.World.Graphic.DefaultHardwareVertexBuffer".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="mgr">缓存管理基础</param>
				/// <param name="vertexSize">顶点大小</param>
				/// <param name="numVertices">至高点编号</param>
				/// <param name="usage">缓存方式</param>
				/// <returns></returns>
				public DefaultHardwareVertexBuffer(EarthView.World.Graphic.HardwareBufferManagerBase ref_mgr, ulong vertexSize, ulong numVertices, EarthView.World.Graphic.HardwareBuffer.USAGE usage) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_mgr = new BasePtr(ref_mgr);
					list.Add("ref_mgr", valueref_mgr.PtrVal);
					BasePtr valuevertexSize = new BasePtr(vertexSize);
					list.Add("vertexSize", valuevertexSize.PtrVal);
					BasePtr valuenumVertices = new BasePtr(numVertices);
					list.Add("numVertices", valuenumVertices.PtrVal);
					BasePtr valueusage = new BasePtr(usage);
					list.Add("usage", valueusage.PtrVal);
					Create("CDefaultHardwareVertexBufferProxy", list);
					if (!"EarthView.World.Graphic.DefaultHardwareVertexBuffer".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public new void ReadData_NoVirtual(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public override void ReadData(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

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
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

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
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <returns></returns>
				public new void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pSource);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <returns></returns>
				public override void WriteData(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pSource);
					
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public new IntPtr Lock_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public override IntPtr Lock(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void Unlock_NoVirtual()
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void Unlock()
				{
					EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareVertexBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareVertexBuffer", new DefaultHardwareVertexBufferClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareVertexBufferProxy", new DefaultHardwareVertexBufferClassFactory());

				public DefaultHardwareVertexBuffer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(IntPtr pObject, unlockImpl_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lock_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(IntPtr pObject, unlock_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pObject, readData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void(IntPtr pObject, _updateFromShadow_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlockImpl_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Function;
						GC.KeepAlive(m_unlockImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(this.NativeObject, m_unlockImpl_CallBack_void);
						m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlock_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlock_void_Function;
						GC.KeepAlive(m_unlock_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(this.NativeObject, m_unlock_CallBack_void);
						m_readData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						m_copyData_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer);
						m__updateFromShadow_CallBack_void = EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Function;
						GC.KeepAlive(m__updateFromShadow_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void(this.NativeObject, m__updateFromShadow_CallBack_void);
					}
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
				public static DefaultHardwareVertexBuffer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultHardwareVertexBuffer obj = baseObj as  DefaultHardwareVertexBuffer;
					if (object.Equals(obj, null))
					{
						obj = new DefaultHardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultHardwareVertexBuffer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultHardwareVertexBufferClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultHardwareVertexBuffer emptyInstance = new DefaultHardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			//// Specialisation of EarthView::World::Graphic::CHardwareIndexBuffer for emulation
			/// <summary>
			/// 默认硬件索引缓存类
			/// 定义内存中缓存的相关操作
			/// </summary>
			public class DefaultHardwareIndexBuffer : EarthView.World.Graphic.HardwareIndexBuffer
			{

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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁的实现函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected new IntPtr LockImpl_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁的实现函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected override IntPtr LockImpl(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 解锁的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected new void UnlockImpl_NoVirtual()
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁的实现函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected override void UnlockImpl()
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(this.NativeObject);
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="idxType">索引类型</param>
				/// <param name="numIndexes">索引个数</param>
				/// <param name="usage">索引缓存用法</param>
				/// <returns></returns>
				public DefaultHardwareIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE idxType, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueidxType = new BasePtr(idxType);
					list.Add("idxType", valueidxType.PtrVal);
					BasePtr valuenumIndexes = new BasePtr(numIndexes);
					list.Add("numIndexes", valuenumIndexes.PtrVal);
					BasePtr valueusage = new BasePtr(usage);
					list.Add("usage", valueusage.PtrVal);
					Create("CDefaultHardwareIndexBufferProxy", list);
					if (!"EarthView.World.Graphic.DefaultHardwareIndexBuffer".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public new void ReadData_NoVirtual(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				/// <summary>
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				public override void ReadData(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

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
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

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
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				public new void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pSource);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				public override void WriteData(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pSource);
					
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public new IntPtr Lock_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public override IntPtr Lock(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void Unlock_NoVirtual()
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_NoVirtual(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(IntPtr pNativeObject);

				/// <summary>
				/// 解锁
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void Unlock()
				{
					EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareIndexBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareIndexBuffer", new DefaultHardwareIndexBufferClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareIndexBufferProxy", new DefaultHardwareIndexBufferClassFactory());

				public DefaultHardwareIndexBuffer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(IntPtr pObject, unlockImpl_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lock_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(IntPtr pObject, unlock_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pObject, readData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void(IntPtr pObject, _updateFromShadow_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlockImpl_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Function;
						GC.KeepAlive(m_unlockImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(this.NativeObject, m_unlockImpl_CallBack_void);
						m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlock_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlock_void_Function;
						GC.KeepAlive(m_unlock_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(this.NativeObject, m_unlock_CallBack_void);
						m_readData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						m_copyData_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer);
						m__updateFromShadow_CallBack_void = EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Function;
						GC.KeepAlive(m__updateFromShadow_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void(this.NativeObject, m__updateFromShadow_CallBack_void);
					}
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
				public static DefaultHardwareIndexBuffer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultHardwareIndexBuffer obj = baseObj as  DefaultHardwareIndexBuffer;
					if (object.Equals(obj, null))
					{
						obj = new DefaultHardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultHardwareIndexBuffer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultHardwareIndexBufferClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultHardwareIndexBuffer emptyInstance = new DefaultHardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 默认硬件缓存管理基类
			/// 定义内存中缓存的相关操作
			/// </summary>
			public class DefaultHardwareBufferManagerBase : EarthView.World.Graphic.HardwareBufferManagerBase
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public DefaultHardwareBufferManagerBase() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDefaultHardwareBufferManagerBaseProxy", null);
					if (!"EarthView.World.Graphic.DefaultHardwareBufferManagerBase".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件顶点缓冲
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">至高点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>顶点缓存的共享信息</returns>
				public new EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer_NoVirtual(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(this.NativeObject, vertexSize, numVerts, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件顶点缓冲
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">至高点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>顶点缓存的共享信息</returns>
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, vertexSize, numVerts, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件顶点缓冲
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <returns>顶点缓存的共享信息</returns>
				public new EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer_NoVirtual(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(this.NativeObject, vertexSize, numVerts, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pNativeObject, ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件顶点缓冲
				/// </summary>
				/// <param name="vertexSize">顶点尺寸大小</param>
				/// <param name="numVerts">顶点编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <returns>顶点缓存的共享信息</returns>
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, vertexSize, numVerts, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareVertexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件索引缓冲
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>索引缓存的共享信息</returns>
				public new EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(this.NativeObject, itype, numIndexes, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, byte useShadowBuffer);

				/// <summary>
				/// 创建硬件索引缓冲
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓存使用方法</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns>索引缓存的共享信息</returns>
				public override EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, itype, numIndexes, usage, Convert.ToByte(useShadowBuffer));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件索引缓冲
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓冲器使用方法</param>
				/// <returns>索引缓存的共享信息</returns>
				public new EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer_NoVirtual(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(this.NativeObject, itype, numIndexes, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pNativeObject, EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage);

				/// <summary>
				/// 创建硬件索引缓冲
				/// </summary>
				/// <param name="itype">索引类型</param>
				/// <param name="numVerts">索引编号</param>
				/// <param name="usage">缓冲器使用方法</param>
				/// <returns>索引缓存的共享信息</returns>
				public override EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, itype, numIndexes, usage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwareIndexBufferSharedPtr csObj = new EarthView.World.Graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwareIndexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "CHardwareIndexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(IntPtr pNativeObject);

				//// Create a hardware vertex buffer
				/// <summary>
				/// 创建渲染到硬件顶点缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点缓存的共享信息</returns>
				public new EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csObj = new EarthView.World.Graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderToVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pNativeObject);

				//// Create a hardware vertex buffer
				/// <summary>
				/// 创建渲染到硬件顶点缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>顶点缓存的共享信息</returns>
				public override EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer()
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderToVertexBufferSharedPtr csObj = new EarthView.World.Graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderToVertexBufferSharedPtr;
						csObj.BindNativeObject(__ptr, "RenderToVertexBufferSharedPtr");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareBufferManagerBase = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareBufferManagerBase", new DefaultHardwareBufferManagerBaseClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareBufferManagerBaseProxy", new DefaultHardwareBufferManagerBaseClassFactory());

				public DefaultHardwareBufferManagerBase(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void(IntPtr pObject, destroyAllDeclarations_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void(IntPtr pObject, destroyAllBindings_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(IntPtr pObject, createVertexDeclarationImpl_CallBack_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(IntPtr pObject, createVertexBufferBindingImpl_CallBack_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(IntPtr pObject, makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pObject, createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(IntPtr pObject, createVertexDeclaration_CallBack_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclaration_CallBack_void_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(IntPtr pObject, createVertexBufferBinding_CallBack_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr pObject, registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void(IntPtr pObject, _freeUnusedBufferCopies_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(IntPtr pObject, _releaseBufferCopies_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void(IntPtr pObject, _releaseBufferCopies_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_destroyAllDeclarations_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Function;
						GC.KeepAlive(m_destroyAllDeclarations_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void(this.NativeObject, m_destroyAllDeclarations_CallBack_void);
						m_destroyAllBindings_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Function;
						GC.KeepAlive(m_destroyAllBindings_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void(this.NativeObject, m_destroyAllBindings_CallBack_void);
						m_createVertexDeclarationImpl_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(this.NativeObject, m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Function;
						GC.KeepAlive(m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.NativeObject, m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject, m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						m_createVertexDeclaration_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclaration_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(this.NativeObject, m_createVertexDeclaration_CallBack_CVertexDeclaration);
						m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBinding_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.NativeObject, m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__freeUnusedBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Function;
						GC.KeepAlive(m__freeUnusedBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void(this.NativeObject, m__freeUnusedBufferCopies_CallBack_void);
						m__releaseBufferCopies_CallBack_void_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(this.NativeObject, m__releaseBufferCopies_CallBack_void_ev_bool);
						m__releaseBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void(this.NativeObject, m__releaseBufferCopies_CallBack_void);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
					}
				}
				protected override void DestroyAllDeclarations()
				{
					base.DestroyAllDeclarations_NoVirtual();
				}
				protected override void DestroyAllBindings()
				{
					base.DestroyAllBindings_NoVirtual();
				}
				protected override EarthView.World.Graphic.VertexDeclaration CreateVertexDeclarationImpl()
				{
					return base.CreateVertexDeclarationImpl_NoVirtual();
				}
				protected override void DestroyVertexDeclarationImpl(EarthView.World.Graphic.VertexDeclaration decl)
				{
					base.DestroyVertexDeclarationImpl_NoVirtual(decl);
				}
				protected override EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBindingImpl()
				{
					return base.CreateVertexBufferBindingImpl_NoVirtual();
				}
				protected override void DestroyVertexBufferBindingImpl(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					base.DestroyVertexBufferBindingImpl_NoVirtual(binding);
				}
				protected override EarthView.World.Graphic.HardwareVertexBufferSharedPtr MakeBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					return base.MakeBufferCopy_NoVirtual(source,usage,useShadowBuffer);
				}
				public override EarthView.World.Graphic.VertexDeclaration CreateVertexDeclaration()
				{
					return base.CreateVertexDeclaration_NoVirtual();
				}
				public override void DestroyVertexDeclaration(EarthView.World.Graphic.VertexDeclaration decl)
				{
					base.DestroyVertexDeclaration_NoVirtual(decl);
				}
				public override EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBinding()
				{
					return base.CreateVertexBufferBinding_NoVirtual();
				}
				public override void DestroyVertexBufferBinding(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					base.DestroyVertexBufferBinding_NoVirtual(binding);
				}
				public override void RegisterVertexBufferSourceAndCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareVertexBufferSharedPtr copy)
				{
					base.RegisterVertexBufferSourceAndCopy_NoVirtual(sourceBuffer,copy);
				}
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee, bool copyData)
				{
					return base.AllocateVertexBufferCopy_NoVirtual(sourceBuffer,licenseType,licensee,copyData);
				}
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee)
				{
					return base.AllocateVertexBufferCopy_NoVirtual(sourceBuffer,licenseType,licensee);
				}
				public override void ReleaseVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					base.ReleaseVertexBufferCopy_NoVirtual(bufferCopy);
				}
				public override void TouchVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					base.TouchVertexBufferCopy_NoVirtual(bufferCopy);
				}
				public override void _freeUnusedBufferCopies()
				{
					base._freeUnusedBufferCopies_NoVirtual();
				}
				public override void _releaseBufferCopies(bool forceFreeUnused)
				{
					base._releaseBufferCopies_NoVirtual(forceFreeUnused);
				}
				public override void _releaseBufferCopies()
				{
					base._releaseBufferCopies_NoVirtual();
				}
				public override void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer)
				{
					base._forceReleaseBufferCopies_NoVirtual(sourceBuffer);
				}
				public override void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBuffer sourceBuffer)
				{
					base._forceReleaseBufferCopies_NoVirtual(sourceBuffer);
				}
				public static DefaultHardwareBufferManagerBase FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultHardwareBufferManagerBase obj = baseObj as  DefaultHardwareBufferManagerBase;
					if (object.Equals(obj, null))
					{
						obj = new DefaultHardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultHardwareBufferManagerBase");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultHardwareBufferManagerBaseClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultHardwareBufferManagerBase emptyInstance = new DefaultHardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DefaultHardwareBufferManager : EarthView.World.Graphic.HardwareBufferManager
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public DefaultHardwareBufferManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDefaultHardwareBufferManagerProxy", null);
					if (!"EarthView.World.Graphic.DefaultHardwareBufferManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManager_getSingleton_CDefaultHardwareBufferManager();

				/// <summary>
				/// 单例（引用）
				/// </summary>
				/// <param =""></param>
				/// <returns>硬件缓存管理信息</returns>
				public static EarthView.World.Graphic.DefaultHardwareBufferManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManager_getSingleton_CDefaultHardwareBufferManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.DefaultHardwareBufferManager csObj = new EarthView.World.Graphic.DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDefaultHardwareBufferManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.DefaultHardwareBufferManager;
						csObj.BindNativeObject(__ptr, "CDefaultHardwareBufferManager");
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
				private static extern IntPtr EarthView_World_Graphic_CDefaultHardwareBufferManager_getSingletonPtr_CDefaultHardwareBufferManager();

				/// <summary>
				/// 单例（指针）
				/// </summary>
				/// <param =""></param>
				/// <returns>硬件缓存管理信息</returns>
				public static EarthView.World.Graphic.DefaultHardwareBufferManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CDefaultHardwareBufferManager_getSingletonPtr_CDefaultHardwareBufferManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.DefaultHardwareBufferManager csObj = new EarthView.World.Graphic.DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDefaultHardwareBufferManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.DefaultHardwareBufferManager;
						csObj.BindNativeObject(__ptr, "CDefaultHardwareBufferManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultHardwareBufferManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareBufferManager", new DefaultHardwareBufferManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultHardwareBufferManagerProxy", new DefaultHardwareBufferManagerClassFactory());

				public DefaultHardwareBufferManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void(IntPtr pObject, destroyAllDeclarations_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void(IntPtr pObject, destroyAllBindings_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(IntPtr pObject, createVertexDeclarationImpl_CallBack_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(IntPtr pObject, createVertexBufferBindingImpl_CallBack_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(IntPtr pObject, makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(IntPtr pObject, createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(IntPtr pObject, createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(IntPtr pObject, createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(IntPtr pObject, createVertexDeclaration_CallBack_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(IntPtr pObject, destroyVertexDeclaration_CallBack_void_CVertexDeclaration pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(IntPtr pObject, createVertexBufferBinding_CallBack_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(IntPtr pObject, destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(IntPtr pObject, registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(IntPtr pObject, allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void(IntPtr pObject, _freeUnusedBufferCopies_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool(IntPtr pObject, _releaseBufferCopies_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void(IntPtr pObject, _releaseBufferCopies_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(IntPtr pObject, _forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_destroyAllDeclarations_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Function;
						GC.KeepAlive(m_destroyAllDeclarations_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void(this.NativeObject, m_destroyAllDeclarations_CallBack_void);
						m_destroyAllBindings_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Function;
						GC.KeepAlive(m_destroyAllBindings_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void(this.NativeObject, m_destroyAllBindings_CallBack_void);
						m_createVertexDeclarationImpl_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(this.NativeObject, m_createVertexDeclarationImpl_CallBack_CVertexDeclaration);
						m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclarationImpl_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBindingImpl_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBindingImpl_CallBack_void_CVertexBufferBinding);
						m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Function;
						GC.KeepAlive(m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.NativeObject, m_makeBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool);
						m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(this.NativeObject, m_createVertexBuffer_CallBack_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool);
						m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage = EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Function;
						GC.KeepAlive(m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(this.NativeObject, m_createIndexBuffer_CallBack_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage);
						m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(this.NativeObject, m_createRenderToVertexBuffer_CallBack_RenderToVertexBufferSharedPtr);
						m_createVertexDeclaration_CallBack_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Function;
						GC.KeepAlive(m_createVertexDeclaration_CallBack_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(this.NativeObject, m_createVertexDeclaration_CallBack_CVertexDeclaration);
						m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Function;
						GC.KeepAlive(m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(this.NativeObject, m_destroyVertexDeclaration_CallBack_void_CVertexDeclaration);
						m_createVertexBufferBinding_CallBack_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Function;
						GC.KeepAlive(m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(this.NativeObject, m_createVertexBufferBinding_CallBack_CVertexBufferBinding);
						m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding = EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Function;
						GC.KeepAlive(m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(this.NativeObject, m_destroyVertexBufferBinding_CallBack_void_CVertexBufferBinding);
						m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.NativeObject, m_registerVertexBufferSourceAndCopy_CallBack_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool);
						m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee = EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Function;
						GC.KeepAlive(m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.NativeObject, m_allocateVertexBufferCopy_CallBack_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee);
						m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_releaseVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m_touchVertexBufferCopy_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__freeUnusedBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Function;
						GC.KeepAlive(m__freeUnusedBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void(this.NativeObject, m__freeUnusedBufferCopies_CallBack_void);
						m__releaseBufferCopies_CallBack_void_ev_bool = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool(this.NativeObject, m__releaseBufferCopies_CallBack_void_ev_bool);
						m__releaseBufferCopies_CallBack_void = EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Function;
						GC.KeepAlive(m__releaseBufferCopies_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void(this.NativeObject, m__releaseBufferCopies_CallBack_void);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBufferSharedPtr);
						m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer = EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Function;
						GC.KeepAlive(m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(this.NativeObject, m__forceReleaseBufferCopies_CallBack_void_CHardwareVertexBuffer);
					}
				}
				protected override void DestroyAllDeclarations()
				{
					base.DestroyAllDeclarations_NoVirtual();
				}
				protected override void DestroyAllBindings()
				{
					base.DestroyAllBindings_NoVirtual();
				}
				protected override EarthView.World.Graphic.VertexDeclaration CreateVertexDeclarationImpl()
				{
					return base.CreateVertexDeclarationImpl_NoVirtual();
				}
				protected override void DestroyVertexDeclarationImpl(EarthView.World.Graphic.VertexDeclaration decl)
				{
					base.DestroyVertexDeclarationImpl_NoVirtual(decl);
				}
				protected override EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBindingImpl()
				{
					return base.CreateVertexBufferBindingImpl_NoVirtual();
				}
				protected override void DestroyVertexBufferBindingImpl(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					base.DestroyVertexBufferBindingImpl_NoVirtual(binding);
				}
				protected override EarthView.World.Graphic.HardwareVertexBufferSharedPtr MakeBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr source, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					return base.MakeBufferCopy_NoVirtual(source,usage,useShadowBuffer);
				}
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					return base.CreateVertexBuffer_NoVirtual(vertexSize,numVerts,usage,useShadowBuffer);
				}
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr CreateVertexBuffer(ulong vertexSize, ulong numVerts, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					return base.CreateVertexBuffer_NoVirtual(vertexSize,numVerts,usage);
				}
				public override EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useShadowBuffer)
				{
					return base.CreateIndexBuffer_NoVirtual(itype,numIndexes,usage,useShadowBuffer);
				}
				public override EarthView.World.Graphic.HardwareIndexBufferSharedPtr CreateIndexBuffer(EarthView.World.Graphic.HardwareIndexBuffer.INDEXTYPE itype, ulong numIndexes, EarthView.World.Graphic.HardwareBuffer.USAGE usage)
				{
					return base.CreateIndexBuffer_NoVirtual(itype,numIndexes,usage);
				}
				public override EarthView.World.Graphic.RenderToVertexBufferSharedPtr CreateRenderToVertexBuffer()
				{
					return base.CreateRenderToVertexBuffer_NoVirtual();
				}
				public override EarthView.World.Graphic.VertexDeclaration CreateVertexDeclaration()
				{
					return base.CreateVertexDeclaration_NoVirtual();
				}
				public override void DestroyVertexDeclaration(EarthView.World.Graphic.VertexDeclaration decl)
				{
					base.DestroyVertexDeclaration_NoVirtual(decl);
				}
				public override EarthView.World.Graphic.VertexBufferBinding CreateVertexBufferBinding()
				{
					return base.CreateVertexBufferBinding_NoVirtual();
				}
				public override void DestroyVertexBufferBinding(EarthView.World.Graphic.VertexBufferBinding binding)
				{
					base.DestroyVertexBufferBinding_NoVirtual(binding);
				}
				public override void RegisterVertexBufferSourceAndCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareVertexBufferSharedPtr copy)
				{
					base.RegisterVertexBufferSourceAndCopy_NoVirtual(sourceBuffer,copy);
				}
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee, bool copyData)
				{
					return base.AllocateVertexBufferCopy_NoVirtual(sourceBuffer,licenseType,licensee,copyData);
				}
				public override EarthView.World.Graphic.HardwareVertexBufferSharedPtr AllocateVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer, EarthView.World.Graphic.HardwareBufferManagerBase.BUFFERLICENSETYPE licenseType, EarthView.World.Graphic.HardwareBufferLicensee licensee)
				{
					return base.AllocateVertexBufferCopy_NoVirtual(sourceBuffer,licenseType,licensee);
				}
				public override void ReleaseVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					base.ReleaseVertexBufferCopy_NoVirtual(bufferCopy);
				}
				public override void TouchVertexBufferCopy(EarthView.World.Graphic.HardwareVertexBufferSharedPtr bufferCopy)
				{
					base.TouchVertexBufferCopy_NoVirtual(bufferCopy);
				}
				public override void _freeUnusedBufferCopies()
				{
					base._freeUnusedBufferCopies_NoVirtual();
				}
				public override void _releaseBufferCopies(bool forceFreeUnused)
				{
					base._releaseBufferCopies_NoVirtual(forceFreeUnused);
				}
				public override void _releaseBufferCopies()
				{
					base._releaseBufferCopies_NoVirtual();
				}
				public override void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBufferSharedPtr sourceBuffer)
				{
					base._forceReleaseBufferCopies_NoVirtual(sourceBuffer);
				}
				public override void _forceReleaseBufferCopies(EarthView.World.Graphic.HardwareVertexBuffer sourceBuffer)
				{
					base._forceReleaseBufferCopies_NoVirtual(sourceBuffer);
				}
				public static DefaultHardwareBufferManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultHardwareBufferManager obj = baseObj as  DefaultHardwareBufferManager;
					if (object.Equals(obj, null))
					{
						obj = new DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultHardwareBufferManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultHardwareBufferManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultHardwareBufferManager emptyInstance = new DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
