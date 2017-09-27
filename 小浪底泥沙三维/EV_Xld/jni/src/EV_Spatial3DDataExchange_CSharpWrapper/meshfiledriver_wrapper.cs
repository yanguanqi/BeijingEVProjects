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
		namespace Spatial3D
		{
			namespace DataExchange
			{
				public class MeshFileDriver : EarthView.World.Spatial3D.DataExchange.ModelDataDriver
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadMeshFileDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshFileDriver", new MeshFileDriverClassFactory());

					public MeshFileDriver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MeshFileDriver FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MeshFileDriver obj = baseObj as  MeshFileDriver;
						if (object.Equals(obj, null))
						{
							obj = new MeshFileDriver(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMeshFileDriver");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MeshFileDriverClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MeshFileDriver emptyInstance = new MeshFileDriver(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
