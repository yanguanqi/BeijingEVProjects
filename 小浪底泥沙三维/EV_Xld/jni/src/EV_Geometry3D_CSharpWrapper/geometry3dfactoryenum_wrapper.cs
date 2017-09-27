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
			namespace Atlas
			{
				/// <summary>
				/// 三维类工厂枚举类
				/// 管理三维工厂的创建和销毁
				/// </summary>
				public class Geometry3DFactoryEnum : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_registerFactory_ev_bool_IGeometry3DFactory(IntPtr pNativeObject, IntPtr factory);

					public bool RegisterFactory(EarthView.World.Spatial3D.Atlas.Igeometry3dfactory factory)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_registerFactory_ev_bool_IGeometry3DFactory(this.NativeObject, object.Equals(factory, null) ? IntPtr.Zero : factory.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_getFactory_IGeometry3DFactory_ev_uint16(IntPtr pNativeObject, ushort type);

					public EarthView.World.Spatial3D.Atlas.Igeometry3dfactory GetFactory(ushort type)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_getFactory_IGeometry3DFactory_ev_uint16(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.Igeometry3dfactory csObj = new EarthView.World.Spatial3D.Atlas.Igeometry3dfactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IGeometry3DFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Igeometry3dfactory;
							csObj.BindNativeObject(__ptr, "IGeometry3DFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_getSingletonPtr_CGeometry3DFactoryEnum();

					/// <summary>
					/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回单体类的引用</returns>
					public static EarthView.World.Spatial3D.Atlas.Geometry3DFactoryEnum GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_getSingletonPtr_CGeometry3DFactoryEnum();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Atlas.Geometry3DFactoryEnum csObj = new EarthView.World.Spatial3D.Atlas.Geometry3DFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGeometry3DFactoryEnum");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Atlas.Geometry3DFactoryEnum;
							csObj.BindNativeObject(__ptr, "CGeometry3DFactoryEnum");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_d.so");
							private static bool csbLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

						#else 
							private static bool bLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D.so");
							private static bool csbLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_CSharp.so");

						#else 
							private static bool bLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadGeometry3DFactoryEnum = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum", new Geometry3DFactoryEnumClassFactory());

					public Geometry3DFactoryEnum(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Geometry3DFactoryEnum FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Geometry3DFactoryEnum obj = baseObj as  Geometry3DFactoryEnum;
						if (object.Equals(obj, null))
						{
							obj = new Geometry3DFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGeometry3DFactoryEnum");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Geometry3DFactoryEnumClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Geometry3DFactoryEnum emptyInstance = new Geometry3DFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
