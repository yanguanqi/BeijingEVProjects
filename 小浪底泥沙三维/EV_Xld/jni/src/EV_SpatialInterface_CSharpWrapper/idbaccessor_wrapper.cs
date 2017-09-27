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
				/// <summary>
				/// 数据库句柄接口
				/// </summary>
				public class Idbaccessor : EarthView.World.Spatial.Accessor.Idataaccessor
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdbaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDBAccessor", new IdbaccessorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDBAccessorProxy", new IdbaccessorClassFactory());

					public Idbaccessor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDBAccessor_getType_EVAccessorType(IntPtr pObject, getType_CallBack_EVAccessorType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDBAccessor_open_ev_bool_EVString(IntPtr pObject, open_CallBack_ev_bool_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDBAccessor_close_ev_bool(IntPtr pObject, close_CallBack_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVAccessorType = EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Function;
							GC.KeepAlive(m_getType_CallBack_EVAccessorType);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDBAccessor_getType_EVAccessorType(this.NativeObject, m_getType_CallBack_EVAccessorType);
							m_open_CallBack_ev_bool_EVString = EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Function;
							GC.KeepAlive(m_open_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDBAccessor_open_ev_bool_EVString(this.NativeObject, m_open_CallBack_ev_bool_EVString);
							m_close_CallBack_ev_bool = EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Function;
							GC.KeepAlive(m_close_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IDBAccessor_close_ev_bool(this.NativeObject, m_close_CallBack_ev_bool);
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
					public static Idbaccessor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Idbaccessor obj = baseObj as  Idbaccessor;
						if (object.Equals(obj, null))
						{
							obj = new Idbaccessor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IDBAccessor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IdbaccessorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Idbaccessor emptyInstance = new Idbaccessor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
