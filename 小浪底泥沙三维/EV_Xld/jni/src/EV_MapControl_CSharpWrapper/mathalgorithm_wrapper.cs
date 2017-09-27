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
		namespace Spatial2D
		{
			namespace Controls
			{
				/// <summary>
				/// 部分数据公式
				/// </summary>
				public class MathFormula : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public MathFormula() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMathFormula",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_cosinTheorem_ev_real64_CPoint_CPoint_CPoint(IntPtr p0, IntPtr p1, IntPtr p2);

					/// <summary>
					/// 余弦定理求取夹角
					/// </summary>
					/// <param name="p0">顶角位置</param>
					/// <param name="p1">起始点位置</param>
					/// <param name="p2">终止点位置</param>
					/// <returns></returns>
					public static double CosinTheorem(EarthView.World.Spatial.Geometry.Point p0, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_cosinTheorem_ev_real64_CPoint_CPoint_CPoint(object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_cosinTheorem_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double x0, double y0, double x1, double y1, double x2, double y2);

					/// <summary>
					/// 余弦定理求取夹角
					/// </summary>
					/// <param name="x0">顶角位置X坐标</param>
					/// <param name="y0">顶角位置Y坐标</param>
					/// <param name="x1">起始点位置X坐标</param>
					/// <param name="y1">起始点位置Y坐标</param>
					/// <param name="x2">终止点位置X坐标</param>
					/// <param name="y2">终止点位置Y坐标</param>
					/// <returns></returns>
					public static double CosinTheorem(double x0, double y0, double x1, double y1, double x2, double y2)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_cosinTheorem_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(x0, y0, x1, y1, x2, y2);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_pointToLine_ev_real64_CPoint_CPoint_CPoint(IntPtr pnt, IntPtr pnt0, IntPtr pnt1);

					/// <summary>
					/// 点到线段的距离
					/// </summary>
					/// <param name="pnt">点的位置</param>
					/// <param name="p0">线段的起始位置</param>
					/// <param name="p1">线段的终止位置</param>
					/// <returns></returns>
					public static double PointToLine(EarthView.World.Spatial.Geometry.Point pnt, EarthView.World.Spatial.Geometry.Point pnt0, EarthView.World.Spatial.Geometry.Point pnt1)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_pointToLine_ev_real64_CPoint_CPoint_CPoint(object.Equals(pnt, null) ? IntPtr.Zero : pnt.NativeObject, object.Equals(pnt0, null) ? IntPtr.Zero : pnt0.NativeObject, object.Equals(pnt1, null) ? IntPtr.Zero : pnt1.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_pointToLine_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double dx, double dy, double x0, double y0, double x1, double y1);

					/// <summary>
					/// 点到线段的距离
					/// </summary>
					/// <param name="dx">点的X坐标</param>
					/// <param name="dy">点的Y坐标</param>
					/// <param name="x0">线段的起始位置X坐标</param>
					/// <param name="y0">线段的起始位置Y坐标</param>
					/// <param name="x1">线段的终止位置X坐标</param>
					/// <param name="y1">线段的终止位置Y坐标</param>
					/// <returns></returns>
					public static double PointToLine(double dx, double dy, double x0, double y0, double x1, double y1)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_pointToLine_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(dx, dy, x0, y0, x1, y1);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_pointToPoint_ev_real64_CPoint_CPoint(IntPtr pnt1, IntPtr pnt2);

					/// <summary>
					/// 点到点的距离
					/// </summary>
					/// <param name="pnt1">第一个点的位置</param>
					/// <param name="pnt2">第二个点的位置</param>
					/// <returns></returns>
					public static double PointToPoint(EarthView.World.Spatial.Geometry.Point pnt1, EarthView.World.Spatial.Geometry.Point pnt2)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_pointToPoint_ev_real64_CPoint_CPoint(object.Equals(pnt1, null) ? IntPtr.Zero : pnt1.NativeObject, object.Equals(pnt2, null) ? IntPtr.Zero : pnt2.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_testTurn_ev_real64_CPoint_CPoint_CPoint(IntPtr p0, IntPtr p1, IntPtr p2);

					/// <summary>
					/// 判断p2拐向,p0->p1->p2
					/// </summary>
					/// <param name="p0">第一个点位置</param>
					/// <param name="p1">第二个点位置</param>
					/// <param name="p2">第三个点位置</param>
					/// <returns>如果大于0，右拐，小于0，向左拐，等于0则三点共线</returns>
					public static double TestTurn(EarthView.World.Spatial.Geometry.Point p0, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_testTurn_ev_real64_CPoint_CPoint_CPoint(object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CMathFormula_angle_aob_ev_real64_CPoint_CPoint_CPoint(IntPtr po, IntPtr pa, IntPtr pb);

					/// <summary>
					/// 求取角aob的值
					/// </summary>
					/// <param name="p0">项角位置</param>
					/// <param name="pa">起始点位置</param>
					/// <param name="pb">终止点位置</param>
					/// <returns>pb在po_pa的左侧，值在0~180之间, pb在po_pa的右侧，值在180~360之间</returns>
					public static double Angle_aob(EarthView.World.Spatial.Geometry.Point po, EarthView.World.Spatial.Geometry.Point pa, EarthView.World.Spatial.Geometry.Point pb)
					{
						double ret=EarthView_World_Spatial2D_Controls_CMathFormula_angle_aob_ev_real64_CPoint_CPoint_CPoint(object.Equals(po, null) ? IntPtr.Zero : po.NativeObject, object.Equals(pa, null) ? IntPtr.Zero : pa.NativeObject, object.Equals(pb, null) ? IntPtr.Zero : pb.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_shareLine_ev_bool_CPoint_CPoint_CPoint(IntPtr p1, IntPtr p2, IntPtr q);

					/// <summary>
					/// 判断三点是否共线（包含延长线）
					/// </summary>
					/// <param name="p1">第一个点</param>
					/// <param name="p2">第二个点</param>
					/// <param name="q">第三个点</param>
					/// <returns>如果共线则返回true,反之则否</returns>
					public static bool ShareLine(EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2, EarthView.World.Spatial.Geometry.Point q)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_shareLine_ev_bool_CPoint_CPoint_CPoint(object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject, object.Equals(q, null) ? IntPtr.Zero : q.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_shareLine_ev_bool_CPoint_CPoint_CPoint_ev_real64(IntPtr p1, IntPtr p2, IntPtr q, double precision);

					/// <summary>
					/// 判断三点是否共线（包含延长线）
					/// </summary>
					/// <param name="p1">第一个点</param>
					/// <param name="p2">第二个点</param>
					/// <param name="q">第三个点</param>
					/// <param name="precision">精度</param>
					/// <returns>如果共线则返回true,反之则否</returns>
					public static bool ShareLine(EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2, EarthView.World.Spatial.Geometry.Point q, double precision)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_shareLine_ev_bool_CPoint_CPoint_CPoint_ev_real64(object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject, object.Equals(q, null) ? IntPtr.Zero : q.NativeObject, precision);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_isPointOnLine_ev_bool_CPoint_CPoint_CPoint(IntPtr q, IntPtr p1, IntPtr p2);

					/// <summary>
					/// 判断点是否在线段上（不包含延长线）
					/// </summary>
					/// <param name="q">测试点</param>
					/// <param name="p1">线段的起始点</param>
					/// <param name="p2">线段的终止点</param>
					/// <returns>如果在线上，则返回true,反之则否</returns>
					public static bool IsPointOnLine(EarthView.World.Spatial.Geometry.Point q, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_isPointOnLine_ev_bool_CPoint_CPoint_CPoint(object.Equals(q, null) ? IntPtr.Zero : q.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_isPointOnLine_ev_bool_CPoint_CPoint_CPoint_ev_real64(IntPtr q, IntPtr p1, IntPtr p2, double precision);

					/// <summary>
					/// 判断点是否在线段上（不包含延长线）
					/// </summary>
					/// <param name="q">测试点</param>
					/// <param name="p1">线段的起始点</param>
					/// <param name="p2">线段的终止点</param>
					/// <param name="precision">精度</param>
					/// <returns>如果在线上，则返回true,反之则否</returns>
					public static bool IsPointOnLine(EarthView.World.Spatial.Geometry.Point q, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2, double precision)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_isPointOnLine_ev_bool_CPoint_CPoint_CPoint_ev_real64(object.Equals(q, null) ? IntPtr.Zero : q.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject, precision);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_isFootPoint_ev_bool_CPoint_CPoint_CPoint(IntPtr fp, IntPtr p1, IntPtr p2);

					/// <summary>
					/// 判断点是否为垂足，即线段p1_fp和线段p2_fp是否垂直
					/// </summary>
					/// <param name="fp">测试点</param>
					/// <param name="p1">线段的起始点</param>
					/// <param name="p2">线段的终止点</param>
					/// <returns>如果为真，则表明是垂足点</returns>
					public static bool IsFootPoint(EarthView.World.Spatial.Geometry.Point fp, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_isFootPoint_ev_bool_CPoint_CPoint_CPoint(object.Equals(fp, null) ? IntPtr.Zero : fp.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Controls_CMathFormula_getFootPoint_ev_int32_CPoint_CPoint_ev_real64_ev_real64(IntPtr pPoint1, IntPtr pPoint2, ref double x, ref double y);

					/// <summary>
					/// 获取垂足点
					/// </summary>
					/// <param name="pPoint1">线段的起始点</param>
					/// <param name="pPoint2">线段的终止点</param>
					/// <param name="x">获取垂足经过的某个点的X坐标，返回垂足的X坐标值</param>
					/// <param name="y">获取垂足经过的某个点的Y坐标，返回垂足的Y坐标值</param>
					/// <returns>垂足与线段的空间关系</returns>
					public static int GetFootPoint(EarthView.World.Spatial.Geometry.Point pPoint1, EarthView.World.Spatial.Geometry.Point pPoint2, ref double x, ref double y)
					{
						int ret=EarthView_World_Spatial2D_Controls_CMathFormula_getFootPoint_ev_int32_CPoint_CPoint_ev_real64_ev_real64(object.Equals(pPoint1, null) ? IntPtr.Zero : pPoint1.NativeObject, object.Equals(pPoint2, null) ? IntPtr.Zero : pPoint2.NativeObject, ref x, ref y);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_isParallel_ev_bool_CPoint_CPoint_CPoint_CPoint(IntPtr pStartPL1, IntPtr pEndPL1, IntPtr pStartPL2, IntPtr pEndPL2);

					/// <summary>
					/// 判断两条线段是否平行
					/// </summary>
					/// <param name="pStartPL1">线段的起始点</param>
					/// <param name="pEndPL1">线段的终止点</param>
					/// <param name="pStartPL2">获取垂足经过的某个点的X坐标，返回垂足的X坐标值</param>
					/// <param name="pEndPL2">获取垂足经过的某个点的Y坐标，返回垂足的Y坐标值</param>
					/// <returns>如果两条线段平行，则返回true,否则返回false</returns>
					public static bool IsParallel(EarthView.World.Spatial.Geometry.Point pStartPL1, EarthView.World.Spatial.Geometry.Point pEndPL1, EarthView.World.Spatial.Geometry.Point pStartPL2, EarthView.World.Spatial.Geometry.Point pEndPL2)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_isParallel_ev_bool_CPoint_CPoint_CPoint_CPoint(object.Equals(pStartPL1, null) ? IntPtr.Zero : pStartPL1.NativeObject, object.Equals(pEndPL1, null) ? IntPtr.Zero : pEndPL1.NativeObject, object.Equals(pStartPL2, null) ? IntPtr.Zero : pStartPL2.NativeObject, object.Equals(pEndPL2, null) ? IntPtr.Zero : pEndPL2.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Controls_CMathFormula_isApproximate_ev_bool_ev_real64_ev_real64_ev_real64(double dValue1, double dValue2, double dTolerance);

					/// <summary>
					/// 判断两个值是否大约相等
					/// </summary>
					/// <param name="dValue1">用来判断的第一个值</param>
					/// <param name="dValue2">用来判断的第二个值</param>
					/// <param name="dTolerance">精确度</param>
					/// <returns>如果两个值相等，则返回true,否则返回false</returns>
					public static bool IsApproximate(double dValue1, double dValue2, double dTolerance)
					{
						byte ret=EarthView_World_Spatial2D_Controls_CMathFormula_isApproximate_ev_bool_ev_real64_ev_real64_ev_real64(dValue1, dValue2, dTolerance);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMathFormula = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadMathFormula = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMathFormula = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadMathFormula = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadMathFormula = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadMathFormula = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMathFormula = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadMathFormula = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadMathFormula = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadMathFormula = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadMathFormula = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadMathFormula = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CMathFormula", new MathFormulaClassFactory());

					public MathFormula(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MathFormula FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MathFormula obj = baseObj as  MathFormula;
						if (object.Equals(obj, null))
						{
							obj = new MathFormula(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMathFormula");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MathFormulaClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MathFormula emptyInstance = new MathFormula(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 关于圆角矩形的算法，帮助生成控制点
				/// </summary>
				public class RoundRectAlgori : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public RoundRectAlgori() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRoundRectAlgori",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CRoundRectAlgori_setRectangleRing_void_CPoint_CPoint_CPoint_CPoint(IntPtr pNativeObject, IntPtr p0, IntPtr p1, IntPtr p2, IntPtr p3);

					/// <summary>
					/// 通过传入四个控制点，生成第五个控制点和圆角率
					/// </summary>
					/// <param name="p0">测试点</param>
					/// <param name="p1">第一个控制点</param>
					/// <param name="p2">第二个控制点</param>
					/// <param name="p3">第三个控制点</param>
					/// <returns></returns>
					public void SetRectangleRing(EarthView.World.Spatial.Geometry.Point p0, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2, EarthView.World.Spatial.Geometry.Point p3)
					{
						EarthView_World_Spatial2D_Controls_CRoundRectAlgori_setRectangleRing_void_CPoint_CPoint_CPoint_CPoint(this.NativeObject, object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject, object.Equals(p3, null) ? IntPtr.Zero : p3.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CRoundRectAlgori_setRectangleRing_void_CRectangleRing(IntPtr pNativeObject, IntPtr rect);

					/// <summary>
					/// 传入矩形，生成控制点
					/// </summary>
					/// <param name="rect">矩形</param>
					/// <returns></returns>
					public void SetRectangleRing(EarthView.World.Spatial.Geometry.RectangleRing rect)
					{
						EarthView_World_Spatial2D_Controls_CRoundRectAlgori_setRectangleRing_void_CRectangleRing(this.NativeObject, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getFirst_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取第一个控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns>第一个控制点</returns>
					public EarthView.World.Spatial.Geometry.Point GetFirst()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getFirst_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getSecond_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取第二个控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns>第二个控制点</returns>
					public EarthView.World.Spatial.Geometry.Point GetSecond()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getSecond_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getThird_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取第三个控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns>第三个控制点</returns>
					public EarthView.World.Spatial.Geometry.Point GetThird()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getThird_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getForth_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取第四个控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns>第四个控制点</returns>
					public EarthView.World.Spatial.Geometry.Point GetForth()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getForth_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getFifth_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取第五个控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns>第五个控制点</returns>
					public EarthView.World.Spatial.Geometry.Point GetFifth()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getFifth_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getRoundRadius_void_ev_real64_ev_real64(IntPtr pNativeObject, ref double v12, ref double v23);

					/// <summary>
					/// 获取圆角率
					/// </summary>
					/// <param name="v12"></param>
					/// <param name="v23"></param>
					/// <returns></returns>
					public void GetRoundRadius(ref double v12, ref double v23)
					{
						EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getRoundRadius_void_ev_real64_ev_real64(this.NativeObject, ref v12, ref v23);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getRectangle_CRectangleRing(IntPtr pNativeObject);

					/// <summary>
					/// 获取矩形
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.RectangleRing GetRectangle()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CRoundRectAlgori_getRectangle_CRectangleRing(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.RectangleRing csObj = new EarthView.World.Spatial.Geometry.RectangleRing(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRectangleRing");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.RectangleRing;
							csObj.BindNativeObject(__ptr, "CRectangleRing");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRoundRectAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadRoundRectAlgori = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadRoundRectAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadRoundRectAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CRoundRectAlgori", new RoundRectAlgoriClassFactory());

					public RoundRectAlgori(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RoundRectAlgori FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RoundRectAlgori obj = baseObj as  RoundRectAlgori;
						if (object.Equals(obj, null))
						{
							obj = new RoundRectAlgori(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRoundRectAlgori");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RoundRectAlgoriClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RoundRectAlgori emptyInstance = new RoundRectAlgori(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 关于椭圆的算法，帮助生成控制点
				/// </summary>
				public class EllipticRingAlgori : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public EllipticRingAlgori() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CEllipticRingAlgoriProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.EllipticRingAlgori".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CPoint_CPoint_CPoint(IntPtr pNativeObject, IntPtr center, IntPtr p1, IntPtr p2);

					/// <summary>
					/// 设置椭圆的三个控制点
					/// </summary>
					/// <param name="center">椭圆的中心点</param>
					/// <param name="p1">第一个控制点</param>
					/// <param name="p2">第二个控制点</param>
					/// <returns></returns>
					public void SetEllipticRing(EarthView.World.Spatial.Geometry.Point center, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2)
					{
						EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CPoint_CPoint_CPoint(this.NativeObject, object.Equals(center, null) ? IntPtr.Zero : center.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setEllipticRing_CallBack_void_CEllipticRing(IntPtr ring);

					protected setEllipticRing_CallBack_void_CEllipticRing m_setEllipticRing_CallBack_void_CEllipticRing;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_NoVirtual(IntPtr pNativeObject, IntPtr ring);

					/// <summary>
					/// 设置椭圆
					/// </summary>
					/// <param name="ring">椭圆对象</param>
					/// <returns></returns>
					public virtual void SetEllipticRing_NoVirtual(EarthView.World.Spatial.Geometry.EllipticRing ring)
					{
						EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_NoVirtual(this.NativeObject, object.Equals(ring, null) ? IntPtr.Zero : ring.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Function(IntPtr ring)
					{
						EarthView.World.Spatial.Geometry.EllipticRing csobj_ring = new EarthView.World.Spatial.Geometry.EllipticRing(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ring.BindNativeObject(ring,"CEllipticRing");
						csobj_ring.Delegate = true;
						IClassFactory csobj_ringClassFactory = GlobalClassFactoryMap.Get(csobj_ring.GetCppInstanceTypeName());
						if (csobj_ringClassFactory != null)
						{
							csobj_ring.Delegate = true;
							csobj_ring = csobj_ringClassFactory.Create() as EarthView.World.Spatial.Geometry.EllipticRing;
							csobj_ring.BindNativeObject(ring, "CEllipticRing");
							csobj_ring.Delegate = true;
						}
						
						SetEllipticRing(csobj_ring);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(IntPtr pNativeObject, IntPtr ring);

					/// <summary>
					/// 设置椭圆
					/// </summary>
					/// <param name="ring">椭圆对象</param>
					/// <returns></returns>
					public virtual void SetEllipticRing(EarthView.World.Spatial.Geometry.EllipticRing ring)
					{
						EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(this.NativeObject, object.Equals(ring, null) ? IntPtr.Zero : ring.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getSemiMajorAxe_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取长半轴
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public double GetSemiMajorAxe()
					{
						double ret=EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getSemiMajorAxe_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getSemiMinorAxe_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取短半轴
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public double GetSemiMinorAxe()
					{
						double ret=EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getSemiMinorAxe_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getAngle_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public double GetAngle()
					{
						double ret=EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getAngle_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCenter_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.Point GetCenter()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCenter_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCtrlPoint1_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取长半轴控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.Point GetCtrlPoint1()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCtrlPoint1_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCtrlPoint2_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取短半轴控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.Point GetCtrlPoint2()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getCtrlPoint2_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_makeEllipticRing_CEllipticRing(IntPtr pNativeObject);

					/// <summary>
					/// 生成一个椭圆，内存外部释放
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.EllipticRing MakeEllipticRing()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_makeEllipticRing_CEllipticRing(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.EllipticRing csObj = new EarthView.World.Spatial.Geometry.EllipticRing(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEllipticRing");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.EllipticRing;
							csObj.BindNativeObject(__ptr, "CEllipticRing");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getPointOnEllipse_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double angle, ref double x, ref double y);

					/// <summary>
					/// 获取在椭圆上指定角度处的坐标
					/// </summary>
					/// <param name="angle">输入角度</param>
					/// <param name="x">返回的X坐标</param>
					/// <param name="y">返回的Y坐标</param>
					/// <returns></returns>
					public void GetPointOnEllipse(double angle, ref double x, ref double y)
					{
						EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_getPointOnEllipse_void_ev_real64_ev_real64_ev_real64(this.NativeObject, angle, ref x, ref y);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadEllipticRingAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEllipticRingAlgori", new EllipticRingAlgoriClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEllipticRingAlgoriProxy", new EllipticRingAlgoriClassFactory());

					public EllipticRingAlgori(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(IntPtr pObject, setEllipticRing_CallBack_void_CEllipticRing pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setEllipticRing_CallBack_void_CEllipticRing = EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Function;
							GC.KeepAlive(m_setEllipticRing_CallBack_void_CEllipticRing);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing(this.NativeObject, m_setEllipticRing_CallBack_void_CEllipticRing);
						}
					}
					public static EllipticRingAlgori FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EllipticRingAlgori obj = baseObj as  EllipticRingAlgori;
						if (object.Equals(obj, null))
						{
							obj = new EllipticRingAlgori(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEllipticRingAlgori");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EllipticRingAlgoriClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EllipticRingAlgori emptyInstance = new EllipticRingAlgori(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 关于椭圆弧的算法，帮助生成控制点
				/// </summary>
				public class EllipticArcAlgori : EarthView.World.Spatial2D.Controls.EllipticRingAlgori
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public EllipticArcAlgori() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CEllipticArcAlgoriProxy", null);
						if (!"EarthView.World.Spatial2D.Controls.EllipticArcAlgori".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_NoVirtual(IntPtr pNativeObject, IntPtr ring);

					/// <summary>
					/// 设置椭圆
					/// </summary>
					/// <param name="ring">椭圆</param>
					/// <returns></returns>
					public new void SetEllipticRing_NoVirtual(EarthView.World.Spatial.Geometry.EllipticRing ring)
					{
						EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing_NoVirtual(this.NativeObject, object.Equals(ring, null) ? IntPtr.Zero : ring.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(IntPtr pNativeObject, IntPtr ring);

					/// <summary>
					/// 设置椭圆
					/// </summary>
					/// <param name="ring">椭圆</param>
					/// <returns></returns>
					public override void SetEllipticRing(EarthView.World.Spatial.Geometry.EllipticRing ring)
					{
						EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(this.NativeObject, object.Equals(ring, null) ? IntPtr.Zero : ring.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticArc_void_CPoint_CPoint_CPoint_CPoint_CPoint(IntPtr pNativeObject, IntPtr center, IntPtr p1, IntPtr p2, IntPtr p3, IntPtr p4);

					/// <summary>
					/// 设置椭圆弧
					/// </summary>
					/// <param name="center">椭圆的中心点</param>
					/// <param name="p1">长半轴控制点</param>
					/// <param name="p2">短半轴控制点</param>
					/// <param name="p3">椭圆弧起始角度控制点</param>
					/// <param name="p4">椭圆弧终止角度控制点</param>
					/// <returns></returns>
					public void SetEllipticArc(EarthView.World.Spatial.Geometry.Point center, EarthView.World.Spatial.Geometry.Point p1, EarthView.World.Spatial.Geometry.Point p2, EarthView.World.Spatial.Geometry.Point p3, EarthView.World.Spatial.Geometry.Point p4)
					{
						EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticArc_void_CPoint_CPoint_CPoint_CPoint_CPoint(this.NativeObject, object.Equals(center, null) ? IntPtr.Zero : center.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(p2, null) ? IntPtr.Zero : p2.NativeObject, object.Equals(p3, null) ? IntPtr.Zero : p3.NativeObject, object.Equals(p4, null) ? IntPtr.Zero : p4.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticArc_void_CEllipticArc(IntPtr pNativeObject, IntPtr arc);

					/// <summary>
					/// 设置椭圆弧
					/// </summary>
					/// <param name="arc">椭圆弧对象</param>
					/// <returns></returns>
					public void SetEllipticArc(EarthView.World.Spatial.Geometry.EllipticArc arc)
					{
						EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticArc_void_CEllipticArc(this.NativeObject, object.Equals(arc, null) ? IntPtr.Zero : arc.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getFromAngle_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭圆弧的起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public double GetFromAngle()
					{
						double ret=EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getFromAngle_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getSweepAngle_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭圆的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public double GetSweepAngle()
					{
						double ret=EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getSweepAngle_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getCtrlPoint3_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭圆弧的起始角度控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.Point GetCtrlPoint3()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getCtrlPoint3_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getCtrlPoint4_CPoint(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭圆弧的终止角度控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.Point GetCtrlPoint4()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_getCtrlPoint4_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_makeEllipticArc_CEllipticArc(IntPtr pNativeObject);

					/// <summary>
					/// 生成一个椭圆弧
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.EllipticArc MakeEllipticArc()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_makeEllipticArc_CEllipticArc(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.EllipticArc csObj = new EarthView.World.Spatial.Geometry.EllipticArc(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEllipticArc");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.EllipticArc;
							csObj.BindNativeObject(__ptr, "CEllipticArc");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadEllipticArcAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEllipticArcAlgori", new EllipticArcAlgoriClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CEllipticArcAlgoriProxy", new EllipticArcAlgoriClassFactory());

					public EllipticArcAlgori(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(IntPtr pObject, setEllipticRing_CallBack_void_CEllipticRing pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setEllipticRing_CallBack_void_CEllipticRing = EarthView_World_Spatial2D_Controls_CEllipticRingAlgori_setEllipticRing_void_CEllipticRing_Function;
							GC.KeepAlive(m_setEllipticRing_CallBack_void_CEllipticRing);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEllipticArcAlgori_setEllipticRing_void_CEllipticRing(this.NativeObject, m_setEllipticRing_CallBack_void_CEllipticRing);
						}
					}
					public static EllipticArcAlgori FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EllipticArcAlgori obj = baseObj as  EllipticArcAlgori;
						if (object.Equals(obj, null))
						{
							obj = new EllipticArcAlgori(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEllipticArcAlgori");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EllipticArcAlgoriClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EllipticArcAlgori emptyInstance = new EllipticArcAlgori(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class LongCircleAlgori : EarthView.World.Core.AllocatedObject
				{
					public LongCircleAlgori() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLongCircleAlgori",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CLongCircleAlgori_setLongCircle_void_CPoint_ev_real64_CPoint_ev_real64(IntPtr pNativeObject, IntPtr center1, double radius1, IntPtr center2, double radius2);

					public void SetLongCircle(EarthView.World.Spatial.Geometry.Point center1, double radius1, EarthView.World.Spatial.Geometry.Point center2, double radius2)
					{
						EarthView_World_Spatial2D_Controls_CLongCircleAlgori_setLongCircle_void_CPoint_ev_real64_CPoint_ev_real64(this.NativeObject, object.Equals(center1, null) ? IntPtr.Zero : center1.NativeObject, radius1, object.Equals(center2, null) ? IntPtr.Zero : center2.NativeObject, radius2);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CLongCircleAlgori_setLongCircle_void_CCurveRing(IntPtr pNativeObject, IntPtr ring);

					public void SetLongCircle(EarthView.World.Spatial.Geometry.CurveRing ring)
					{
						EarthView_World_Spatial2D_Controls_CLongCircleAlgori_setLongCircle_void_CCurveRing(this.NativeObject, object.Equals(ring, null) ? IntPtr.Zero : ring.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getGeometry_IGeometry(IntPtr pNativeObject);

					public EarthView.World.Spatial.Geometry.Igeometry GetGeometry()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getGeometry_IGeometry(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Igeometry csObj = new EarthView.World.Spatial.Geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IGeometry");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Igeometry;
							csObj.BindNativeObject(__ptr, "IGeometry");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getFirstRadius_ev_real64(IntPtr pNativeObject);

					public double GetFirstRadius()
					{
						double ret=EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getFirstRadius_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getSecondRadius_ev_real64(IntPtr pNativeObject);

					public double GetSecondRadius()
					{
						double ret=EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getSecondRadius_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getFirstPoint_CPoint(IntPtr pNativeObject);

					public EarthView.World.Spatial.Geometry.Point GetFirstPoint()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getFirstPoint_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getSecondPoint_CPoint(IntPtr pNativeObject);

					public EarthView.World.Spatial.Geometry.Point GetSecondPoint()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getSecondPoint_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getThirdPoint_CPoint(IntPtr pNativeObject);

					public EarthView.World.Spatial.Geometry.Point GetThirdPoint()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getThirdPoint_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getForthPoint_CPoint(IntPtr pNativeObject);

					public EarthView.World.Spatial.Geometry.Point GetForthPoint()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CLongCircleAlgori_getForthPoint_CPoint(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Point csObj = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPoint");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csObj.BindNativeObject(__ptr, "CPoint");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLongCircleAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadLongCircleAlgori = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadLongCircleAlgori = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadLongCircleAlgori = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CLongCircleAlgori", new LongCircleAlgoriClassFactory());

					public LongCircleAlgori(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LongCircleAlgori FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LongCircleAlgori obj = baseObj as  LongCircleAlgori;
						if (object.Equals(obj, null))
						{
							obj = new LongCircleAlgori(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLongCircleAlgori");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LongCircleAlgoriClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LongCircleAlgori emptyInstance = new LongCircleAlgori(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
