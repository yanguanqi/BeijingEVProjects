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
				/// 文件获取基类
				/// </summary>
				public class Ifileaccessor : EarthView.World.Spatial.Accessor.Idataaccessor
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIfileaccessor = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IFileAccessor", new IfileaccessorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IFileAccessorProxy", new IfileaccessorClassFactory());

					public Ifileaccessor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType(IntPtr pObject, getType_CallBack_EVAccessorType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString(IntPtr pObject, open_CallBack_ev_bool_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool(IntPtr pObject, close_CallBack_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVAccessorType = EarthView_World_Spatial_Accessor_IDataAccessor_getType_EVAccessorType_Function;
							GC.KeepAlive(m_getType_CallBack_EVAccessorType);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_getType_EVAccessorType(this.NativeObject, m_getType_CallBack_EVAccessorType);
							m_open_CallBack_ev_bool_EVString = EarthView_World_Spatial_Accessor_IDataAccessor_open_ev_bool_EVString_Function;
							GC.KeepAlive(m_open_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_open_ev_bool_EVString(this.NativeObject, m_open_CallBack_ev_bool_EVString);
							m_close_CallBack_ev_bool = EarthView_World_Spatial_Accessor_IDataAccessor_close_ev_bool_Function;
							GC.KeepAlive(m_close_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Accessor_IFileAccessor_close_ev_bool(this.NativeObject, m_close_CallBack_ev_bool);
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
					public static Ifileaccessor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ifileaccessor obj = baseObj as  Ifileaccessor;
						if (object.Equals(obj, null))
						{
							obj = new Ifileaccessor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IFileAccessor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IfileaccessorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ifileaccessor emptyInstance = new Ifileaccessor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
