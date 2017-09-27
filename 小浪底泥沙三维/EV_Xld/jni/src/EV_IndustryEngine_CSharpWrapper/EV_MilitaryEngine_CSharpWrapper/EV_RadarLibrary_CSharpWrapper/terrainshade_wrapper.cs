/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				[StructLayout( LayoutKind.Sequential )]
				public struct SCALEVECTOR
				{
					public double verticalAngle;
					public double powerScale;
				}

				public class ScaleVectorList : EarthView.World.Core.BaseObject
				{
					public ScaleVectorList() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CScaleVectorList",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_OperatorAssign_void_CScaleVectorList(IntPtr pNativeObject, IntPtr value);

					public void OperatorAssign(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ScaleVectorList value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_OperatorAssign_void_CScaleVectorList(this.NativeObject, object.Equals(value, null) ? IntPtr.Zero : value.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_push_back_void_ScaleVector(IntPtr pNativeObject, IntPtr value);

					public void Push_back(IntPtr value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_push_back_void_ScaleVector(this.NativeObject, value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_pop_back_void(IntPtr pNativeObject);

					public void Pop_back()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_pop_back_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_front_ScaleVector(IntPtr pNativeObject);

					public IntPtr Front()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_front_ScaleVector(this.NativeObject);
						
						return __ptr;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_back_ScaleVector(IntPtr pNativeObject);

					public IntPtr Back()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_back_ScaleVector(this.NativeObject);
						
						return __ptr;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_insert_void_ev_uint32_ScaleVector(IntPtr pNativeObject, uint pos, IntPtr value);

					public void Insert(uint pos, IntPtr value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_insert_void_ev_uint32_ScaleVector(this.NativeObject, pos, value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_remove_void_ev_size_t(IntPtr pNativeObject, ulong pos);

					public void Remove(ulong pos)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_remove_void_ev_size_t(this.NativeObject, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_at_ScaleVector_ev_size_t(IntPtr pNativeObject, ulong n);

					public IntPtr At(ulong n)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_at_ScaleVector_ev_size_t(this.NativeObject, n);
						
						return __ptr;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_size_ev_size_t(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_resize_void_ev_size_t(IntPtr pNativeObject, ulong newSize);

					public void Resize(ulong newSize)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_resize_void_ev_size_t(this.NativeObject, newSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_reserve_void_ev_size_t(IntPtr pNativeObject, ulong count);

					public void Reserve(ulong count)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_reserve_void_ev_size_t(this.NativeObject, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_clear_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadScaleVectorList = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList", new ScaleVectorListClassFactory());

					public ScaleVectorList(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ScaleVectorList FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ScaleVectorList obj = baseObj as  ScaleVectorList;
						if (object.Equals(obj, null))
						{
							obj = new ScaleVectorList(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CScaleVectorList");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ScaleVectorListClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ScaleVectorList emptyInstance = new ScaleVectorList(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class TerrainShade : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="nodeName">节点名称</param>
					/// <param name="ref_pGeoSceneMgr">地理场景管理器</param>
					/// <param name="pSectionPoints">截面点集合</param>
					/// <param name="horizontalnum">水平分段数</param>
					public TerrainShade(string nodeName, EarthView.World.Spatial3D.GeoSceneManager ref_pGeoSceneMgr, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.SectionPoints pSectionPoints, uint horizontalnum) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuenodeName = new BasePtr(nodeName);
						list.Add("nodeName", valuenodeName.PtrVal);
						BasePtr valueref_pGeoSceneMgr = new BasePtr(ref_pGeoSceneMgr);
						list.Add("ref_pGeoSceneMgr", valueref_pGeoSceneMgr.PtrVal);
						BasePtr valuepSectionPoints = new BasePtr(pSectionPoints);
						list.Add("pSectionPoints", valuepSectionPoints.PtrVal);
						BasePtr valuehorizontalnum = new BasePtr(horizontalnum);
						list.Add("horizontalnum", valuehorizontalnum.PtrVal);
						Create("CTerrainShade", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateOnlyTerrain_void_CVertexVector_ev_uint32(IntPtr pNativeObject, IntPtr vertexVector, ref uint splitNum);

					/// <summary>
					/// 计算遮蔽信息
					/// 只考虑EV-Globe地形对遮蔽的影响
					/// </summary>
					/// <param name="vertexVector">包络实体点集合</param>
					/// <param name="splitNum">插分线段数</param>
					public void ShadeAnalysistCalculateOnlyTerrain(EarthView.World.Geometry3D.VertexVector vertexVector, uint splitNum)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateOnlyTerrain_void_CVertexVector_ev_uint32(this.NativeObject, object.Equals(vertexVector, null) ? IntPtr.Zero : vertexVector.NativeObject, ref splitNum);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateOnlyNearAngle_void_CVertexVector_ev_uint32_CShadeAngleDatas(IntPtr pNativeObject, IntPtr vertexVector, ref uint splitNum, IntPtr ref_shadeDataList);

					/// <summary>
					/// 计算遮蔽信息
					/// 不考虑EV-Globe地形对遮蔽的影响，只是考虑近山遮蔽数据。如果不存在近山遮蔽数据则返回数据无遮蔽效果
					/// </summary>
					/// <param name="vertexVector">包络实体点集合</param>
					/// <param name="splitNum">插分线段数</param>
					/// <param name="ref_shadeDataList">近山遮蔽数据列表</param>
					public void ShadeAnalysistCalculateOnlyNearAngle(EarthView.World.Geometry3D.VertexVector vertexVector, uint splitNum, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ShadeAngleDatas ref_shadeDataList)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateOnlyNearAngle_void_CVertexVector_ev_uint32_CShadeAngleDatas(this.NativeObject, object.Equals(vertexVector, null) ? IntPtr.Zero : vertexVector.NativeObject, ref splitNum, object.Equals(ref_shadeDataList, null) ? IntPtr.Zero : ref_shadeDataList.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateWithTerrainNearAngle_void_CVertexVector_ev_uint32_CShadeAngleDatas(IntPtr pNativeObject, IntPtr vertexVector, uint splitNum, IntPtr ref_shadeDataList);

					/// <summary>
					/// 计算遮蔽信息
					/// 考虑ev-Globe地形对遮蔽的影响，先考虑近山遮蔽，再考虑地形数据，如无近山遮蔽数据则只考虑地形
					/// </summary>
					/// <param name="vertexVector">包络实体点集合</param>
					/// <param name="splitNum">插分线段数</param>
					/// <param name="ref_shadeDataList">近山遮蔽数据列表</param>
					public void ShadeAnalysistCalculateWithTerrainNearAngle(EarthView.World.Geometry3D.VertexVector vertexVector, uint splitNum, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ShadeAngleDatas ref_shadeDataList)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateWithTerrainNearAngle_void_CVertexVector_ev_uint32_CShadeAngleDatas(this.NativeObject, object.Equals(vertexVector, null) ? IntPtr.Zero : vertexVector.NativeObject, splitNum, object.Equals(ref_shadeDataList, null) ? IntPtr.Zero : ref_shadeDataList.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_getScaleVectorList_CScaleVectorList(IntPtr pNativeObject);

					/// <summary>
					/// 获取威力系数列表
					/// </summary>
					/// <returns>威力系数列表</returns>
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ScaleVectorList GetScaleVectorList()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_getScaleVectorList_CScaleVectorList(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ScaleVectorList csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ScaleVectorList(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CScaleVectorList");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.ScaleVectorList;
							csObj.BindNativeObject(__ptr, "CScaleVectorList");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTerrainShade = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadTerrainShade = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadTerrainShade = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadTerrainShade = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade", new TerrainShadeClassFactory());

					public TerrainShade(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static TerrainShade FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TerrainShade obj = baseObj as  TerrainShade;
						if (object.Equals(obj, null))
						{
							obj = new TerrainShade(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTerrainShade");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TerrainShadeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TerrainShade emptyInstance = new TerrainShade(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
