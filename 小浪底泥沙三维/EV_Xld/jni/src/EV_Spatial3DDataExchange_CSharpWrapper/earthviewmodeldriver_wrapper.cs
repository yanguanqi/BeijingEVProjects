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
				/// <summary>
				/// 平台的模型数据交换驱动类，入库和导出
				/// </summary>
				public class EarthViewModelDriver : EarthView.World.Spatial3D.DataExchange.ModelDataDriver
				{
					#if DEBUG 
						#if Windows 
							private static bool bLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadEarthViewModelDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CEarthViewModelDriver", new EarthViewModelDriverClassFactory());

					public EarthViewModelDriver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static EarthViewModelDriver FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EarthViewModelDriver obj = baseObj as  EarthViewModelDriver;
						if (object.Equals(obj, null))
						{
							obj = new EarthViewModelDriver(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEarthViewModelDriver");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EarthViewModelDriverClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EarthViewModelDriver emptyInstance = new EarthViewModelDriver(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
