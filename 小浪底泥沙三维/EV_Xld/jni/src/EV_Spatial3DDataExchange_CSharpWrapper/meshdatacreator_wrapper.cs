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
				/// 负责创建meshdata，每次调用时create和destory都必须成对出现
				/// </summary>
				public class MeshDataCreator : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public MeshDataCreator() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMeshDataCreator",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_createMeshData_CMeshData_CEntityMetaData(IntPtr pNativeObject, IntPtr modelMetaData);

					/// <summary>
					/// 创建meshdata
					/// </summary>
					/// <param name="modelMetaData">模型源数据</param>
					/// <returns>返回meshdata</returns>	
					public EarthView.World.Spatial3D.DataExchange.MeshData CreateMeshData(EarthView.World.Spatial3D.DataExchange.EntityMetaData modelMetaData)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_createMeshData_CMeshData_CEntityMetaData(this.NativeObject, object.Equals(modelMetaData, null) ? IntPtr.Zero : modelMetaData.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.DataExchange.MeshData csObj = new EarthView.World.Spatial3D.DataExchange.MeshData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMeshData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.DataExchange.MeshData;
							csObj.BindNativeObject(__ptr, "CMeshData");
						}
						return csObj;
						
					}


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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_createMeshData_CMeshData_EVString(IntPtr pNativeObject, string meshPath);

					/// <summary>
					/// 创建meshdata
					/// </summary>
					/// <param name="modelcomponet">自定义模型组件</param>
					/// <returns>返回meshdata</returns>	
					//CMeshData createMeshData(const CModelComponent& modelcomponet); 
					/// <summary>
					/// 创建meshdata
					/// </summary>
					/// <param name="meshPath">本地的.mesh文件</param>
					/// <returns>返回meshdata</returns>	
					public EarthView.World.Spatial3D.DataExchange.MeshData CreateMeshData(string meshPath)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_createMeshData_CMeshData_EVString(this.NativeObject, meshPath);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.DataExchange.MeshData csObj = new EarthView.World.Spatial3D.DataExchange.MeshData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMeshData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.DataExchange.MeshData;
							csObj.BindNativeObject(__ptr, "CMeshData");
						}
						return csObj;
						
					}


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
					private static extern void EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_destroyMeshData_void_CMeshData(IntPtr pNativeObject, IntPtr meshData);

					/// <summary>
					/// 销毁meshdata
					/// </summary>
					/// <param name="meshData">销毁对象</param>
					/// <returns></returns>	
					public void DestroyMeshData(ref EarthView.World.Spatial3D.DataExchange.MeshData meshData)
					{
						EarthView_World_Spatial3D_DataExchange_CMeshDataCreator_destroyMeshData_void_CMeshData(this.NativeObject, object.Equals(meshData, null) ? IntPtr.Zero : meshData.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadMeshDataCreator = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshDataCreator", new MeshDataCreatorClassFactory());

					public MeshDataCreator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MeshDataCreator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MeshDataCreator obj = baseObj as  MeshDataCreator;
						if (object.Equals(obj, null))
						{
							obj = new MeshDataCreator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMeshDataCreator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MeshDataCreatorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MeshDataCreator emptyInstance = new MeshDataCreator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
