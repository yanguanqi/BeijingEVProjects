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
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 通视分析点结构体
				/// </summary>
				[StructLayout( LayoutKind.Sequential )]
				public struct VISIBILITYPOINT
				{
					public bool IsVisibility;
					public IntPtr Position;
				}

				/// <summary>
				/// 通视分析顶点集合类
				/// </summary>
				public class VisibilityPointList : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					public VisibilityPointList() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("VisibilityPointList",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_push_back_void_VisibilityPoint(IntPtr pNativeObject, ref EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT t);

					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					public void Push_back(ref EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT t)
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_push_back_void_VisibilityPoint(this.NativeObject, ref t);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_pop_back_void(IntPtr pNativeObject);

					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					public void Pop_back()
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_pop_back_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT EarthView_World_Spatial3D_Analysis_VisibilityPointList_front_VisibilityPoint(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					public EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT Front()
					{
						EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT ret=EarthView_World_Spatial3D_Analysis_VisibilityPointList_front_VisibilityPoint(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT EarthView_World_Spatial3D_Analysis_VisibilityPointList_back_VisibilityPoint(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					public EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT Back()
					{
						EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT ret=EarthView_World_Spatial3D_Analysis_VisibilityPointList_back_VisibilityPoint(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_insert_void_ev_uint32_VisibilityPoint(IntPtr pNativeObject, uint pos, ref EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT t);

					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					public void Insert(uint pos, ref EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT t)
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_insert_void_ev_uint32_VisibilityPoint(this.NativeObject, pos, ref t);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_insert_void_ev_uint32_VisibilityPointList(IntPtr pNativeObject, uint pos, IntPtr other);

					/// <summary>
					/// 容器中间位置插入列表
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="other">列表</param>
					public void Insert(uint pos, EarthView.World.Spatial3D.Analysis.VisibilityPointList other)
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_insert_void_ev_uint32_VisibilityPointList(this.NativeObject, pos, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					public void Remove(ulong pos)
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_remove_void_ev_size_t(this.NativeObject, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_VisibilityPointList_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					public bool Empty()
					{
						byte ret=EarthView_World_Spatial3D_Analysis_VisibilityPointList_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT EarthView_World_Spatial3D_Analysis_VisibilityPointList_at_VisibilityPoint_ev_size_t(IntPtr pNativeObject, ulong n);

					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					public EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT At(ulong n)
					{
						EarthView.World.Spatial3D.Analysis.VISIBILITYPOINT ret=EarthView_World_Spatial3D_Analysis_VisibilityPointList_at_VisibilityPoint_ev_size_t(this.NativeObject, n);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_Analysis_VisibilityPointList_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					public ulong Size()
					{
						ulong ret=EarthView_World_Spatial3D_Analysis_VisibilityPointList_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					public void Resize(ulong newSize)
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_resize_void_ev_size_t(this.NativeObject, newSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					public void Reserve(ulong count)
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_reserve_void_ev_size_t(this.NativeObject, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_VisibilityPointList_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					public void Clear()
					{
						EarthView_World_Spatial3D_Analysis_VisibilityPointList_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadVisibilityPointList = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::VisibilityPointList", new VisibilityPointListClassFactory());

					public VisibilityPointList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static VisibilityPointList FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						VisibilityPointList obj = baseObj as  VisibilityPointList;
						if (object.Equals(obj, null))
						{
							obj = new VisibilityPointList(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "VisibilityPointList");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class VisibilityPointListClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						VisibilityPointList emptyInstance = new VisibilityPointList(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 三维分析之通视分析类
				/// </summary>
				public class Math3DVisibility : EarthView.World.Spatial3D.Analysis.Math3DBaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					public Math3DVisibility(EarthView.World.Spatial3D.Analysis.Altitude3DListener ref_pAltitude3DListener) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pAltitude3DListener = new BasePtr(ref_pAltitude3DListener);
						list.Add("ref_pAltitude3DListener", valueref_pAltitude3DListener.PtrVal);
						Create("CMath3DVisibilityProxy", list);
						if (!"EarthView.World.Spatial3D.Analysis.Math3DVisibility".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getNeedStop_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否停止计算
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否停止计算</returns>
					public bool GetNeedStop()
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getNeedStop_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setNeedStop_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置是否停止计算
					/// </summary>
					/// <param name="value">是否停止计算</param>
					public void SetNeedStop(bool value)
					{
						EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setNeedStop_void_ev_bool(this.NativeObject, ref value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuPointVisibility_ev_bool_CVector3_ev_real64_CVector3_ev_real64_ev_int32(IntPtr pNativeObject, IntPtr view, ref double viewH, IntPtr target, ref double targetH, ref int number);

					/// <summary>
					/// 判断两点是否通视
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="targetH">目标点离地高度</param>
					/// <param name="number">插值个数</param>
					/// <returns>是否通视</returns>
					public bool CalcuPointVisibility(EarthView.World.Spatial.Math.Vector3 view, double viewH, EarthView.World.Spatial.Math.Vector3 target, double targetH, int number)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuPointVisibility_ev_bool_CVector3_ev_real64_CVector3_ev_real64_ev_int32(this.NativeObject, object.Equals(view, null) ? IntPtr.Zero : view.NativeObject, ref viewH, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, ref targetH, ref number);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuLineVisibility_ev_real64_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VertexList_VertexList(IntPtr pNativeObject, IntPtr center, ref double centerH, IntPtr target, ref int number, ref bool isViewShed, IntPtr visibilityline, IntPtr invisibilityline);

					/// <summary>
					/// 计算线通视对象或者面通视的一条线
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="number">插值个数</param>
					/// <param name="isViewShed">是否为面通视的一条线</param>
					/// <param name="visibilityline">可见线顶点数组,世界坐标</param>
					/// <param name="invisibilityline">不可见线顶点数组,世界坐标</param>
					/// <returns>遮挡率</returns>
					public double CalcuLineVisibility(EarthView.World.Spatial.Math.Vector3 center, double centerH, EarthView.World.Spatial.Math.Vector3 target, int number, bool isViewShed, ref  EarthView.World.Spatial.Math.VertexList visibilityline, ref  EarthView.World.Spatial.Math.VertexList invisibilityline)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuLineVisibility_ev_real64_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VertexList_VertexList(this.NativeObject, object.Equals(center, null) ? IntPtr.Zero : center.NativeObject, ref centerH, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, ref number, ref isViewShed, object.Equals(visibilityline, null) ? IntPtr.Zero : visibilityline.NativeObject, object.Equals(invisibilityline, null) ? IntPtr.Zero : invisibilityline.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuLineVisibility_ev_real64_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList(IntPtr pNativeObject, IntPtr center, ref double centerH, IntPtr target, ref int number, ref bool isViewShed, IntPtr outputPts);

					/// <summary>
					/// 计算线通视对象或者面通视的一条线
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="number">插值个数</param>
					/// <param name="isViewShed">是否为面通视的一条线</param>
					/// <param name="outputPts">通视分析顶点集合,世界坐标</param>
					/// <returns>遮挡率</returns>
					public double CalcuLineVisibility(EarthView.World.Spatial.Math.Vector3 center, double centerH, EarthView.World.Spatial.Math.Vector3 target, int number, bool isViewShed, ref  EarthView.World.Spatial3D.Analysis.VisibilityPointList outputPts)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calcuLineVisibility_ev_real64_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList(this.NativeObject, object.Equals(center, null) ? IntPtr.Zero : center.NativeObject, ref centerH, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, ref number, ref isViewShed, object.Equals(outputPts, null) ? IntPtr.Zero : outputPts.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calculateOnServer_void_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList_ev_real64(IntPtr pNativeObject, IntPtr center, ref double centerH, IntPtr target, ref int number, ref bool isViewShed, IntPtr outputPts, ref double shadePercent);

					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="center">观察点地理坐标（经度，纬度，高程）</param>
					/// <param name="centerH">观察点离地高度</param>
					/// <param name="target">目标点地理坐标（经度，纬度，高程）</param>
					/// <param name="number">插值个数</param>
					/// <param name="isViewShed">是否为面通视的一条线</param>
					/// <param name="outputPts">通视分析顶点集合,世界坐标</param>
					/// <param name="shadePercent">遮挡率</param>
					public void CalculateOnServer(EarthView.World.Spatial.Math.Vector3 center, double centerH, EarthView.World.Spatial.Math.Vector3 target, int number, bool isViewShed, ref  EarthView.World.Spatial3D.Analysis.VisibilityPointList outputPts, ref double shadePercent)
					{
						EarthView_World_Spatial3D_Analysis_CMath3DVisibility_calculateOnServer_void_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList_ev_real64(this.NativeObject, object.Equals(center, null) ? IntPtr.Zero : center.NativeObject, ref centerH, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, ref number, ref isViewShed, object.Equals(outputPts, null) ? IntPtr.Zero : outputPts.NativeObject, ref shadePercent);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMath3DVisibility = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DVisibility", new Math3DVisibilityClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DVisibilityProxy", new Math3DVisibilityClassFactory());

					public Math3DVisibility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener(IntPtr pObject, getAltitude3DListener_CallBack_CAltitude3DListener pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener(IntPtr pObject, setAltitude3DListener_CallBack_void_CAltitude3DListener pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getAltitude3DListener_CallBack_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Function;
							GC.KeepAlive(m_getAltitude3DListener_CallBack_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_getAltitude3DListener_CAltitude3DListener(this.NativeObject, m_getAltitude3DListener_CallBack_CAltitude3DListener);
							m_setAltitude3DListener_CallBack_void_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Function;
							GC.KeepAlive(m_setAltitude3DListener_CallBack_void_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DVisibility_setAltitude3DListener_void_CAltitude3DListener(this.NativeObject, m_setAltitude3DListener_CallBack_void_CAltitude3DListener);
						}
					}
					public override EarthView.World.Spatial3D.Analysis.Altitude3DListener GetAltitude3DListener()
					{
						return base.GetAltitude3DListener_NoVirtual();
					}
					public override void SetAltitude3DListener(EarthView.World.Spatial3D.Analysis.Altitude3DListener ref_pListener)
					{
						base.SetAltitude3DListener_NoVirtual(ref_pListener);
					}
					public static Math3DVisibility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Math3DVisibility obj = baseObj as  Math3DVisibility;
						if (object.Equals(obj, null))
						{
							obj = new Math3DVisibility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMath3DVisibility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Math3DVisibilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Math3DVisibility emptyInstance = new Math3DVisibility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
