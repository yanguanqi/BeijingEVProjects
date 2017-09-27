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
			/// path类
			/// </summary>
			public class DataPath : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public DataPath() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDataPathProxy", null);
					if (!"EarthView.World.Display.DataPath".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(double x1, double y1, double x2, double y2);

				protected addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x1, double y1, double x2, double y2);

				/// <summary>
				/// 增加贝塞尔样条
				/// </summary>
				/// <param name="x1">起点x1坐标</param>
				/// <param name="y1">起点y1坐标</param>
				/// <param name="x2">终点x2坐标</param>
				/// <param name="y2">终点y2坐标</param>
				/// <returns></returns>
				public virtual void AddPathLine_NoVirtual(double x1, double y1, double x2, double y2)
				{
					EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, x1, y1, x2, y2);
					
				}

				protected  void EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(double x1, double y1, double x2, double y2)
				{
					AddPathLine(x1, y1, x2, y2);
					
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
				private static extern void EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x1, double y1, double x2, double y2);

				/// <summary>
				/// 增加贝塞尔样条
				/// </summary>
				/// <param name="x1">起点x1坐标</param>
				/// <param name="y1">起点y1坐标</param>
				/// <param name="x2">终点x2坐标</param>
				/// <param name="y2">终点y2坐标</param>
				/// <returns></returns>
				public virtual void AddPathLine(double x1, double y1, double x2, double y2)
				{
					EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x1, y1, x2, y2);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);

				protected addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 m_addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);

				/// <summary>
				///  增加弧线
				/// </summary>
				/// <param name="x">弧中心x</param>
				/// <param name="y">弧中心y</param>
				/// <param name="width">长半轴</param>
				/// <param name="height">短半轴</param>
				/// <param name="startAngle">开始角度</param>
				/// <param name="sweepAngle">扫描角度</param>
				/// <returns></returns>
				public virtual void AddPathArc_NoVirtual(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
				{
					EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					
				}

				protected  void EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
				{
					AddPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					
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
				private static extern void EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);

				/// <summary>
				///  增加弧线
				/// </summary>
				/// <param name="x">弧中心x</param>
				/// <param name="y">弧中心y</param>
				/// <param name="width">长半轴</param>
				/// <param name="height">短半轴</param>
				/// <param name="startAngle">开始角度</param>
				/// <param name="sweepAngle">扫描角度</param>
				/// <returns></returns>
				public virtual void AddPathArc(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
				{
					EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);

				protected addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 m_addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);

				/// <summary>
				/// 增加饼图
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="majorAxe">长半轴</param>
				/// <param name="minorAxe">短半轴</param>
				/// <param name="startAngle">开始角度</param>
				/// <param name="sweepAngle">扫描角度</param>
				/// <returns></returns>
				public virtual void AddPathPie_NoVirtual(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
				{
					EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					
				}

				protected  void EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
				{
					AddPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					
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
				private static extern void EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle);

				/// <summary>
				/// 增加饼图
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="majorAxe">长半轴</param>
				/// <param name="minorAxe">短半轴</param>
				/// <param name="startAngle">开始角度</param>
				/// <param name="sweepAngle">扫描角度</param>
				/// <returns></returns>
				public virtual void AddPathPie(double x, double y, double majorAxe, double minorAxe, double startAngle, double sweepAngle)
				{
					EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(double x, double y, double majorAxe, double minorAxe);

				protected addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y, double majorAxe, double minorAxe);

				/// <summary>
				/// 增加椭圆
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="majorAxe">长半轴</param>
				/// <param name="minorAxe">短半轴</param>
				/// <returns></returns>
				public virtual void AddPathEllipse_NoVirtual(double x, double y, double majorAxe, double minorAxe)
				{
					EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y, majorAxe, minorAxe);
					
				}

				protected  void EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(double x, double y, double majorAxe, double minorAxe)
				{
					AddPathEllipse(x, y, majorAxe, minorAxe);
					
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
				private static extern void EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double majorAxe, double minorAxe);

				/// <summary>
				/// 增加椭圆
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="majorAxe">长半轴</param>
				/// <param name="minorAxe">短半轴</param>
				/// <returns></returns>
				public virtual void AddPathEllipse(double x, double y, double majorAxe, double minorAxe)
				{
					EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, majorAxe, minorAxe);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64(double x, double y, double radius);

				protected addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64 m_addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x, double y, double radius);

				/// <summary>
				/// 增加圆
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="radius">圆半径</param>
				/// <returns></returns>
				public virtual void AddPathCircle_NoVirtual(double x, double y, double radius)
				{
					EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, x, y, radius);
					
				}

				protected  void EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Function(double x, double y, double radius)
				{
					AddPathCircle(x, y, radius);
					
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
				private static extern void EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double radius);

				/// <summary>
				/// 增加圆
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="radius">圆半径</param>
				/// <returns></returns>
				public virtual void AddPathCircle(double x, double y, double radius)
				{
					EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, radius);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

				protected addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 m_addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

				/// <summary>
				/// 增加贝塞尔样条
				/// </summary>
				/// <param name="x1">起点x1坐标</param>
				/// <param name="y1">起点y1坐标</param>
				/// <param name="x2">控制点x2坐标</param>
				/// <param name="y2">控制点y2坐标</param>
				/// <param name="x3">控制点x3坐标</param>
				/// <param name="y3">控制点y3坐标</param>
				/// <param name="x4">终点x4坐标</param>
				/// <param name="y4">终点y4坐标</param>
				/// <returns></returns>
				public virtual void AddPathBezier_NoVirtual(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
				{
					EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, x1, y1, x2, y2, x3, y3, x4, y4);
					
				}

				protected  void EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
				{
					AddPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
					
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
				private static extern void EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

				/// <summary>
				/// 增加贝塞尔样条
				/// </summary>
				/// <param name="x1">起点x1坐标</param>
				/// <param name="y1">起点y1坐标</param>
				/// <param name="x2">控制点x2坐标</param>
				/// <param name="y2">控制点y2坐标</param>
				/// <param name="x3">控制点x3坐标</param>
				/// <param name="y3">控制点y3坐标</param>
				/// <param name="x4">终点x4坐标</param>
				/// <param name="y4">终点y4坐标</param>
				/// <returns></returns>
				public virtual void AddPathBezier(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
				{
					EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x1, y1, x2, y2, x3, y3, x4, y4);
					
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
				private static extern void EarthView_World_Display_CDataPath_addRect_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double w, double h);

				/// <summary>
				/// 增加矩形
				/// </summary>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <param name="w">矩形宽度</param>
				/// <param name="h">矩形高度</param>
				/// <returns></returns>
				public void AddRect(double x, double y, double w, double h)
				{
					EarthView_World_Display_CDataPath_addRect_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, w, h);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(ref double x, ref double y, ref double width, ref double height);

				protected getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, ref double x, ref double y, ref double width, ref double height);

				/// <summary>
				/// 获取外包矩形大小
				/// </summary>
				/// <param name="width">宽度</param>
				/// <param name="height">高度</param>
				/// <returns></returns>
				public virtual void GetBound_NoVirtual(ref double x, ref double y, ref double width, ref double height)
				{
					EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, ref x, ref y, ref width, ref height);
					
				}

				protected  void EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(ref double x, ref double y, ref double width, ref double height)
				{
					GetBound(ref x, ref y, ref width, ref height);
					
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
				private static extern void EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, ref double x, ref double y, ref double width, ref double height);

				/// <summary>
				/// 获取外包矩形大小
				/// </summary>
				/// <param name="width">宽度</param>
				/// <param name="height">高度</param>
				/// <returns></returns>
				public virtual void GetBound(ref double x, ref double y, ref double width, ref double height)
				{
					EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, ref x, ref y, ref width, ref height);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte closePath_CallBack_ev_bool();

				protected closePath_CallBack_ev_bool m_closePath_CallBack_ev_bool;

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
				private static extern byte EarthView_World_Display_CDataPath_closePath_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 闭合Path
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool ClosePath_NoVirtual()
				{
					byte ret=EarthView_World_Display_CDataPath_closePath_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_CDataPath_closePath_ev_bool_Function()
				{
					bool csret=ClosePath();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Display_CDataPath_closePath_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 闭合Path
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool ClosePath()
				{
					byte ret=EarthView_World_Display_CDataPath_closePath_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte clearPath_CallBack_ev_bool();

				protected clearPath_CallBack_ev_bool m_clearPath_CallBack_ev_bool;

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
				private static extern byte EarthView_World_Display_CDataPath_clearPath_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 清空所有Path
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool ClearPath_NoVirtual()
				{
					byte ret=EarthView_World_Display_CDataPath_clearPath_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_CDataPath_clearPath_ev_bool_Function()
				{
					bool csret=ClearPath();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Display_CDataPath_clearPath_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 清空所有Path
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual bool ClearPath()
				{
					byte ret=EarthView_World_Display_CDataPath_clearPath_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setRotateAngle_CallBack_void_ev_real64(double rotateAngle);

				protected setRotateAngle_CallBack_void_ev_real64 m_setRotateAngle_CallBack_void_ev_real64;

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
				private static extern void EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_NoVirtual(IntPtr pNativeObject, double rotateAngle);

				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="rotateAngle">旋转角度</param>
				/// <returns></returns>
				public virtual void SetRotateAngle_NoVirtual(double rotateAngle)
				{
					EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_NoVirtual(this.NativeObject, rotateAngle);
					
				}

				protected  void EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Function(double rotateAngle)
				{
					SetRotateAngle(rotateAngle);
					
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
				private static extern void EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(IntPtr pNativeObject, double rotateAngle);

				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="rotateAngle">旋转角度</param>
				/// <returns></returns>
				public virtual void SetRotateAngle(double rotateAngle)
				{
					EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(this.NativeObject, rotateAngle);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getRotateAngle_CallBack_ev_real64();

				protected getRotateAngle_CallBack_ev_real64 m_getRotateAngle_CallBack_ev_real64;

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
				private static extern double EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取旋转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回旋转角度</returns>
				public virtual double GetRotateAngle_NoVirtual()
				{
					double ret=EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Function()
				{
					double csret=GetRotateAngle();
					
					return csret;
					
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
				private static extern double EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取旋转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回旋转角度</returns>
				public virtual double GetRotateAngle()
				{
					double ret=EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(this.NativeObject);
					
					return ret;
					
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
				private static extern IntPtr EarthView_World_Display_CDataPath_getNativePath_void(IntPtr pNativeObject);

				/// <summary>
				/// 获取path
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回path指针</returns>
				public IntPtr GetNativePath()
				{
					IntPtr __ptr = EarthView_World_Display_CDataPath_getNativePath_void(this.NativeObject);
					
					return __ptr;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataPath = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadDataPath = LoadDll.Load("EV_Display_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataPath = LoadDll.Load("EV_Display_d.so");
						private static bool csbLoadDataPath = LoadDll.Load("EV_Display_CSharp_d.so");

					#else 
						private static bool bLoadDataPath = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadDataPath = LoadDll.Load("EV_Display_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataPath = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadDataPath = LoadDll.Load("EV_Display_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataPath = LoadDll.Load("EV_Display.so");
						private static bool csbLoadDataPath = LoadDll.Load("EV_Display_CSharp.so");

					#else 
						private static bool bLoadDataPath = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadDataPath = LoadDll.Load("EV_Display_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CDataPath", new DataPathClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CDataPathProxy", new DataPathClassFactory());

				public DataPath(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(IntPtr pObject, addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_closePath_ev_bool(IntPtr pObject, closePath_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_clearPath_ev_bool(IntPtr pObject, clearPath_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(IntPtr pObject, setRotateAngle_CallBack_void_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(IntPtr pObject, getRotateAngle_CallBack_ev_real64 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathLine_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_addPathLine_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						m_addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathArc_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_addPathArc_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
						m_addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathPie_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_addPathPie_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
						m_addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathEllipse_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_addPathEllipse_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						m_addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathCircle_void_ev_real64_ev_real64_ev_real64(this.NativeObject, m_addPathCircle_CallBack_void_ev_real64_ev_real64_ev_real64);
						m_addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_addPathBezier_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_addPathBezier_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
						m_getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_getBound_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getBound_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						m_closePath_CallBack_ev_bool = EarthView_World_Display_CDataPath_closePath_ev_bool_Function;
						GC.KeepAlive(m_closePath_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_closePath_ev_bool(this.NativeObject, m_closePath_CallBack_ev_bool);
						m_clearPath_CallBack_ev_bool = EarthView_World_Display_CDataPath_clearPath_ev_bool_Function;
						GC.KeepAlive(m_clearPath_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_clearPath_ev_bool(this.NativeObject, m_clearPath_CallBack_ev_bool);
						m_setRotateAngle_CallBack_void_ev_real64 = EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64_Function;
						GC.KeepAlive(m_setRotateAngle_CallBack_void_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_setRotateAngle_void_ev_real64(this.NativeObject, m_setRotateAngle_CallBack_void_ev_real64);
						m_getRotateAngle_CallBack_ev_real64 = EarthView_World_Display_CDataPath_getRotateAngle_ev_real64_Function;
						GC.KeepAlive(m_getRotateAngle_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CDataPath_getRotateAngle_ev_real64(this.NativeObject, m_getRotateAngle_CallBack_ev_real64);
					}
				}
				public static DataPath FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataPath obj = baseObj as  DataPath;
					if (object.Equals(obj, null))
					{
						obj = new DataPath(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDataPath");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataPathClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataPath emptyInstance = new DataPath(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public enum EVCOMBINEMODE
			{
						CM_Replace,
						CM_Intersect,
						CM_ModeUnion,
						CM_Xor,
						CM_Exclude,
						CM_Complement
			
			}

			public class DataRegion : EarthView.World.Core.AllocatedObject
			{
				public DataRegion() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDataRegion",  null);
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
				private static extern void EarthView_World_Display_CDataRegion_addRect_void_ev_real64_ev_real64_ev_real64_ev_real64_EVCombineMode(IntPtr pNativeObject, double x, double y, double w, double h, EarthView.World.Display.EVCOMBINEMODE mode);

				public void AddRect(double x, double y, double w, double h, EarthView.World.Display.EVCOMBINEMODE mode)
				{
					EarthView_World_Display_CDataRegion_addRect_void_ev_real64_ev_real64_ev_real64_ev_real64_EVCombineMode(this.NativeObject, x, y, w, h, mode);
					
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
				private static extern void EarthView_World_Display_CDataRegion_addPath_void_CDataPath_EVCombineMode(IntPtr pNativeObject, IntPtr path, EarthView.World.Display.EVCOMBINEMODE mode);

				public void AddPath(EarthView.World.Display.DataPath path, EarthView.World.Display.EVCOMBINEMODE mode)
				{
					EarthView_World_Display_CDataRegion_addPath_void_CDataPath_EVCombineMode(this.NativeObject, object.Equals(path, null) ? IntPtr.Zero : path.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDataRegion_addRegion_void_CDataRegion_EVCombineMode(IntPtr pNativeObject, IntPtr region, EarthView.World.Display.EVCOMBINEMODE mode);

				public void AddRegion(EarthView.World.Display.DataRegion region, EarthView.World.Display.EVCOMBINEMODE mode)
				{
					EarthView_World_Display_CDataRegion_addRegion_void_CDataRegion_EVCombineMode(this.NativeObject, object.Equals(region, null) ? IntPtr.Zero : region.NativeObject, mode);
					
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
				private static extern void EarthView_World_Display_CDataRegion_makeEmpty_void(IntPtr pNativeObject);

				public void MakeEmpty()
				{
					EarthView_World_Display_CDataRegion_makeEmpty_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataRegion = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadDataRegion = LoadDll.Load("EV_Display_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataRegion = LoadDll.Load("EV_Display_d.so");
						private static bool csbLoadDataRegion = LoadDll.Load("EV_Display_CSharp_d.so");

					#else 
						private static bool bLoadDataRegion = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadDataRegion = LoadDll.Load("EV_Display_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataRegion = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadDataRegion = LoadDll.Load("EV_Display_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataRegion = LoadDll.Load("EV_Display.so");
						private static bool csbLoadDataRegion = LoadDll.Load("EV_Display_CSharp.so");

					#else 
						private static bool bLoadDataRegion = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadDataRegion = LoadDll.Load("EV_Display_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CDataRegion", new DataRegionClassFactory());

				public DataRegion(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DataRegion FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataRegion obj = baseObj as  DataRegion;
					if (object.Equals(obj, null))
					{
						obj = new DataRegion(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDataRegion");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataRegionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataRegion emptyInstance = new DataRegion(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
