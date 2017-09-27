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
			/// OGC WFS 服务连接类
			/// </summary>
			public class Ogcwfsserverconnection : EarthView.World.Spatial.ServerConnection
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public Ogcwfsserverconnection() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("COGCWFSServerConnection",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwfsserverconnection = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWFSServerConnection", new OgcwfsserverconnectionClassFactory());

				public Ogcwfsserverconnection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Ogcwfsserverconnection FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwfsserverconnection obj = baseObj as  Ogcwfsserverconnection;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwfsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWFSServerConnection");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwfsserverconnectionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwfsserverconnection emptyInstance = new Ogcwfsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
