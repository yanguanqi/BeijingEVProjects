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
			namespace GeoCorretion
			{
				public static partial class EV_DataAnalystGlobel
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Globel_EarthView_World_Spatial2D_GeoCorretion_getSuggestOutPut_void_void_ev_int32_ev_int32_ev_real64(IntPtr pTrans, ref int nWidth, ref int nHeight, IntPtr dfGeoTransform);

					public static void GetSuggestOutPut(IntPtr pTrans, ref int nWidth, ref int nHeight, IntPtr dfGeoTransform)
					{
						Globel_EarthView_World_Spatial2D_GeoCorretion_getSuggestOutPut_void_void_ev_int32_ev_int32_ev_real64(pTrans, ref nWidth, ref nHeight, dfGeoTransform);
						
					}

				}
				public static partial class EV_DataAnalystGlobel
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Globel_EarthView_World_Spatial2D_GeoCorretion_genCreateTransformerArg_void_void_void_ev_real64_ev_int32(IntPtr pRectifyRef, IntPtr pStdImageRef, double[] pParameter, int iCount);

					public static IntPtr GenCreateTransformerArg(IntPtr pRectifyRef, IntPtr pStdImageRef, double[] pParameter, int iCount)
					{
						IntPtr __ptr = Globel_EarthView_World_Spatial2D_GeoCorretion_genCreateTransformerArg_void_void_void_ev_real64_ev_int32(pRectifyRef, pStdImageRef, pParameter, iCount);
						
						return __ptr;
						
					}

				}
				public static partial class EV_DataAnalystGlobel
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Globel_EarthView_World_Spatial2D_GeoCorretion_destroyTransformH_void_void(IntPtr hTrans);

					public static void DestroyTransformH(IntPtr hTrans)
					{
						Globel_EarthView_World_Spatial2D_GeoCorretion_destroyTransformH_void_void(hTrans);
						
					}

				}
				///}///extern "C"
				////////////////////////////////////////////////////////////////////////////////////////////////
				///class RectifyResampleWarper
				///////////////////////////////////////////////////////////////////////////////////////////////
				////<summary>
				////重采样结构体
				////采样间WorkingDataType与 源数据集相同
				////</summary>
				public class RectifyResampleWarper : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					public RectifyResampleWarper() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("RectifyResampleWarper",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_OperatorAssign_RectifyResampleWarper_RectifyResampleWarper(IntPtr pNativeObject, IntPtr other);

					///<summary>
					///赋值构造函数
					///</summary>
					public EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarper OperatorAssign(EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarper other)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_OperatorAssign_RectifyResampleWarper_RectifyResampleWarper(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
						EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarper csObj = new EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarper(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "RectifyResampleWarper");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarper;
							csObj.BindNativeObject(__ptr, "RectifyResampleWarper");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					private IntPtr hSrcField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hSrc(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hSrc( IntPtr pObject, IntPtr value );

					public 					IntPtr HSrc
					{
						get
						{
							if(!IntPtr.Zero.Equals(hSrcField)){
								return hSrcField;
							}
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hSrc(this.NativeObject);
							
							return __ptr;
							
						}

						set
						{
							hSrcField = value;
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hSrc( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_resampleMth(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_resampleMth( IntPtr pObject, int value );

					public 					int ResampleMth
					{
						get
						{
							int ret=Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_resampleMth(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_resampleMth(this.NativeObject,value);
						}
					}

					private IntPtr hTransformerField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hTransformer(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hTransformer( IntPtr pObject, IntPtr value );

					public 					IntPtr HTransformer
					{
						get
						{
							if(!IntPtr.Zero.Equals(hTransformerField)){
								return hTransformerField;
							}
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hTransformer(this.NativeObject);
							
							return __ptr;
							
						}

						set
						{
							hTransformerField = value;
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hTransformer( this.NativeObject,value );
						}
					}

					private IntPtr ProgressArgField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_ProgressArg(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_ProgressArg( IntPtr pObject, IntPtr value );

					public 					IntPtr ProgressArg
					{
						get
						{
							if(!IntPtr.Zero.Equals(ProgressArgField)){
								return ProgressArgField;
							}
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_ProgressArg(this.NativeObject);
							
							return __ptr;
							
						}

						set
						{
							ProgressArgField = value;
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_ProgressArg( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_dfNodatavalue(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_dfNodatavalue( IntPtr pObject, double value );

					public 					double DfNodatavalue
					{
						get
						{
							double ret=Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_dfNodatavalue(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_dfNodatavalue(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_nWorkingBandCount(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_nWorkingBandCount( IntPtr pObject, int value );

					public 					int NWorkingBandCount
					{
						get
						{
							int ret=Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_nWorkingBandCount(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_nWorkingBandCount(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_pWorkingBandIndex(IntPtr pObject);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_pWorkingBandIndex( IntPtr pObject, IntPtr value );

					public 					IntPtr PWorkingBandIndex
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_pWorkingBandIndex(this.NativeObject);
							
							return __ptr;
							
						}

						set
						{
							Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_pWorkingBandIndex( this.NativeObject,value );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_d.dll");
							private static bool csbLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_d.so");
							private static bool csbLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_CSharp_d.so");

						#else 
							private static bool bLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_d.dll");
							private static bool csbLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst.dll");
							private static bool csbLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_CSharp.dll");

						#elif Linux 
							private static bool bLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst.so");
							private static bool csbLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_CSharp.so");

						#else 
							private static bool bLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst.dll");
							private static bool csbLoadRectifyResampleWarper = LoadDll.Load("EV_DataAnalyst_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper", new RectifyResampleWarperClassFactory());

					public RectifyResampleWarper(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RectifyResampleWarper FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RectifyResampleWarper obj = baseObj as  RectifyResampleWarper;
						if (object.Equals(obj, null))
						{
							obj = new RectifyResampleWarper(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "RectifyResampleWarper");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RectifyResampleWarperClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RectifyResampleWarper emptyInstance = new RectifyResampleWarper(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				//////////////////////////////////////////////////////////////////////////////////////
				//class ResamplerOprator
				///////////////////////////////////////////////////////////////////////////////////////
				///<summary>
				///重采样变换类
				///<summary>
				public class ResamplerOprator : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					public ResamplerOprator() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ResamplerOprator",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_inlitialOperator_ev_int32_RectifyResampleWarper(IntPtr pNativeObject, IntPtr warper);

					///<summary>
					///初始化，resample完成类
					///</summary>
					/// <param name="warper">重采样参数结构体</param> 
					///<returns>0标识成功，-1标识参数不完全</returns>
					public int InlitialOperator(EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarper warper)
					{
						int ret=EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_inlitialOperator_ev_int32_RectifyResampleWarper(this.NativeObject, object.Equals(warper, null) ? IntPtr.Zero : warper.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_CreateAndResample_ev_bool_ev_char(IntPtr pNativeObject, byte[] pszFullpath);

					///<summary>
					///创建一个数据集，并执行纠正
					///</summary>
					///<param name="pszFullpath">目标数据集文件路径</param>
					///<returns>0,标识成功，1标识失败</returns>
					public bool CreateAndResample(byte[] pszFullpath)
					{
						byte ret=EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_CreateAndResample_ev_bool_ev_char(this.NativeObject, pszFullpath);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_DataAnalyst_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_resampleBuffer_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_uchar(IntPtr pNativeObject, int destOffX, int destOffY, int W, int H, IntPtr pBuffer);

					///<summary>
					///分块重采样，并返回指定范围的数据
					///</summary>
					///<param name="pBuffer">指定范围数据，由user分配与释放</param>
					///<returns></returns>
					public bool ResampleBuffer(int destOffX, int destOffY, int W, int H, IntPtr pBuffer)
					{
						byte ret=EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_resampleBuffer_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_uchar(this.NativeObject, destOffX, destOffY, W, H, pBuffer);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_d.dll");
							private static bool csbLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_d.so");
							private static bool csbLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_CSharp_d.so");

						#else 
							private static bool bLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_d.dll");
							private static bool csbLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst.dll");
							private static bool csbLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_CSharp.dll");

						#elif Linux 
							private static bool bLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst.so");
							private static bool csbLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_CSharp.so");

						#else 
							private static bool bLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst.dll");
							private static bool csbLoadResamplerOprator = LoadDll.Load("EV_DataAnalyst_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator", new ResamplerOpratorClassFactory());

					public ResamplerOprator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ResamplerOprator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ResamplerOprator obj = baseObj as  ResamplerOprator;
						if (object.Equals(obj, null))
						{
							obj = new ResamplerOprator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ResamplerOprator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ResamplerOpratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ResamplerOprator emptyInstance = new ResamplerOprator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
