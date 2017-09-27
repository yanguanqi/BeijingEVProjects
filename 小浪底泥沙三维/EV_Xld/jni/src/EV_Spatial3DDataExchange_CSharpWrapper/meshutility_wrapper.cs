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
			}
			namespace DataExchange
			{
			}
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
			namespace DataExchange
			{
				/// <summary>
				/// 模型入库合并的工具类
				/// </summary>
				public class MeshUtility : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceManger">场景管理器</param>
					/// <returns></returns>
					public MeshUtility(EarthView.World.Graphic.SceneManager ref_sceManger) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_sceManger = new BasePtr(ref_sceManger);
						list.Add("ref_sceManger", valueref_sceManger.PtrVal);
						Create("CMeshUtility", list);
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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshUtility_composeWorldMartix_CMatrix4_CVector3_CVector3_CVector3(IntPtr pos, IntPtr scale, IntPtr ros);

					/// <summary>
					/// 计算世界矩阵
					/// </summary>
					/// <param name="pos">世界坐标</param>
					/// <param name="scale">缩放比例</param>
					/// <param name="ros">x,y,z轴旋转角度</param>
					/// <returns>世界矩阵</returns>	
					public static EarthView.World.Spatial.Math.Matrix4 ComposeWorldMartix(EarthView.World.Spatial.Math.Vector3 pos, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 ros)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshUtility_composeWorldMartix_CMatrix4_CVector3_CVector3_CVector3(object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(ros, null) ? IntPtr.Zero : ros.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshUtility_composeWorldMartix_CMatrix4_ev_real32_ev_real32_ev_real32(float lat, float lon, float ati);

					/// <summary>
					/// 计算世界矩阵
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高程</param>
					/// <returns>世界矩阵</returns>	
					public static EarthView.World.Spatial.Math.Matrix4 ComposeWorldMartix(float lat, float lon, float ati)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshUtility_composeWorldMartix_CMatrix4_ev_real32_ev_real32_ev_real32(lat, lon, ati);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern void EarthView_World_Spatial3D_DataExchange_CMeshUtility_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr worldMatrix, ref double lat, ref double lon, ref double alt, IntPtr scaleInLocal, IntPtr orientInLocal);

					/// <summary>
					/// 分解计算世界矩阵
					/// </summary>
					/// <param name="worldMatrix">世界矩阵</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高程</param>
					/// <param name="scaleInLocal">局部缩放</param>
					/// <param name="orientInLocal">局部旋转</param>
					/// <returns></returns>	
					public static void DecomposeWorldMatrix(EarthView.World.Spatial.Math.Matrix4 worldMatrix, ref double lat, ref double lon, ref double alt, ref  EarthView.World.Spatial.Math.Vector3 scaleInLocal, ref  EarthView.World.Spatial.Math.Quaternion orientInLocal)
					{
						EarthView_World_Spatial3D_DataExchange_CMeshUtility_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(object.Equals(worldMatrix, null) ? IntPtr.Zero : worldMatrix.NativeObject, ref lat, ref lon, ref alt, object.Equals(scaleInLocal, null) ? IntPtr.Zero : scaleInLocal.NativeObject, object.Equals(orientInLocal, null) ? IntPtr.Zero : orientInLocal.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_DataExchange_CMeshUtility_decomposeMatrixToPosition_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr worldMatrix, ref double lat, ref double lon, ref double alt, IntPtr scaleInLocal, IntPtr orientInLocal);

					/// <summary>
					/// 分解计算世界矩阵,只分解并转为经纬度，不做旋转处理，只用于3dmax插件
					/// </summary>
					/// <param name="worldMatrix">世界矩阵</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高程</param>
					/// <param name="scaleInLocal">局部缩放</param>
					/// <param name="orientInLocal">局部旋转</param>
					/// <returns></returns>	
					public static void DecomposeMatrixToPosition(EarthView.World.Spatial.Math.Matrix4 worldMatrix, ref double lat, ref double lon, ref double alt, ref  EarthView.World.Spatial.Math.Vector3 scaleInLocal, ref  EarthView.World.Spatial.Math.Quaternion orientInLocal)
					{
						EarthView_World_Spatial3D_DataExchange_CMeshUtility_decomposeMatrixToPosition_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(object.Equals(worldMatrix, null) ? IntPtr.Zero : worldMatrix.NativeObject, ref lat, ref lon, ref alt, object.Equals(scaleInLocal, null) ? IntPtr.Zero : scaleInLocal.NativeObject, object.Equals(orientInLocal, null) ? IntPtr.Zero : orientInLocal.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString(IntPtr pNativeObject, IntPtr meshdata, string resourcePath);

					/// <summary>
					/// 导出到模型库
					/// </summary>
					/// <param name="meshPath">模型数据</param>
					/// <param name="resourcePath">模型资源路径</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToModelBase(EarthView.World.Spatial3D.DataExchange.MeshData meshdata, string resourcePath)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject, resourcePath);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString_EVString_EVString(IntPtr pNativeObject, IntPtr meshdata, string resourcePath, string attrtablename, string nodecode);

					/// <summary>
					/// 导出到模型库
					/// </summary>
					/// <param name="meshPath">模型数据</param>
					/// <param name="resourcePath">模型资源路径</param>
					/// <param name = "attrtablename" >模板库分类名称</param>
					/// <param name = "nodecode" >模板库分类编码</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToModelBase(EarthView.World.Spatial3D.DataExchange.MeshData meshdata, string resourcePath, string attrtablename, string nodecode)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString_EVString_EVString(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject, resourcePath, attrtablename, nodecode);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelDataset_ev_bool_CMeshData_EVString(IntPtr pNativeObject, IntPtr meshdata, string resourcePath);

					/// <summary>
					/// 导出到数据集
					/// </summary>
					/// <param name="meshPath">模型数据</param>
					/// <param name="resourcePath">模型资源路径</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToModelDataset(EarthView.World.Spatial3D.DataExchange.MeshData meshdata, string resourcePath)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelDataset_ev_bool_CMeshData_EVString(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject, resourcePath);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData(IntPtr pNativeObject, IntPtr meshdata);

					/// <summary>
					/// 导出到模型库
					/// </summary>
					/// <param name="meshdata">模型数据</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToModelBase(EarthView.World.Spatial3D.DataExchange.MeshData meshdata)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString_EVString(IntPtr pNativeObject, IntPtr meshdata, string attrtablename, string nodecode);

					/// <summary>
					/// 导出到模型库
					/// </summary>
					/// <param name="meshdata">模型数据</param>
					/// <param name = "attrtablename" >模板库分类名称</param>
					/// <param name = "nodecode" >模板库分类编码</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToModelBase(EarthView.World.Spatial3D.DataExchange.MeshData meshdata, string attrtablename, string nodecode)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString_EVString(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject, attrtablename, nodecode);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelDataset_ev_bool_CMeshData(IntPtr pNativeObject, IntPtr meshdata);

					/// <summary>
					/// 导出到数据集
					/// </summary>
					/// <param name="meshdata">模型数据</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToModelDataset(EarthView.World.Spatial3D.DataExchange.MeshData meshdata)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelDataset_ev_bool_CMeshData(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToLocal_ev_bool_CMeshData_EVString(IntPtr pNativeObject, IntPtr meshdata, string path);

					/// <summary>
					/// 导出到本地
					/// </summary>
					/// <param name="meshdata">模型数据</param>
					/// <param name="path">导出目录</param>
					/// <returns>成功返回true，否则返回false</returns>	
					public bool ExportToLocal(EarthView.World.Spatial3D.DataExchange.MeshData meshdata, string path)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToLocal_ev_bool_CMeshData_EVString(this.NativeObject, object.Equals(meshdata, null) ? IntPtr.Zero : meshdata.NativeObject, path);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial3D_DataExchange_CMeshUtility_setParams_void_CMeshParams(IntPtr pNativeObject, IntPtr EVparams);

					/// <summary>
					/// 设置模型导出入库的参数
					/// </summary>
					/// <param name="params">参数设置</param>
					/// <returns></returns>	
					public void SetParams(EarthView.World.Spatial3D.DataExchange.MeshParams EVparams)
					{
						EarthView_World_Spatial3D_DataExchange_CMeshUtility_setParams_void_CMeshParams(this.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshUtility_getParams_CMeshParams(IntPtr pNativeObject);

					/// <summary>
					/// 获取模型导出入库的参数
					/// </summary>
					/// <returns>返回参数设置</returns>	
					public EarthView.World.Spatial3D.DataExchange.MeshParams GetParams()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshUtility_getParams_CMeshParams(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.DataExchange.MeshParams csObj = new EarthView.World.Spatial3D.DataExchange.MeshParams(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMeshParams");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.DataExchange.MeshParams;
							csObj.BindNativeObject(__ptr, "CMeshParams");
							csObj.Delegate = true;
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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshUtility_getDatasourceHelper_CDatasourceHelper(IntPtr pNativeObject);

					/// <summary>
					/// 获取模型数据源辅助类
					/// </summary>
					/// <returns>返回辅助类</returns>	
					public EarthView.World.Spatial3D.DataExchange.DatasourceHelper GetDatasourceHelper()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshUtility_getDatasourceHelper_CDatasourceHelper(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.DataExchange.DatasourceHelper csObj = new EarthView.World.Spatial3D.DataExchange.DatasourceHelper(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDatasourceHelper");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.DataExchange.DatasourceHelper;
							csObj.BindNativeObject(__ptr, "CDatasourceHelper");
							csObj.Delegate = true;
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
					private static extern void EarthView_World_Spatial3D_DataExchange_CMeshUtility_publishUserType_void(IntPtr pNativeObject);

					/// <summary>
					/// 这两个函数的作用是模型文件入库后，生成usetype表里面的信息
					/// </summary>
					/// <returns></returns>
					public void PublishUserType()
					{
						EarthView_World_Spatial3D_DataExchange_CMeshUtility_publishUserType_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_DataExchange_CMeshUtility_readWorldTransformTxt_ev_bool_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CVector3(IntPtr pNativeObject, IntPtr matrix, ref double lontitude, ref double latitude, ref double atitu, IntPtr scale, IntPtr rotate);

					/// <summary>
					/// 读取本地的坐标文件，构建世界矩阵
					/// </summary>
					/// <param name="matrix">世界矩阵</param>
					/// <param name="lontitude">经度</param>
					/// <param name="latitude">纬度</param>
					/// <param name="latitude">高度</param>
					/// <param name="latitude">缩放</param>
					/// <param name="latitude">旋转</param>
					/// <returns>成功返回true，否则返回false</returns>
					public bool ReadWorldTransformTxt(ref  EarthView.World.Spatial.Math.Matrix4 matrix, ref double lontitude, ref double latitude, ref double atitu, ref  EarthView.World.Spatial.Math.Vector3 scale, ref  EarthView.World.Spatial.Math.Vector3 rotate)
					{
						byte ret=EarthView_World_Spatial3D_DataExchange_CMeshUtility_readWorldTransformTxt_ev_bool_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CVector3(this.NativeObject, object.Equals(matrix, null) ? IntPtr.Zero : matrix.NativeObject, ref lontitude, ref latitude, ref atitu, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshUtility_loadFile_MemoryDataStreamPtr_EVString(IntPtr pNativeObject, string file);

					/// <summary>
					/// 加载磁盘文件
					/// </summary>
					/// <param name="file">文件目录</param>
					/// <returns>磁盘文件数据</returns>
					/// <memo></memo>
					public EarthView.World.Core.MemoryDataStreamPtr LoadFile(string file)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshUtility_loadFile_MemoryDataStreamPtr_EVString(this.NativeObject, file);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CMeshUtility_loadAniFile_MemoryDataStreamPtr_EVString(IntPtr pNativeObject, string file);

					public EarthView.World.Core.MemoryDataStreamPtr LoadAniFile(string file)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CMeshUtility_loadAniFile_MemoryDataStreamPtr_EVString(this.NativeObject, file);
						
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
							private static bool bLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadMeshUtility = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshUtility", new MeshUtilityClassFactory());

					public MeshUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MeshUtility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MeshUtility obj = baseObj as  MeshUtility;
						if (object.Equals(obj, null))
						{
							obj = new MeshUtility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMeshUtility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MeshUtilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MeshUtility emptyInstance = new MeshUtility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
