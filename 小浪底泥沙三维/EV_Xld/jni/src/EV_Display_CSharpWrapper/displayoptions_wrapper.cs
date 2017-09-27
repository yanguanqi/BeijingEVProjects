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
			/// 显示选项
			/// </summary>
			public class DisplayOptions : EarthView.World.Display.Idisplayoptions
			{
				/// <summary>
				/// 默认构造函数      
				/// </summary>
				public DisplayOptions() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDisplayOptionsProxy", null);
					if (!"EarthView.World.Display.DisplayOptions".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 获取显示叠加模式
				/// </summary>
				/// <param name="mode">输出：叠加模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public new bool GetCompositingMode_NoVirtual(ref  EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 获取显示叠加模式
				/// </summary>
				/// <param name="mode">输出：叠加模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public override bool GetCompositingMode(ref  EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setEVCompositingMode_void_EVCompositingMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 设置显示叠加模式
				/// </summary>
				/// <param name="mode">叠加模式</param>
				/// <returns></returns>
				public new void SetEVCompositingMode_NoVirtual(EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setEVCompositingMode_void_EVCompositingMode_NoVirtual(this.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setEVCompositingMode_void_EVCompositingMode(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 设置显示叠加模式
				/// </summary>
				/// <param name="mode">叠加模式</param>
				/// <returns></returns>
				public override void SetEVCompositingMode(EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setEVCompositingMode_void_EVCompositingMode(this.NativeObject, mode);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 获取显示质量
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public new bool GetCompositingQuality_NoVirtual(ref  EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_NoVirtual(this.NativeObject, ref quality);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 获取显示质量
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public override bool GetCompositingQuality(ref  EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(this.NativeObject, ref quality);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setCompositingQuality_void_EVCompositingQuality_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 设置显示叠加质量
				/// </summary>
				/// <param name="mode">叠加质量</param>
				/// <returns></returns>
				public new void SetCompositingQuality_NoVirtual(EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					EarthView_World_Display_CDisplayOptions_setCompositingQuality_void_EVCompositingQuality_NoVirtual(this.NativeObject, quality);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setCompositingQuality_void_EVCompositingQuality(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 设置显示叠加质量
				/// </summary>
				/// <param name="mode">叠加质量</param>
				/// <returns></returns>
				public override void SetCompositingQuality(EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					EarthView_World_Display_CDisplayOptions_setCompositingQuality_void_EVCompositingQuality(this.NativeObject, quality);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 获取字体渲染方式
				/// </summary>
				/// <param name="mode">输出：字体渲染方式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public new bool GetTextRenderingHint_NoVirtual(ref  EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_NoVirtual(this.NativeObject, ref hint);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(IntPtr pNativeObject, ref EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 获取字体渲染方式
				/// </summary>
				/// <param name="mode">输出：字体渲染方式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public override bool GetTextRenderingHint(ref  EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(this.NativeObject, ref hint);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 设置字体渲染方式
				/// </summary>
				/// <param name="mode">字体渲染方式</param>
				/// <returns></returns>
				public new void SetTextRenderingHint_NoVirtual(EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					EarthView_World_Display_CDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_NoVirtual(this.NativeObject, hint);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(IntPtr pNativeObject, EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 设置字体渲染方式
				/// </summary>
				/// <param name="mode">字体渲染方式</param>
				/// <returns></returns>
				public override void SetTextRenderingHint(EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					EarthView_World_Display_CDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(this.NativeObject, hint);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 获取插值模式
				/// </summary>
				/// <param name="mode">输出：插值模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public new bool GetInterpolationMode_NoVirtual(ref  EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(IntPtr pNativeObject, ref EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 获取插值模式
				/// </summary>
				/// <param name="mode">输出：插值模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public override bool GetInterpolationMode(ref  EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setInterpolationMode_void_EVInterpolationMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 设置插值模式
				/// </summary>
				/// <param name="mode">插值模式</param>
				/// <returns></returns>
				public new void SetInterpolationMode_NoVirtual(EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setInterpolationMode_void_EVInterpolationMode_NoVirtual(this.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setInterpolationMode_void_EVInterpolationMode(IntPtr pNativeObject, EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 设置插值模式
				/// </summary>
				/// <param name="mode">插值模式</param>
				/// <returns></returns>
				public override void SetInterpolationMode(EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setInterpolationMode_void_EVInterpolationMode(this.NativeObject, mode);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 获取平滑模式
				/// </summary>
				/// <param name="mode">输出：平滑模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public new bool GetSmoothingMode_NoVirtual(ref  EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(IntPtr pNativeObject, ref EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 获取平滑模式
				/// </summary>
				/// <param name="mode">输出：平滑模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public override bool GetSmoothingMode(ref  EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setSmoothingMode_void_EVSmoothingMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 设置平滑模式
				/// </summary>
				/// <param name="mode">平滑模式</param>
				/// <returns></returns>
				public new void SetSmoothingMode_NoVirtual(EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setSmoothingMode_void_EVSmoothingMode_NoVirtual(this.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setSmoothingMode_void_EVSmoothingMode(IntPtr pNativeObject, EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 设置平滑模式
				/// </summary>
				/// <param name="mode">平滑模式</param>
				/// <returns></returns>
				public override void SetSmoothingMode(EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setSmoothingMode_void_EVSmoothingMode(this.NativeObject, mode);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 获取像素偏移模式
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public new bool GetPixelOffsetMode_NoVirtual(ref  EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Display_CDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(IntPtr pNativeObject, ref EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 获取像素偏移模式
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public override bool GetPixelOffsetMode(ref  EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					byte ret=EarthView_World_Display_CDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 设置像素偏移模式
				/// </summary>
				/// <param name="mode">像素偏移模式</param>
				/// <returns></returns>
				public new void SetPixelOffsetMode_NoVirtual(EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_NoVirtual(this.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(IntPtr pNativeObject, EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 设置像素偏移模式
				/// </summary>
				/// <param name="mode">像素偏移模式</param>
				/// <returns></returns>
				public override void SetPixelOffsetMode(EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					EarthView_World_Display_CDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(this.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_loadFromXML_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

				/// <summary>
				/// 反序列化
				/// </summary>
				public new void LoadFromXML_NoVirtual(EarthView.World.Core.XmlElement element)
				{
					EarthView_World_Display_CDisplayOptions_loadFromXML_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
					
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
				private static extern void EarthView_World_Display_CDisplayOptions_loadFromXML_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

				/// <summary>
				/// 反序列化
				/// </summary>
				public override void LoadFromXML(EarthView.World.Core.XmlElement element)
				{
					EarthView_World_Display_CDisplayOptions_loadFromXML_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Display_CDisplayOptions_toXmlElement_CXmlElement_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 序列化
				/// </summary>
				public new EarthView.World.Core.XmlElement ToXmlElement_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Display_CDisplayOptions_toXmlElement_CXmlElement_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CXmlElement");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
						csObj.BindNativeObject(__ptr, "CXmlElement");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Display_CDisplayOptions_toXmlElement_CXmlElement(IntPtr pNativeObject);

				/// <summary>
				/// 序列化
				/// </summary>
				public override EarthView.World.Core.XmlElement ToXmlElement()
				{
					IntPtr __ptr = EarthView_World_Display_CDisplayOptions_toXmlElement_CXmlElement(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CXmlElement");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
						csObj.BindNativeObject(__ptr, "CXmlElement");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDisplayOptions = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadDisplayOptions = LoadDll.Load("EV_Display_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDisplayOptions = LoadDll.Load("EV_Display_d.so");
						private static bool csbLoadDisplayOptions = LoadDll.Load("EV_Display_CSharp_d.so");

					#else 
						private static bool bLoadDisplayOptions = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadDisplayOptions = LoadDll.Load("EV_Display_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDisplayOptions = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadDisplayOptions = LoadDll.Load("EV_Display_CSharp.dll");

					#elif Linux 
						private static bool bLoadDisplayOptions = LoadDll.Load("EV_Display.so");
						private static bool csbLoadDisplayOptions = LoadDll.Load("EV_Display_CSharp.so");

					#else 
						private static bool bLoadDisplayOptions = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadDisplayOptions = LoadDll.Load("EV_Display_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CDisplayOptions", new DisplayOptionsClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CDisplayOptionsProxy", new DisplayOptionsClassFactory());

				public DisplayOptions(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(IntPtr pObject, getCompositingMode_CallBack_ev_bool_EVCompositingMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setEVCompositingMode_void_EVCompositingMode(IntPtr pObject, setEVCompositingMode_CallBack_void_EVCompositingMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(IntPtr pObject, getCompositingQuality_CallBack_ev_bool_EVCompositingQuality pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setCompositingQuality_void_EVCompositingQuality(IntPtr pObject, setCompositingQuality_CallBack_void_EVCompositingQuality pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(IntPtr pObject, getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(IntPtr pObject, setTextRenderingHint_CallBack_void_EVTextRenderingHint pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(IntPtr pObject, getInterpolationMode_CallBack_ev_bool_EVInterpolationMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setInterpolationMode_void_EVInterpolationMode(IntPtr pObject, setInterpolationMode_CallBack_void_EVInterpolationMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(IntPtr pObject, getSmoothingMode_CallBack_ev_bool_EVSmoothingMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setSmoothingMode_void_EVSmoothingMode(IntPtr pObject, setSmoothingMode_CallBack_void_EVSmoothingMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(IntPtr pObject, getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(IntPtr pObject, setPixelOffsetMode_CallBack_void_EVPixelOffsetMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_loadFromXML_void_CXmlElement(IntPtr pObject, loadFromXML_CallBack_void_CXmlElement pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_toXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getCompositingMode_CallBack_ev_bool_EVCompositingMode = EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Function;
						GC.KeepAlive(m_getCompositingMode_CallBack_ev_bool_EVCompositingMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(this.NativeObject, m_getCompositingMode_CallBack_ev_bool_EVCompositingMode);
						m_setEVCompositingMode_CallBack_void_EVCompositingMode = EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Function;
						GC.KeepAlive(m_setEVCompositingMode_CallBack_void_EVCompositingMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setEVCompositingMode_void_EVCompositingMode(this.NativeObject, m_setEVCompositingMode_CallBack_void_EVCompositingMode);
						m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality = EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Function;
						GC.KeepAlive(m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(this.NativeObject, m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality);
						m_setCompositingQuality_CallBack_void_EVCompositingQuality = EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Function;
						GC.KeepAlive(m_setCompositingQuality_CallBack_void_EVCompositingQuality);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setCompositingQuality_void_EVCompositingQuality(this.NativeObject, m_setCompositingQuality_CallBack_void_EVCompositingQuality);
						m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint = EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Function;
						GC.KeepAlive(m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(this.NativeObject, m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint);
						m_setTextRenderingHint_CallBack_void_EVTextRenderingHint = EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Function;
						GC.KeepAlive(m_setTextRenderingHint_CallBack_void_EVTextRenderingHint);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(this.NativeObject, m_setTextRenderingHint_CallBack_void_EVTextRenderingHint);
						m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode = EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Function;
						GC.KeepAlive(m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(this.NativeObject, m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode);
						m_setInterpolationMode_CallBack_void_EVInterpolationMode = EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Function;
						GC.KeepAlive(m_setInterpolationMode_CallBack_void_EVInterpolationMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setInterpolationMode_void_EVInterpolationMode(this.NativeObject, m_setInterpolationMode_CallBack_void_EVInterpolationMode);
						m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode = EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Function;
						GC.KeepAlive(m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(this.NativeObject, m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode);
						m_setSmoothingMode_CallBack_void_EVSmoothingMode = EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Function;
						GC.KeepAlive(m_setSmoothingMode_CallBack_void_EVSmoothingMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setSmoothingMode_void_EVSmoothingMode(this.NativeObject, m_setSmoothingMode_CallBack_void_EVSmoothingMode);
						m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode = EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Function;
						GC.KeepAlive(m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(this.NativeObject, m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode);
						m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode = EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Function;
						GC.KeepAlive(m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(this.NativeObject, m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode);
						m_loadFromXML_CallBack_void_CXmlElement = EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Function;
						GC.KeepAlive(m_loadFromXML_CallBack_void_CXmlElement);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_loadFromXML_void_CXmlElement(this.NativeObject, m_loadFromXML_CallBack_void_CXmlElement);
						m_toXmlElement_CallBack_CXmlElement = EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Function;
						GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement);
						EV_RegisterCallback_EarthView_World_Display_CDisplayOptions_toXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement);
					}
				}
				public static DisplayOptions FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DisplayOptions obj = baseObj as  DisplayOptions;
					if (object.Equals(obj, null))
					{
						obj = new DisplayOptions(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDisplayOptions");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DisplayOptionsClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DisplayOptions emptyInstance = new DisplayOptions(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
