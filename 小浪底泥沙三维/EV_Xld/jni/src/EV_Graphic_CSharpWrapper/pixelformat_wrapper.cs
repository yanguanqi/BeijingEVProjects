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
			public enum PIXELFORMAT
			{
						PF_UNKNOWN = 0,
						PF_L8 = 1,
						PF_BYTE_L = PF_L8,
						PF_L16 = 2,
						PF_SHORT_L = PF_L16,
						PF_A8 = 3,
						PF_BYTE_A = PF_A8,
						PF_A4L4 = 4,
						PF_BYTE_LA = 5,
						PF_R5G6B5 = 6,
						PF_B5G6R5 = 7,
						PF_R3G3B2 = 31,
						PF_A4R4G4B4 = 8,
						PF_A1R5G5B5 = 9,
						PF_R8G8B8 = 10,
						PF_B8G8R8 = 11,
						PF_A8R8G8B8 = 12,
						PF_A8B8G8R8 = 13,
						PF_B8G8R8A8 = 14,
						PF_R8G8B8A8 = 28,
						PF_X8R8G8B8 = 26,
						PF_X8B8G8R8 = 27,
						PF_A2R10G10B10 = 15,
						PF_A2B10G10R10 = 16,
						PF_DXT1 = 17,
						PF_DXT2 = 18,
						PF_DXT3 = 19,
						PF_DXT4 = 20,
						PF_DXT5 = 21,
						PF_FLOAT16_R = 32,
						PF_FLOAT16_RGB = 22,
						PF_FLOAT16_RGBA = 23,
						PF_FLOAT32_R = 33,
						PF_FLOAT32_RGB = 24,
						PF_FLOAT32_RGBA = 25,
						PF_FLOAT16_GR = 35,
						PF_FLOAT32_GR = 36,
						PF_DEPTH = 29,
						PF_SHORT_RGBA = 30,
						PF_SHORT_GR = 34,
						PF_SHORT_RGB = 37,
						PF_PVRTC_RGB2 = 38,
						PF_PVRTC_RGBA2 = 39,
						PF_PVRTC_RGB4 = 40,
						PF_PVRTC_RGBA4 = 41,
						PF_R8 = 42,
						PF_RG8 = 43,
						PF_COUNT = 44
			
			}

			///typedef vector<EarthView::World::Graphic::PixelFormat> PixelFormatList;
			/// <summary>
			/// 像素格式容器类
			/// 管理各类的像素格式
			/// </summary>
			public class PixelFormatList : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认的构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public PixelFormatList() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("PixelFormatList",  null);
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
				private static extern void EarthView_World_Graphic_PixelFormatList_push_back_void_PixelFormat(IntPtr pNativeObject, ref EarthView.World.Graphic.PIXELFORMAT t);

				/// <summary>
				/// 在容器后面追加对象
				/// </summary>
				/// <param name="t">需要追加的对象</param>
				/// <returns></returns>
				public void Push_back(EarthView.World.Graphic.PIXELFORMAT t)
				{
					EarthView_World_Graphic_PixelFormatList_push_back_void_PixelFormat(this.NativeObject, ref t);
					
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
				private static extern void EarthView_World_Graphic_PixelFormatList_pop_back_void(IntPtr pNativeObject);

				/// <summary>
				/// 从容器后面取出对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Pop_back()
				{
					EarthView_World_Graphic_PixelFormatList_pop_back_void(this.NativeObject);
					
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
				private static extern int EarthView_World_Graphic_PixelFormatList_front_PixelFormat(IntPtr pNativeObject);

				/// <summary>
				/// 检查发生变化的第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回第一个元素</returns>
				public EarthView.World.Graphic.PIXELFORMAT Front()
				{
					int ret=EarthView_World_Graphic_PixelFormatList_front_PixelFormat(this.NativeObject);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern int EarthView_World_Graphic_PixelFormatList_back_PixelFormat(IntPtr pNativeObject);

				/// <summary>
				/// 检查发生变化的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回最后一个元素</returns>
				public EarthView.World.Graphic.PIXELFORMAT Back()
				{
					int ret=EarthView_World_Graphic_PixelFormatList_back_PixelFormat(this.NativeObject);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern void EarthView_World_Graphic_PixelFormatList_insert_void_ev_uint32_PixelFormat(IntPtr pNativeObject, uint pos, ref EarthView.World.Graphic.PIXELFORMAT t);

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入的元素</param>
				/// <returns></returns>
				public void Insert(uint pos, EarthView.World.Graphic.PIXELFORMAT t)
				{
					EarthView_World_Graphic_PixelFormatList_insert_void_ev_uint32_PixelFormat(this.NativeObject, pos, ref t);
					
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
				private static extern void EarthView_World_Graphic_PixelFormatList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

				/// <summary>
				/// 移除元素
				/// </summary>
				/// <param name="pos">需要移除元素的位置</param>
				/// <returns></returns>
				public void Remove(ulong pos)
				{
					EarthView_World_Graphic_PixelFormatList_remove_void_ev_size_t(this.NativeObject, pos);
					
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
				private static extern byte EarthView_World_Graphic_PixelFormatList_empty_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				public bool Empty()
				{
					byte ret=EarthView_World_Graphic_PixelFormatList_empty_ev_bool(this.NativeObject);
					
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
				private static extern int EarthView_World_Graphic_PixelFormatList_at_PixelFormat_ev_size_t(IntPtr pNativeObject, ulong n);

				/// <summary>
				/// 检查发生变化的下标
				/// </summary>
				/// <param name="n">下标</param>
				/// <returns>返回对应下标的位置</returns>
				public EarthView.World.Graphic.PIXELFORMAT At(ulong n)
				{
					int ret=EarthView_World_Graphic_PixelFormatList_at_PixelFormat_ev_size_t(this.NativeObject, n);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern ulong EarthView_World_Graphic_PixelFormatList_size_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 得到该容器类的空间大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回空间的大小</returns>
				public ulong Size()
				{
					ulong ret=EarthView_World_Graphic_PixelFormatList_size_ev_size_t(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_PixelFormatList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

				/// <summary>
				/// 调整容器的大小
				/// </summary>
				/// <param name="newSize">调整的大小</param>
				/// <returns></returns>
				public void Resize(ulong newSize)
				{
					EarthView_World_Graphic_PixelFormatList_resize_void_ev_size_t(this.NativeObject, newSize);
					
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
				private static extern void EarthView_World_Graphic_PixelFormatList_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

				/// <summary>
				/// 检查容器预留的空间
				/// </summary>
				/// <param name="count">预留给容器的空间大小</param>
				/// <returns></returns>
				public void Reserve(ulong count)
				{
					EarthView_World_Graphic_PixelFormatList_reserve_void_ev_size_t(this.NativeObject, count);
					
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
				private static extern void EarthView_World_Graphic_PixelFormatList_clear_void(IntPtr pNativeObject);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void Clear()
				{
					EarthView_World_Graphic_PixelFormatList_clear_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPixelFormatList = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPixelFormatList = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPixelFormatList = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPixelFormatList = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPixelFormatList = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPixelFormatList = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPixelFormatList = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPixelFormatList = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPixelFormatList = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPixelFormatList = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPixelFormatList = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPixelFormatList = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::PixelFormatList", new PixelFormatListClassFactory());

				public PixelFormatList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static PixelFormatList FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PixelFormatList obj = baseObj as  PixelFormatList;
					if (object.Equals(obj, null))
					{
						obj = new PixelFormatList(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "PixelFormatList");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PixelFormatListClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PixelFormatList emptyInstance = new PixelFormatList(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public enum PIXELFORMATFLAGS
			{
						PFF_HASALPHA = 1,
						PFF_COMPRESSED = 2,
						PFF_FLOAT = 4,
						PFF_DEPTH = 8,
						PFF_NATIVEENDIAN = 16,
						PFF_LUMINANCE = 32
			
			}

			public enum PIXELCOMPONENTTYPE
			{
						PCT_BYTE = 0,
						PCT_SHORT = 1,
						PCT_FLOAT16 = 2,
						PCT_FLOAT32 = 3,
						PCT_COUNT = 4
			
			}

			/// <summary>
			/// 像素盒子类
			/// 描述在存储器中线、面、体像素的存储
			/// </summary>
			public class PixelBox : EarthView.World.Graphic.Box
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public PixelBox() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CPixelBox",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="extents">数据层的范围</param>
				/// <param name="pixelFormat">缓冲器的格式</param>
				/// <returns></returns>
				public PixelBox(EarthView.World.Graphic.Box extents, EarthView.World.Graphic.PIXELFORMAT pixelFormat) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueextents = new BasePtr(extents);
					list.Add("extents", valueextents.PtrVal);
					BasePtr valuepixelFormat = new BasePtr(pixelFormat);
					list.Add("pixelFormat", valuepixelFormat.PtrVal);
					Create("CPixelBox", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="extents">数据层的范围</param>
				/// <param name="pixelFormat">缓冲器的格式</param>
				/// <param name="pixelData">指向目前数据的指针</param>
				/// <returns></returns>
				public PixelBox(EarthView.World.Graphic.Box extents, EarthView.World.Graphic.PIXELFORMAT pixelFormat, IntPtr pixelData) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueextents = new BasePtr(extents);
					list.Add("extents", valueextents.PtrVal);
					BasePtr valuepixelFormat = new BasePtr(pixelFormat);
					list.Add("pixelFormat", valuepixelFormat.PtrVal);
					BasePtr valuepixelData = new BasePtr(pixelData);
					list.Add("pixelData", valuepixelData.PtrVal);
					Create("CPixelBox", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="width">区域的宽度</param>
				/// <param name="height">区域的高度</param>
				/// <param name="depth">区域的深度</param>
				/// <param name="pixelFormat">缓冲器的格式</param>
				/// <returns></returns>
				public PixelBox(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT pixelFormat) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewidth = new BasePtr(width);
					list.Add("width", valuewidth.PtrVal);
					BasePtr valueheight = new BasePtr(height);
					list.Add("height", valueheight.PtrVal);
					BasePtr valuedepth = new BasePtr(depth);
					list.Add("depth", valuedepth.PtrVal);
					BasePtr valuepixelFormat = new BasePtr(pixelFormat);
					list.Add("pixelFormat", valuepixelFormat.PtrVal);
					Create("CPixelBox", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="width">区域的宽度</param>
				/// <param name="height">区域的高度</param>
				/// <param name="depth">区域的深度</param>
				/// <param name="pixelFormat">缓冲器的格式</param>
				/// <param name="pixelData">指向目前数据的指针</param>
				/// <returns></returns>
				public PixelBox(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT pixelFormat, IntPtr pixelData) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuewidth = new BasePtr(width);
					list.Add("width", valuewidth.PtrVal);
					BasePtr valueheight = new BasePtr(height);
					list.Add("height", valueheight.PtrVal);
					BasePtr valuedepth = new BasePtr(depth);
					list.Add("depth", valuedepth.PtrVal);
					BasePtr valuepixelFormat = new BasePtr(pixelFormat);
					list.Add("pixelFormat", valuepixelFormat.PtrVal);
					BasePtr valuepixelData = new BasePtr(pixelData);
					list.Add("pixelData", valuepixelData.PtrVal);
					Create("CPixelBox", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				private IntPtr dataField;
				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr Get_EarthView_World_Graphic_CPixelBox_data(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Graphic_CPixelBox_data( IntPtr pObject, IntPtr value );

				public 				IntPtr Data
				{
					get
					{
						if(!IntPtr.Zero.Equals(dataField)){
							return dataField;
						}
						IntPtr __ptr = Get_EarthView_World_Graphic_CPixelBox_data(this.NativeObject);
						
						return __ptr;
						
					}

					set
					{
						dataField = value;
						Set_EarthView_World_Graphic_CPixelBox_data( this.NativeObject,value );
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
				private static extern int Get_EarthView_World_Graphic_CPixelBox_format(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Graphic_CPixelBox_format( IntPtr pObject, int value );

				public 				int Format
				{
					get
					{
						int ret=Get_EarthView_World_Graphic_CPixelBox_format(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_CPixelBox_format(this.NativeObject,value);
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
				private static extern ulong Get_EarthView_World_Graphic_CPixelBox_rowPitch(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Graphic_CPixelBox_rowPitch( IntPtr pObject, ulong value );

				public 				ulong RowPitch
				{
					get
					{
						ulong ret=Get_EarthView_World_Graphic_CPixelBox_rowPitch(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_CPixelBox_rowPitch(this.NativeObject,value);
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
				private static extern ulong Get_EarthView_World_Graphic_CPixelBox_slicePitch(IntPtr pObject);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void Set_EarthView_World_Graphic_CPixelBox_slicePitch( IntPtr pObject, ulong value );

				public 				ulong SlicePitch
				{
					get
					{
						ulong ret=Get_EarthView_World_Graphic_CPixelBox_slicePitch(this.NativeObject);
						
						return ret;
						
					}

					set
					{
						Set_EarthView_World_Graphic_CPixelBox_slicePitch(this.NativeObject,value);
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
				private static extern void EarthView_World_Graphic_CPixelBox_setConsecutive_void(IntPtr pNativeObject);

				/// <summary>
				/// 设置行间隔和各个部分的间隔，使得缓冲器能够连续的展开
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void SetConsecutive()
				{
					EarthView_World_Graphic_CPixelBox_setConsecutive_void(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CPixelBox_getRowSkip_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 得到一行最右边的像素到下一行最左边的像素之间的元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素个数</returns>
				public ulong GetRowSkip()
				{
					ulong ret=EarthView_World_Graphic_CPixelBox_getRowSkip_ev_size_t(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CPixelBox_getSliceSkip_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 得到一部分的最右边顶部到下一部分的最左边的顶部之间的元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素个数</returns>
				public ulong GetSliceSkip()
				{
					ulong ret=EarthView_World_Graphic_CPixelBox_getSliceSkip_ev_size_t(this.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CPixelBox_isConsecutive_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断这个缓冲期在存储器里是否是连续展开
				/// </summary>
				/// <param name=""></param>
				/// <returns>可以展开则返回true，否则返回false</returns>
				public bool IsConsecutive()
				{
					byte ret=EarthView_World_Graphic_CPixelBox_isConsecutive_ev_bool(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CPixelBox_getConsecutiveSize_ev_size_t(IntPtr pNativeObject);

				/// <summary>
				/// 得到这个图像在存储器中展开的大小（以字节作为单位）
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回展开的大小（以字节作为单位）</returns>
				public ulong GetConsecutiveSize()
				{
					ulong ret=EarthView_World_Graphic_CPixelBox_getConsecutiveSize_ev_size_t(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CPixelBox_getSubVolume_CPixelBox_Box(IntPtr pNativeObject, IntPtr def);

				/// <summary>
				/// 得到像素盒子子程序
				/// </summary>
				/// <param name="def">子程序区域的边界</param>
				/// <returns>返回EarthView::World::Graphic::CPixelBox类的对象</returns>
				public EarthView.World.Graphic.PixelBox GetSubVolume(EarthView.World.Graphic.Box def)
				{
					IntPtr __ptr = EarthView_World_Graphic_CPixelBox_getSubVolume_CPixelBox_Box(this.NativeObject, object.Equals(def, null) ? IntPtr.Zero : def.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CPixelBox_getColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(IntPtr pNativeObject, ulong x, ulong y, ulong z);

				/// <summary>
				/// 得到在像素盒子中确定区域的颜色值
				/// </summary>
				/// <param name="x">x轴值</param>
				/// <param name="y">y轴值</param>
				/// <param name="z">z轴值</param>
				/// <returns>返回EarthView::World::Graphic::CColourValue类的对象</returns>
				public EarthView.World.Graphic.ColourValue GetColourAt(ulong x, ulong y, ulong z)
				{
					IntPtr __ptr = EarthView_World_Graphic_CPixelBox_getColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, x, y, z);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ColourValue csObj = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CColourValue");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csObj.BindNativeObject(__ptr, "CColourValue");
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
				private static extern void EarthView_World_Graphic_CPixelBox_setColourAt_void_CColourValue_ev_size_t_ev_size_t_ev_size_t(IntPtr pNativeObject, IntPtr cv, ulong x, ulong y, ulong z);

				/// <summary>
				/// 设置在像素盒子中确定区域的颜色值
				/// </summary>
				/// <param name="cv">EarthView::World::Graphic::CColourValue的对象</param>
				/// <param name="x">x轴值</param>
				/// <param name="y">y轴值</param>
				/// <param name="z">z轴值</param>
				/// <returns></returns>
				public void SetColourAt(EarthView.World.Graphic.ColourValue cv, ulong x, ulong y, ulong z)
				{
					EarthView_World_Graphic_CPixelBox_setColourAt_void_CColourValue_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, object.Equals(cv, null) ? IntPtr.Zero : cv.NativeObject, x, y, z);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPixelBox = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPixelBox = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPixelBox = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPixelBox = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPixelBox = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPixelBox = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPixelBox = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPixelBox = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPixelBox = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPixelBox = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPixelBox = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPixelBox = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPixelBox", new PixelBoxClassFactory());

				public PixelBox(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static PixelBox FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PixelBox obj = baseObj as  PixelBox;
					if (object.Equals(obj, null))
					{
						obj = new PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPixelBox");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PixelBoxClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PixelBox emptyInstance = new PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 像素功能类
			/// 包装和解包像素数据
			/// </summary>
			public class PixelUtil : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public PixelUtil() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CPixelUtil",  null);
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
				private static extern ulong EarthView_World_Graphic_CPixelUtil_getNumElemBytes_ev_size_t_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 得到一个有给定像素格式的元素所占字节大小
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>返回字节大小</returns>
				public static ulong GetNumElemBytes(EarthView.World.Graphic.PIXELFORMAT format)
				{
					ulong ret=EarthView_World_Graphic_CPixelUtil_getNumElemBytes_ev_size_t_PixelFormat(format);
					
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
				private static extern ulong EarthView_World_Graphic_CPixelUtil_getNumElemBits_ev_size_t_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 得到一个有给定像素格式的元素所占比特大小
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>返回比特大小</returns>
				public static ulong GetNumElemBits(EarthView.World.Graphic.PIXELFORMAT format)
				{
					ulong ret=EarthView_World_Graphic_CPixelUtil_getNumElemBits_ev_size_t_PixelFormat(format);
					
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
				private static extern ulong EarthView_World_Graphic_CPixelUtil_getMemorySize_ev_size_t_ev_size_t_ev_size_t_ev_size_t_PixelFormat(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 得到一个有给定范围和像素格式的区域在存储器里展开所占大小
				/// </summary>
				/// <param name="width">区域的宽度</param>
				/// <param name="height">区域的高度</param>
				/// <param name="depth">区域的深度</param>
				/// <param name="format">给定像素的格式</param>
				/// <returns>所占存储器大小</returns>
				public static ulong GetMemorySize(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT format)
				{
					ulong ret=EarthView_World_Graphic_CPixelUtil_getMemorySize_ev_size_t_ev_size_t_ev_size_t_ev_size_t_PixelFormat(width, height, depth, format);
					
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
				private static extern uint EarthView_World_Graphic_CPixelUtil_getFlags_ev_uint32_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 得到像素格式的特殊标记
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>对应的标记</returns>
				public static uint GetFlags(EarthView.World.Graphic.PIXELFORMAT format)
				{
					uint ret=EarthView_World_Graphic_CPixelUtil_getFlags_ev_uint32_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_hasAlpha_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断该格式是否具有alpha成分（透明度）
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>有这个成分就返回true，否则返回false</returns>
				public static bool HasAlpha(EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_hasAlpha_ev_bool_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isFloatingPoint_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断该格式是否是浮点的
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>是浮点的就返回true，否则返回false</returns>
				public static bool IsFloatingPoint(EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isFloatingPoint_ev_bool_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isCompressed_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断该格式是否被压缩
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>被压缩就返回true，否则返回false</returns>
				public static bool IsCompressed(EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isCompressed_ev_bool_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isDepth_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断该格式是否是具有深度的格式（针对具有深度的纹理）
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>又具有深度的格式就返回true，否则返回false</returns>
				public static bool IsDepth(EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isDepth_ev_bool_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isNativeEndian_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断该格式是否是按字节存储次序的格式
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>是就返回true，否则返回false</returns>
				public static bool IsNativeEndian(EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isNativeEndian_ev_bool_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isLuminance_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断该格式是否是亮度格式
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <returns>是就返回true，否则返回false</returns>
				public static bool IsLuminance(EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isLuminance_ev_bool_PixelFormat(format);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isValidExtent_ev_bool_ev_size_t_ev_size_t_ev_size_t_PixelFormat(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT format);

				/// <summary>
				/// 判断对于图像的格式，图像的某个范围是否有效
				/// </summary>
				/// <param name="width">区域范围的宽度</param>
				/// <param name="height">区域范围的高度</param>
				/// <param name="depth">区域范围的深度</param>
				/// <param name="format">像素格式</param>
				/// <returns>有效就返回true，否则返回false</returns>
				public static bool IsValidExtent(ulong width, ulong height, ulong depth, EarthView.World.Graphic.PIXELFORMAT format)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isValidExtent_ev_bool_ev_size_t_ev_size_t_ev_size_t_PixelFormat(width, height, depth, format);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_getBitDepths_void_PixelFormat_ev_int32(EarthView.World.Graphic.PIXELFORMAT format, int[] rgba);

				/// <summary>
				/// 给一个格式设定位数
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <param name="rgba[4]">存放对应的位数值的数组</param>
				/// <returns></returns>
				public static void GetBitDepths(EarthView.World.Graphic.PIXELFORMAT format, int[] rgba)
				{
					EarthView_World_Graphic_CPixelUtil_getBitDepths_void_PixelFormat_ev_int32(format, rgba);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_getBitMasks_void_PixelFormat_ev_uint32(EarthView.World.Graphic.PIXELFORMAT format, uint[] rgba);

				/// <summary>
				/// 隐藏颜色值R、G、B、A（用于打包和解包）
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <param name="rgba[4]">存放对应的隐藏值的数组</param>
				/// <returns></returns>
				public static void GetBitMasks(EarthView.World.Graphic.PIXELFORMAT format, uint[] rgba)
				{
					EarthView_World_Graphic_CPixelUtil_getBitMasks_void_PixelFormat_ev_uint32(format, rgba);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_getBitShifts_void_PixelFormat_ev_uchar(EarthView.World.Graphic.PIXELFORMAT format, byte[] rgba);

				/// <summary>
				/// 转换颜色值R、G、B、A（用于打包和解包）
				/// </summary>
				/// <param name="format">像素格式</param>
				/// <param name="rgba[4]">存放对应的转换值的数组</param>
				/// <returns></returns>
				public static void GetBitShifts(EarthView.World.Graphic.PIXELFORMAT format, byte[] rgba)
				{
					EarthView_World_Graphic_CPixelUtil_getBitShifts_void_PixelFormat_ev_uchar(format, rgba);
					
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
				private static extern IntPtr EarthView_World_Graphic_CPixelUtil_getFormatName_EVString_PixelFormat(EarthView.World.Graphic.PIXELFORMAT srcformat);

				/// <summary>
				/// 得到图像的格式
				/// </summary>
				/// <param name="srcformat">图像格式</param>
				/// <returns>返回格式名称</returns>
				public static string GetFormatName(EarthView.World.Graphic.PIXELFORMAT srcformat)
				{
					IntPtr __ptr = EarthView_World_Graphic_CPixelUtil_getFormatName_EVString_PixelFormat(srcformat);
					
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
				private static extern byte EarthView_World_Graphic_CPixelUtil_isAccessible_ev_bool_PixelFormat(EarthView.World.Graphic.PIXELFORMAT srcformat);

				/// <summary>
				/// 判断这种格式能否使用打包函数和解包函数（通常情况下压缩和深度格式是不能使用的，只有固定格式才能使用）
				/// </summary>
				/// <param name="format">对应的格式</param>
				/// <returns>能够使用则返回true，否则返回false</returns>
				public static bool IsAccessible(EarthView.World.Graphic.PIXELFORMAT srcformat)
				{
					byte ret=EarthView_World_Graphic_CPixelUtil_isAccessible_ev_bool_PixelFormat(srcformat);
					
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
				private static extern int EarthView_World_Graphic_CPixelUtil_getComponentType_PixelComponentType_PixelFormat(EarthView.World.Graphic.PIXELFORMAT fmt);

				/// <summary>
				/// 一个像素格式的构成类型
				/// </summary>
				/// <param name="fmt">像素格式</param>
				/// <returns>返回像素组成类型</returns>
				public static EarthView.World.Graphic.PIXELCOMPONENTTYPE GetComponentType(EarthView.World.Graphic.PIXELFORMAT fmt)
				{
					int ret=EarthView_World_Graphic_CPixelUtil_getComponentType_PixelComponentType_PixelFormat(fmt);
					
					return (EarthView.World.Graphic.PIXELCOMPONENTTYPE)ret;
					
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
				private static extern ulong EarthView_World_Graphic_CPixelUtil_getComponentCount_ev_size_t_PixelFormat(EarthView.World.Graphic.PIXELFORMAT fmt);

				/// <summary>
				/// 一个像素格式的构成个数
				/// </summary>
				/// <param name="fmt">像素格式</param>
				/// <returns>返回对应的个数</returns>
				public static ulong GetComponentCount(EarthView.World.Graphic.PIXELFORMAT fmt)
				{
					ulong ret=EarthView_World_Graphic_CPixelUtil_getComponentCount_ev_size_t_PixelFormat(fmt);
					
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
				private static extern int EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString(string name);

				/// <summary>
				/// 根据给定的名字得到格式
				/// </summary>
				/// <param name="name">名字</param>
				/// <returns>返回像素格式</returns>
				public static EarthView.World.Graphic.PIXELFORMAT GetFormatFromName(string name)
				{
					int ret=EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString(name);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern int EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString_ev_bool(string name, byte accessibleOnly);

				/// <summary>
				/// 根据给定的名字得到格式
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="accessibleOnly">如果为true，则不能取到的格式都将被视为无效格式，否则所有格式有效</param>
				/// <returns>返回像素格式</returns>
				public static EarthView.World.Graphic.PIXELFORMAT GetFormatFromName(string name, bool accessibleOnly)
				{
					int ret=EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString_ev_bool(name, Convert.ToByte(accessibleOnly));
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern int EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString_ev_bool_ev_bool(string name, byte accessibleOnly, byte caseSensitive);

				/// <summary>
				/// 根据给定的名字得到格式
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="accessibleOnly">如果为true，则不能取到的格式都将被视为无效格式，否则所有格式有效</param>
				/// <param name="caseSensitive">名字是否有效（名字在像素格式枚举中是否存在）</param>
				/// <returns>返回像素格式</returns>
				public static EarthView.World.Graphic.PIXELFORMAT GetFormatFromName(string name, bool accessibleOnly, bool caseSensitive)
				{
					int ret=EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString_ev_bool_ev_bool(name, Convert.ToByte(accessibleOnly), Convert.ToByte(caseSensitive));
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern IntPtr EarthView_World_Graphic_CPixelUtil_getBNFExpressionOfPixelFormats_EVString();

				/// <summary>
				/// 得到对格式的BNF表达（BNF：巴科斯范式，用形式化的符号来描述给定的语言语法，是描述计算机语言语法的符号集）
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回像素格式</returns>
				public static string GetBNFExpressionOfPixelFormats()
				{
					IntPtr __ptr = EarthView_World_Graphic_CPixelUtil_getBNFExpressionOfPixelFormats_EVString();
					
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
				private static extern IntPtr EarthView_World_Graphic_CPixelUtil_getBNFExpressionOfPixelFormats_EVString_ev_bool(byte accessibleOnly);

				/// <summary>
				/// 得到对格式的BNF表达（BNF：巴科斯范式，用形式化的符号来描述给定的语言语法，是描述计算机语言语法的符号集）
				/// </summary>
				/// <param name="accessibleOnly">如果为true，则只有能取到的格式会被考虑，否则所有在枚举中的格式都会被考虑</param>
				/// <returns>返回像素格式</returns>
				public static string GetBNFExpressionOfPixelFormats(bool accessibleOnly)
				{
					IntPtr __ptr = EarthView_World_Graphic_CPixelUtil_getBNFExpressionOfPixelFormats_EVString_ev_bool(Convert.ToByte(accessibleOnly));
					
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
				private static extern int EarthView_World_Graphic_CPixelUtil_getFormatForBitDepths_PixelFormat_PixelFormat_ev_uint16_ev_uint16(EarthView.World.Graphic.PIXELFORMAT fmt, ushort integerBits, ushort floatBits);

				/// <summary>
				/// 根据给定比特深度来找到相似的格式
				/// </summary>
				/// <param name="fmt">最初的格式</param>
				/// <param name="integerBits">整型像素格式的首选比特深度</param>
				/// <param name="floatBits">浮点型像素格式的首选比特深度</param>
				/// <returns>像素的格式</returns>
				public static EarthView.World.Graphic.PIXELFORMAT GetFormatForBitDepths(EarthView.World.Graphic.PIXELFORMAT fmt, ushort integerBits, ushort floatBits)
				{
					int ret=EarthView_World_Graphic_CPixelUtil_getFormatForBitDepths_PixelFormat_PixelFormat_ev_uint16_ev_uint16(fmt, integerBits, floatBits);
					
					return (EarthView.World.Graphic.PIXELFORMAT)ret;
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_packColour_void_CColourValue_PixelFormat_void(IntPtr colour, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr dest);

				/// <summary>
				/// 将颜色打包到存储器中
				/// </summary>
				/// <param name="colour">颜色值，EarthView::World::Graphic::CColourValue类的对象</param>
				/// <param name="pf">用何种像素格式来描述颜色值</param>
				/// <param name="dest">目标存储器的位置</param>
				/// <returns></returns>
				public static void PackColour(EarthView.World.Graphic.ColourValue colour, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr dest)
				{
					EarthView_World_Graphic_CPixelUtil_packColour_void_CColourValue_PixelFormat_void(object.Equals(colour, null) ? IntPtr.Zero : colour.NativeObject, pf, dest);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_packColour_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(byte r, byte g, byte b, byte a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr dest);

				/// <summary>
				/// 将颜色打包到存储器中
				/// </summary>
				/// <param name="r">红色值</param>
				/// <param name="g">绿色值</param>
				/// <param name="b">蓝色值</param>
				/// <param name="a">透明值</param>
				/// <param name="pf">用何种像素格式来描述颜色值</param>
				/// <param name="dest">目标存储器的位置</param>
				/// <returns></returns>
				public static void PackColour(byte r, byte g, byte b, byte a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr dest)
				{
					EarthView_World_Graphic_CPixelUtil_packColour_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(r, g, b, a, pf, dest);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_packColour_void_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(float r, float g, float b, float a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr dest);

				/// <summary>
				/// 将颜色打包到存储器中
				/// </summary>
				/// <param name="r">红色值（范围在0.0f到1.0f之间）</param>
				/// <param name="g">绿色值（范围在0.0f到1.0f之间）</param>
				/// <param name="b">蓝色值（范围在0.0f到1.0f之间）</param>
				/// <param name="a">透明值（范围在0.0f到1.0f之间）</param>
				/// <param name="pf">用何种像素格式来描述颜色值</param>
				/// <param name="dest">目标存储器的位置</param>
				/// <returns></returns>
				public static void PackColour(float r, float g, float b, float a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr dest)
				{
					EarthView_World_Graphic_CPixelUtil_packColour_void_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(r, g, b, a, pf, dest);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_unpackColour_void_CColourValue_PixelFormat_void(IntPtr colour, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr src);

				/// <summary>
				/// 从存储器中解包颜色值
				/// </summary>
				/// <param name="colour">颜色值，EarthView::World::Graphic::CColourValue类的对象</param>
				/// <param name="pf">用何种像素格式来描述颜色值</param>
				/// <param name="src">存放颜色值存储器的位置</param>
				/// <returns></returns>
				public static void UnpackColour(ref  EarthView.World.Graphic.ColourValue colour, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr src)
				{
					EarthView_World_Graphic_CPixelUtil_unpackColour_void_CColourValue_PixelFormat_void(object.Equals(colour, null) ? IntPtr.Zero : colour.NativeObject, pf, src);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_unpackColour_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(ref byte r, ref byte g, ref byte b, ref byte a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr src);

				/// <summary>
				/// 从存储器中解包颜色值
				/// </summary>
				/// <param name="r">红色值</param>
				/// <param name="g">绿色值</param>
				/// <param name="b">蓝色值</param>
				/// <param name="a">透明值</param>
				/// <param name="pf">用何种像素格式来描述颜色值</param>
				/// <param name="src">存放颜色值存储器的位置</param>
				/// <returns></returns>
				public static void UnpackColour(ref byte r, ref byte g, ref byte b, ref byte a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr src)
				{
					EarthView_World_Graphic_CPixelUtil_unpackColour_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(ref r, ref g, ref b, ref a, pf, src);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_unpackColour_void_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(ref float r, ref float g, ref float b, ref float a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr src);

				///ev_private:
				/// <summary>
				/// 从存储器中解包颜色值
				/// </summary>
				/// <param name="r">红色值（值是浮点型的）</param>
				/// <param name="g">绿色值（值是浮点型的）</param>
				/// <param name="b">蓝色值（值是浮点型的）</param>
				/// <param name="a">透明值（值是浮点型的）</param>
				/// <param name="pf">用何种像素格式来描述颜色值</param>
				/// <param name="src">存放颜色值存储器的位置</param>
				/// <returns></returns>
				public static void UnpackColour(ref float r, ref float g, ref float b, ref float a, EarthView.World.Graphic.PIXELFORMAT pf, IntPtr src)
				{
					EarthView_World_Graphic_CPixelUtil_unpackColour_void_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(ref r, ref g, ref b, ref a, pf, src);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_bulkPixelConversion_void_void_PixelFormat_void_PixelFormat_ev_uint32(IntPtr src, EarthView.World.Graphic.PIXELFORMAT srcFormat, IntPtr dest, EarthView.World.Graphic.PIXELFORMAT dstFormat, uint count);

				/// <summary>
				/// 将连续的像素从一个格式转换到另一个格式
				/// </summary>
				/// <param name="src">指向原来区域的指针</param>
				/// <param name="srcFormat">原来区域的格式</param>
				/// <param name="dest">指向目标区域的指针</param>
				/// <param name="dstFormat">目标区域的格式</param>
				/// <param name="count">宽度值</param>
				/// <returns></returns>
				public static void BulkPixelConversion(IntPtr src, EarthView.World.Graphic.PIXELFORMAT srcFormat, IntPtr dest, EarthView.World.Graphic.PIXELFORMAT dstFormat, uint count)
				{
					EarthView_World_Graphic_CPixelUtil_bulkPixelConversion_void_void_PixelFormat_void_PixelFormat_ev_uint32(src, srcFormat, dest, dstFormat, count);
					
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
				private static extern void EarthView_World_Graphic_CPixelUtil_bulkPixelConversion_void_CPixelBox_CPixelBox(IntPtr src, IntPtr dst);

				/// <summary>
				/// 将连续的像素从一个格式转换到另一个格式
				/// </summary>
				/// <param name="src">像素盒子类，包含原来区域的像素，位置，格式</param>
				/// <param name="dst">像素盒子类，包含目标区域的像素，位置，格式</param>
				/// <returns></returns>
				public static void BulkPixelConversion(EarthView.World.Graphic.PixelBox src, EarthView.World.Graphic.PixelBox dst)
				{
					EarthView_World_Graphic_CPixelUtil_bulkPixelConversion_void_CPixelBox_CPixelBox(object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dst, null) ? IntPtr.Zero : dst.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPixelUtil = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPixelUtil = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPixelUtil = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPixelUtil = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPixelUtil = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPixelUtil = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPixelUtil = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPixelUtil = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPixelUtil = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPixelUtil = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPixelUtil = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPixelUtil = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPixelUtil", new PixelUtilClassFactory());

				public PixelUtil(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static PixelUtil FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PixelUtil obj = baseObj as  PixelUtil;
					if (object.Equals(obj, null))
					{
						obj = new PixelUtil(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPixelUtil");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PixelUtilClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PixelUtil emptyInstance = new PixelUtil(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
