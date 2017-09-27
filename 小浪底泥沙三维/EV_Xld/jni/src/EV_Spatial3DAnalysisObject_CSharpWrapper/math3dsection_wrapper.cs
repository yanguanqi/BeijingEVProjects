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
				/// 断面分析结果类
				/// </summary>
				public class SectionLineInfo : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					public SectionLineInfo() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSectionLineInfo",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					private EarthView.World.Spatial.Math.VertexList mGeoPointsField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mGeoPoints(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mGeoPoints( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.VertexList MGeoPoints
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mGeoPoints(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mGeoPointsField, null)){
								mGeoPointsField.NativeObject = __ptr;
								return mGeoPointsField;
							}
							EarthView.World.Spatial.Math.VertexList csObj = new EarthView.World.Spatial.Math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "VertexList");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.VertexList;
								csObj.BindNativeObject(__ptr, "VertexList");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mGeoPointsField = value;
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mGeoPoints( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Core.RealVector mSlopeVecField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mSlopeVec(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mSlopeVec( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Core.RealVector MSlopeVec
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mSlopeVec(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mSlopeVecField, null)){
								mSlopeVecField.NativeObject = __ptr;
								return mSlopeVecField;
							}
							EarthView.World.Core.RealVector csObj = new EarthView.World.Core.RealVector(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "RealVector");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Core.RealVector;
								csObj.BindNativeObject(__ptr, "RealVector");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mSlopeVecField = value;
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mSlopeVec( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlope(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlope( IntPtr pObject, double value );

					public 					double MMaxSlope
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlope(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlope(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlope(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlope( IntPtr pObject, double value );

					public 					double MMinSlope
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlope(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlope(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitude( IntPtr pObject, double value );

					public 					double MMaxAltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitude(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitude(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitude( IntPtr pObject, double value );

					public 					double MMinAltitude
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitude(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitude(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopeIndex(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopeIndex( IntPtr pObject, int value );

					public 					int MMaxSlopeIndex
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopeIndex(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopeIndex(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopeIndex(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopeIndex( IntPtr pObject, int value );

					public 					int MMinSlopeIndex
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopeIndex(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopeIndex(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudeIndex(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudeIndex( IntPtr pObject, int value );

					public 					int MMaxAltitudeIndex
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudeIndex(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudeIndex(this.NativeObject,value);
						}
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
					private static extern int Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudeIndex(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudeIndex( IntPtr pObject, int value );

					public 					int MMinAltitudeIndex
					{
						get
						{
							int ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudeIndex(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudeIndex(this.NativeObject,value);
						}
					}

					private EarthView.World.Spatial.Math.Vector3 mMaxSlopePointField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopePoint(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopePoint( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Vector3 MMaxSlopePoint
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopePoint(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mMaxSlopePointField, null)){
								mMaxSlopePointField.NativeObject = __ptr;
								return mMaxSlopePointField;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mMaxSlopePointField = value;
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxSlopePoint( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Vector3 mMinSlopePointField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopePoint(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopePoint( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Vector3 MMinSlopePoint
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopePoint(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mMinSlopePointField, null)){
								mMinSlopePointField.NativeObject = __ptr;
								return mMinSlopePointField;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mMinSlopePointField = value;
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinSlopePoint( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Vector3 mMaxAltitudePointField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudePoint(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudePoint( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Vector3 MMaxAltitudePoint
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudePoint(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mMaxAltitudePointField, null)){
								mMaxAltitudePointField.NativeObject = __ptr;
								return mMaxAltitudePointField;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mMaxAltitudePointField = value;
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMaxAltitudePoint( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private EarthView.World.Spatial.Math.Vector3 mMinAltitudePointField;
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
					private static extern IntPtr Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudePoint(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudePoint( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Spatial.Math.Vector3 MMinAltitudePoint
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudePoint(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(mMinAltitudePointField, null)){
								mMinAltitudePointField.NativeObject = __ptr;
								return mMinAltitudePointField;
							}
							EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CVector3");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
								csObj.BindNativeObject(__ptr, "CVector3");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							mMinAltitudePointField = value;
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mMinAltitudePoint( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mClampedDistance(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mClampedDistance( IntPtr pObject, double value );

					public 					double MClampedDistance
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mClampedDistance(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mClampedDistance(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mStraightDistance(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mStraightDistance( IntPtr pObject, double value );

					public 					double MStraightDistance
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mStraightDistance(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mStraightDistance(this.NativeObject,value);
						}
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
					private static extern double Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mProjectDistance(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mProjectDistance( IntPtr pObject, double value );

					public 					double MProjectDistance
					{
						get
						{
							double ret=Get_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mProjectDistance(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Analysis_CSectionLineInfo_mProjectDistance(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadSectionLineInfo = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CSectionLineInfo", new SectionLineInfoClassFactory());

					public SectionLineInfo(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SectionLineInfo FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SectionLineInfo obj = baseObj as  SectionLineInfo;
						if (object.Equals(obj, null))
						{
							obj = new SectionLineInfo(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSectionLineInfo");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SectionLineInfoClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SectionLineInfo emptyInstance = new SectionLineInfo(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 三维分析之断面分析算法
				/// </summary>
				public class Math3DSection : EarthView.World.Spatial3D.Analysis.Math3DBaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					public Math3DSection(EarthView.World.Spatial3D.Analysis.Altitude3DListener ref_pAltitude3DListener) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pAltitude3DListener = new BasePtr(ref_pAltitude3DListener);
						list.Add("ref_pAltitude3DListener", valueref_pAltitude3DListener.PtrVal);
						Create("CMath3DSectionProxy", list);
						if (!"EarthView.World.Spatial3D.Analysis.Math3DSection".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Spatial3D_Analysis_CMath3DSection_calcuSectionInfo_void_VertexList_CSectionLineInfo(IntPtr pNativeObject, IntPtr inPts, IntPtr sectionInfo);

					/// <summary>
					/// 计算断面分析结果
					/// </summary>
					/// <param name="inPts">点列表</param>
					/// <param name="sectionInfo">断面分析结果</param>
					public void CalcuSectionInfo(EarthView.World.Spatial.Math.VertexList inPts, ref  EarthView.World.Spatial3D.Analysis.SectionLineInfo sectionInfo)
					{
						EarthView_World_Spatial3D_Analysis_CMath3DSection_calcuSectionInfo_void_VertexList_CSectionLineInfo(this.NativeObject, object.Equals(inPts, null) ? IntPtr.Zero : inPts.NativeObject, object.Equals(sectionInfo, null) ? IntPtr.Zero : sectionInfo.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CMath3DSection_calcuSectionLineInfo_void_ev_bool_ev_real64_CVector3_CVector3_VertexList_CSectionLineInfo(IntPtr pNativeObject, byte detail, ref double interval, IntPtr p0, IntPtr p1, IntPtr vertices, IntPtr pSectionInfo);

					/// <summary>
					/// 计算两点之间的断面分析结果
					/// </summary>
					/// <param name="detail">控制断面分析结果信息精确程度</param>
					/// <param name="interval">采样间隔距离</param>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="vertices">插值后的渲染点列表</param>
					/// <param name="pSectionInfo">断面分析结果指针</param>
					public void CalcuSectionLineInfo(bool detail, ref double interval, EarthView.World.Spatial.Math.Vector3 p0, EarthView.World.Spatial.Math.Vector3 p1, ref  EarthView.World.Spatial.Math.VertexList vertices, EarthView.World.Spatial3D.Analysis.SectionLineInfo pSectionInfo)
					{
						EarthView_World_Spatial3D_Analysis_CMath3DSection_calcuSectionLineInfo_void_ev_bool_ev_real64_CVector3_CVector3_VertexList_CSectionLineInfo(this.NativeObject, Convert.ToByte(detail), ref interval, object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(vertices, null) ? IntPtr.Zero : vertices.NativeObject, object.Equals(pSectionInfo, null) ? IntPtr.Zero : pSectionInfo.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CMath3DSection_calculateOnServer_void_VertexList_CSectionLineInfo(IntPtr pNativeObject, IntPtr inPts, IntPtr sectionInfo);

					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="inPts">点列表</param>
					/// <param name="sectionInfo">断面分析结果</param>
					public void CalculateOnServer(EarthView.World.Spatial.Math.VertexList inPts, ref  EarthView.World.Spatial3D.Analysis.SectionLineInfo sectionInfo)
					{
						EarthView_World_Spatial3D_Analysis_CMath3DSection_calculateOnServer_void_VertexList_CSectionLineInfo(this.NativeObject, object.Equals(inPts, null) ? IntPtr.Zero : inPts.NativeObject, object.Equals(sectionInfo, null) ? IntPtr.Zero : sectionInfo.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMath3DSection = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DSection", new Math3DSectionClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DSectionProxy", new Math3DSectionClassFactory());

					public Math3DSection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener(IntPtr pObject, getAltitude3DListener_CallBack_CAltitude3DListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener(IntPtr pObject, setAltitude3DListener_CallBack_void_CAltitude3DListener pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getAltitude3DListener_CallBack_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Function;
							GC.KeepAlive(m_getAltitude3DListener_CallBack_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_getAltitude3DListener_CAltitude3DListener(this.NativeObject, m_getAltitude3DListener_CallBack_CAltitude3DListener);
							m_setAltitude3DListener_CallBack_void_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Function;
							GC.KeepAlive(m_setAltitude3DListener_CallBack_void_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DSection_setAltitude3DListener_void_CAltitude3DListener(this.NativeObject, m_setAltitude3DListener_CallBack_void_CAltitude3DListener);
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
					public static Math3DSection FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Math3DSection obj = baseObj as  Math3DSection;
						if (object.Equals(obj, null))
						{
							obj = new Math3DSection(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMath3DSection");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Math3DSectionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Math3DSection emptyInstance = new Math3DSection(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
