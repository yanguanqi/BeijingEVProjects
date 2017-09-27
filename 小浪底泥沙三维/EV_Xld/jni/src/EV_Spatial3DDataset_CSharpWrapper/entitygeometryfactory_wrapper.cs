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
			namespace Dataset
			{
				public class EntityGeometryFactory : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_getSingletonPtr_CEntityGeometryFactory();

					/// <summary>
					/// 获取EarthView::World::Spatial3D::Dataset::CEntityGeometry工厂对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂对象</returns>
					public static EarthView.World.Spatial3D.Dataset.EntityGeometryFactory GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_getSingletonPtr_CEntityGeometryFactory();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EntityGeometryFactory csObj = new EarthView.World.Spatial3D.Dataset.EntityGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEntityGeometryFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EntityGeometryFactory;
							csObj.BindNativeObject(__ptr, "CEntityGeometryFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_releaseSingleton_void();

					/// <summary>
					/// 释放EarthView::World::Spatial3D::Dataset::CEntityGeometry工厂对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static void ReleaseSingleton()
					{
						EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_releaseSingleton_void();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_createInstance_CEntityGeometry(IntPtr pNativeObject);

					/// <summary>
					/// 创建一个EarthView::World::Spatial3D::Dataset::CEntityGeometry
					/// </summary>
					/// <param name=""></param>
					/// <returns>构造的EarthView::World::Spatial3D::Dataset::CEntityGeometry对象</returns>
					public EarthView.World.Spatial3D.Dataset.EntityGeometry CreateInstance()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_createInstance_CEntityGeometry(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.EntityGeometry csObj = new EarthView.World.Spatial3D.Dataset.EntityGeometry(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEntityGeometry");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.EntityGeometry;
							csObj.BindNativeObject(__ptr, "CEntityGeometry");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_releaseInstance_void_CEntityGeometry(IntPtr pNativeObject, IntPtr geom);

					/// <summary>
					/// 释放一个EarthView::World::Spatial3D::Dataset::CEntityGeometry
					/// </summary>
					/// <param name="geom">需要释放的EarthView::World::Spatial3D::Dataset::CEntityGeometry对象</param>
					/// <returns></returns>
					public void ReleaseInstance(EarthView.World.Spatial3D.Dataset.EntityGeometry geom)
					{
						EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_releaseInstance_void_CEntityGeometry(this.NativeObject, object.Equals(geom, null) ? IntPtr.Zero : geom.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadEntityGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory", new EntityGeometryFactoryClassFactory());

					public EntityGeometryFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static EntityGeometryFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						EntityGeometryFactory obj = baseObj as  EntityGeometryFactory;
						if (object.Equals(obj, null))
						{
							obj = new EntityGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CEntityGeometryFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EntityGeometryFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						EntityGeometryFactory emptyInstance = new EntityGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
