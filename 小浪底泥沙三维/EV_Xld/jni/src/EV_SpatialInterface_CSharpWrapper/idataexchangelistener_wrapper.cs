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
				/// 数据交换监听类接口
				/// </summary>
				public class Idataexchangelistener : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void init_CallBack_void_ev_uint32(uint totalNum);

					protected init_CallBack_void_ev_uint32 m_init_CallBack_void_ev_uint32;

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
					private static extern void EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_NoVirtual(IntPtr pNativeObject, uint totalNum);

					/// <summary>
					/// 初始化总要素数目
					/// </summary>
					/// <param name="totalNum">总要素数</param>
					/// <returns></returns>
					public virtual void Init_NoVirtual(uint totalNum)
					{
						EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_NoVirtual(this.NativeObject, totalNum);
						
					}

					protected  void EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Function(uint totalNum)
					{
						Init(totalNum);
						
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
					private static extern void EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(IntPtr pNativeObject, uint totalNum);

					/// <summary>
					/// 初始化总要素数目
					/// </summary>
					/// <param name="totalNum">总要素数</param>
					/// <returns></returns>
					public virtual void Init(uint totalNum)
					{
						EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(this.NativeObject, totalNum);
						
					}

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					public Idataexchangelistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IDataExchangeListenerProxy", null);
						if (!"EarthView.World.Spatial.Convertor.Idataexchangelistener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdataexchangelistener = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchangeListener", new IdataexchangelistenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchangeListenerProxy", new IdataexchangelistenerClassFactory());

					public Idataexchangelistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(IntPtr pObject, init_CallBack_void_ev_uint32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_init_CallBack_void_ev_uint32 = EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32_Function;
							GC.KeepAlive(m_init_CallBack_void_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Convertor_IDataExchangeListener_init_void_ev_uint32(this.NativeObject, m_init_CallBack_void_ev_uint32);
						}
					}
					public static Idataexchangelistener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Idataexchangelistener obj = baseObj as  Idataexchangelistener;
						if (object.Equals(obj, null))
						{
							obj = new Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IDataExchangeListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IdataexchangelistenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Idataexchangelistener emptyInstance = new Idataexchangelistener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
