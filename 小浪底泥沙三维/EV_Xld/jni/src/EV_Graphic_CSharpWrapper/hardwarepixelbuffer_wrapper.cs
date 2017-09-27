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
			/// 硬件像素缓存类
			/// 定义内存中像素缓存的相关操作
			/// </summary>
			public class HardwarePixelBuffer : EarthView.World.Graphic.HardwareBuffer
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr lockImpl_CallBack_CPixelBox_Box_LockOptions(IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				protected lockImpl_CallBack_CPixelBox_Box_LockOptions m_lockImpl_CallBack_CPixelBox_Box_LockOptions;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_NoVirtual(IntPtr pNativeObject, IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="lockBox">像素</param>
				/// <param name="options">选项</param>
				/// <returns>像素盒</returns>
				protected virtual EarthView.World.Graphic.PixelBox LockImpl_NoVirtual(EarthView.World.Graphic.Box lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_NoVirtual(this.NativeObject, object.Equals(lockBox, null) ? IntPtr.Zero : lockBox.NativeObject, options);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PixelBox csObj = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPixelBox");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csObj.BindNativeObject(__ptr, "CPixelBox");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Function(IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					EarthView.World.Graphic.Box csobj_lockBox = new EarthView.World.Graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_lockBox.BindNativeObject(lockBox,"Box");
					IClassFactory csobj_lockBoxClassFactory = GlobalClassFactoryMap.Get(csobj_lockBox.GetCppInstanceTypeName());
					if (csobj_lockBoxClassFactory != null)
					{
						csobj_lockBox.Delegate = true;
						csobj_lockBox = csobj_lockBoxClassFactory.Create() as EarthView.World.Graphic.Box;
						csobj_lockBox.BindNativeObject(lockBox, "Box");
					}
					
					EarthView.World.Graphic.PixelBox csret=LockImpl(csobj_lockBox, options);
					
					if (!object.Equals(csret, null))
					{
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(IntPtr pNativeObject, IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="lockBox">像素</param>
				/// <param name="options">选项</param>
				/// <returns>像素盒</returns>
				protected virtual EarthView.World.Graphic.PixelBox LockImpl(EarthView.World.Graphic.Box lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(this.NativeObject, object.Equals(lockBox, null) ? IntPtr.Zero : lockBox.NativeObject, options);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PixelBox csObj = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPixelBox");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csObj.BindNativeObject(__ptr, "CPixelBox");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// Internal implementation of lock(), do not OVERRIDE or CALL this
				//// for EarthView::World::Graphic::CHardwarePixelBuffer implementations, but override the previous method
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected new IntPtr LockImpl_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// Internal implementation of lock(), do not OVERRIDE or CALL this
				//// for EarthView::World::Graphic::CHardwarePixelBuffer implementations, but override the previous method
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				protected override IntPtr LockImpl(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
					return __ptr;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _clearSliceRTT_CallBack_void_ev_size_t(ulong zoffset);

				protected _clearSliceRTT_CallBack_void_ev_size_t m__clearSliceRTT_CallBack_void_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong zoffset);

				/// <summary>
				/// 清空片段RTT函数
				/// </summary>
				/// <param name="zoffset">偏移量</param>
				/// <returns></returns>
				protected virtual void _clearSliceRTT_NoVirtual(ulong zoffset)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_NoVirtual(this.NativeObject, zoffset);
					
				}

				protected  void EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Function(ulong zoffset)
				{
					_clearSliceRTT(zoffset);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(IntPtr pNativeObject, ulong zoffset);

				/// <summary>
				/// 清空片段RTT函数
				/// </summary>
				/// <param name="zoffset">偏移量</param>
				/// <returns></returns>
				protected virtual void _clearSliceRTT(ulong zoffset)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(this.NativeObject, zoffset);
					
				}

				//// Should be called by CHardwareBufferManager	
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="mWidth">宽度</param>
				/// <param name="mHeight">高度</param>
				/// <param name="mDepth">深度</param>
				/// <param name="mFormat">格式</param>
				/// <param name="usage">缓存方法</param>
				/// <param name="systemMemory">是否使用系统内存</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns></returns>
				public HardwarePixelBuffer(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT format, EarthView.World.Graphic.HardwareBuffer.USAGE usage, bool useSystemMemory, bool useShadowBuffer) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewidth = new BasePtr(width);
					list.Add("width", valuewidth.PtrVal);
					BasePtr valueheight = new BasePtr(height);
					list.Add("height", valueheight.PtrVal);
					BasePtr valuedepth = new BasePtr(depth);
					list.Add("depth", valuedepth.PtrVal);
					BasePtr valueformat = new BasePtr(format);
					list.Add("format", valueformat.PtrVal);
					BasePtr valueusage = new BasePtr(usage);
					list.Add("usage", valueusage.PtrVal);
					BasePtr valueuseSystemMemory = new BasePtr(useSystemMemory);
					list.Add("useSystemMemory", valueuseSystemMemory.PtrVal);
					BasePtr valueuseShadowBuffer = new BasePtr(useShadowBuffer);
					list.Add("useShadowBuffer", valueuseShadowBuffer.PtrVal);
					Create("CHardwarePixelBufferProxy", list);
					if (!"EarthView.World.Graphic.HardwarePixelBuffer".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr lock_CallBack_CPixelBox_Box_LockOptions(IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				protected lock_CallBack_CPixelBox_Box_LockOptions m_lock_CallBack_CPixelBox_Box_LockOptions;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_NoVirtual(IntPtr pNativeObject, IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="lockBox">像素</param>
				/// <param name="options">选项</param>
				/// <returns>像素盒</returns>
				public virtual EarthView.World.Graphic.PixelBox Lock_NoVirtual(EarthView.World.Graphic.Box lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_NoVirtual(this.NativeObject, object.Equals(lockBox, null) ? IntPtr.Zero : lockBox.NativeObject, options);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PixelBox csObj = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPixelBox");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csObj.BindNativeObject(__ptr, "CPixelBox");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Function(IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					EarthView.World.Graphic.Box csobj_lockBox = new EarthView.World.Graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_lockBox.BindNativeObject(lockBox,"Box");
					csobj_lockBox.Delegate = true;
					IClassFactory csobj_lockBoxClassFactory = GlobalClassFactoryMap.Get(csobj_lockBox.GetCppInstanceTypeName());
					if (csobj_lockBoxClassFactory != null)
					{
						csobj_lockBox.Delegate = true;
						csobj_lockBox = csobj_lockBoxClassFactory.Create() as EarthView.World.Graphic.Box;
						csobj_lockBox.BindNativeObject(lockBox, "Box");
						csobj_lockBox.Delegate = true;
					}
					
					EarthView.World.Graphic.PixelBox csret=Lock(csobj_lockBox, options);
					
					if (!object.Equals(csret, null))
					{
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(IntPtr pNativeObject, IntPtr lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="lockBox">像素</param>
				/// <param name="options">选项</param>
				/// <returns>像素盒</returns>
				public virtual EarthView.World.Graphic.PixelBox Lock(EarthView.World.Graphic.Box lockBox, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(this.NativeObject, object.Equals(lockBox, null) ? IntPtr.Zero : lockBox.NativeObject, options);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PixelBox csObj = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPixelBox");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csObj.BindNativeObject(__ptr, "CPixelBox");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// @copydoc CHardwareBuffer::lock
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public new IntPtr Lock_NoVirtual(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pNativeObject, ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options);

				//// @copydoc CHardwareBuffer::lock
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				public override IntPtr Lock(ulong offset, ulong length, EarthView.World.Graphic.HardwareBuffer.LOCKOPTIONS options)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, offset, length, options);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_getCurrentLock_CPixelBox(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前锁
				/// </summary>
				/// <param name=""></param>
				/// <returns>像素盒</returns>
				public EarthView.World.Graphic.PixelBox GetCurrentLock()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_getCurrentLock_CPixelBox(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PixelBox csObj = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPixelBox");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csObj.BindNativeObject(__ptr, "CPixelBox");
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				public new void ReadData_NoVirtual(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pDest);

				public override void ReadData(ulong offset, ulong length, IntPtr pDest)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pDest);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

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
					EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource, byte discardWholeBuffer);

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
					EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, offset, length, pSource, Convert.ToByte(discardWholeBuffer));
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <returns></returns>
				public new void WriteData_NoVirtual(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(this.NativeObject, offset, length, pSource);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pNativeObject, ulong offset, ulong length, IntPtr pSource);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <returns></returns>
				public override void WriteData(ulong offset, ulong length, IntPtr pSource)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, offset, length, pSource);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box(IntPtr src, IntPtr srcBox, IntPtr dstBox);

				protected blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box m_blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_NoVirtual(IntPtr pNativeObject, IntPtr src, IntPtr srcBox, IntPtr dstBox);

				/// <summary>
				/// 将另一个像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <param name="srcBox">描述资源在src中的位置</param>
				/// <param name="dstBox">资源像素缓存</param>
				/// <returns></returns>
				public virtual void Blit_NoVirtual(EarthView.World.Graphic.HardwarePixelBufferSharedPtr src, EarthView.World.Graphic.Box srcBox, EarthView.World.Graphic.Box dstBox)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_NoVirtual(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(srcBox, null) ? IntPtr.Zero : srcBox.NativeObject, object.Equals(dstBox, null) ? IntPtr.Zero : dstBox.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Function(IntPtr src, IntPtr srcBox, IntPtr dstBox)
				{
					EarthView.World.Graphic.HardwarePixelBufferSharedPtr csobj_src = new EarthView.World.Graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_src.BindNativeObject(src,"CHardwarePixelBufferSharedPtr");
					csobj_src.Delegate = true;
					IClassFactory csobj_srcClassFactory = GlobalClassFactoryMap.Get(csobj_src.GetCppInstanceTypeName());
					if (csobj_srcClassFactory != null)
					{
						csobj_src.Delegate = true;
						csobj_src = csobj_srcClassFactory.Create() as EarthView.World.Graphic.HardwarePixelBufferSharedPtr;
						csobj_src.BindNativeObject(src, "CHardwarePixelBufferSharedPtr");
						csobj_src.Delegate = true;
					}
					EarthView.World.Graphic.Box csobj_srcBox = new EarthView.World.Graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_srcBox.BindNativeObject(srcBox,"Box");
					csobj_srcBox.Delegate = true;
					IClassFactory csobj_srcBoxClassFactory = GlobalClassFactoryMap.Get(csobj_srcBox.GetCppInstanceTypeName());
					if (csobj_srcBoxClassFactory != null)
					{
						csobj_srcBox.Delegate = true;
						csobj_srcBox = csobj_srcBoxClassFactory.Create() as EarthView.World.Graphic.Box;
						csobj_srcBox.BindNativeObject(srcBox, "Box");
						csobj_srcBox.Delegate = true;
					}
					EarthView.World.Graphic.Box csobj_dstBox = new EarthView.World.Graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dstBox.BindNativeObject(dstBox,"Box");
					csobj_dstBox.Delegate = true;
					IClassFactory csobj_dstBoxClassFactory = GlobalClassFactoryMap.Get(csobj_dstBox.GetCppInstanceTypeName());
					if (csobj_dstBoxClassFactory != null)
					{
						csobj_dstBox.Delegate = true;
						csobj_dstBox = csobj_dstBoxClassFactory.Create() as EarthView.World.Graphic.Box;
						csobj_dstBox.BindNativeObject(dstBox, "Box");
						csobj_dstBox.Delegate = true;
					}
					
					Blit(csobj_src, csobj_srcBox, csobj_dstBox);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(IntPtr pNativeObject, IntPtr src, IntPtr srcBox, IntPtr dstBox);

				/// <summary>
				/// 将另一个像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <param name="srcBox">描述资源在src中的位置</param>
				/// <param name="dstBox">资源像素缓存</param>
				/// <returns></returns>
				public virtual void Blit(EarthView.World.Graphic.HardwarePixelBufferSharedPtr src, EarthView.World.Graphic.Box srcBox, EarthView.World.Graphic.Box dstBox)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(srcBox, null) ? IntPtr.Zero : srcBox.NativeObject, object.Equals(dstBox, null) ? IntPtr.Zero : dstBox.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr(IntPtr pNativeObject, IntPtr src);

				/// <summary>
				/// 将另一个像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <returns></returns>
				public void Blit(EarthView.World.Graphic.HardwarePixelBufferSharedPtr src)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void blitFromMemory_CallBack_void_CPixelBox_Box(IntPtr src, IntPtr dstBox);

				protected blitFromMemory_CallBack_void_CPixelBox_Box m_blitFromMemory_CallBack_void_CPixelBox_Box;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_NoVirtual(IntPtr pNativeObject, IntPtr src, IntPtr dstBox);

				/// <summary>
				/// 从内存的像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <param name="dstBox">资源像素缓存</param>
				/// <returns></returns>
				public virtual void BlitFromMemory_NoVirtual(EarthView.World.Graphic.PixelBox src, EarthView.World.Graphic.Box dstBox)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_NoVirtual(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dstBox, null) ? IntPtr.Zero : dstBox.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Function(IntPtr src, IntPtr dstBox)
				{
					EarthView.World.Graphic.PixelBox csobj_src = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_src.BindNativeObject(src,"CPixelBox");
					csobj_src.Delegate = true;
					IClassFactory csobj_srcClassFactory = GlobalClassFactoryMap.Get(csobj_src.GetCppInstanceTypeName());
					if (csobj_srcClassFactory != null)
					{
						csobj_src.Delegate = true;
						csobj_src = csobj_srcClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csobj_src.BindNativeObject(src, "CPixelBox");
						csobj_src.Delegate = true;
					}
					EarthView.World.Graphic.Box csobj_dstBox = new EarthView.World.Graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dstBox.BindNativeObject(dstBox,"Box");
					csobj_dstBox.Delegate = true;
					IClassFactory csobj_dstBoxClassFactory = GlobalClassFactoryMap.Get(csobj_dstBox.GetCppInstanceTypeName());
					if (csobj_dstBoxClassFactory != null)
					{
						csobj_dstBox.Delegate = true;
						csobj_dstBox = csobj_dstBoxClassFactory.Create() as EarthView.World.Graphic.Box;
						csobj_dstBox.BindNativeObject(dstBox, "Box");
						csobj_dstBox.Delegate = true;
					}
					
					BlitFromMemory(csobj_src, csobj_dstBox);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(IntPtr pNativeObject, IntPtr src, IntPtr dstBox);

				/// <summary>
				/// 从内存的像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <param name="dstBox">资源像素缓存</param>
				/// <returns></returns>
				public virtual void BlitFromMemory(EarthView.World.Graphic.PixelBox src, EarthView.World.Graphic.Box dstBox)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dstBox, null) ? IntPtr.Zero : dstBox.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox(IntPtr pNativeObject, IntPtr src);

				/// <summary>
				/// 从内存的像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <returns></returns>
				public void BlitFromMemory(EarthView.World.Graphic.PixelBox src)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void blitToMemory_CallBack_void_Box_CPixelBox(IntPtr srcBox, IntPtr dst);

				protected blitToMemory_CallBack_void_Box_CPixelBox m_blitToMemory_CallBack_void_Box_CPixelBox;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_NoVirtual(IntPtr pNativeObject, IntPtr srcBox, IntPtr dst);

				/// <summary>
				/// 从这个像素缓存复制到内存的像素缓存中
				/// </summary>
				/// <param name="srcBox">标准要求代码盒</param>
				/// <param name="dst">资源像素缓存</param>
				/// <returns></returns>
				public virtual void BlitToMemory_NoVirtual(EarthView.World.Graphic.Box srcBox, EarthView.World.Graphic.PixelBox dst)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_NoVirtual(this.NativeObject, object.Equals(srcBox, null) ? IntPtr.Zero : srcBox.NativeObject, object.Equals(dst, null) ? IntPtr.Zero : dst.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Function(IntPtr srcBox, IntPtr dst)
				{
					EarthView.World.Graphic.Box csobj_srcBox = new EarthView.World.Graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_srcBox.BindNativeObject(srcBox,"Box");
					csobj_srcBox.Delegate = true;
					IClassFactory csobj_srcBoxClassFactory = GlobalClassFactoryMap.Get(csobj_srcBox.GetCppInstanceTypeName());
					if (csobj_srcBoxClassFactory != null)
					{
						csobj_srcBox.Delegate = true;
						csobj_srcBox = csobj_srcBoxClassFactory.Create() as EarthView.World.Graphic.Box;
						csobj_srcBox.BindNativeObject(srcBox, "Box");
						csobj_srcBox.Delegate = true;
					}
					EarthView.World.Graphic.PixelBox csobj_dst = new EarthView.World.Graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_dst.BindNativeObject(dst,"CPixelBox");
					csobj_dst.Delegate = true;
					IClassFactory csobj_dstClassFactory = GlobalClassFactoryMap.Get(csobj_dst.GetCppInstanceTypeName());
					if (csobj_dstClassFactory != null)
					{
						csobj_dst.Delegate = true;
						csobj_dst = csobj_dstClassFactory.Create() as EarthView.World.Graphic.PixelBox;
						csobj_dst.BindNativeObject(dst, "CPixelBox");
						csobj_dst.Delegate = true;
					}
					
					BlitToMemory(csobj_srcBox, csobj_dst);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(IntPtr pNativeObject, IntPtr srcBox, IntPtr dst);

				/// <summary>
				/// 从这个像素缓存复制到内存的像素缓存中
				/// </summary>
				/// <param name="srcBox">标准要求代码盒</param>
				/// <param name="dst">资源像素缓存</param>
				/// <returns></returns>
				public virtual void BlitToMemory(EarthView.World.Graphic.Box srcBox, EarthView.World.Graphic.PixelBox dst)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(this.NativeObject, object.Equals(srcBox, null) ? IntPtr.Zero : srcBox.NativeObject, object.Equals(dst, null) ? IntPtr.Zero : dst.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_CPixelBox(IntPtr pNativeObject, IntPtr dst);

				/// <summary>
				/// 从这个像素缓存复制到内存的像素缓存中
				/// </summary>
				/// <param name="dst">资源像素缓存</param>
				/// <returns></returns>
				public void BlitToMemory(EarthView.World.Graphic.PixelBox dst)
				{
					EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_CPixelBox(this.NativeObject, object.Equals(dst, null) ? IntPtr.Zero : dst.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getRenderTarget_CallBack_CRenderTexture_ev_size_t(ulong slice);

				protected getRenderTarget_CallBack_CRenderTexture_ev_size_t m_getRenderTarget_CallBack_CRenderTexture_ev_size_t;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_NoVirtual(IntPtr pNativeObject, ulong slice);

				/// <summary>
				/// 从像素缓存中获取渲染目标
				/// </summary>
				/// <param name="slice">片段</param>
				/// <returns>渲染纹理</returns>
				public virtual EarthView.World.Graphic.RenderTexture GetRenderTarget_NoVirtual(ulong slice)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_NoVirtual(this.NativeObject, slice);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderTexture csObj = new EarthView.World.Graphic.RenderTexture(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderTexture");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderTexture;
						csObj.BindNativeObject(__ptr, "CRenderTexture");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Function(ulong slice)
				{
					EarthView.World.Graphic.RenderTexture csret=GetRenderTarget(slice);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(IntPtr pNativeObject, ulong slice);

				/// <summary>
				/// 从像素缓存中获取渲染目标
				/// </summary>
				/// <param name="slice">片段</param>
				/// <returns>渲染纹理</returns>
				public virtual EarthView.World.Graphic.RenderTexture GetRenderTarget(ulong slice)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(this.NativeObject, slice);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderTexture csObj = new EarthView.World.Graphic.RenderTexture(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderTexture");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderTexture;
						csObj.BindNativeObject(__ptr, "CRenderTexture");
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture(IntPtr pNativeObject);

				/// <summary>
				/// 从像素缓存中获取渲染目标
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染纹理</returns
				public EarthView.World.Graphic.RenderTexture GetRenderTarget()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.RenderTexture csObj = new EarthView.World.Graphic.RenderTexture(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderTexture");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderTexture;
						csObj.BindNativeObject(__ptr, "CRenderTexture");
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
				private static extern ulong EarthView_World_Graphic_CHardwarePixelBuffer_getWidth_ev_size_t(IntPtr pNativeObject);

				//// Gets the width of this buffer
				/// <summary>
				/// 获取缓存宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存宽度</returns>
				public ulong GetWidth()
				{
					ulong ret=EarthView_World_Graphic_CHardwarePixelBuffer_getWidth_ev_size_t(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CHardwarePixelBuffer_getHeight_ev_size_t(IntPtr pNativeObject);

				//// Gets the height of this buffer
				/// <summary>
				/// 获取缓存高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存高度</returns>
				public ulong GetHeight()
				{
					ulong ret=EarthView_World_Graphic_CHardwarePixelBuffer_getHeight_ev_size_t(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CHardwarePixelBuffer_getDepth_ev_size_t(IntPtr pNativeObject);

				//// Gets the depth of this buffer
				/// <summary>
				/// 获取缓存深度
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存深度</returns>
				public ulong GetDepth()
				{
					ulong ret=EarthView_World_Graphic_CHardwarePixelBuffer_getDepth_ev_size_t(this.NativeObject);
					
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
				private static extern int EarthView_World_Graphic_CHardwarePixelBuffer_getFormat_PixelFormat(IntPtr pNativeObject);

				//// Gets the native pixel format of this buffer
				/// <summary>
				/// 获取缓存方式
				/// </summary>
				/// <param name=""></param>
				/// <returns>像素缓存方式</returns>
				public EarthView.World.Graphic.PIXELFORMAT GetFormat()
				{
					int ret=EarthView_World_Graphic_CHardwarePixelBuffer_getFormat_PixelFormat(this.NativeObject);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwarePixelBuffer = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwarePixelBuffer", new HardwarePixelBufferClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwarePixelBufferProxy", new HardwarePixelBufferClassFactory());

				public HardwarePixelBuffer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(IntPtr pObject, lockImpl_CallBack_CPixelBox_Box_LockOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(IntPtr pObject, _clearSliceRTT_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(IntPtr pObject, lock_CallBack_CPixelBox_Box_LockOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(IntPtr pObject, blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(IntPtr pObject, blitFromMemory_CallBack_void_CPixelBox_Box pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(IntPtr pObject, blitToMemory_CallBack_void_Box_CPixelBox pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(IntPtr pObject, getRenderTarget_CallBack_CRenderTexture_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void(IntPtr pObject, unlockImpl_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(IntPtr pObject, lock_CallBack_void_ev_size_t_ev_size_t_LockOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void(IntPtr pObject, unlock_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(IntPtr pObject, readData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(IntPtr pObject, writeData_CallBack_void_ev_size_t_ev_size_t_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer(IntPtr pObject, copyData_CallBack_void_CHardwareBuffer pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void(IntPtr pObject, _updateFromShadow_CallBack_void pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_lockImpl_CallBack_CPixelBox_Box_LockOptions = EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Function;
						GC.KeepAlive(m_lockImpl_CallBack_CPixelBox_Box_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(this.NativeObject, m_lockImpl_CallBack_CPixelBox_Box_LockOptions);
						m__clearSliceRTT_CallBack_void_ev_size_t = EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Function;
						GC.KeepAlive(m__clearSliceRTT_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(this.NativeObject, m__clearSliceRTT_CallBack_void_ev_size_t);
						m_lock_CallBack_CPixelBox_Box_LockOptions = EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Function;
						GC.KeepAlive(m_lock_CallBack_CPixelBox_Box_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(this.NativeObject, m_lock_CallBack_CPixelBox_Box_LockOptions);
						m_blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box = EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Function;
						GC.KeepAlive(m_blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(this.NativeObject, m_blit_CallBack_void_CHardwarePixelBufferSharedPtr_Box_Box);
						m_blitFromMemory_CallBack_void_CPixelBox_Box = EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Function;
						GC.KeepAlive(m_blitFromMemory_CallBack_void_CPixelBox_Box);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(this.NativeObject, m_blitFromMemory_CallBack_void_CPixelBox_Box);
						m_blitToMemory_CallBack_void_Box_CPixelBox = EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Function;
						GC.KeepAlive(m_blitToMemory_CallBack_void_Box_CPixelBox);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(this.NativeObject, m_blitToMemory_CallBack_void_Box_CPixelBox);
						m_getRenderTarget_CallBack_CRenderTexture_ev_size_t = EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Function;
						GC.KeepAlive(m_getRenderTarget_CallBack_CRenderTexture_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(this.NativeObject, m_getRenderTarget_CallBack_CRenderTexture_ev_size_t);
						m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lockImpl_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlockImpl_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Function;
						GC.KeepAlive(m_unlockImpl_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void(this.NativeObject, m_unlockImpl_CallBack_void);
						m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions = EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Function;
						GC.KeepAlive(m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(this.NativeObject, m_lock_CallBack_void_ev_size_t_ev_size_t_LockOptions);
						m_unlock_CallBack_void = EarthView_World_Graphic_CHardwareBuffer_unlock_void_Function;
						GC.KeepAlive(m_unlock_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void(this.NativeObject, m_unlock_CallBack_void);
						m_readData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_readData_CallBack_void_ev_size_t_ev_size_t_void);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void_ev_bool);
						m_writeData_CallBack_void_ev_size_t_ev_size_t_void = EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Function;
						GC.KeepAlive(m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(this.NativeObject, m_writeData_CallBack_void_ev_size_t_ev_size_t_void);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool);
						m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t);
						m_copyData_CallBack_void_CHardwareBuffer = EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Function;
						GC.KeepAlive(m_copyData_CallBack_void_CHardwareBuffer);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer(this.NativeObject, m_copyData_CallBack_void_CHardwareBuffer);
						m__updateFromShadow_CallBack_void = EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Function;
						GC.KeepAlive(m__updateFromShadow_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void(this.NativeObject, m__updateFromShadow_CallBack_void);
					}
				}
				protected override void UnlockImpl()
				{
					base.UnlockImpl_NoVirtual();
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
				public static HardwarePixelBuffer FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwarePixelBuffer obj = baseObj as  HardwarePixelBuffer;
					if (object.Equals(obj, null))
					{
						obj = new HardwarePixelBuffer(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwarePixelBuffer");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwarePixelBufferClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwarePixelBuffer emptyInstance = new HardwarePixelBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class HardwarePixelBufferSharedPtr : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public HardwarePixelBufferSharedPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CHardwarePixelBufferSharedPtr",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="buf">硬件像素缓存</param>
				/// <returns></returns>
				public HardwarePixelBufferSharedPtr(EarthView.World.Graphic.HardwarePixelBuffer ref_buf) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_buf = new BasePtr(ref_buf);
					list.Add("ref_buf", valueref_buf.PtrVal);
					if(!object.Equals(ref_buf, null))
					{
					ref_buf.NoFree = true;
					}
					Create("CHardwarePixelBufferSharedPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="buf">硬件像素缓存</param>
				/// <param name="inFreeMethod">共享方法</param>
				/// <returns></returns>
				public HardwarePixelBufferSharedPtr(EarthView.World.Graphic.HardwarePixelBuffer ref_buf, EarthView.World.Core.SHAREDPTRFREEMETHOD inFreeMethod) : base(CreatedWhenConstruct.CWC_NotToCreate)
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
					Create("CHardwarePixelBufferSharedPtr", list);
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
				private static extern IntPtr EarthView_World_Graphic_CHardwarePixelBufferSharedPtr_get_CHardwarePixelBuffer(IntPtr pNativeObject);

				/// <summary>
				/// 获取像素缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>像素缓存</returns>
				public EarthView.World.Graphic.HardwarePixelBuffer Get()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHardwarePixelBufferSharedPtr_get_CHardwarePixelBuffer(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HardwarePixelBuffer csObj = new EarthView.World.Graphic.HardwarePixelBuffer(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHardwarePixelBuffer");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HardwarePixelBuffer;
						csObj.BindNativeObject(__ptr, "CHardwarePixelBuffer");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHardwarePixelBufferSharedPtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHardwarePixelBufferSharedPtr", new HardwarePixelBufferSharedPtrClassFactory());

				public HardwarePixelBufferSharedPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static HardwarePixelBufferSharedPtr FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HardwarePixelBufferSharedPtr obj = baseObj as  HardwarePixelBufferSharedPtr;
					if (object.Equals(obj, null))
					{
						obj = new HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHardwarePixelBufferSharedPtr");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HardwarePixelBufferSharedPtrClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HardwarePixelBufferSharedPtr emptyInstance = new HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
