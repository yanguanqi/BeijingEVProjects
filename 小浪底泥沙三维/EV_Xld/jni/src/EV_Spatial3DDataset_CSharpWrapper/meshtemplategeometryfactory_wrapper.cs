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
				public class MeshTemplateGeometryFactory : EarthView.World.Core.AllocatedObject
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_getSingletonPtr_CMeshTemplateGeometryFactory();

					/// <summary>
					/// 获取工厂单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工程单件对象</returns>
					public static EarthView.World.Spatial3D.Dataset.MeshTemplateGeometryFactory GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_getSingletonPtr_CMeshTemplateGeometryFactory();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.MeshTemplateGeometryFactory csObj = new EarthView.World.Spatial3D.Dataset.MeshTemplateGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMeshTemplateGeometryFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.MeshTemplateGeometryFactory;
							csObj.BindNativeObject(__ptr, "CMeshTemplateGeometryFactory");
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
					private static extern void EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_releaseSingleton_void();

					/// <summary>
					/// 释放工程单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static void ReleaseSingleton()
					{
						EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_releaseSingleton_void();
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_createInstance_CMeshTemplateGeometry(IntPtr pNativeObject);

					/// <summary>
					/// 创建一个EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>创建的EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象</returns>
					public EarthView.World.Spatial3D.Dataset.MeshTemplateGeometry CreateInstance()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_createInstance_CMeshTemplateGeometry(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.MeshTemplateGeometry csObj = new EarthView.World.Spatial3D.Dataset.MeshTemplateGeometry(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMeshTemplateGeometry");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.MeshTemplateGeometry;
							csObj.BindNativeObject(__ptr, "CMeshTemplateGeometry");
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
					private static extern void EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_releaseInstance_void_CMeshTemplateGeometry(IntPtr pNativeObject, IntPtr geom);

					/// <summary>
					/// 释放EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
					/// </summary>
					/// <param name="geom">需要释放的对象</param>
					/// <returns></returns>
					public void ReleaseInstance(EarthView.World.Spatial3D.Dataset.MeshTemplateGeometry geom)
					{
						EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_releaseInstance_void_CMeshTemplateGeometry(this.NativeObject, object.Equals(geom, null) ? IntPtr.Zero : geom.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadMeshTemplateGeometryFactory = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory", new MeshTemplateGeometryFactoryClassFactory());

					public MeshTemplateGeometryFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MeshTemplateGeometryFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MeshTemplateGeometryFactory obj = baseObj as  MeshTemplateGeometryFactory;
						if (object.Equals(obj, null))
						{
							obj = new MeshTemplateGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMeshTemplateGeometryFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MeshTemplateGeometryFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MeshTemplateGeometryFactory emptyInstance = new MeshTemplateGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
