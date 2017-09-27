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
			namespace GeoDataset
			{
				/// <summary>
				/// 默认空间索引参数类
				/// </summary>
				public class Rtreespatialindexparam : EarthView.World.Spatial.GeoDataset.Ispatialindexparam
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public Rtreespatialindexparam() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRTreeSpatialIndexParamProxy", null);
						if (!"EarthView.World.Spatial2D.GeoDataset.Rtreespatialindexparam".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public new void ToStream_NoVirtual(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public override void ToStream(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					protected new void FromStream_NoVirtual(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					protected override void FromStream(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadRtreespatialindexparam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam", new RtreespatialindexparamClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParamProxy", new RtreespatialindexparamClassFactory());

					public Rtreespatialindexparam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum(IntPtr pObject, getSpatialIndexType_CallBack_EVSpatialIndexEnum pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(IntPtr pObject, fromStream_CallBack_void_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getSpatialIndexType_CallBack_EVSpatialIndexEnum = EarthView_World_Spatial_GeoDataset_ISpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Function;
							GC.KeepAlive(m_getSpatialIndexType_CallBack_EVSpatialIndexEnum);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum(this.NativeObject, m_getSpatialIndexType_CallBack_EVSpatialIndexEnum);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_GeoDataset_ISpatialIndexParam_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_fromStream_CallBack_void_CDataStream = EarthView_World_Spatial_GeoDataset_ISpatialIndexParam_fromStream_void_CDataStream_Function;
							GC.KeepAlive(m_fromStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CRTreeSpatialIndexParam_fromStream_void_CDataStream(this.NativeObject, m_fromStream_CallBack_void_CDataStream);
						}
					}
					public override EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM GetSpatialIndexType()
					{
						return base.GetSpatialIndexType_NoVirtual();
					}
					public static Rtreespatialindexparam FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Rtreespatialindexparam obj = baseObj as  Rtreespatialindexparam;
						if (object.Equals(obj, null))
						{
							obj = new Rtreespatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRTreeSpatialIndexParam");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RtreespatialindexparamClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Rtreespatialindexparam emptyInstance = new Rtreespatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SpatialGridIndexParam : EarthView.World.Spatial.GeoDataset.Ispatialindexparam
				{
					public SpatialGridIndexParam() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSpatialGridIndexParamProxy", null);
						if (!"EarthView.World.Spatial2D.GeoDataset.SpatialGridIndexParam".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public SpatialGridIndexParam(double gridOneSize, double gridTwoSize, double gridThreeSize) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuegridOneSize = new BasePtr(gridOneSize);
						list.Add("gridOneSize", valuegridOneSize.PtrVal);
						BasePtr valuegridTwoSize = new BasePtr(gridTwoSize);
						list.Add("gridTwoSize", valuegridTwoSize.PtrVal);
						BasePtr valuegridThreeSize = new BasePtr(gridThreeSize);
						list.Add("gridThreeSize", valuegridThreeSize.PtrVal);
						Create("CSpatialGridIndexParamProxy", list);
						if (!"EarthView.World.Spatial2D.GeoDataset.SpatialGridIndexParam".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridOneSize_void_ev_real64(IntPtr pNativeObject, double gridSize);

					public void SetGridOneSize(double gridSize)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridOneSize_void_ev_real64(this.NativeObject, gridSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridTwoSize_void_ev_real64(IntPtr pNativeObject, double gridSize);

					public void SetGridTwoSize(double gridSize)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridTwoSize_void_ev_real64(this.NativeObject, gridSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridThreeSize_void_ev_real64(IntPtr pNativeObject, double gridSize);

					public void SetGridThreeSize(double gridSize)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_setGridThreeSize_void_ev_real64(this.NativeObject, gridSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getGridSize_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, ref double gridOneSize, ref double gridTwoSize, ref double gridThreeSize);

					public void GetGridSize(ref double gridOneSize, ref double gridTwoSize, ref double gridThreeSize)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getGridSize_void_ev_real64_ev_real64_ev_real64(this.NativeObject, ref gridOneSize, ref gridTwoSize, ref gridThreeSize);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public new void ToStream_NoVirtual(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public override void ToStream(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					protected new void FromStream_NoVirtual(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					protected override void FromStream(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadSpatialGridIndexParam = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam", new SpatialGridIndexParamClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParamProxy", new SpatialGridIndexParamClassFactory());

					public SpatialGridIndexParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum(IntPtr pObject, getSpatialIndexType_CallBack_EVSpatialIndexEnum pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(IntPtr pObject, fromStream_CallBack_void_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getSpatialIndexType_CallBack_EVSpatialIndexEnum = EarthView_World_Spatial_GeoDataset_ISpatialIndexParam_getSpatialIndexType_EVSpatialIndexEnum_Function;
							GC.KeepAlive(m_getSpatialIndexType_CallBack_EVSpatialIndexEnum);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_getSpatialIndexType_EVSpatialIndexEnum(this.NativeObject, m_getSpatialIndexType_CallBack_EVSpatialIndexEnum);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_GeoDataset_ISpatialIndexParam_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_fromStream_CallBack_void_CDataStream = EarthView_World_Spatial_GeoDataset_ISpatialIndexParam_fromStream_void_CDataStream_Function;
							GC.KeepAlive(m_fromStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialGridIndexParam_fromStream_void_CDataStream(this.NativeObject, m_fromStream_CallBack_void_CDataStream);
						}
					}
					public override EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM GetSpatialIndexType()
					{
						return base.GetSpatialIndexType_NoVirtual();
					}
					public static SpatialGridIndexParam FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SpatialGridIndexParam obj = baseObj as  SpatialGridIndexParam;
						if (object.Equals(obj, null))
						{
							obj = new SpatialGridIndexParam(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSpatialGridIndexParam");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SpatialGridIndexParamClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SpatialGridIndexParam emptyInstance = new SpatialGridIndexParam(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SpatialIndexParamFactory : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public SpatialIndexParamFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSpatialIndexParamFactoryProxy", null);
						if (!"EarthView.World.Spatial2D.GeoDataset.SpatialIndexParamFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum(EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM type);

					protected createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum m_createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM type);

					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ispatialindexparam CreateSpatialIndexParam_NoVirtual(EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM type)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_NoVirtual(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ispatialindexparam csObj = new EarthView.World.Spatial.GeoDataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ispatialindexparam;
							csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Function(EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM type)
					{
						EarthView.World.Spatial.GeoDataset.Ispatialindexparam csret=CreateSpatialIndexParam(type);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM type);

					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ispatialindexparam CreateSpatialIndexParam(EarthView.World.Spatial.GeoDataset.EVSPATIALINDEXENUM type)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ispatialindexparam csObj = new EarthView.World.Spatial.GeoDataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ispatialindexparam;
							csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream(IntPtr stream);

					protected createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream m_createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流创建空间索引参数对象
					/// </summary>
					/// <param name="stream">输入参数，流</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ispatialindexparam CreateSpatialIndexParam_NoVirtual(ref EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ispatialindexparam csObj = new EarthView.World.Spatial.GeoDataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ispatialindexparam;
							csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Function(IntPtr stream)
					{
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						EarthView.World.Spatial.GeoDataset.Ispatialindexparam csret=CreateSpatialIndexParam(ref csobj_stream);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流创建空间索引参数对象
					/// </summary>
					/// <param name="stream">输入参数，流</param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ispatialindexparam CreateSpatialIndexParam(ref EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ispatialindexparam csObj = new EarthView.World.Spatial.GeoDataset.Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ispatialindexparam;
							csObj.BindNativeObject(__ptr, "ISpatialIndexParam");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadSpatialIndexParamFactory = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory", new SpatialIndexParamFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactoryProxy", new SpatialIndexParamFactoryClassFactory());

					public SpatialIndexParamFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(IntPtr pObject, createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(IntPtr pObject, createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum = EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum_Function;
							GC.KeepAlive(m_createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_EVSpatialIndexEnum(this.NativeObject, m_createSpatialIndexParam_CallBack_ISpatialIndexParam_EVSpatialIndexEnum);
							m_createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream = EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream_Function;
							GC.KeepAlive(m_createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CSpatialIndexParamFactory_createSpatialIndexParam_ISpatialIndexParam_CDataStream(this.NativeObject, m_createSpatialIndexParam_CallBack_ISpatialIndexParam_CDataStream);
						}
					}
					public static SpatialIndexParamFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SpatialIndexParamFactory obj = baseObj as  SpatialIndexParamFactory;
						if (object.Equals(obj, null))
						{
							obj = new SpatialIndexParamFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSpatialIndexParamFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SpatialIndexParamFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SpatialIndexParamFactory emptyInstance = new SpatialIndexParamFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
