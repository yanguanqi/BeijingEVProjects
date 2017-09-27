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
				public class Rectification : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					/// <param name="eModel">数学模型</param> 
					public Rectification(EarthView.World.Spatial2D.GeoCorretion.RECTIFYMODELTYPE eModel) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueeModel = new BasePtr(eModel);
						list.Add("eModel", valueeModel.PtrVal);
						Create("CRectification", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					///<summary>
					///构造函数
					///</summary>
					public Rectification() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRectification",  null);
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
					private static extern void EarthView_World_Spatial2D_GeoCorretion_CRectification_setRectifySpatialRef_void_void(IntPtr pNativeObject, IntPtr ref_pRef);

					///<summary>
					///设置待纠正影像空间参考,与标准影像同一参考时
					///可以为空
					///外部创建与释放
					///</summary>
					/// <param name="pref">空间参考</param> 
					public void SetRectifySpatialRef(IntPtr ref_pRef)
					{
						EarthView_World_Spatial2D_GeoCorretion_CRectification_setRectifySpatialRef_void_void(this.NativeObject, ref_pRef);
						
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
					private static extern void EarthView_World_Spatial2D_GeoCorretion_CRectification_setStdImgSpatialRef_void_void(IntPtr pNativeObject, IntPtr ref_pRef);

					///<summary>
					///设置标准影像的空间参考,可为NULL
					///为空时表示，待配准影像与标准影像是同
					///外部创建与释放
					///</summary>
					/// <param name="pRef">空间参考</param> 
					public void SetStdImgSpatialRef(IntPtr ref_pRef)
					{
						EarthView_World_Spatial2D_GeoCorretion_CRectification_setStdImgSpatialRef_void_void(this.NativeObject, ref_pRef);
						
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
					private static extern void EarthView_World_Spatial2D_GeoCorretion_CRectification_setRectifyModel_void_RectifyModelType(IntPtr pNativeObject, EarthView.World.Spatial2D.GeoCorretion.RECTIFYMODELTYPE eModel);

					///<summary>
					///设置纠正选用数学模型
					///</summary>
					/// <param name="eModel">数学模型</param> 
					public void SetRectifyModel(EarthView.World.Spatial2D.GeoCorretion.RECTIFYMODELTYPE eModel)
					{
						EarthView_World_Spatial2D_GeoCorretion_CRectification_setRectifyModel_void_RectifyModelType(this.NativeObject, eModel);
						
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
					private static extern int EarthView_World_Spatial2D_GeoCorretion_CRectification_getRectifyModel_RectifyModelType(IntPtr pNativeObject);

					///<summary>
					///设置纠正选用数学模型
					///</summary>
					/// <returns>数学模型</returns> 
					public EarthView.World.Spatial2D.GeoCorretion.RECTIFYMODELTYPE GetRectifyModel()
					{
						int ret=EarthView_World_Spatial2D_GeoCorretion_CRectification_getRectifyModel_RectifyModelType(this.NativeObject);
						
						return (EarthView.World.Spatial2D.GeoCorretion.RECTIFYMODELTYPE)ret;
						
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
					private static extern int EarthView_World_Spatial2D_GeoCorretion_CRectification_setDataToCompute_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(IntPtr pNativeObject, int nPts, double[] pSrcCrd, double[] pDstCrd, int nCrdSpace, int[] pProcessFlag);

					///<summary>
					///设置坐标数据，用于建立误差矩阵
					///外部数据在该对象作用域结束后不会被释放
					///</summary>
					/// <param name="pts">坐标点对数</param>
					/// <param name="pSrcCrd">源坐标</param>
					/// <param name="pDstCrd">目标坐标</param>
					/// <param name="nCrdSpace">目标坐标维度循环间隔标记，例如XYXY标记1，XXX...YYYY...标记0</param>
					/// <param name="pProcessFlag">标记某对点是否被使用，0表示被使用，1表示丢弃</param>
					/// <returns>0计算失败；1计算成功,-1内存错误，-2未设置数学模型</returns>
					public int SetDataToCompute(int nPts, double[] pSrcCrd, double[] pDstCrd, int nCrdSpace, int[] pProcessFlag)
					{
						int ret=EarthView_World_Spatial2D_GeoCorretion_CRectification_setDataToCompute_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(this.NativeObject, nPts, pSrcCrd, pDstCrd, nCrdSpace, pProcessFlag);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_GeoCorretion_CRectification_getParameter_ev_real64_ev_int32(IntPtr pNativeObject, ref int idimension);

					///<summary>
					///获取数学模型所用参数,外部不能释放指针
					///</summary>
					/// <param name = "idimension">模型参数维度</param>
					/// <returns>模型参数,与X维在前，Y维在后</returns>
					public IntPtr GetParameter(ref int idimension)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoCorretion_CRectification_getParameter_ev_real64_ev_int32(this.NativeObject, ref idimension);
						
						return __ptr;
						
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
					private static extern IntPtr EarthView_World_Spatial2D_GeoCorretion_CRectification_getBias_ev_real64_ev_int32(IntPtr pNativeObject, ref int idimension);

					///<summary>
					///算过程残差，外部不能释放指针
					///</summary>
					/// <param name = "idimension">模型参数维度</param>
					/// <returns>模型残差,与X维在前，Y维在后</returns>
					public IntPtr GetBias(ref int idimension)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoCorretion_CRectification_getBias_ev_real64_ev_int32(this.NativeObject, ref idimension);
						
						return __ptr;
						
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
					private static extern IntPtr EarthView_World_Spatial2D_GeoCorretion_CRectification_getTransformer_void(IntPtr pNativeObject);

					///<summary>
					///获取变换参数
					///</summary>
					///<returns>变换参数</returns>
					public IntPtr GetTransformer()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoCorretion_CRectification_getTransformer_void(this.NativeObject);
						
						return __ptr;
						
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
					private static extern byte EarthView_World_Spatial2D_GeoCorretion_CRectification_transformForward_ev_bool_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, int nPts, IntPtr pDfX, IntPtr pDfY);

					///<summary>
					///正解计算
					///</summary>
					///<returns>1，变换成功，0变换失败</returns>
					public bool TransformForward(int nPts, IntPtr pDfX, IntPtr pDfY)
					{
						byte ret=EarthView_World_Spatial2D_GeoCorretion_CRectification_transformForward_ev_bool_ev_int32_ev_real64_ev_real64(this.NativeObject, nPts, pDfX, pDfY);
						
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
					private static extern byte EarthView_World_Spatial2D_GeoCorretion_CRectification_transformInverse_ev_bool_ev_int32_ev_real64_ev_real64(IntPtr pNativeObject, int nPts, IntPtr pDfX, IntPtr pDfY);

					///<summary>
					///反解计算
					///</summary>
					///<returns>1，变换成功，0变换失败</returns>
					public bool TransformInverse(int nPts, IntPtr pDfX, IntPtr pDfY)
					{
						byte ret=EarthView_World_Spatial2D_GeoCorretion_CRectification_transformInverse_ev_bool_ev_int32_ev_real64_ev_real64(this.NativeObject, nPts, pDfX, pDfY);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRectification = LoadDll.Load("EV_DataAnalyst_d.dll");
							private static bool csbLoadRectification = LoadDll.Load("EV_DataAnalyst_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRectification = LoadDll.Load("EV_DataAnalyst_d.so");
							private static bool csbLoadRectification = LoadDll.Load("EV_DataAnalyst_CSharp_d.so");

						#else 
							private static bool bLoadRectification = LoadDll.Load("EV_DataAnalyst_d.dll");
							private static bool csbLoadRectification = LoadDll.Load("EV_DataAnalyst_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRectification = LoadDll.Load("EV_DataAnalyst.dll");
							private static bool csbLoadRectification = LoadDll.Load("EV_DataAnalyst_CSharp.dll");

						#elif Linux 
							private static bool bLoadRectification = LoadDll.Load("EV_DataAnalyst.so");
							private static bool csbLoadRectification = LoadDll.Load("EV_DataAnalyst_CSharp.so");

						#else 
							private static bool bLoadRectification = LoadDll.Load("EV_DataAnalyst.dll");
							private static bool csbLoadRectification = LoadDll.Load("EV_DataAnalyst_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoCorretion::CRectification", new RectificationClassFactory());

					public Rectification(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Rectification FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Rectification obj = baseObj as  Rectification;
						if (object.Equals(obj, null))
						{
							obj = new Rectification(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRectification");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RectificationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Rectification emptyInstance = new Rectification(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
