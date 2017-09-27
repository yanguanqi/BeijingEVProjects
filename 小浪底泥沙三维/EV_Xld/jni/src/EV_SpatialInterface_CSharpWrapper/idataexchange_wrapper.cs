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
				/// 数据交换类型
				/// </summary>
				public enum EVDATAEXCHANGETYPE
				{
								DataExchangeType_Unknown = 0,
								DataExchangeType_Spatial2D = 1,
								DataExchangeType_Spatial3D = 2
				
				}

				/// <summary>
				/// 数据交换类接口
				/// </summary>
				public class Idataexchange : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getType_CallBack_EVDataExchangeType();

					protected getType_CallBack_EVDataExchangeType m_getType_CallBack_EVDataExchangeType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据转换类型
					/// </summary>
					/// <returns>数据转换类型</returns>
					public virtual EarthView.World.Spatial.Convertor.EVDATAEXCHANGETYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Convertor.EVDATAEXCHANGETYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Function()
					{
						EarthView.World.Spatial.Convertor.EVDATAEXCHANGETYPE csret=GetType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据转换类型
					/// </summary>
					/// <returns>数据转换类型</returns>
					public virtual EarthView.World.Spatial.Convertor.EVDATAEXCHANGETYPE GetType()
					{
						int ret=EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(this.NativeObject);
						
						return (EarthView.World.Spatial.Convertor.EVDATAEXCHANGETYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int exchange_CallBack_ev_int32();

					protected exchange_CallBack_ev_int32 m_exchange_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 进行数据转换
					/// </summary>
					/// <returns>数据转换结果，0 表示OK</returns>
					public virtual int Exchange_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Function()
					{
						int csret=Exchange();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 进行数据转换
					/// </summary>
					/// <returns>数据转换结果，0 表示OK</returns>
					public virtual int Exchange()
					{
						int ret=EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setListener_CallBack_void_IDataExchangeListener(IntPtr ref_listener);

					protected setListener_CallBack_void_IDataExchangeListener m_setListener_CallBack_void_IDataExchangeListener;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_listener);

					/// <summary>
					/// 设置监听（内部保存引用）
					/// </summary>
					/// <param name="listener">监听对象，程序结束需外部删除</param>
					/// <returns></returns>
					public virtual void SetListener_NoVirtual(EarthView.World.Spatial.Convertor.Idataexchangelistener ref_listener)
					{
						EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_NoVirtual(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Function(IntPtr ref_listener)
					{
						EarthView.World.Spatial.Convertor.Idataexchangelistener csobj_ref_listener = new EarthView.World.Spatial.Convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_listener.BindNativeObject(ref_listener,"IDataExchangeListener");
						csobj_ref_listener.Delegate = true;
						IClassFactory csobj_ref_listenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_listener.GetCppInstanceTypeName());
						if (csobj_ref_listenerClassFactory != null)
						{
							csobj_ref_listener.Delegate = true;
							csobj_ref_listener = csobj_ref_listenerClassFactory.Create() as EarthView.World.Spatial.Convertor.Idataexchangelistener;
							csobj_ref_listener.BindNativeObject(ref_listener, "IDataExchangeListener");
							csobj_ref_listener.Delegate = true;
						}
						
						SetListener(csobj_ref_listener);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(IntPtr pNativeObject, IntPtr ref_listener);

					/// <summary>
					/// 设置监听（内部保存引用）
					/// </summary>
					/// <param name="listener">监听对象，程序结束需外部删除</param>
					/// <returns></returns>
					public virtual void SetListener(EarthView.World.Spatial.Convertor.Idataexchangelistener ref_listener)
					{
						EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getListener_CallBack_IDataExchangeListener();

					protected getListener_CallBack_IDataExchangeListener m_getListener_CallBack_IDataExchangeListener;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取监听对象
					/// </summary>
					/// <returns>获取监听对象指针，不需删除</returns>
					public virtual EarthView.World.Spatial.Convertor.Idataexchangelistener GetListener_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Convertor.Idataexchangelistener csObj = new EarthView.World.Spatial.Convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataExchangeListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Convertor.Idataexchangelistener;
							csObj.BindNativeObject(__ptr, "IDataExchangeListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Function()
					{
						EarthView.World.Spatial.Convertor.Idataexchangelistener csret=GetListener();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(IntPtr pNativeObject);

					/// <summary>
					/// 获取监听对象
					/// </summary>
					/// <returns>获取监听对象指针，不需删除</returns>
					public virtual EarthView.World.Spatial.Convertor.Idataexchangelistener GetListener()
					{
						IntPtr __ptr = EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Convertor.Idataexchangelistener csObj = new EarthView.World.Spatial.Convertor.Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataExchangeListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Convertor.Idataexchangelistener;
							csObj.BindNativeObject(__ptr, "IDataExchangeListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIdataexchange = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIdataexchange = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIdataexchange = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdataexchange = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchange", new IdataexchangeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchangeProxy", new IdataexchangeClassFactory());

					public Idataexchange(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(IntPtr pObject, getType_CallBack_EVDataExchangeType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(IntPtr pObject, exchange_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(IntPtr pObject, setListener_CallBack_void_IDataExchangeListener pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(IntPtr pObject, getListener_CallBack_IDataExchangeListener pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVDataExchangeType = EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType_Function;
							GC.KeepAlive(m_getType_CallBack_EVDataExchangeType);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_getType_EVDataExchangeType(this.NativeObject, m_getType_CallBack_EVDataExchangeType);
							m_exchange_CallBack_ev_int32 = EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32_Function;
							GC.KeepAlive(m_exchange_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_exchange_ev_int32(this.NativeObject, m_exchange_CallBack_ev_int32);
							m_setListener_CallBack_void_IDataExchangeListener = EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener_Function;
							GC.KeepAlive(m_setListener_CallBack_void_IDataExchangeListener);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_setListener_void_IDataExchangeListener(this.NativeObject, m_setListener_CallBack_void_IDataExchangeListener);
							m_getListener_CallBack_IDataExchangeListener = EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener_Function;
							GC.KeepAlive(m_getListener_CallBack_IDataExchangeListener);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchange_getListener_IDataExchangeListener(this.NativeObject, m_getListener_CallBack_IDataExchangeListener);
						}
					}
					public static Idataexchange FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Idataexchange obj = baseObj as  Idataexchange;
						if (object.Equals(obj, null))
						{
							obj = new Idataexchange(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IDataExchange");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IdataexchangeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Idataexchange emptyInstance = new Idataexchange(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
