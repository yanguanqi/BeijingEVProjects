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
			namespace ModelManager
			{
				public class ObliqueDataConvert : EarthView.World.Core.AllocatedObject
				{
					public ObliqueDataConvert() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CObliqueDataConvert",  null);
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertObqXmlToIndexDB_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string strTileXml);

					public static bool ConvertObqXmlToIndexDB(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string strTileXml)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertObqXmlToIndexDB_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, strTileXml);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_queryMeshFilesByRegion_StringVector_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat);

					public static EarthView.World.Core.StringVector QueryMeshFilesByRegion(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_queryMeshFilesByRegion_StringVector_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, level, minLon, minLat, maxLon, maxLat);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "StringVector");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
							csObj.BindNativeObject(__ptr, "StringVector");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_queryCpdStreamByRegion_MemoryDataStreamPtr_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat);

					public static EarthView.World.Core.MemoryDataStreamPtr QueryCpdStreamByRegion(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_queryCpdStreamByRegion_MemoryDataStreamPtr_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, level, minLon, minLat, maxLon, maxLat);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_getCpdFileByRegion_EVString_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat);

					public static string GetCpdFileByRegion(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_getCpdFileByRegion_EVString_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, level, minLon, minLat, maxLon, maxLat);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertLodTreeExportXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string strLodTreeExportXml);

					/// <summary>
					/// 转换METADATA的信息到库
					/// </summary>
					/// <param name="strLodTreeExportXml">lodTreeExportXml文件路径</param>
					/// <returns></returns>
					public static bool ConvertLodTreeExportXmlToDatabase(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string strLodTreeExportXml)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertLodTreeExportXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, strLodTreeExportXml);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertTopLodToDatabase_ev_bool_CObliqueDBUtility(IntPtr dbUtility);

					/// <summary>
					/// 转换顶级索引到数据库
					/// </summary>
					/// <returns></returns>
					public static bool ConvertTopLodToDatabase(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertTopLodToDatabase_ev_bool_CObliqueDBUtility(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertDemMetaInfoToDatabase_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string strDemXml);

					/// <summary>
					/// 转换DEM METADATA的信息到库
					/// </summary>
					/// <returns></returns>
					public static bool ConvertDemMetaInfoToDatabase(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string strDemXml)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertDemMetaInfoToDatabase_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, strDemXml);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_clearAllLodTab_ev_bool_CObliqueDBUtility(IntPtr dbUtility);

					/// <summary>
					/// 清除所有LOD表
					/// </summary>
					/// <returns></returns>
					public static bool ClearAllLodTab(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_clearAllLodTab_ev_bool_CObliqueDBUtility(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertLodXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string strTileXml);

					/// <summary>
					/// 转换一个瓦块目录索引到数据库
					/// </summary>
					/// <param name="strTileXml">瓦块xml</param>
					/// <param name="destDBFile">输出数据库文件路径，一般会有多个瓦块目录，必须传同一个数据库输出路径</param>
					/// <returns>默认认为数据库在瓦块的上一级，数据库如果存在则直接写入，不存在则创建。重复写入会清空原来的</returns>
					public static bool ConvertLodXmlToDatabase(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string strTileXml)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertLodXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, strTileXml);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertAllLodXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string strTileXml);

					/// <summary>
					/// 转换一个Data目录索引到数据库
					/// </summary>
					/// <param name="strDataFolder">Data目录</param>
					/// <param name="destDBFile">输出数据库文件路径，一般会有多个瓦块目录，必须传同一个数据库输出路径</param>
					/// <returns>默认认为数据库在瓦块的上一级，数据库如果存在则直接写入，不存在则创建。重复写入会清空原来的</returns>
					public static bool ConvertAllLodXmlToDatabase(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string strTileXml)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertAllLodXmlToDatabase_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, strTileXml);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateTileModelBound_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string tileName);

					/// <summary>
					/// 在转完mesh后，把每个mesh的外框计算出来
					/// </summary>
					/// <param name="tileName">瓦块名称</param>
					/// <returns></returns>
					public static bool UpdateTileModelBound(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string tileName)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateTileModelBound_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, tileName);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateTileModelBoundForMeshx_ev_bool_CObliqueDBUtility_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr dbUtility, string tileName, ref float xmin, ref float xmax, ref float ymin, ref float ymax, ref float zmin, ref float zmax);

					/// <summary>
					/// 在转完mesh后，把每个mesh的外框计算出来
					/// </summary>
					/// <param name="tileName">瓦块名称</param>
					/// <returns></returns>
					public static bool UpdateTileModelBoundForMeshx(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string tileName, ref float xmin, ref float xmax, ref float ymin, ref float ymax, ref float zmin, ref float zmax)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateTileModelBoundForMeshx_ev_bool_CObliqueDBUtility_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, tileName, ref xmin, ref xmax, ref ymin, ref ymax, ref zmin, ref zmax);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateDatasetBound_ev_bool_CObliqueDBUtility(IntPtr dbUtility);

					/// <summary>
					/// 在转完mesh后，计算总外边框
					/// </summary>
					/// <param name="tileName">瓦块名称</param>
					/// <returns></returns>
					public static bool UpdateDatasetBound(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateDatasetBound_ev_bool_CObliqueDBUtility(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalAndUpdateModelBound_ev_bool_CObliqueDBUtility_EVString_EVString_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr dbUtility, string tileName, string meshName, IntPtr meshPtr, ref float xmin, ref float xmax, ref float zmin, ref float zmax);

					/// <summary>
					/// 计算mesh的外框，并入库
					/// </summary>
					/// <returns></returns>
					public static bool GeneralAndUpdateModelBound(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string tileName, string meshName, EarthView.World.Graphic.MeshPtr meshPtr, ref float xmin, ref float xmax, ref float zmin, ref float zmax)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalAndUpdateModelBound_ev_bool_CObliqueDBUtility_EVString_EVString_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, tileName, meshName, object.Equals(meshPtr, null) ? IntPtr.Zero : meshPtr.NativeObject, ref xmin, ref xmax, ref zmin, ref zmax);
						
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalTextureCoordinate_void_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(IntPtr meshPtr, float xmin, float xmax, float zmin, float zmax);

					/// <summary>
					/// 生成矢量与临时组的纹理坐标
					/// </summary>
					/// <returns></returns>
					public static void GeneralTextureCoordinate(EarthView.World.Graphic.MeshPtr meshPtr, float xmin, float xmax, float zmin, float zmax)
					{
						EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalTextureCoordinate_void_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(object.Equals(meshPtr, null) ? IntPtr.Zero : meshPtr.NativeObject, xmin, xmax, zmin, zmax);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateLocalMatrix_ev_bool_CObliqueDBUtility_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr dbUtility, double posx, double posy, double posz, double scalex, double scaley, double scalez, double rotw, double rotx, double roty, double rotz);

					/// <summary>
					/// 更新变换矩阵
					/// </summary>
					/// <returns></returns>
					public static bool UpdateLocalMatrix(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, double posx, double posy, double posz, double scalex, double scaley, double scalez, double rotw, double rotx, double roty, double rotz)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_updateLocalMatrix_ev_bool_CObliqueDBUtility_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, posx, posy, posz, scalex, scaley, scalez, rotw, rotx, roty, rotz);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertTileLodToPackage7z_ev_bool_CObliqueDBUtility_EVString_EVString(IntPtr dbUtility, string tileName, string tileFolder);

					/// <summary>
					/// 打包索引到7z包
					/// </summary>
					/// <returns></returns>
					public static bool ConvertTileLodToPackage7z(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string tileName, string tileFolder)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertTileLodToPackage7z_ev_bool_CObliqueDBUtility_EVString_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, tileName, tileFolder);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalLevelMapTable_ev_bool_CObliqueDBUtility_ev_uint32_CStringArray(IntPtr dbUtility, uint maxLevel, IntPtr tileLodXmlVec);

					/// <summary>
					/// 产生模型与dem级别的映射表
					/// </summary>
					/// <returns></returns>
					public static bool GeneralLevelMapTable(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, uint maxLevel, ref EarthView.World.Core.StringArray tileLodXmlVec)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_generalLevelMapTable_ev_bool_CObliqueDBUtility_ev_uint32_CStringArray(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, maxLevel, object.Equals(tileLodXmlVec, null) ? IntPtr.Zero : tileLodXmlVec.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString(IntPtr dbUtility, string destFolder);

					/// <summary>
					/// 把初始化元数据信息打包到本地
					/// </summary>
					/// <returns></returns>
					public static bool ConvertMetaInfoToPackage7z(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string destFolder)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, destFolder);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8(IntPtr dbUtility, string destFolder, IntPtr sharedTextureVec, byte maxLevel);

					/// <summary>
					/// 把初始化元数据信息打包到本地
					/// </summary>
					/// <returns></returns>
					public static bool ConvertMetaInfoToPackage7z(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string destFolder, EarthView.World.Core.MemoryDataStreamVector sharedTextureVec, byte maxLevel)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, destFolder, object.Equals(sharedTextureVec, null) ? IntPtr.Zero : sharedTextureVec.NativeObject, maxLevel);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8_OBQRecordInfoList(IntPtr dbUtility, string destFolder, IntPtr sharedTextureVec, byte maxLevel, IntPtr recordInfoList);

					/// <summary>
					/// 把初始化元数据信息打包到本地
					/// </summary>
					/// <returns></returns>
					public static bool ConvertMetaInfoToPackage7z(EarthView.World.Spatial3D.ModelManager.ObliqueDBUtility dbUtility, string destFolder, EarthView.World.Core.MemoryDataStreamVector sharedTextureVec, byte maxLevel, EarthView.World.Spatial3D.ModelManager.Obqrecordinfolist recordInfoList)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CObliqueDataConvert_convertMetaInfoToPackage7z_ev_bool_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8_OBQRecordInfoList(object.Equals(dbUtility, null) ? IntPtr.Zero : dbUtility.NativeObject, destFolder, object.Equals(sharedTextureVec, null) ? IntPtr.Zero : sharedTextureVec.NativeObject, maxLevel, object.Equals(recordInfoList, null) ? IntPtr.Zero : recordInfoList.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadObliqueDataConvert = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert", new ObliqueDataConvertClassFactory());

					public ObliqueDataConvert(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ObliqueDataConvert FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ObliqueDataConvert obj = baseObj as  ObliqueDataConvert;
						if (object.Equals(obj, null))
						{
							obj = new ObliqueDataConvert(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CObliqueDataConvert");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ObliqueDataConvertClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ObliqueDataConvert emptyInstance = new ObliqueDataConvert(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class UnifyMeshTool : EarthView.World.Core.AllocatedObject
				{
					public UnifyMeshTool() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CUnifyMeshTool",  null);
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_setWorkParam_void_IObqDataset_TerrainRevisorVector(IntPtr pNativeObject, IntPtr pDataset, IntPtr terrainRevisors);

					/// <summary>
					/// 设置初始化参数
					/// </summary>
					/// <param name="pDataset">数据集，只支持本地7z</param>
					/// <param name="terrainRevisors">推平参数</param>
					/// <returns></returns>
					public void SetWorkParam(EarthView.World.Spatial3D.ModelManager.Iobqdataset pDataset, EarthView.World.Spatial3D.TerrainRevisorVector terrainRevisors)
					{
						EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_setWorkParam_void_IObqDataset_TerrainRevisorVector(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, object.Equals(terrainRevisors, null) ? IntPtr.Zero : terrainRevisors.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_getIntersectTopTile_void_CStringArray_LodIndexVector(IntPtr pNativeObject, IntPtr outTileNames, IntPtr topLodIndexVec);

					/// <summary>
					/// 与所有顶级瓦块求交，获取求交的瓦块名字
					/// </summary>
					/// <param name="outTileNames">求交成功的瓦块名字</param>
					/// <returns></returns>
					public void GetIntersectTopTile(ref  EarthView.World.Core.StringArray outTileNames, ref  EarthView.World.Spatial3D.ModelManager.LodIndexVector topLodIndexVec)
					{
						EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_getIntersectTopTile_void_CStringArray_LodIndexVector(this.NativeObject, object.Equals(outTileNames, null) ? IntPtr.Zero : outTileNames.NativeObject, object.Equals(topLodIndexVec, null) ? IntPtr.Zero : topLodIndexVec.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_unifyAllMeshInTile_void_EVString_LodIndex(IntPtr pNativeObject, string tileName, IntPtr pTopLodIndex);

					/// <summary>
					/// 推平当前瓦块目录下所有需要推平的mesh
					/// </summary>
					/// <param name="tileName">瓦块名</param>
					/// <returns></returns>
					public void UnifyAllMeshInTile(string tileName, EarthView.World.Spatial3D.ModelManager.LodIndex pTopLodIndex)
					{
						EarthView_World_Spatial3D_ModelManager_CUnifyMeshTool_unifyAllMeshInTile_void_EVString_LodIndex(this.NativeObject, tileName, object.Equals(pTopLodIndex, null) ? IntPtr.Zero : pTopLodIndex.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadUnifyMeshTool = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CUnifyMeshTool", new UnifyMeshToolClassFactory());

					public UnifyMeshTool(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static UnifyMeshTool FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						UnifyMeshTool obj = baseObj as  UnifyMeshTool;
						if (object.Equals(obj, null))
						{
							obj = new UnifyMeshTool(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CUnifyMeshTool");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class UnifyMeshToolClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						UnifyMeshTool emptyInstance = new UnifyMeshTool(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
