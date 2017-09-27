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
				/// 数据交换驱动类
				/// </summary>
				public class ModelDataDriver : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_DataExchange_CModelDataDriver_getType_EVModelDataDriverType(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据驱动类型
					/// </summary>
					/// <returns>数据驱动类型                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                </returns>
					public EarthView.World.Spatial3D.DataExchange.EVMODELDATADRIVERTYPE GetType()
					{
						int ret=EarthView_World_Spatial3D_DataExchange_CModelDataDriver_getType_EVModelDataDriverType(this.NativeObject);
						
						return (EarthView.World.Spatial3D.DataExchange.EVMODELDATADRIVERTYPE)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelDataDriver = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataDriver", new ModelDataDriverClassFactory());

					public ModelDataDriver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelDataDriver FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelDataDriver obj = baseObj as  ModelDataDriver;
						if (object.Equals(obj, null))
						{
							obj = new ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelDataDriver");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelDataDriverClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelDataDriver emptyInstance = new ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
