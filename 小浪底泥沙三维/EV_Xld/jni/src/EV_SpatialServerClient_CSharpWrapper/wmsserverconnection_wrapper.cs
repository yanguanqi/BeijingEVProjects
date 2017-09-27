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
			/// <summary>
			/// OGC WMS 服务连接类
			/// </summary>
			public class Ogcwmsserverconnection : EarthView.World.Spatial.ServerConnection
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public Ogcwmsserverconnection() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("COGCWMSServerConnection",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMSServerConnection", new OgcwmsserverconnectionClassFactory());

				public Ogcwmsserverconnection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Ogcwmsserverconnection FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwmsserverconnection obj = baseObj as  Ogcwmsserverconnection;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwmsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWMSServerConnection");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwmsserverconnectionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwmsserverconnection emptyInstance = new Ogcwmsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
