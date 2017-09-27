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
		namespace Display
		{
			/// <summary>
			/// 图像渲染类
			/// </summary>
			public class ImageRender : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				public ImageRender() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CImageRender",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_load_void_IPaintDevice(IntPtr pNativeObject, IntPtr ref_device);

				/// <summary>
				/// 加载设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <returns></returns>
				public void Load(EarthView.World.Display.Ipaintdevice ref_device)
				{
					EarthView_World_Display_CImageRender_load_void_IPaintDevice(this.NativeObject, object.Equals(ref_device, null) ? IntPtr.Zero : ref_device.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_load_void_IPaintDevice_IDisplayOptions(IntPtr pNativeObject, IntPtr ref_device, IntPtr ref_displayOptions);

				/// <summary>
				/// 加载设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <param name="displayOptions">显示选项</param>
				/// <returns></returns>
				public void Load(EarthView.World.Display.Ipaintdevice ref_device, EarthView.World.Display.Idisplayoptions ref_displayOptions)
				{
					EarthView_World_Display_CImageRender_load_void_IPaintDevice_IDisplayOptions(this.NativeObject, object.Equals(ref_device, null) ? IntPtr.Zero : ref_device.NativeObject, object.Equals(ref_displayOptions, null) ? IntPtr.Zero : ref_displayOptions.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_unload_void(IntPtr pNativeObject);

				/// <summary>
				/// 卸载设备
				/// </summary>
				/// <returns></returns>
				public void Unload()
				{
					EarthView_World_Display_CImageRender_unload_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_translate_void_ev_real64_ev_real64(IntPtr pNativeObject, double offsetX, double offsetY);

				/// <summary>
				/// 平移
				/// </summary>
				/// <param name="offsetX">x偏移</param>
				/// <param name="offsetY">y偏移</param>
				/// <returns></returns>
				public void Translate(double offsetX, double offsetY)
				{
					EarthView_World_Display_CImageRender_translate_void_ev_real64_ev_real64(this.NativeObject, offsetX, offsetY);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_scale_void_ev_real64_ev_real64(IntPtr pNativeObject, double scaleX, double scaleY);

				/// <summary>
				/// 按比例缩放
				/// </summary>
				/// <param name="scaleX">x方向比例</param>
				/// <param name="scaleY">y方向比例</param>
				/// <returns></returns>
				public void Scale(double scaleX, double scaleY)
				{
					EarthView_World_Display_CImageRender_scale_void_ev_real64_ev_real64(this.NativeObject, scaleX, scaleY);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_rotate_void_ev_real64(IntPtr pNativeObject, double angle);

				/// <summary>
				/// 旋转
				/// </summary>
				/// <param name="angle">旋转角度</param>
				/// <returns></returns>
				public void Rotate(double angle)
				{
					EarthView_World_Display_CImageRender_rotate_void_ev_real64(this.NativeObject, angle);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_rotateAt_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double angle, double x, double y);

				/// <summary>
				/// 旋转到
				/// </summary>
				/// <param name="angle">旋转角度</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				public void RotateAt(double angle, double x, double y)
				{
					EarthView_World_Display_CImageRender_rotateAt_void_ev_real64_ev_real64_ev_real64(this.NativeObject, angle, x, y);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_setClip_void_CDataPath(IntPtr pNativeObject, IntPtr path);

				/// <summary>
				/// 剪切
				/// </summary>
				/// <param name="path">剪切范围</param>
				/// <returns></returns>
				public void SetClip(EarthView.World.Display.DataPath path)
				{
					EarthView_World_Display_CImageRender_setClip_void_CDataPath(this.NativeObject, object.Equals(path, null) ? IntPtr.Zero : path.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_setClip_void_CDataRegion(IntPtr pNativeObject, IntPtr region);

				public void SetClip(EarthView.World.Display.DataRegion region)
				{
					EarthView_World_Display_CImageRender_setClip_void_CDataRegion(this.NativeObject, object.Equals(region, null) ? IntPtr.Zero : region.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_reset_void(IntPtr pNativeObject);

				/// <summary>
				/// 重置
				/// </summary>
				public void Reset()
				{
					EarthView_World_Display_CImageRender_reset_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_IBitmap_IEnvelope(IntPtr pNativeObject, IntPtr bmp, IntPtr destExt);

				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destExt">目标范围</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.Ibitmap bmp, EarthView.World.Spatial.Geometry.Ienvelope destExt)
				{
					EarthView_World_Display_CImageRender_drawImage_void_IBitmap_IEnvelope(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, object.Equals(destExt, null) ? IntPtr.Zero : destExt.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_IBitmap_IEnvelope_IEnvelope(IntPtr pNativeObject, IntPtr bmp, IntPtr destExt, IntPtr srcExt);

				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destExt">目标范围</param>
				/// <param name="srcExt">源范围</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.Ibitmap bmp, EarthView.World.Spatial.Geometry.Ienvelope destExt, EarthView.World.Spatial.Geometry.Ienvelope srcExt)
				{
					EarthView_World_Display_CImageRender_drawImage_void_IBitmap_IEnvelope_IEnvelope(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, object.Equals(destExt, null) ? IntPtr.Zero : destExt.NativeObject, object.Equals(srcExt, null) ? IntPtr.Zero : srcExt.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr bmp, double x, double y);

				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.Ibitmap bmp, double x, double y)
				{
					EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, x, y);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr bmp, double x, double y, double sx, double sy, double sw, double sh);

				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源图像宽度</param>
				/// <param name="sh">源图像高度</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.Ibitmap bmp, double x, double y, double sx, double sy, double sw, double sh)
				{
					EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, x, y, sx, sy, sw, sh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr bmp, double x, double y, double w, double h);

				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.Ibitmap bmp, double x, double y, double w, double h)
				{
					EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, x, y, w, h);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr bmp, double x, double y, double w, double h, double sx, double sy, double sw, double sh);

				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源图像宽度</param>
				/// <param name="sh">源图像高度</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.Ibitmap bmp, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
				{
					EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, x, y, w, h, sx, sy, sw, sh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawImage_void_CMetaFile_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr metafile, double x, double y, double w, double h, double sx, double sy, double sw, double sh);

				/// <summary>
				/// 绘制图元
				/// </summary>
				/// <param name="bmp">图元</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源图像宽度</param>
				/// <param name="sh">源图像高度</param>
				/// <returns></returns>
				public void DrawImage(EarthView.World.Display.MetaFile metafile, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
				{
					EarthView_World_Display_CImageRender_drawImage_void_CMetaFile_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, object.Equals(metafile, null) ? IntPtr.Zero : metafile.NativeObject, x, y, w, h, sx, sy, sw, sh);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CImageRender_drawCacheBitmap_void_ICachedBitmap_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr bmp, double x, double y);

				/// <summary>
				/// 绘制缓存图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <returns></returns>
				public void DrawCacheBitmap(EarthView.World.Display.Icachedbitmap bmp, double x, double y)
				{
					EarthView_World_Display_CImageRender_drawCacheBitmap_void_ICachedBitmap_ev_real64_ev_real64(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, x, y);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadImageRender = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadImageRender = LoadDll.Load("EV_Display_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadImageRender = LoadDll.Load("EV_Display_d.so");
						private static bool csbLoadImageRender = LoadDll.Load("EV_Display_CSharp_d.so");

					#else 
						private static bool bLoadImageRender = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadImageRender = LoadDll.Load("EV_Display_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadImageRender = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadImageRender = LoadDll.Load("EV_Display_CSharp.dll");

					#elif Linux 
						private static bool bLoadImageRender = LoadDll.Load("EV_Display.so");
						private static bool csbLoadImageRender = LoadDll.Load("EV_Display_CSharp.so");

					#else 
						private static bool bLoadImageRender = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadImageRender = LoadDll.Load("EV_Display_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CImageRender", new ImageRenderClassFactory());

				public ImageRender(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ImageRender FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ImageRender obj = baseObj as  ImageRender;
					if (object.Equals(obj, null))
					{
						obj = new ImageRender(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CImageRender");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ImageRenderClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ImageRender emptyInstance = new ImageRender(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
