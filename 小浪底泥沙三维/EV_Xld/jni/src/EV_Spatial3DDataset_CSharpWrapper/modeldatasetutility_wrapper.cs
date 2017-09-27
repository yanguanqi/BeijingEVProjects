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
			namespace GeoDataset
			{
			}
			namespace Geometry
			{
			}
			namespace Math
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
				public class ModelDatasetUtility : EarthView.World.Core.AllocatedObject
				{
					public ModelDatasetUtility() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelDatasetUtility",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern uint EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_getTableFields_ev_uint32_CSqlDatabase_EVString_IFields(IntPtr db, string tab, IntPtr flds);

					/// <summary>
					/// 获取表的结构
					/// </summary>
					/// <param name="db">数据库句柄</param>
					/// <param name="tab">表名</param>
					/// <param name="flds">传出的表结构</param>
					/// <returns>返回字段个数</returns>
					public static uint GetTableFields(ref EarthView.World.Core.Database.SqlDatabase db, string tab, EarthView.World.Spatial.GeoDataset.Ifields flds)
					{
						uint ret=EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_getTableFields_ev_uint32_CSqlDatabase_EVString_IFields(object.Equals(db, null) ? IntPtr.Zero : db.NativeObject, tab, object.Equals(flds, null) ? IntPtr.Zero : flds.NativeObject);
						
						return ret;
						
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
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_clearTable_ev_bool_CSqlDatabase_EVString(IntPtr db, ref IntPtr tab);

					/// <summary>
					/// 清空数据库表记录
					/// </summary>
					/// <param name="db">数据库句柄</param>
					/// <param name="tab">表名</param>
					/// <returns>true成功，false失败</returns>
					public static bool ClearTable(ref EarthView.World.Core.Database.SqlDatabase db, ref string tab)
					{
						IntPtr __ptrtab = Marshal.StringToHGlobalAnsi(tab);
						IntPtr pTmptab = __ptrtab;
						
						byte ret=EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_clearTable_ev_bool_CSqlDatabase_EVString(object.Equals(db, null) ? IntPtr.Zero : db.NativeObject, ref __ptrtab);
						
						 Marshal.FreeHGlobal(pTmptab);
						tab= Marshal.PtrToStringAnsi(__ptrtab);
						ClassFactory.FreeString(ref __ptrtab);
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertToWgs84_void_ISpatialReference_CEnvelope_CEnvelope(IntPtr spatialRef, IntPtr resEnvelope, IntPtr desEnvelope);

					/// <summary>
					/// 转到wgs84坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的包围盒</param>
					/// <param name="desEnvelope">投影后的包围盒</param>
					/// <returns></returns>
					public static void ConvertToWgs84(EarthView.World.Spatial.Geometry.Ispatialreference spatialRef, EarthView.World.Spatial.Geometry.Envelope resEnvelope, ref  EarthView.World.Spatial.Geometry.Envelope desEnvelope)
					{
						EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertToWgs84_void_ISpatialReference_CEnvelope_CEnvelope(object.Equals(spatialRef, null) ? IntPtr.Zero : spatialRef.NativeObject, object.Equals(resEnvelope, null) ? IntPtr.Zero : resEnvelope.NativeObject, object.Equals(desEnvelope, null) ? IntPtr.Zero : desEnvelope.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertToWgs84_void_ISpatialReference_CVector3_CVector3(IntPtr spatialRef, IntPtr resVector, IntPtr desVector);

					/// <summary>
					/// 转到wgs84坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的点</param>
					/// <param name="desEnvelope">投影后的点</param>
					/// <returns></returns>
					public static void ConvertToWgs84(EarthView.World.Spatial.Geometry.Ispatialreference spatialRef, EarthView.World.Spatial.Math.Vector3 resVector, ref  EarthView.World.Spatial.Math.Vector3 desVector)
					{
						EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertToWgs84_void_ISpatialReference_CVector3_CVector3(object.Equals(spatialRef, null) ? IntPtr.Zero : spatialRef.NativeObject, object.Equals(resVector, null) ? IntPtr.Zero : resVector.NativeObject, object.Equals(desVector, null) ? IntPtr.Zero : desVector.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertWgs84ToProjCoordinateData_void_ISpatialReference_CEnvelope_CEnvelope(IntPtr spatialRef, IntPtr resEnvelope, IntPtr desEnvelope);

					/// <summary>
					/// 从wgs84转到投影坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的包围盒</param>
					/// <param name="desEnvelope">投影后的包围盒</param>
					/// <returns></returns>
					public static void ConvertWgs84ToProjCoordinateData(EarthView.World.Spatial.Geometry.Ispatialreference spatialRef, EarthView.World.Spatial.Geometry.Envelope resEnvelope, ref EarthView.World.Spatial.Geometry.Envelope desEnvelope)
					{
						EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertWgs84ToProjCoordinateData_void_ISpatialReference_CEnvelope_CEnvelope(object.Equals(spatialRef, null) ? IntPtr.Zero : spatialRef.NativeObject, object.Equals(resEnvelope, null) ? IntPtr.Zero : resEnvelope.NativeObject, object.Equals(desEnvelope, null) ? IntPtr.Zero : desEnvelope.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertWgs84ToProjCoordinateData_void_ISpatialReference_CVector3_CVector3(IntPtr spatialRef, IntPtr resVector, IntPtr desVector);

					/// <summary>
					/// 从wgs84转到投影坐标系下
					/// </summary>
					/// <param name="spatialRef">数据投影</param>
					/// <param name="resEnvelope">原始的点</param>
					/// <param name="desEnvelope">投影后的点</param>
					/// <returns></returns>
					public static void ConvertWgs84ToProjCoordinateData(EarthView.World.Spatial.Geometry.Ispatialreference spatialRef, EarthView.World.Spatial.Math.Vector3 resVector, ref EarthView.World.Spatial.Math.Vector3 desVector)
					{
						EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertWgs84ToProjCoordinateData_void_ISpatialReference_CVector3_CVector3(object.Equals(spatialRef, null) ? IntPtr.Zero : spatialRef.NativeObject, object.Equals(resVector, null) ? IntPtr.Zero : resVector.NativeObject, object.Equals(desVector, null) ? IntPtr.Zero : desVector.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_QuaterToAngle_CVector3_CQuaternion(IntPtr quter);

					/// <summary>
					/// 四元数转x,y,z三个轴旋转角度
					/// </summary>
					/// <param name="quter">x</param>
					/// <returns></returns>
					public static EarthView.World.Spatial.Math.Vector3 QuaterToAngle(EarthView.World.Spatial.Math.Quaternion quter)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_QuaterToAngle_CVector3_CQuaternion(object.Equals(quter, null) ? IntPtr.Zero : quter.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
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
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_AngleToQuater_CQuaternion_CVector3(IntPtr v3);

					/// <summary>
					/// x,y,z三个轴旋转角度转四元数
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <param name="w">w</param>
					/// <returns></returns>
					public static EarthView.World.Spatial.Math.Quaternion AngleToQuater(EarthView.World.Spatial.Math.Vector3 v3)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_AngleToQuater_CQuaternion_CVector3(object.Equals(v3, null) ? IntPtr.Zero : v3.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Quaternion csObj = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CQuaternion");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
							csObj.BindNativeObject(__ptr, "CQuaternion");
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
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_isCubeTexture_ev_bool_EVString(string filename);

					/// <summary>
					/// 文件名是否是立方体纹理
					/// </summary>
					/// <param name="filename">文件名</param>
					/// <returns></returns>
					public static bool IsCubeTexture(string filename)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_isCubeTexture_ev_bool_EVString(filename);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelDatasetUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CModelDatasetUtility", new ModelDatasetUtilityClassFactory());

					public ModelDatasetUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelDatasetUtility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelDatasetUtility obj = baseObj as  ModelDatasetUtility;
						if (object.Equals(obj, null))
						{
							obj = new ModelDatasetUtility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelDatasetUtility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelDatasetUtilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelDatasetUtility emptyInstance = new ModelDatasetUtility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
