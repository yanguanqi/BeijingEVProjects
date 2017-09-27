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
			namespace Accessor
			{
				public class Iwebaccessor : EarthView.World.Spatial.Accessor.Idataaccessor
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIwebaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IWebAccessor", new IwebaccessorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IWebAccessorProxy", new IwebaccessorClassFactory());

					public Iwebaccessor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType(IntPtr pObject, getType_CallBack_EVAccessorType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString(IntPtr pObject, open_CallBack_ev_bool_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool(IntPtr pObject, close_CallBack_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVAccessorType = EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Function;
							GC.KeepAlive(m_getType_CallBack_EVAccessorType);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_getType_EVAccessorType(this.NativeObject, m_getType_CallBack_EVAccessorType);
							m_open_CallBack_ev_bool_EVString = EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Function;
							GC.KeepAlive(m_open_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_open_ev_bool_EVString(this.NativeObject, m_open_CallBack_ev_bool_EVString);
							m_close_CallBack_ev_bool = EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Function;
							GC.KeepAlive(m_close_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IWebAccessor_close_ev_bool(this.NativeObject, m_close_CallBack_ev_bool);
						}
					}
					public override EarthView.World.Spatial.Accessor.EVACCESSORTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public override bool Open(string connectionString)
					{
						return base.Open_NoVirtual(connectionString);
					}
					public override bool Close()
					{
						return base.Close_NoVirtual();
					}
					public static Iwebaccessor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iwebaccessor obj = baseObj as  Iwebaccessor;
						if (object.Equals(obj, null))
						{
							obj = new Iwebaccessor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IWebAccessor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IwebaccessorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iwebaccessor emptyInstance = new Iwebaccessor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
