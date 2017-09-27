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
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
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
			}
			namespace ModelManager
			{
				public class ModelUtility : EarthView.World.Core.AllocatedObject
				{
					public ModelUtility() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelUtility",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_ev_bool_IDataset_ev_uint32_ModelDataStream(IntPtr ds, uint id, IntPtr modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">抽象数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					public static bool ReadModelDataStream(EarthView.World.Spatial.GeoDataset.Idataset ds, uint id, ref  EarthView.World.Spatial3D.ModelDataStream modelDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_ev_bool_IDataset_ev_uint32_ModelDataStream(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_db_ev_bool_CEntityDataset_ev_uint32_ModelDataStream(IntPtr ds, uint id, IntPtr modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					public static bool ReadModelDataStream_db(EarthView.World.Spatial3D.Dataset.EntityDataset ds, uint id, ref  EarthView.World.Spatial3D.ModelDataStream modelDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_db_ev_bool_CEntityDataset_ev_uint32_ModelDataStream(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_db_ev_bool_CMeshTemplateDataset_ev_uint32_ModelDataStream(IntPtr ds, uint id, IntPtr modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">模板库数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					public static bool ReadModelDataStream_db(EarthView.World.Spatial3D.Dataset.MeshTemplateDataset ds, uint id, ref  EarthView.World.Spatial3D.ModelDataStream modelDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_db_ev_bool_CMeshTemplateDataset_ev_uint32_ModelDataStream(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_web_ev_bool_CWebEntityDataset_ev_uint32_ModelDataStream(IntPtr ds, uint id, IntPtr modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					public static bool ReadModelDataStream_web(EarthView.World.Spatial3D.Dataset.WebEntityDataset ds, uint id, ref  EarthView.World.Spatial3D.ModelDataStream modelDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_web_ev_bool_CWebEntityDataset_ev_uint32_ModelDataStream(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_web_ev_bool_CWebMeshTemplateDataset_ev_uint32_ModelDataStream(IntPtr ds, uint id, IntPtr modelDataStream);

					/// <summary>
					/// 读模型数据流
					/// </summary>
					/// <param name="ds">模板库数据集</param>
					/// <param name="id">模型ID</param>
					/// <returns>返回的模型数据流，里边的feature需要外部释放</returns>
					public static bool ReadModelDataStream_web(EarthView.World.Spatial3D.Dataset.WebMeshTemplateDataset ds, uint id, ref  EarthView.World.Spatial3D.ModelDataStream modelDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_readModelDataStream_web_ev_bool_CWebMeshTemplateDataset_ev_uint32_ModelDataStream(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_MemoryDataStreamPtr_IDataset_ev_uint32(IntPtr ds, uint meshID);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="ds">抽象数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					public static EarthView.World.Core.MemoryDataStreamPtr ReadAniDataStream(EarthView.World.Spatial.GeoDataset.Idataset ds, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_MemoryDataStreamPtr_IDataset_ev_uint32(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_MemoryDataStreamPtr_EVString(string aniFile);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="aniFile">ani文件</param>
					/// <returns>返回ani数据流</returns>
					public static EarthView.World.Core.MemoryDataStreamPtr ReadAniDataStream(string aniFile)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_MemoryDataStreamPtr_EVString(aniFile);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_db_MemoryDataStreamPtr_CEntityDataset_ev_uint32(IntPtr ds, uint meshID);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					public static EarthView.World.Core.MemoryDataStreamPtr ReadAniDataStream_db(EarthView.World.Spatial3D.Dataset.EntityDataset ds, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_db_MemoryDataStreamPtr_CEntityDataset_ev_uint32(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_web_MemoryDataStreamPtr_CWebEntityDataset_ev_uint32(IntPtr ds, uint meshID);

					/// <summary>
					/// 读网络模型ANI流
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					public static EarthView.World.Core.MemoryDataStreamPtr ReadAniDataStream_web(EarthView.World.Spatial3D.Dataset.WebEntityDataset ds, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_web_MemoryDataStreamPtr_CWebEntityDataset_ev_uint32(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_db_MemoryDataStreamPtr_CMeshTemplateDataset_ev_uint32(IntPtr ds, uint meshID);

					/// <summary>
					/// 读模型ANI流
					/// </summary>
					/// <param name="ds">模板库数据集</param>
					/// <param name="meshID">模型mesh的ID</param>
					/// <returns>返回ani数据流</returns>
					public static EarthView.World.Core.MemoryDataStreamPtr ReadAniDataStream_db(EarthView.World.Spatial3D.Dataset.MeshTemplateDataset ds, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_readAniDataStream_db_MemoryDataStreamPtr_CMeshTemplateDataset_ev_uint32(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_readMeshFeature_IFeature_CEntityDataset_ev_uint32(IntPtr ds, uint id);

					/// <summary>
					/// 读取图层meshFeature
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="meshID">模型的ID</param>
					/// <returns>返回feature，NULL失败</returns>
					public static EarthView.World.Spatial.GeoDataset.Ifeature ReadMeshFeature(EarthView.World.Spatial3D.Dataset.EntityDataset ds, uint id)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_readMeshFeature_IFeature_CEntityDataset_ev_uint32(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, id);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ifeature csObj = new EarthView.World.Spatial.GeoDataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IFeature");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeature;
							csObj.BindNativeObject(__ptr, "IFeature");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial3D_ModelManager_CModelUtility_getMeshTmplID_ev_uint32_CMeshTemplateDataset_ev_uint32(IntPtr ds, uint instID);

					/// <summary>
					/// 读取instance图层模型在模型库中模板ID
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="instID">模型在模型库的mesh的instID</param>
					/// <returns>返回feature，NULL失败</returns>
					public static uint GetMeshTmplID(EarthView.World.Spatial3D.Dataset.MeshTemplateDataset ds, uint instID)
					{
						uint ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_getMeshTmplID_ev_uint32_CMeshTemplateDataset_ev_uint32(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, instID);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(IntPtr pSceneManager, uint id, IntPtr modelDataStream, string groupname, byte bLoadOrigTexture, byte bLoadFromLayer, IntPtr modelResource);

					/// <summary>
					/// 加载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool LoadModelResource(EarthView.World.Graphic.SceneManager pSceneManager, uint id, EarthView.World.Spatial3D.ModelDataStream modelDataStream, string groupname, bool bLoadOrigTexture, bool bLoadFromLayer, ref  EarthView.World.Spatial3D.ModelResource modelResource)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject, groupname, Convert.ToByte(bLoadOrigTexture), Convert.ToByte(bLoadFromLayer), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(IntPtr pSceneManager, uint id, IntPtr modelDataStream, string groupname, byte bLoadOrigTexture, IntPtr pMaterialCache, byte bLoadFromLayer, IntPtr modelResource);

					/// <summary>
					/// 加载模型资源对象（图层使用）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="pMaterialCache">内存缓存</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool LoadModelResource(EarthView.World.Graphic.SceneManager pSceneManager, uint id, EarthView.World.Spatial3D.ModelDataStream modelDataStream, string groupname, bool bLoadOrigTexture, EarthView.World.Spatial3D.ModelManager.MaterialResourceCache pMaterialCache, bool bLoadFromLayer, ref  EarthView.World.Spatial3D.ModelResource modelResource)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject, groupname, Convert.ToByte(bLoadOrigTexture), object.Equals(pMaterialCache, null) ? IntPtr.Zero : pMaterialCache.NativeObject, Convert.ToByte(bLoadFromLayer), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(IntPtr pSceneManager, uint id, IntPtr modelDataStream, string groupname, byte bLoadOrigTexture, byte bLoadFromLayer, IntPtr modelResource);

					/// <summary>
					/// 加载instanced模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool LoadInstanceResource(EarthView.World.Graphic.SceneManager pSceneManager, uint id, EarthView.World.Spatial3D.ModelDataStream modelDataStream, string groupname, bool bLoadOrigTexture, bool bLoadFromLayer, ref  EarthView.World.Spatial3D.ModelResource modelResource)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject, groupname, Convert.ToByte(bLoadOrigTexture), Convert.ToByte(bLoadFromLayer), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(IntPtr pSceneManager, uint id, IntPtr modelDataStream, string groupname, byte bLoadOrigTexture, IntPtr pMaterialCache, byte bLoadFromLayer, IntPtr modelResource);

					/// <summary>
					/// 加载instanced模型资源对象（图层使用）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="modelDataStream">模型数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="bOnlyReadOrigTexture">true加载原始纹理，false加载小纹理（false一般图层使用）</param>
					/// <param name="pMaterialCache">内存缓存</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool LoadInstanceResource(EarthView.World.Graphic.SceneManager pSceneManager, uint id, EarthView.World.Spatial3D.ModelDataStream modelDataStream, string groupname, bool bLoadOrigTexture, EarthView.World.Spatial3D.ModelManager.MaterialResourceCache pMaterialCache, bool bLoadFromLayer, ref  EarthView.World.Spatial3D.ModelResource modelResource)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, id, object.Equals(modelDataStream, null) ? IntPtr.Zero : modelDataStream.NativeObject, groupname, Convert.ToByte(bLoadOrigTexture), object.Equals(pMaterialCache, null) ? IntPtr.Zero : pMaterialCache.NativeObject, Convert.ToByte(bLoadFromLayer), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(IntPtr pSceneManager, string modelfile, byte bFileDirAsGroup, IntPtr modelResource, IntPtr modelAniDataStream);

					/// <summary>
					/// 加载模型资源对象（文件）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="modelfile">模型文件</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <param name="modelResource">模型资源</param>
					/// <param name="modelAniDataStream">模型ANI流</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool LoadModelResource(EarthView.World.Graphic.SceneManager pSceneManager, string modelfile, bool bFileDirAsGroup, ref  EarthView.World.Spatial3D.ModelResource modelResource, ref  EarthView.World.Core.MemoryDataStreamPtr modelAniDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_loadModelResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, modelfile, Convert.ToByte(bFileDirAsGroup), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject, object.Equals(modelAniDataStream, null) ? IntPtr.Zero : modelAniDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(IntPtr pSceneManager, string modelfile, byte bFileDirAsGroup, IntPtr modelResource, IntPtr modelAniDataStream);

					/// <summary>
					/// 加载模型资源对象（文件）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="modelfile">模型文件</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <param name="modelResource">模型资源</param>
					/// <param name="modelAniDataStream">模型ANI流</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool LoadInstanceResource(EarthView.World.Graphic.SceneManager pSceneManager, string modelfile, bool bFileDirAsGroup, ref  EarthView.World.Spatial3D.ModelResource modelResource, ref  EarthView.World.Core.MemoryDataStreamPtr modelAniDataStream)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_loadInstanceResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, modelfile, Convert.ToByte(bFileDirAsGroup), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject, object.Equals(modelAniDataStream, null) ? IntPtr.Zero : modelAniDataStream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_ev_uint32_EVString_ModelResource(IntPtr pSceneManager, uint id, string groupname, IntPtr modelResource);

					/// <summary>
					/// 卸载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool UnloadModelResource(EarthView.World.Graphic.SceneManager pSceneManager, uint id, string groupname, ref EarthView.World.Spatial3D.ModelResource modelResource)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_ev_uint32_EVString_ModelResource(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, id, groupname, object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource(IntPtr pSceneManager, string modelfile, byte bFileDirAsGroup, IntPtr modelResource);

					/// <summary>
					/// 卸载模型资源对象（文件）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="modelResource">模型资源</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool UnloadModelResource(EarthView.World.Graphic.SceneManager pSceneManager, string modelfile, bool bFileDirAsGroup, ref EarthView.World.Spatial3D.ModelResource modelResource)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_EVString_ev_bool_ModelResource(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, modelfile, Convert.ToByte(bFileDirAsGroup), object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_ev_uint32_EVString_ModelResource_CMaterialResourceCache(IntPtr pSceneManager, uint id, string groupname, IntPtr modelResource, IntPtr pMaterialCache);

					/// <summary>
					/// 加载模型资源对象 （图层使用）
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="id">模型id</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="modelResource">模型mesh的ID</param>
					/// <param name="pMaterialCache">内存缓存</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool UnloadModelResource(EarthView.World.Graphic.SceneManager pSceneManager, uint id, string groupname, ref EarthView.World.Spatial3D.ModelResource modelResource, EarthView.World.Spatial3D.ModelManager.MaterialResourceCache pMaterialCache)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_unloadModelResource_ev_bool_CSceneManager_ev_uint32_EVString_ModelResource_CMaterialResourceCache(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, id, groupname, object.Equals(modelResource, null) ? IntPtr.Zero : modelResource.NativeObject, object.Equals(pMaterialCache, null) ? IntPtr.Zero : pMaterialCache.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_createEntity_CEntity_CSceneManager_EVString_EVString_EVString(IntPtr pSceneManager, string entName, string meshFilename, string groupName);

					/// <summary>
					/// 加载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="entName">实体名</param>
					/// <param name="meshFilename">模型文件名</param>
					/// <param name="groupName">模型资源组名</param>
					/// <returns>返回实体指针，NULL失败</returns>
					public static EarthView.World.Graphic.Entity CreateEntity(EarthView.World.Graphic.SceneManager pSceneManager, string entName, string meshFilename, string groupName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_createEntity_CEntity_CSceneManager_EVString_EVString_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, entName, meshFilename, groupName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Entity csObj = new EarthView.World.Graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEntity");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Entity;
							csObj.BindNativeObject(__ptr, "CEntity");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelUtility_createEntity_CEntity_CSceneManager_EVString_EVString_EVString_IntVector(IntPtr pSceneManager, string entName, string meshFilename, string groupName, IntPtr subEntityIndexs);

					/// <summary>
					/// 加载模型资源对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="entName">实体名</param>
					/// <param name="meshFilename">模型文件名</param>
					/// <param name="groupName">模型资源组名</param>
					/// <param name="subEntityIndexs">实体部分组件索引集</param>
					/// <returns>返回实体指针，NULL失败</returns>
					public static EarthView.World.Graphic.Entity CreateEntity(EarthView.World.Graphic.SceneManager pSceneManager, string entName, string meshFilename, string groupName, EarthView.World.Core.IntVector subEntityIndexs)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelUtility_createEntity_CEntity_CSceneManager_EVString_EVString_EVString_IntVector(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, entName, meshFilename, groupName, object.Equals(subEntityIndexs, null) ? IntPtr.Zero : subEntityIndexs.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Entity csObj = new EarthView.World.Graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CEntity");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Entity;
							csObj.BindNativeObject(__ptr, "CEntity");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyEntity_ev_bool_CSceneManager_CEntity(IntPtr pSceneManager, IntPtr pEntity);

					/// <summary>
					/// 销毁实体对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="pEntity">实体指针</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool DestroyEntity(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Graphic.Entity pEntity)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyEntity_ev_bool_CSceneManager_CEntity(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pEntity, null) ? IntPtr.Zero : pEntity.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceManager_ev_bool_CSceneManager_EVString_CMeshPtr_ev_uint32_EVString_ev_bool_ev_bool_InstanceManagerVector(IntPtr pSceneManager, string customName, IntPtr meshPtr, uint numInstancesPerBatch, string groupname, byte aysncUpdateBuffer, byte strategyForCustomer, IntPtr instMngerVec);

					/// <summary>
					/// 创建instanceManager
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="customName">instanceManager名称</param>
					/// <param name="meshPtr">mesh指针</param>
					/// <param name="numInstancesPerBatch">每批次渲染个数</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="aysncUpdateBuffer">异步刷新方式创建</param>
					/// <param name="strategyForCustomer">用户工厂创建方式/图层创建方式，计算numinstanceperbatch</param>
					/// <param name="instMngerVec">传出创建好的instanceManager容器</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool CreateInstanceManager(EarthView.World.Graphic.SceneManager pSceneManager, string customName, EarthView.World.Graphic.MeshPtr meshPtr, uint numInstancesPerBatch, string groupname, bool aysncUpdateBuffer, bool strategyForCustomer, ref  EarthView.World.Spatial3D.InstanceManagerVector instMngerVec)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceManager_ev_bool_CSceneManager_EVString_CMeshPtr_ev_uint32_EVString_ev_bool_ev_bool_InstanceManagerVector(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, customName, object.Equals(meshPtr, null) ? IntPtr.Zero : meshPtr.NativeObject, numInstancesPerBatch, groupname, Convert.ToByte(aysncUpdateBuffer), Convert.ToByte(strategyForCustomer), object.Equals(instMngerVec, null) ? IntPtr.Zero : instMngerVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyInstanceManager_ev_bool_InstanceManagerVector(IntPtr instMngerVec);

					/// <summary>
					/// 销毁instanceManager
					/// </summary>
					/// <param name="instMngerVec">instanceManager容器</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool DestroyInstanceManager(EarthView.World.Spatial3D.InstanceManagerVector instMngerVec)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyInstanceManager_ev_bool_InstanceManagerVector(object.Equals(instMngerVec, null) ? IntPtr.Zero : instMngerVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceEntity_ev_bool_CMeshPtr_InstanceManagerVector_InstancedEntityVector(IntPtr meshPtr, IntPtr instMngerVec, IntPtr instEntVec);

					/// <summary>
					/// 创建instanceEntity
					/// </summary>
					/// <param name="meshPtr">mesh指针</param>
					/// <param name="instMngerVec">instanceManager容器</param>
					/// <param name="instEntVec">instanceEntity容器</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool CreateInstanceEntity(EarthView.World.Graphic.MeshPtr meshPtr, EarthView.World.Spatial3D.InstanceManagerVector instMngerVec, ref  EarthView.World.Spatial3D.InstancedEntityVector instEntVec)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceEntity_ev_bool_CMeshPtr_InstanceManagerVector_InstancedEntityVector(object.Equals(meshPtr, null) ? IntPtr.Zero : meshPtr.NativeObject, object.Equals(instMngerVec, null) ? IntPtr.Zero : instMngerVec.NativeObject, object.Equals(instEntVec, null) ? IntPtr.Zero : instEntVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceEntity_ev_bool_CMeshPtr_InstanceManagerVector_IntVector_InstancedEntityVector(IntPtr meshPtr, IntPtr instMngerVec, IntPtr subEntityIndexs, IntPtr instEntVec);

					/// <summary>
					/// 创建instanceEntity
					/// </summary>
					/// <param name="meshPtr">mesh指针</param>
					/// <param name="instMngerVec">instanceManager容器</param>
					/// <param name="subEntityIndexs">instanceManager容器</param>
					/// <param name="instEntVec">instanceEntity容器</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool CreateInstanceEntity(EarthView.World.Graphic.MeshPtr meshPtr, EarthView.World.Spatial3D.InstanceManagerVector instMngerVec, EarthView.World.Core.IntVector subEntityIndexs, ref  EarthView.World.Spatial3D.InstancedEntityVector instEntVec)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_createInstanceEntity_ev_bool_CMeshPtr_InstanceManagerVector_IntVector_InstancedEntityVector(object.Equals(meshPtr, null) ? IntPtr.Zero : meshPtr.NativeObject, object.Equals(instMngerVec, null) ? IntPtr.Zero : instMngerVec.NativeObject, object.Equals(subEntityIndexs, null) ? IntPtr.Zero : subEntityIndexs.NativeObject, object.Equals(instEntVec, null) ? IntPtr.Zero : instEntVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyInstanceEntity_ev_bool_CSceneManager_InstancedEntityVector(IntPtr pSceneManager, IntPtr instEntVec);

					/// <summary>
					/// 销毁instanceEntity
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="instEntVec">instanceEntity容器</param>
					/// <returns>返回true成功，false失败</returns>
					public static bool DestroyInstanceEntity(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.InstancedEntityVector instEntVec)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_destroyInstanceEntity_ev_bool_CSceneManager_InstancedEntityVector(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(instEntVec, null) ? IntPtr.Zero : instEntVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_destroySceneNode_ev_bool_CSceneManager_CSceneNode(IntPtr pSceneManager, IntPtr n);

					/// <summary>
					/// 销毁节点对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="n">场景节点对象</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					public static bool DestroySceneNode(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Graphic.SceneNode n)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_destroySceneNode_ev_bool_CSceneManager_CSceneNode(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(n, null) ? IntPtr.Zero : n.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_switchThumbTexture_ev_bool_FeatureVector_EVString_ev_bool_TexturePtrVector(IntPtr thumbTextures, string groupname, byte bLoadFromLayer, IntPtr thumbTexturePtrVector);

					/// <summary>
					/// 加载小纹理影像对象 (图层使用)
					/// </summary>
					/// <param name="thumbTextures">小纹理feature集</param>
					/// <param name="imgItems">小纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					public static bool SwitchThumbTexture(EarthView.World.Spatial3D.Dataset.FeatureVector thumbTextures, string groupname, bool bLoadFromLayer, ref  EarthView.World.Spatial3D.TexturePtrVector thumbTexturePtrVector)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_switchThumbTexture_ev_bool_FeatureVector_EVString_ev_bool_TexturePtrVector(object.Equals(thumbTextures, null) ? IntPtr.Zero : thumbTextures.NativeObject, groupname, Convert.ToByte(bLoadFromLayer), object.Equals(thumbTexturePtrVector, null) ? IntPtr.Zero : thumbTexturePtrVector.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_attachThumbTexture_ev_bool_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(IntPtr materialObjs, IntPtr textureObjs, IntPtr thumbTexturePtrVector, string groupname);

					/// <summary>
					/// 加载小纹理对象 (图层使用)
					/// </summary>
					/// <param name="thumbTextures">小纹理feature集</param>
					/// <param name="groupname">组名</param>
					/// <param name="imgItems">小纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					public static bool AttachThumbTexture(ref EarthView.World.Spatial3D.MaterialPtrVector materialObjs, ref EarthView.World.Spatial3D.TexturePtrVector textureObjs, ref EarthView.World.Spatial3D.TexturePtrVector thumbTexturePtrVector, string groupname)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_attachThumbTexture_ev_bool_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(object.Equals(materialObjs, null) ? IntPtr.Zero : materialObjs.NativeObject, object.Equals(textureObjs, null) ? IntPtr.Zero : textureObjs.NativeObject, object.Equals(thumbTexturePtrVector, null) ? IntPtr.Zero : thumbTexturePtrVector.NativeObject, groupname);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_switchOrigTexture_ev_bool_IDataset_ModelType_ev_uint32_FeatureVector_EVString_ev_bool_TexturePtrVector(IntPtr ds, EarthView.World.Spatial3D.MODELTYPE type, uint meshID, IntPtr origTextures, string groupname, byte bLoadFromLayer, IntPtr origTexturePtrVector);

					/// <summary>
					/// 加载大纹理影像对象 (图层使用)
					/// </summary>
					/// <param name="ds">图层数据集</param>
					/// <param name="type">模型资源类别</param>
					/// <param name="meshID">meshID</param>
					/// <param name="origTextures">大纹理数据流</param>
					/// <param name="imgItems">大纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					public static bool SwitchOrigTexture(EarthView.World.Spatial.GeoDataset.Idataset ds, EarthView.World.Spatial3D.MODELTYPE type, uint meshID, EarthView.World.Spatial3D.Dataset.FeatureVector origTextures, string groupname, bool bLoadFromLayer, ref  EarthView.World.Spatial3D.TexturePtrVector origTexturePtrVector)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_switchOrigTexture_ev_bool_IDataset_ModelType_ev_uint32_FeatureVector_EVString_ev_bool_TexturePtrVector(object.Equals(ds, null) ? IntPtr.Zero : ds.NativeObject, type, meshID, object.Equals(origTextures, null) ? IntPtr.Zero : origTextures.NativeObject, groupname, Convert.ToByte(bLoadFromLayer), object.Equals(origTexturePtrVector, null) ? IntPtr.Zero : origTexturePtrVector.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelUtility_attachOrigTexture_ev_bool_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(IntPtr materialObjs, IntPtr textureObjs, IntPtr origTexturePtrVector, string groupname);

					/// <summary>
					/// 加载大纹理对象 (图层使用)
					/// </summary>
					/// <param name="origTextures">大纹理数据流</param>
					/// <param name="thumbTextures">小纹理数据流</param>
					/// <param name="groupname">模型资源组名</param>
					/// <param name="imgItems">大纹理的影像流容器</param>
					/// <returns>ev_bool，TRUE成功/FALSE失败</returns>
					public static bool AttachOrigTexture(ref EarthView.World.Spatial3D.MaterialPtrVector materialObjs, ref EarthView.World.Spatial3D.TexturePtrVector textureObjs, ref EarthView.World.Spatial3D.TexturePtrVector origTexturePtrVector, string groupname)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelUtility_attachOrigTexture_ev_bool_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(object.Equals(materialObjs, null) ? IntPtr.Zero : materialObjs.NativeObject, object.Equals(textureObjs, null) ? IntPtr.Zero : textureObjs.NativeObject, object.Equals(origTexturePtrVector, null) ? IntPtr.Zero : origTexturePtrVector.NativeObject, groupname);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelUtility = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CModelUtility", new ModelUtilityClassFactory());

					public ModelUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelUtility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelUtility obj = baseObj as  ModelUtility;
						if (object.Equals(obj, null))
						{
							obj = new ModelUtility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelUtility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelUtilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelUtility emptyInstance = new ModelUtility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
