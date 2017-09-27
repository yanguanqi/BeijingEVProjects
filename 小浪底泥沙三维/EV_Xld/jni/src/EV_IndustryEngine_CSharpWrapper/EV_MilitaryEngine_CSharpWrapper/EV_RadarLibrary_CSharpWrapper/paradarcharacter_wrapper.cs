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
				/// <summary>
				/// 相控阵雷达特征
				/// </summary>
				public class Paradarcharacter : EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter
				{
					public Paradarcharacter() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CPARadarCharacterProxy", null);
						if (!"EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.Paradarcharacter".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_createRadarSection_CRadarSection_CDegree_ev_int32_ev_real64(IntPtr verticalAngleSpan, ref int verticalNum, ref double overaweDistance);

					/// <summary>
					/// 创建相控阵雷达垂直威力面
					/// </summary>
					/// <param name="verticalSpan">垂直方向跨度</param>
					/// <param name="verticalNum">垂直方向威力数据分布</param>
					/// <param name="overaweDistance">雷达威力范围</param>
					/// <returns>相控阵雷达垂直威力面</returns>
					public static EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection CreateRadarSection(EarthView.World.Spatial.Math.Degree verticalAngleSpan, int verticalNum, double overaweDistance)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_createRadarSection_CRadarSection_CDegree_ev_int32_ev_real64(object.Equals(verticalAngleSpan, null) ? IntPtr.Zero : verticalAngleSpan.NativeObject, ref verticalNum, ref overaweDistance);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarSection");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection;
							csObj.BindNativeObject(__ptr, "CRadarSection");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_createRadarSection_CRadarSection_CDegree_CDegree_ev_real64(IntPtr verticalAngleSpan, IntPtr verticalAngleDelta, ref double overaweDistance);

					/// <summary>
					/// 创建相控阵雷达垂直威力面
					/// </summary>
					/// <param name="verticalSpan">垂直方向跨度</param>
					/// <param name="verticalAngleDelta">垂直方向威力数据角度分布</param>
					/// <param name="overaweDistance">雷达威力范围</param>
					/// <returns>相控阵雷达垂直威力面</returns>
					public static EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection CreateRadarSection(EarthView.World.Spatial.Math.Degree verticalAngleSpan, EarthView.World.Spatial.Math.Degree verticalAngleDelta, double overaweDistance)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_createRadarSection_CRadarSection_CDegree_CDegree_ev_real64(object.Equals(verticalAngleSpan, null) ? IntPtr.Zero : verticalAngleSpan.NativeObject, object.Equals(verticalAngleDelta, null) ? IntPtr.Zero : verticalAngleDelta.NativeObject, ref overaweDistance);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarSection");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarSection;
							csObj.BindNativeObject(__ptr, "CRadarSection");
						}
						return csObj;
						
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
					private static extern int EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalNum_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取相控阵雷达垂直方向分布数目
					/// </summary>
					/// <returns>相控阵雷达垂直方向分布数目</returns>
					public int GetVerticalNum()
					{
						int ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalNum_ev_int32(this.NativeObject);
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalNum_void_ev_int32(IntPtr pNativeObject, ref int verticalNum);

					/// <summary>
					/// 设置相控阵雷达垂直方向分布数目
					/// </summary>
					/// <param name="value">相控阵雷达垂直方向分布数目</param>
					public void SetVerticalNum(int verticalNum)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalNum_void_ev_int32(this.NativeObject, ref verticalNum);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalAngleSpan_CDegree(IntPtr pNativeObject);

					/// <summary>
					/// 获取相控阵雷达垂直方向威力范围
					/// </summary>
					/// <returns>相控阵雷达垂直方向威力范围（角度值）</returns>
					public EarthView.World.Spatial.Math.Degree GetVerticalAngleSpan()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalAngleSpan_CDegree(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDegree");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csObj.BindNativeObject(__ptr, "CDegree");
						}
						return csObj;
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalAngleSpan_void_CDegree(IntPtr pNativeObject, IntPtr value);

					/// <summary>
					/// 设置相控阵雷达垂直方向威力范围
					/// </summary>
					/// <param name="value">相控阵雷达垂直方向威力范围（角度值）</param>
					public void SetVerticalAngleSpan(EarthView.World.Spatial.Math.Degree value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalAngleSpan_void_CDegree(this.NativeObject, object.Equals(value, null) ? IntPtr.Zero : value.NativeObject);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalAngleDelta_CDegree(IntPtr pNativeObject);

					/// <summary>
					/// 获取相控阵雷达垂直方向威力间隔
					/// </summary>
					/// <returns>相控阵雷达垂直方向威力间隔（角度值）</returns>
					public EarthView.World.Spatial.Math.Degree GetVerticalAngleDelta()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalAngleDelta_CDegree(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDegree");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csObj.BindNativeObject(__ptr, "CDegree");
						}
						return csObj;
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalAngleDelta_void_CDegree(IntPtr pNativeObject, IntPtr value);

					/// <summary>
					/// 设置相控阵雷达垂直方向威力间隔，只有设置了垂直威力范围后才有效
					/// </summary>
					/// <param name="value">相控阵雷达垂直方向威力间隔（角度值）</param>
					public void SetVerticalAngleDelta(EarthView.World.Spatial.Math.Degree value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalAngleDelta_void_CDegree(this.NativeObject, object.Equals(value, null) ? IntPtr.Zero : value.NativeObject);
						
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
					private static extern double EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getOveraweDistance_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取相控阵雷达威力范围
					/// </summary>
					/// <returns>相控阵雷达威力范围</returns>
					public double GetOveraweDistance()
					{
						double ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getOveraweDistance_ev_real64(this.NativeObject);
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setOveraweDistance_void_ev_real64(IntPtr pNativeObject, ref double overaweDistance);

					/// <summary>
					/// 设置相控阵雷达威力范围
					/// </summary>
					/// <param name="value">相控阵雷达威力范围</param>
					public void SetOveraweDistance(double overaweDistance)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setOveraweDistance_void_ev_real64(this.NativeObject, ref overaweDistance);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 复制
					/// </summary>
					/// <returns>相控阵雷达特征</returns>
					public new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarCharacter");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter;
							csObj.BindNativeObject(__ptr, "CRadarCharacter");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(IntPtr pNativeObject);

					/// <summary>
					/// 复制
					/// </summary>
					/// <returns>相控阵雷达特征</returns>
					public override EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter Clone()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarCharacter");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter;
							csObj.BindNativeObject(__ptr, "CRadarCharacter");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadParadarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter", new ParadarcharacterClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacterProxy", new ParadarcharacterClassFactory());

					public Paradarcharacter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString(IntPtr pObject, getSectionCurve_CallBack_CLineString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(IntPtr pObject, clone_CallBack_CRadarCharacter pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getSectionCurve_CallBack_CLineString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Function;
							GC.KeepAlive(m_getSectionCurve_CallBack_CLineString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString(this.NativeObject, m_getSectionCurve_CallBack_CLineString);
							m_clone_CallBack_CRadarCharacter = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Function;
							GC.KeepAlive(m_clone_CallBack_CRadarCharacter);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(this.NativeObject, m_clone_CallBack_CRadarCharacter);
						}
					}
					public override EarthView.World.Spatial.Geometry.LineString GetSectionCurve()
					{
						return base.GetSectionCurve_NoVirtual();
					}
					public static Paradarcharacter FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Paradarcharacter obj = baseObj as  Paradarcharacter;
						if (object.Equals(obj, null))
						{
							obj = new Paradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CPARadarCharacter");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ParadarcharacterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Paradarcharacter emptyInstance = new Paradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
