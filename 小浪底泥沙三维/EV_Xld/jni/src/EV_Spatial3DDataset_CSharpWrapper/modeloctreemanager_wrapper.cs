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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				public class ModelOctreeManager : EarthView.World.Spatial.Octree.OctreeManager
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManager_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(IntPtr db, string datasourceName, IntPtr box, uint maxDepth, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasourceModelOctreeManager(EarthView.World.Core.Database.SqlDatabase db, string datasourceName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManager_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(object.Equals(db, null) ? IntPtr.Zero : db.NativeObject, datasourceName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManagerWithCache_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(IntPtr db, string datasourceName, IntPtr box, uint maxDepth, string cacheFolder, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasourceModelOctreeManagerWithCache(EarthView.World.Core.Database.SqlDatabase db, string datasourceName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, string cacheFolder, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManagerWithCache_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(object.Equals(db, null) ? IntPtr.Zero : db.NativeObject, datasourceName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, cacheFolder, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManager_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(string web, string datasourceName, IntPtr box, uint maxDepth, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasourceModelOctreeManager(string web, string datasourceName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManager_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(web, datasourceName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManagerWithCache_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(string web, string datasourceName, IntPtr box, uint maxDepth, string cacheFolder, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasourceModelOctreeManagerWithCache(string web, string datasourceName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, string cacheFolder, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasourceModelOctreeManagerWithCache_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(web, datasourceName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, cacheFolder, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManager_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(IntPtr db, string datasetAliasName, IntPtr box, uint maxDepth, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasetModelOctreeManager(EarthView.World.Core.Database.SqlDatabase db, string datasetAliasName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManager_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_ev_bool(object.Equals(db, null) ? IntPtr.Zero : db.NativeObject, datasetAliasName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(IntPtr db, string datasetAliasName, IntPtr box, uint maxDepth, string cacheFolder, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasetModelOctreeManagerWithCache(EarthView.World.Core.Database.SqlDatabase db, string datasetAliasName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, string cacheFolder, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_CSqlDatabase_EVString_CAxisAlignedBox_ev_uint32_EVString_ev_bool(object.Equals(db, null) ? IntPtr.Zero : db.NativeObject, datasetAliasName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, cacheFolder, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManager_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(string web, string datasetAliasName, IntPtr box, uint maxDepth, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasetModelOctreeManager(string web, string datasetAliasName, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManager_CModelOctreeManager_EVString_EVString_CAxisAlignedBox_ev_uint32_ev_bool(web, datasetAliasName, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_EVString_CEVSpatialServer_CEVBaseModelDataset_CAxisAlignedBox_ev_uint32_EVString_ev_bool(string web, IntPtr pNetServer, IntPtr pNetDataset, IntPtr box, uint maxDepth, string cacheFolder, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasetModelOctreeManagerWithCache(string web, EarthView.World.Spatial.Evspatialserver pNetServer, EarthView.World.Spatial.Evbasemodeldataset pNetDataset, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, string cacheFolder, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_EVString_CEVSpatialServer_CEVBaseModelDataset_CAxisAlignedBox_ev_uint32_EVString_ev_bool(web, object.Equals(pNetServer, null) ? IntPtr.Zero : pNetServer.NativeObject, object.Equals(pNetDataset, null) ? IntPtr.Zero : pNetDataset.NativeObject, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, cacheFolder, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_EVString_CEVSpatialServer_CEVBaseModelDataset_CEVBaseModelLayerInfo_CAxisAlignedBox_ev_uint32_EVString_ev_bool(string web, IntPtr pNetServer, IntPtr pNetDataset, IntPtr pNetDatasetInfo, IntPtr box, uint maxDepth, string cacheFolder, byte autoInit);

					public static EarthView.World.Spatial3D.Dataset.ModelOctreeManager NewDatasetModelOctreeManagerWithCache(string web, EarthView.World.Spatial.Evspatialserver pNetServer, EarthView.World.Spatial.Evbasemodeldataset pNetDataset, EarthView.World.Spatial.Evbasemodellayerinfo pNetDatasetInfo, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth, string cacheFolder, bool autoInit)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelOctreeManager_newDatasetModelOctreeManagerWithCache_CModelOctreeManager_EVString_CEVSpatialServer_CEVBaseModelDataset_CEVBaseModelLayerInfo_CAxisAlignedBox_ev_uint32_EVString_ev_bool(web, object.Equals(pNetServer, null) ? IntPtr.Zero : pNetServer.NativeObject, object.Equals(pNetDataset, null) ? IntPtr.Zero : pNetDataset.NativeObject, object.Equals(pNetDatasetInfo, null) ? IntPtr.Zero : pNetDatasetInfo.NativeObject, object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, maxDepth, cacheFolder, Convert.ToByte(autoInit));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ModelOctreeManager csObj = new EarthView.World.Spatial3D.Dataset.ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelOctreeManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ModelOctreeManager;
							csObj.BindNativeObject(__ptr, "CModelOctreeManager");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ModelOctreeManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelOctreeManager",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ModelOctreeManager(EarthView.World.Core.Database.SqlDatabase db, string octreeTable, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedb = new BasePtr(db);
						list.Add("db", valuedb.PtrVal);
						BasePtr valueoctreeTable = new BasePtr(octreeTable);
						list.Add("octreeTable", valueoctreeTable.PtrVal);
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CModelOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ModelOctreeManager(string web, EarthView.World.Spatial.Evspatialserver pNetServer, EarthView.World.Spatial.Evbasemodeldataset pNetDataset, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueweb = new BasePtr(web);
						list.Add("web", valueweb.PtrVal);
						BasePtr valuepNetServer = new BasePtr(pNetServer);
						list.Add("pNetServer", valuepNetServer.PtrVal);
						BasePtr valuepNetDataset = new BasePtr(pNetDataset);
						list.Add("pNetDataset", valuepNetDataset.PtrVal);
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CModelOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public ModelOctreeManager(string web, EarthView.World.Spatial.Evspatialserver pNetServer, EarthView.World.Spatial.Evbasemodeldataset pNetDataset, EarthView.World.Spatial.Evbasemodellayerinfo pNetDatasetInfo, EarthView.World.Spatial.Math.AxisAlignedBox box, uint maxDepth) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueweb = new BasePtr(web);
						list.Add("web", valueweb.PtrVal);
						BasePtr valuepNetServer = new BasePtr(pNetServer);
						list.Add("pNetServer", valuepNetServer.PtrVal);
						BasePtr valuepNetDataset = new BasePtr(pNetDataset);
						list.Add("pNetDataset", valuepNetDataset.PtrVal);
						BasePtr valuepNetDatasetInfo = new BasePtr(pNetDatasetInfo);
						list.Add("pNetDatasetInfo", valuepNetDatasetInfo.PtrVal);
						BasePtr valuebox = new BasePtr(box);
						list.Add("box", valuebox.PtrVal);
						BasePtr valuemaxDepth = new BasePtr(maxDepth);
						list.Add("maxDepth", valuemaxDepth.PtrVal);
						Create("CModelOctreeManager", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelOctreeManager = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CModelOctreeManager", new ModelOctreeManagerClassFactory());

					public ModelOctreeManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelOctreeManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelOctreeManager obj = baseObj as  ModelOctreeManager;
						if (object.Equals(obj, null))
						{
							obj = new ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelOctreeManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelOctreeManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelOctreeManager emptyInstance = new ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
