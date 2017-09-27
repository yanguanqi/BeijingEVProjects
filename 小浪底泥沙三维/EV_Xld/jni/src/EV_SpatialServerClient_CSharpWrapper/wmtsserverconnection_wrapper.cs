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
			/// OGC WMTS 服务连接类
			/// </summary>
			public class Ogcwmtsserverconnection : EarthView.World.Spatial.ServerConnection
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public Ogcwmtsserverconnection() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("COGCWMTSServerConnection",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMTSServerConnection", new OgcwmtsserverconnectionClassFactory());

				public Ogcwmtsserverconnection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Ogcwmtsserverconnection FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwmtsserverconnection obj = baseObj as  Ogcwmtsserverconnection;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwmtsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWMTSServerConnection");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwmtsserverconnectionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwmtsserverconnection emptyInstance = new Ogcwmtsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
