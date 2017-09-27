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
		namespace Spatial2D
		{
			namespace Raster
			{
				///<summary>
				///CRasterFileOperator
				///栅格数据集操作对象
				///</summary>
				public class RasterFileOperator : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Raster_CRasterFileOperator_getDatasetType_EVDatasetType(IntPtr pNativeObject);

					/// <summary>
					/// 获取Operator对应的数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.GeoDataset.EVDATASETTYPE GetDatasetType()
					{
						int ret=EarthView_World_Spatial2D_Raster_CRasterFileOperator_getDatasetType_EVDatasetType(this.NativeObject);
						
						return (EarthView.World.Spatial.GeoDataset.EVDATASETTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Raster_CRasterFileOperator_getDataSourceType_EVDataSourceType(IntPtr pNativeObject);

					/// <summary>
					/// 获取Operator对应的数据数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE GetDataSourceType()
					{
						int ret=EarthView_World_Spatial2D_Raster_CRasterFileOperator_getDataSourceType_EVDataSourceType(this.NativeObject);
						
						return (EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterFileOperator_open_CRasterDataSet_EVString(IntPtr pNativeObject, string pszFullpathName);

					/// <summary>
					/// 获取数据源引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					////virtual IDataSource* getDataSourceRef();
					/// <summary>
					/// 打开数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial2D.Raster.RasterDataSet Open(string pszFullpathName)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterFileOperator_open_CRasterDataSet_EVString(this.NativeObject, pszFullpathName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.RasterDataSet csObj = new EarthView.World.Spatial2D.Raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRasterDataSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.RasterDataSet;
							csObj.BindNativeObject(__ptr, "CRasterDataSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Raster_CRasterFileOperator_deleteDataset_void_CRasterDataSet(IntPtr pNativeObject, IntPtr pobjDataSet);

					/// <summary>
					/// 删除数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void DeleteDataset(EarthView.World.Spatial2D.Raster.RasterDataSet pobjDataSet)
					{
						EarthView_World_Spatial2D_Raster_CRasterFileOperator_deleteDataset_void_CRasterDataSet(this.NativeObject, object.Equals(pobjDataSet, null) ? IntPtr.Zero : pobjDataSet.NativeObject);
						
					}

					///<summary>
					///默认构造函数
					///</summary>
					public RasterFileOperator() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRasterFileOperator",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterFileOperator_open_CRasterDataSet_EVString_EVAccess(string pszFullpathName, EarthView.World.Spatial2D.Raster.EVACCESS eAccess);

					///<summary>
					///根据给定路径打开一个数据集 
					///</summary>
					/// <param name="pszFullpathName">栅格数据的全路径</param>
					/// <param name="eAccess">栅格数据集的打开权限</param>
					/// <returns>栅格数据集指针<returns>
					public static EarthView.World.Spatial2D.Raster.RasterDataSet Open(string pszFullpathName, EarthView.World.Spatial2D.Raster.EVACCESS eAccess)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterFileOperator_open_CRasterDataSet_EVString_EVAccess(pszFullpathName, eAccess);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.RasterDataSet csObj = new EarthView.World.Spatial2D.Raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRasterDataSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.RasterDataSet;
							csObj.BindNativeObject(__ptr, "CRasterDataSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterFileOperator_create_CRasterDataSet_EVString_ev_int32_ev_int32_ev_int32_EVRasterDataType_EVDataSetFormat(string pszpath, int iWidth, int iHeight, int ibandCount, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE edatatype, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT erasterType);

					///<summary>
					///根据给定参数创建相应的栅格数据集 
					///</summary>
					/// <param name="pszpath">栅格数据集的路径，可以为空字符串，当为空时创建虚拟对象</param>
					/// <param name="iWidth">栅格数据集的宽度</param>
					/// <param name="iHeight">栅格数据集的高度</param>
					/// <param name="ibandCount">栅格数据集之波段数</param>
					/// <param name="edatatype">数据类型</param>
					/// <param name="erasterType">创建相应对象选项,如Tif，img等(PNG\JPG CrateCopy)</param>
					/// <returns>栅格数据集指针<returns>
					public static EarthView.World.Spatial2D.Raster.RasterDataSet Create(string pszpath, int iWidth, int iHeight, int ibandCount, EarthView.World.Spatial.GeoDataset.EVRASTERDATATYPE edatatype, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT erasterType)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterFileOperator_create_CRasterDataSet_EVString_ev_int32_ev_int32_ev_int32_EVRasterDataType_EVDataSetFormat(pszpath, iWidth, iHeight, ibandCount, edatatype, erasterType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.RasterDataSet csObj = new EarthView.World.Spatial2D.Raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRasterDataSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.RasterDataSet;
							csObj.BindNativeObject(__ptr, "CRasterDataSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterFileOperator_createFormStream_CRasterDataSet_ev_uchar_ev_uint64_EVDataSetFormat(byte[] pFileBuffer, ulong idataLenth, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT erasterType);

					///<summary>
					///根据给定参数创建相应的栅格数据集 
					///</summary>
					/// <param name="pFileBuffer">数据集的二进制流</param>
					/// <param name="erasterType">创建相应对象选项,如JPEG，Tif，img Png等</param>
					/// <returns>栅格数据集指针<returns>
					public static EarthView.World.Spatial2D.Raster.RasterDataSet CreateFormStream(byte[] pFileBuffer, ulong idataLenth, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT erasterType)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterFileOperator_createFormStream_CRasterDataSet_ev_uchar_ev_uint64_EVDataSetFormat(pFileBuffer, idataLenth, erasterType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.RasterDataSet csObj = new EarthView.World.Spatial2D.Raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRasterDataSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.RasterDataSet;
							csObj.BindNativeObject(__ptr, "CRasterDataSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CRasterFileOperator_createCopy_CRasterDataSet_EVString_CRasterDataSet_EVDataSetFormat_CProgressInfo(string pszCopypath, IntPtr pSrcDataset, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT erasterType, IntPtr pProssiInfo);

					///<summary>
					///复制一个数据集
					///</summary>
					/// <param name="pszCopypath">目标数据集路径，为""创建内存数据集</param>
					/// <param name="pSrcDataset">源数据集对象</param>
					/// <param name="erasterType">创建相应对象选项,如JPEG，Tif，img Png等</param>
					/// <param name="pfnProgress">进度函数</param>
					/// <param name="pProssiInfo">进度信息类</param>
					///<returns>返回一个数据集对象，要显示调用close函数才能将数据集刷到硬盘</returns>
					public static EarthView.World.Spatial2D.Raster.RasterDataSet CreateCopy(string pszCopypath, EarthView.World.Spatial2D.Raster.RasterDataSet pSrcDataset, EarthView.World.Spatial2D.Raster.EVDATASETFORMAT erasterType, EarthView.World.Spatial2D.Raster.ProgressInfo pProssiInfo)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CRasterFileOperator_createCopy_CRasterDataSet_EVString_CRasterDataSet_EVDataSetFormat_CProgressInfo(pszCopypath, object.Equals(pSrcDataset, null) ? IntPtr.Zero : pSrcDataset.NativeObject, erasterType, object.Equals(pProssiInfo, null) ? IntPtr.Zero : pProssiInfo.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.RasterDataSet csObj = new EarthView.World.Spatial2D.Raster.RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRasterDataSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.RasterDataSet;
							csObj.BindNativeObject(__ptr, "CRasterDataSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RasterDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Raster_CRasterFileOperator_close_void_CRasterDataSet(IntPtr pobjDataSet);

					///<summary>
					///释放数据集指针
					///</summary>
					/// <param name="pobjDataSet">栅格数据集指针</param>
					public static void Close(EarthView.World.Spatial2D.Raster.RasterDataSet pobjDataSet)
					{
						EarthView_World_Spatial2D_Raster_CRasterFileOperator_close_void_CRasterDataSet(object.Equals(pobjDataSet, null) ? IntPtr.Zero : pobjDataSet.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_d.so");
							private static bool csbLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_CSharp_d.so");

						#else 
							private static bool bLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset.so");
							private static bool csbLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_CSharp.so");

						#else 
							private static bool bLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadRasterFileOperator = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterFileOperator", new RasterFileOperatorClassFactory());

					public RasterFileOperator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RasterFileOperator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RasterFileOperator obj = baseObj as  RasterFileOperator;
						if (object.Equals(obj, null))
						{
							obj = new RasterFileOperator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRasterFileOperator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RasterFileOperatorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RasterFileOperator emptyInstance = new RasterFileOperator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
