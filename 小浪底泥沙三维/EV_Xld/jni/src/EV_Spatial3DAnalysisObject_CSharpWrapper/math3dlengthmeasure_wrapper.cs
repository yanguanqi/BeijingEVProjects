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
				/// 三维分析之距离测量算法
				/// </summary>
				public class Math3DMeasureLength : EarthView.World.Spatial3D.Analysis.Math3DBaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitude3DListener">高度控件</param>
					public Math3DMeasureLength(EarthView.World.Spatial3D.Analysis.Altitude3DListener ref_pAltitude3DListener) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pAltitude3DListener = new BasePtr(ref_pAltitude3DListener);
						list.Add("ref_pAltitude3DListener", valueref_pAltitude3DListener.PtrVal);
						Create("CMath3DMeasureLengthProxy", list);
						if (!"EarthView.World.Spatial3D.Analysis.Math3DMeasureLength".Equals(((Object)this).GetType().ToString()))
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
					private static extern double EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuClampedDistance_ev_real64_ev_int32_CVector3_CVector3_VertexList(IntPtr pNativeObject, int num, IntPtr p0, IntPtr p1, IntPtr vertices);

					/// <summary>
					/// 计算两点之间的贴地距离
					/// </summary>
					/// <param name="num">插入点数目</param>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="vertices">插值后的点列表</param>
					/// <returns>贴地距离</returns>
					public double CalcuClampedDistance(int num, EarthView.World.Spatial.Math.Vector3 p0, EarthView.World.Spatial.Math.Vector3 p1, ref  EarthView.World.Spatial.Math.VertexList vertices)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuClampedDistance_ev_real64_ev_int32_CVector3_CVector3_VertexList(this.NativeObject, num, object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject, object.Equals(vertices, null) ? IntPtr.Zero : vertices.NativeObject);
						
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
					private static extern double EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuStraightDistance_ev_real64_CVector3_CVector3(IntPtr pNativeObject, IntPtr p0, IntPtr p1);

					/// <summary>
					/// 计算两点之间的直线距离
					/// </summary>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程）</param>
					/// <returns>直线距离</returns>
					public double CalcuStraightDistance(EarthView.World.Spatial.Math.Vector3 p0, EarthView.World.Spatial.Math.Vector3 p1)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuStraightDistance_ev_real64_CVector3_CVector3(this.NativeObject, object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject);
						
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
					private static extern double EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuProjectDistance_ev_real64_CVector3_CVector3(IntPtr pNativeObject, IntPtr p0, IntPtr p1);

					/// <summary>
					/// 计算两点之间的投影距离
					/// </summary>
					/// <param name="p0">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <param name="p1">输入点,地理坐标（经度、纬度、高程或0）</param>
					/// <returns>投影距离</returns>
					public double CalcuProjectDistance(EarthView.World.Spatial.Math.Vector3 p0, EarthView.World.Spatial.Math.Vector3 p1)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuProjectDistance_ev_real64_CVector3_CVector3(this.NativeObject, object.Equals(p0, null) ? IntPtr.Zero : p0.NativeObject, object.Equals(p1, null) ? IntPtr.Zero : p1.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuMiddlePoints_ev_bool_VertexList_VertexList(IntPtr pNativeObject, IntPtr inpoints, IntPtr middlepoints);

					/// <summary>
					/// 计算每两个点的中点
					/// 用于渲染折线
					/// 此方法可能不用
					/// </summary>
					/// <param name="inpoints">用户采集的计算点的集合，地理坐标</param>
					/// <param name="middlepoints">每条线段的中点，世界坐标</param>
					/// <returns>true为计算成功，false为计算失败</returns>
					public bool CalcuMiddlePoints(EarthView.World.Spatial.Math.VertexList inpoints, ref  EarthView.World.Spatial.Math.VertexList middlepoints)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuMiddlePoints_ev_bool_VertexList_VertexList(this.NativeObject, object.Equals(inpoints, null) ? IntPtr.Zero : inpoints.NativeObject, object.Equals(middlepoints, null) ? IntPtr.Zero : middlepoints.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuInterWorldPoints_ev_bool_VertexList_VertexList(IntPtr pNativeObject, IntPtr inpoints, IntPtr outpoints);

					/// <summary>
					/// 获取贴地直线离散点
					/// 用于渲染贴地直线
					/// 此方法可能不用
					/// </summary>
					/// <param name="inpoints">用户采集的计算点的集合，地理坐标</param>
					/// <param name="outpoints">插值后的点的集合，世界坐标，带高程</param>
					/// <returns>true为插值成功，false为插值失败</returns>
					public bool CalcuInterWorldPoints(EarthView.World.Spatial.Math.VertexList inpoints, ref  EarthView.World.Spatial.Math.VertexList outpoints)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calcuInterWorldPoints_ev_bool_VertexList_VertexList(this.NativeObject, object.Equals(inpoints, null) ? IntPtr.Zero : inpoints.NativeObject, object.Equals(outpoints, null) ? IntPtr.Zero : outpoints.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calculateOnServer_void_ev_int32_VertexList_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, int num, IntPtr inpoints, ref double clampedDistance, ref double straightDistance, ref double projectDistance);

					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="num">插入点数目</param>
					/// <param name="inpoints">输入点集合，地理坐标</param>					
					/// <param name="clampedDistance">贴地距离</param>
					/// <param name="straightDistance">直线距离</param>
					/// <param name="projectDistance">投影距离</param>
					public void CalculateOnServer(int num, EarthView.World.Spatial.Math.VertexList inpoints, ref double clampedDistance, ref double straightDistance, ref double projectDistance)
					{
						EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_calculateOnServer_void_ev_int32_VertexList_ev_real64_ev_real64_ev_real64(this.NativeObject, num, object.Equals(inpoints, null) ? IntPtr.Zero : inpoints.NativeObject, ref clampedDistance, ref straightDistance, ref projectDistance);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMath3DMeasureLength = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength", new Math3DMeasureLengthClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureLengthProxy", new Math3DMeasureLengthClassFactory());

					public Math3DMeasureLength(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener(IntPtr pObject, getAltitude3DListener_CallBack_CAltitude3DListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener(IntPtr pObject, setAltitude3DListener_CallBack_void_CAltitude3DListener pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getAltitude3DListener_CallBack_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_getAltitude3DListener_CAltitude3DListener_Function;
							GC.KeepAlive(m_getAltitude3DListener_CallBack_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_getAltitude3DListener_CAltitude3DListener(this.NativeObject, m_getAltitude3DListener_CallBack_CAltitude3DListener);
							m_setAltitude3DListener_CallBack_void_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMath3DBaseObject_setAltitude3DListener_void_CAltitude3DListener_Function;
							GC.KeepAlive(m_setAltitude3DListener_CallBack_void_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DMeasureLength_setAltitude3DListener_void_CAltitude3DListener(this.NativeObject, m_setAltitude3DListener_CallBack_void_CAltitude3DListener);
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
					public static Math3DMeasureLength FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Math3DMeasureLength obj = baseObj as  Math3DMeasureLength;
						if (object.Equals(obj, null))
						{
							obj = new Math3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMath3DMeasureLength");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Math3DMeasureLengthClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Math3DMeasureLength emptyInstance = new Math3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
