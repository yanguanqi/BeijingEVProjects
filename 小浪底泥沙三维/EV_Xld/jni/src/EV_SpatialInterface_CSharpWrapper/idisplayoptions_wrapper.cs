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
			public enum EVCOMPOSITINGMODE
			{
						CM_SourceOver = 0,
						CM_SourceCopy = 1
			
			}

			public enum EVCOMPOSITINGQUALITY
			{
						CQ_Invalid = 1,
						CQ_Default = 0,
						CQ_HighSpeed = 2,
						CQ_HighQuality = 3,
						CQ_GammaCorrected = 4,
						CQ_AssumeLinear = 5
			
			}

			public enum EVTEXTRENDERINGHINT
			{
						TRH_SystemDefault = 0,
						TRH_SingleBitPerPixelGridFit = 1,
						TRH_SingleBitPerPixel = 2,
						TRH_AntiAliasGridFit = 3,
						TRH_AntiAlias = 4,
						TRH_ClearTypeGridFit = 5
			
			}

			public enum EVINTERPOLATIONMODE
			{
						IM_Invalid = 1,
						IM_Default = 0,
						IM_LowQuality = 1,
						IM_HighQuality = 2,
						IM_Bilinear = 3,
						IM_Bicubic = 4,
						IM_NearestNeighbor = 5,
						IM_HighQualityBilinear = 6,
						IM_HighQualityBicubic = 7
			
			}

			public enum EVSMOOTHINGMODE
			{
						SM_Invalid = 1,
						SM_Default = 0,
						SM_HighSpeed = 1,
						SM_HighQuality = 2,
						SM_None = 3,
						SM_AntiAlias = 4
			
			}

			public enum EVPIXELOFFSETMODE
			{
						POM_nvalid = 1,
						POM_Default = 0,
						POM_HighSpeed = 1,
						POM_HighQuality = 2,
						POM_None = 3,
						POM_Half = 4
			
			}

			public class Idisplayoptions : EarthView.World.Core.AllocatedObject
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getCompositingMode_CallBack_ev_bool_EVCompositingMode(ref EarthView.World.Display.EVCOMPOSITINGMODE mode);

				protected getCompositingMode_CallBack_ev_bool_EVCompositingMode m_getCompositingMode_CallBack_ev_bool_EVCompositingMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 获取显示叠加模式
				/// </summary>
				/// <param name="mode">输出：叠加模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetCompositingMode_NoVirtual(ref  EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Function(ref EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					bool csret=GetCompositingMode(ref mode);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 获取显示叠加模式
				/// </summary>
				/// <param name="mode">输出：叠加模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetCompositingMode(ref  EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setEVCompositingMode_CallBack_void_EVCompositingMode(EarthView.World.Display.EVCOMPOSITINGMODE mode);

				protected setEVCompositingMode_CallBack_void_EVCompositingMode m_setEVCompositingMode_CallBack_void_EVCompositingMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 设置显示叠加模式
				/// </summary>
				/// <param name="mode">叠加模式</param>
				/// <returns></returns>
				public virtual void SetEVCompositingMode_NoVirtual(EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_NoVirtual(this.NativeObject, mode);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Function(EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					SetEVCompositingMode(mode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGMODE mode);

				/// <summary>
				/// 设置显示叠加模式
				/// </summary>
				/// <param name="mode">叠加模式</param>
				/// <returns></returns>
				public virtual void SetEVCompositingMode(EarthView.World.Display.EVCOMPOSITINGMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(this.NativeObject, mode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getCompositingQuality_CallBack_ev_bool_EVCompositingQuality(ref EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				protected getCompositingQuality_CallBack_ev_bool_EVCompositingQuality m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 获取显示质量
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetCompositingQuality_NoVirtual(ref  EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_NoVirtual(this.NativeObject, ref quality);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Function(ref EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					bool csret=GetCompositingQuality(ref quality);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(IntPtr pNativeObject, ref EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 获取显示质量
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetCompositingQuality(ref  EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(this.NativeObject, ref quality);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCompositingQuality_CallBack_void_EVCompositingQuality(EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				protected setCompositingQuality_CallBack_void_EVCompositingQuality m_setCompositingQuality_CallBack_void_EVCompositingQuality;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 设置显示叠加质量
				/// </summary>
				/// <param name="mode">叠加质量</param>
				/// <returns></returns>
				public virtual void SetCompositingQuality_NoVirtual(EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_NoVirtual(this.NativeObject, quality);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Function(EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					SetCompositingQuality(quality);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(IntPtr pNativeObject, EarthView.World.Display.EVCOMPOSITINGQUALITY quality);

				/// <summary>
				/// 设置显示叠加质量
				/// </summary>
				/// <param name="mode">叠加质量</param>
				/// <returns></returns>
				public virtual void SetCompositingQuality(EarthView.World.Display.EVCOMPOSITINGQUALITY quality)
				{
					EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(this.NativeObject, quality);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint(ref EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				protected getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 获取字体渲染方式
				/// </summary>
				/// <param name="mode">输出：字体渲染方式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetTextRenderingHint_NoVirtual(ref  EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_NoVirtual(this.NativeObject, ref hint);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Function(ref EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					bool csret=GetTextRenderingHint(ref hint);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(IntPtr pNativeObject, ref EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 获取字体渲染方式
				/// </summary>
				/// <param name="mode">输出：字体渲染方式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetTextRenderingHint(ref  EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(this.NativeObject, ref hint);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setTextRenderingHint_CallBack_void_EVTextRenderingHint(EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				protected setTextRenderingHint_CallBack_void_EVTextRenderingHint m_setTextRenderingHint_CallBack_void_EVTextRenderingHint;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 设置字体渲染方式
				/// </summary>
				/// <param name="mode">字体渲染方式</param>
				/// <returns></returns>
				public virtual void SetTextRenderingHint_NoVirtual(EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_NoVirtual(this.NativeObject, hint);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Function(EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					SetTextRenderingHint(hint);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(IntPtr pNativeObject, EarthView.World.Display.EVTEXTRENDERINGHINT hint);

				/// <summary>
				/// 设置字体渲染方式
				/// </summary>
				/// <param name="mode">字体渲染方式</param>
				/// <returns></returns>
				public virtual void SetTextRenderingHint(EarthView.World.Display.EVTEXTRENDERINGHINT hint)
				{
					EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(this.NativeObject, hint);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getInterpolationMode_CallBack_ev_bool_EVInterpolationMode(ref EarthView.World.Display.EVINTERPOLATIONMODE mode);

				protected getInterpolationMode_CallBack_ev_bool_EVInterpolationMode m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 获取插值模式
				/// </summary>
				/// <param name="mode">输出：插值模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetInterpolationMode_NoVirtual(ref  EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Function(ref EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					bool csret=GetInterpolationMode(ref mode);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(IntPtr pNativeObject, ref EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 获取插值模式
				/// </summary>
				/// <param name="mode">输出：插值模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetInterpolationMode(ref  EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setInterpolationMode_CallBack_void_EVInterpolationMode(EarthView.World.Display.EVINTERPOLATIONMODE mode);

				protected setInterpolationMode_CallBack_void_EVInterpolationMode m_setInterpolationMode_CallBack_void_EVInterpolationMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 设置插值模式
				/// </summary>
				/// <param name="mode">插值模式</param>
				/// <returns></returns>
				public virtual void SetInterpolationMode_NoVirtual(EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_NoVirtual(this.NativeObject, mode);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Function(EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					SetInterpolationMode(mode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(IntPtr pNativeObject, EarthView.World.Display.EVINTERPOLATIONMODE mode);

				/// <summary>
				/// 设置插值模式
				/// </summary>
				/// <param name="mode">插值模式</param>
				/// <returns></returns>
				public virtual void SetInterpolationMode(EarthView.World.Display.EVINTERPOLATIONMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(this.NativeObject, mode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getSmoothingMode_CallBack_ev_bool_EVSmoothingMode(ref EarthView.World.Display.EVSMOOTHINGMODE mode);

				protected getSmoothingMode_CallBack_ev_bool_EVSmoothingMode m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 获取平滑模式
				/// </summary>
				/// <param name="mode">输出：平滑模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetSmoothingMode_NoVirtual(ref  EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Function(ref EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					bool csret=GetSmoothingMode(ref mode);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(IntPtr pNativeObject, ref EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 获取平滑模式
				/// </summary>
				/// <param name="mode">输出：平滑模式</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetSmoothingMode(ref  EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setSmoothingMode_CallBack_void_EVSmoothingMode(EarthView.World.Display.EVSMOOTHINGMODE mode);

				protected setSmoothingMode_CallBack_void_EVSmoothingMode m_setSmoothingMode_CallBack_void_EVSmoothingMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 设置平滑模式
				/// </summary>
				/// <param name="mode">平滑模式</param>
				/// <returns></returns>
				public virtual void SetSmoothingMode_NoVirtual(EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_NoVirtual(this.NativeObject, mode);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Function(EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					SetSmoothingMode(mode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(IntPtr pNativeObject, EarthView.World.Display.EVSMOOTHINGMODE mode);

				/// <summary>
				/// 设置平滑模式
				/// </summary>
				/// <param name="mode">平滑模式</param>
				/// <returns></returns>
				public virtual void SetSmoothingMode(EarthView.World.Display.EVSMOOTHINGMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(this.NativeObject, mode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode(ref EarthView.World.Display.EVPIXELOFFSETMODE mode);

				protected getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 获取像素偏移模式
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetPixelOffsetMode_NoVirtual(ref  EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_NoVirtual(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Function(ref EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					bool csret=GetPixelOffsetMode(ref mode);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(IntPtr pNativeObject, ref EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 获取像素偏移模式
				/// </summary>
				/// <param name="mode">输出：叠加质量</param>
				/// <returns>成功返回true；否则返回false</returns>
				public virtual bool GetPixelOffsetMode(ref  EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					byte ret=EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(this.NativeObject, ref mode);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPixelOffsetMode_CallBack_void_EVPixelOffsetMode(EarthView.World.Display.EVPIXELOFFSETMODE mode);

				protected setPixelOffsetMode_CallBack_void_EVPixelOffsetMode m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 设置像素偏移模式
				/// </summary>
				/// <param name="mode">像素偏移模式</param>
				/// <returns></returns>
				public virtual void SetPixelOffsetMode_NoVirtual(EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_NoVirtual(this.NativeObject, mode);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Function(EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					SetPixelOffsetMode(mode);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(IntPtr pNativeObject, EarthView.World.Display.EVPIXELOFFSETMODE mode);

				/// <summary>
				/// 设置像素偏移模式
				/// </summary>
				/// <param name="mode">像素偏移模式</param>
				/// <returns></returns>
				public virtual void SetPixelOffsetMode(EarthView.World.Display.EVPIXELOFFSETMODE mode)
				{
					EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(this.NativeObject, mode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void loadFromXML_CallBack_void_CXmlElement(IntPtr element);

				protected loadFromXML_CallBack_void_CXmlElement m_loadFromXML_CallBack_void_CXmlElement;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

				/// <summary>
				/// 反序列化
				/// </summary>
				public virtual void LoadFromXML_NoVirtual(EarthView.World.Core.XmlElement element)
				{
					EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
					
				}

				protected  void EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Function(IntPtr element)
				{
					EarthView.World.Core.XmlElement csobj_element = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_element.BindNativeObject(element,"CXmlElement");
					csobj_element.Delegate = true;
					IClassFactory csobj_elementClassFactory = GlobalClassFactoryMap.Get(csobj_element.GetCppInstanceTypeName());
					if (csobj_elementClassFactory != null)
					{
						csobj_element.Delegate = true;
						csobj_element = csobj_elementClassFactory.Create() as EarthView.World.Core.XmlElement;
						csobj_element.BindNativeObject(element, "CXmlElement");
						csobj_element.Delegate = true;
					}
					
					LoadFromXML(csobj_element);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

				/// <summary>
				/// 反序列化
				/// </summary>
				public virtual void LoadFromXML(EarthView.World.Core.XmlElement element)
				{
					EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr toXmlElement_CallBack_CXmlElement();

				protected toXmlElement_CallBack_CXmlElement m_toXmlElement_CallBack_CXmlElement;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 序列化
				/// </summary>
				public virtual EarthView.World.Core.XmlElement ToXmlElement_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_NoVirtual(this.NativeObject);
					
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

				protected  IntPtr EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Function()
				{
					EarthView.World.Core.XmlElement csret=ToXmlElement();
					
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
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(IntPtr pNativeObject);

				/// <summary>
				/// 序列化
				/// </summary>
				public virtual EarthView.World.Core.XmlElement ToXmlElement()
				{
					IntPtr __ptr = EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(this.NativeObject);
					
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
						private static bool bLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_d.dll");
						private static bool csbLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_d.so");
						private static bool csbLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

					#else 
						private static bool bLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_d.dll");
						private static bool csbLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface.dll");
						private static bool csbLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

					#elif Linux 
						private static bool bLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface.so");
						private static bool csbLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_CSharp.so");

					#else 
						private static bool bLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface.dll");
						private static bool csbLoadIdisplayoptions = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplayOptions", new IdisplayoptionsClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplayOptionsProxy", new IdisplayoptionsClassFactory());

				public Idisplayoptions(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(IntPtr pObject, getCompositingMode_CallBack_ev_bool_EVCompositingMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(IntPtr pObject, setEVCompositingMode_CallBack_void_EVCompositingMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(IntPtr pObject, getCompositingQuality_CallBack_ev_bool_EVCompositingQuality pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(IntPtr pObject, setCompositingQuality_CallBack_void_EVCompositingQuality pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(IntPtr pObject, getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(IntPtr pObject, setTextRenderingHint_CallBack_void_EVTextRenderingHint pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(IntPtr pObject, getInterpolationMode_CallBack_ev_bool_EVInterpolationMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(IntPtr pObject, setInterpolationMode_CallBack_void_EVInterpolationMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(IntPtr pObject, getSmoothingMode_CallBack_ev_bool_EVSmoothingMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(IntPtr pObject, setSmoothingMode_CallBack_void_EVSmoothingMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(IntPtr pObject, getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(IntPtr pObject, setPixelOffsetMode_CallBack_void_EVPixelOffsetMode pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(IntPtr pObject, loadFromXML_CallBack_void_CXmlElement pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getCompositingMode_CallBack_ev_bool_EVCompositingMode = EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Function;
						GC.KeepAlive(m_getCompositingMode_CallBack_ev_bool_EVCompositingMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(this.NativeObject, m_getCompositingMode_CallBack_ev_bool_EVCompositingMode);
						m_setEVCompositingMode_CallBack_void_EVCompositingMode = EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Function;
						GC.KeepAlive(m_setEVCompositingMode_CallBack_void_EVCompositingMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(this.NativeObject, m_setEVCompositingMode_CallBack_void_EVCompositingMode);
						m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality = EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Function;
						GC.KeepAlive(m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(this.NativeObject, m_getCompositingQuality_CallBack_ev_bool_EVCompositingQuality);
						m_setCompositingQuality_CallBack_void_EVCompositingQuality = EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Function;
						GC.KeepAlive(m_setCompositingQuality_CallBack_void_EVCompositingQuality);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(this.NativeObject, m_setCompositingQuality_CallBack_void_EVCompositingQuality);
						m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint = EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Function;
						GC.KeepAlive(m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(this.NativeObject, m_getTextRenderingHint_CallBack_ev_bool_EVTextRenderingHint);
						m_setTextRenderingHint_CallBack_void_EVTextRenderingHint = EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Function;
						GC.KeepAlive(m_setTextRenderingHint_CallBack_void_EVTextRenderingHint);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(this.NativeObject, m_setTextRenderingHint_CallBack_void_EVTextRenderingHint);
						m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode = EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Function;
						GC.KeepAlive(m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(this.NativeObject, m_getInterpolationMode_CallBack_ev_bool_EVInterpolationMode);
						m_setInterpolationMode_CallBack_void_EVInterpolationMode = EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Function;
						GC.KeepAlive(m_setInterpolationMode_CallBack_void_EVInterpolationMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(this.NativeObject, m_setInterpolationMode_CallBack_void_EVInterpolationMode);
						m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode = EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Function;
						GC.KeepAlive(m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(this.NativeObject, m_getSmoothingMode_CallBack_ev_bool_EVSmoothingMode);
						m_setSmoothingMode_CallBack_void_EVSmoothingMode = EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Function;
						GC.KeepAlive(m_setSmoothingMode_CallBack_void_EVSmoothingMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(this.NativeObject, m_setSmoothingMode_CallBack_void_EVSmoothingMode);
						m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode = EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Function;
						GC.KeepAlive(m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(this.NativeObject, m_getPixelOffsetMode_CallBack_ev_bool_EVPixelOffsetMode);
						m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode = EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Function;
						GC.KeepAlive(m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(this.NativeObject, m_setPixelOffsetMode_CallBack_void_EVPixelOffsetMode);
						m_loadFromXML_CallBack_void_CXmlElement = EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Function;
						GC.KeepAlive(m_loadFromXML_CallBack_void_CXmlElement);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(this.NativeObject, m_loadFromXML_CallBack_void_CXmlElement);
						m_toXmlElement_CallBack_CXmlElement = EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Function;
						GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement);
						EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement);
					}
				}
				public static Idisplayoptions FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Idisplayoptions obj = baseObj as  Idisplayoptions;
					if (object.Equals(obj, null))
					{
						obj = new Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "IDisplayOptions");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IdisplayoptionsClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Idisplayoptions emptyInstance = new Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
