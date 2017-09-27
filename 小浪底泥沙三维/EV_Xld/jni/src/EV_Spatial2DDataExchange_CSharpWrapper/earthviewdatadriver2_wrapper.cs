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
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// EarthView数据交换驱动2
				/// 继承自CEarthViewDataDriver
				/// 针对导入数据格式点线面在一个图层进行相应修改，导入时创建多个要素集
				/// </summary>
				public class EarthViewDataDriver2 : EarthView.World.Spatial.Convertor.EarthViewDataDriver
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64(IntPtr stream, long skipedCount);

					protected parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64 m_parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_NoVirtual(IntPtr pNativeObject, IntPtr stream, long skipedCount);

					public virtual EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass ParseFeatureClass_NoVirtual(ref EarthView.World.Core.DataStream stream, long skipedCount)
					{
						IntPtr __ptr = EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, skipedCount);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass csObj = new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVectorFeatureClass");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass;
							csObj.BindNativeObject(__ptr, "CVectorFeatureClass");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Function(IntPtr stream, long skipedCount)
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
						
						EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass csret=ParseFeatureClass(ref csobj_stream, skipedCount);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(IntPtr pNativeObject, IntPtr stream, long skipedCount);

					public virtual EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass ParseFeatureClass(ref EarthView.World.Core.DataStream stream, long skipedCount)
					{
						IntPtr __ptr = EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject, skipedCount);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass csObj = new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVectorFeatureClass");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass;
							csObj.BindNativeObject(__ptr, "CVectorFeatureClass");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_NoVirtual(IntPtr pNativeObject, uint index, IntPtr stream);

					public new int Write_NoVirtual(uint index, EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream_NoVirtual(this.NativeObject, index, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(IntPtr pNativeObject, uint index, IntPtr stream);

					public override int Write(uint index, EarthView.World.Core.DataStream stream)
					{
						int ret=EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(this.NativeObject, index, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					public new void Close_NoVirtual()
					{
						EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void_NoVirtual(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(IntPtr pNativeObject);

					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					public override void Close()
					{
						EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_d.so");
							private static bool csbLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange.so");
							private static bool csbLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.so");

						#else 
							private static bool bLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadEarthViewDataDriver2 = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver2", new EarthViewDataDriver2ClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver2Proxy", new EarthViewDataDriver2ClassFactory());

					public EarthViewDataDriver2(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(IntPtr pObject, parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void(IntPtr pObject, finishWrite_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(IntPtr pObject, close_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool(IntPtr pObject, canRead_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool(IntPtr pObject, canWrite_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream(IntPtr pObject, read_CallBack_ev_int32_ev_uint32_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(IntPtr pObject, write_CallBack_ev_int32_ev_uint32_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(IntPtr pObject, open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(IntPtr pObject, open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64 = EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64_Function;
							GC.KeepAlive(m_parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_parseFeatureClass_CVectorFeatureClass_CDataStream_ev_int64(this.NativeObject, m_parseFeatureClass_CallBack_CVectorFeatureClass_CDataStream_ev_int64);
							m_finishWrite_CallBack_void = EarthView_World_Spatial_Convertor_CDataDriver_finishWrite_void_Function;
							GC.KeepAlive(m_finishWrite_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_finishWrite_void(this.NativeObject, m_finishWrite_CallBack_void);
							m_close_CallBack_void = EarthView_World_Spatial_Convertor_CDataDriver_close_void_Function;
							GC.KeepAlive(m_close_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_close_void(this.NativeObject, m_close_CallBack_void);
							m_canRead_CallBack_ev_bool = EarthView_World_Spatial_Convertor_CDataDriver_canRead_ev_bool_Function;
							GC.KeepAlive(m_canRead_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canRead_ev_bool(this.NativeObject, m_canRead_CallBack_ev_bool);
							m_canWrite_CallBack_ev_bool = EarthView_World_Spatial_Convertor_CDataDriver_canWrite_ev_bool_Function;
							GC.KeepAlive(m_canWrite_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_canWrite_ev_bool(this.NativeObject, m_canWrite_CallBack_ev_bool);
							m_read_CallBack_ev_int32_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_read_ev_int32_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_read_CallBack_ev_int32_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_read_ev_int32_ev_uint32_CDataStream(this.NativeObject, m_read_CallBack_ev_int32_ev_uint32_CDataStream);
							m_write_CallBack_ev_int32_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_write_ev_int32_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_write_CallBack_ev_int32_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_write_ev_int32_ev_uint32_CDataStream(this.NativeObject, m_write_CallBack_ev_int32_ev_uint32_CDataStream);
							m_open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.NativeObject, m_open_CallBack_ev_int32_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
							m_open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream = EarthView_World_Spatial_Convertor_CDataDriver_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_Function;
							GC.KeepAlive(m_open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_CEarthViewDataDriver2_open_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream(this.NativeObject, m_open_CallBack_ev_int32_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream);
						}
					}
					public override void FinishWrite()
					{
						base.FinishWrite_NoVirtual();
					}
					public override bool CanRead()
					{
						return base.CanRead_NoVirtual();
					}
					public override bool CanWrite()
					{
						return base.CanWrite_NoVirtual();
					}
					public override int Read(uint index, ref  EarthView.World.Core.DataStream stream)
					{
						return base.Read_NoVirtual(index,ref stream);
					}
					public override int Open(EarthView.World.Spatial.GeoDataset.Ipropertyset pPropertySet, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, EarthView.World.Spatial.Convertor.DataExchangeParam ref_param, ref uint featurecount, ref EarthView.World.Core.DataStream stream)
					{
						return base.Open_NoVirtual(pPropertySet,mode,ref_param,ref featurecount,ref stream);
					}
					public override int Open(EarthView.World.Spatial.GeoDataset.Idatasource ref_dataSource, string datasetName, EarthView.World.Spatial.Convertor.EVDATAEXCHANGEOPERATEMODE mode, EarthView.World.Spatial.Convertor.DataExchangeParam ref_param, ref uint featurecount, ref EarthView.World.Core.DataStream stream)
					{
						return base.Open_NoVirtual(ref_dataSource,datasetName,mode,ref_param,ref featurecount,ref stream);
					}
					public static EarthViewDataDriver2 FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EarthViewDataDriver2 obj = baseObj as  EarthViewDataDriver2;
						if (object.Equals(obj, null))
						{
							obj = new EarthViewDataDriver2(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEarthViewDataDriver2");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EarthViewDataDriver2ClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EarthViewDataDriver2 emptyInstance = new EarthViewDataDriver2(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
