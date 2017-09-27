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
				/// <summary>
				/// 数据库栅格数据源类
				/// </summary>
				public class Dbrasterdatasource : EarthView.World.Spatial.GeoDataset.DatabaseDataSource
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					public new string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					public override string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern int EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					public new int GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
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
					private static extern int EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					public override int GetType()
					{
						int ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(this.NativeObject);
						
						return ret;
						
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 判断数据源是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					public new bool IsValid_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断数据源是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					public override bool IsValid()
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public new EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
							csObj.BindNativeObject(__ptr, "IDataMetaInfo");
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public override EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatametainfo csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataMetaInfo");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfo;
							csObj.BindNativeObject(__ptr, "IDataMetaInfo");
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public new EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos_NoVirtual(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatametainfos csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataMetaInfos");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfos;
							csObj.BindNativeObject(__ptr, "IDataMetaInfos");
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public override EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatametainfos csObj = new EarthView.World.Spatial.GeoDataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataMetaInfos");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatametainfos;
							csObj.BindNativeObject(__ptr, "IDataMetaInfos");
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					public new EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ipropertyset csObj = new EarthView.World.Spatial.GeoDataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPropertySet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ipropertyset;
							csObj.BindNativeObject(__ptr, "IPropertySet");
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					public override EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ipropertyset csObj = new EarthView.World.Spatial.GeoDataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPropertySet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ipropertyset;
							csObj.BindNativeObject(__ptr, "IPropertySet");
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					public new EarthView.World.Spatial.GeoDataset.Idataset OpenDataset_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_NoVirtual(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csObj.BindNativeObject(__ptr, "IDataset");
							csObj.Delegate = true;
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					public override EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csObj.BindNativeObject(__ptr, "IDataset");
							csObj.Delegate = true;
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr pDataset);

					/// <summary>
					///关闭打开的数据集
					/// </summary>
					/// <param name="dataset">数据集指针</param>
					/// <returns>返回false</returns>
					public new bool CloseDataset_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_NoVirtual(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(IntPtr pNativeObject, IntPtr pDataset);

					/// <summary>
					///关闭打开的数据集
					/// </summary>
					/// <param name="dataset">数据集指针</param>
					/// <returns>返回false</returns>
					public override bool CloseDataset(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public new bool DeleteDataset_NoVirtual(string name)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_NoVirtual(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public override bool DeleteDataset(string name)
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createDataset_CallBack_CDBRasterDataset_EVString(ref IntPtr name);

					protected createDataset_CallBack_CDBRasterDataset_EVString m_createDataset_CallBack_CDBRasterDataset_EVString;

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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 创建rasterdataset数据集
					/// </summary>
					/// <param name="name">指定要创建数据集名称</param>
					/// <returns>成功创建，返回true;否则，返回false</returns>
					public virtual EarthView.World.Spatial2D.Raster.Dbrasterdataset CreateDataset_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_NoVirtual(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.Dbrasterdataset csObj = new EarthView.World.Spatial2D.Raster.Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDBRasterDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.Dbrasterdataset;
							csObj.BindNativeObject(__ptr, "CDBRasterDataset");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						EarthView.World.Spatial2D.Raster.Dbrasterdataset csret=CreateDataset(strname);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 创建rasterdataset数据集
					/// </summary>
					/// <param name="name">指定要创建数据集名称</param>
					/// <returns>成功创建，返回true;否则，返回false</returns>
					public virtual EarthView.World.Spatial2D.Raster.Dbrasterdataset CreateDataset(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.Dbrasterdataset csObj = new EarthView.World.Spatial2D.Raster.Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDBRasterDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.Dbrasterdataset;
							csObj.BindNativeObject(__ptr, "CDBRasterDataset");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createDataset_CallBack_CDBRasterDataset_EVString_CDataStream(ref IntPtr name, IntPtr stream);

					protected createDataset_CallBack_CDBRasterDataset_EVString_CDataStream m_createDataset_CallBack_CDBRasterDataset_EVString_CDataStream;

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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_NoVirtual(IntPtr pNativeObject, string name, IntPtr stream);

					/// <summary>
					/// 创建rasterdataset数据集
					/// </summary>
					/// <param name="name">指定要创建数据集名称</param>
					/// <param name="stream">数据集的信息</param>
					/// <returns>成功创建，返回true;否则，返回false</returns>
					public virtual EarthView.World.Spatial2D.Raster.Dbrasterdataset CreateDataset_NoVirtual(string name, EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_NoVirtual(this.NativeObject, name, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.Dbrasterdataset csObj = new EarthView.World.Spatial2D.Raster.Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDBRasterDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.Dbrasterdataset;
							csObj.BindNativeObject(__ptr, "CDBRasterDataset");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Function(ref IntPtr name, IntPtr stream)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						EarthView.World.Core.DataStream csobj_stream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_stream.BindNativeObject(stream,"CDataStream");
						csobj_stream.Delegate = true;
						IClassFactory csobj_streamClassFactory = GlobalClassFactoryMap.Get(csobj_stream.GetCppInstanceTypeName());
						if (csobj_streamClassFactory != null)
						{
							csobj_stream.Delegate = true;
							csobj_stream = csobj_streamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_stream.BindNativeObject(stream, "CDataStream");
							csobj_stream.Delegate = true;
						}
						
						EarthView.World.Spatial2D.Raster.Dbrasterdataset csret=CreateDataset(strname,csobj_stream);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(IntPtr pNativeObject, string name, IntPtr stream);

					/// <summary>
					/// 创建rasterdataset数据集
					/// </summary>
					/// <param name="name">指定要创建数据集名称</param>
					/// <param name="stream">数据集的信息</param>
					/// <returns>成功创建，返回true;否则，返回false</returns>
					public virtual EarthView.World.Spatial2D.Raster.Dbrasterdataset CreateDataset(string name, EarthView.World.Core.DataStream stream)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(this.NativeObject, name, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Raster.Dbrasterdataset csObj = new EarthView.World.Spatial2D.Raster.Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDBRasterDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Raster.Dbrasterdataset;
							csObj.BindNativeObject(__ptr, "CDBRasterDataset");
							csObj.Delegate = true;
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDatabase_CallBack_CSqlDatabase();

					protected getDatabase_CallBack_CSqlDatabase m_getDatabase_CallBack_CSqlDatabase;

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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
					public virtual EarthView.World.Core.Database.SqlDatabase GetDatabase_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Function()
					{
						EarthView.World.Core.Database.SqlDatabase csret=GetDatabase();
						
						if (!object.Equals(csret, null))
						{
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
					public virtual EarthView.World.Core.Database.SqlDatabase GetDatabase()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Database.SqlDatabase csObj = new EarthView.World.Core.Database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSqlDatabase");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Database.SqlDatabase;
							csObj.BindNativeObject(__ptr, "CSqlDatabase");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte IsEditing_CallBack_ev_bool();

					protected IsEditing_CallBack_ev_bool m_IsEditing_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 数据源是否正在被编辑
					/// </summary>
					/// <returns>如果是返回true；否则返回false</returns>
					public virtual bool IsEditing_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Function()
					{
						bool csret=IsEditing();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 数据源是否正在被编辑
					/// </summary>
					/// <returns>如果是返回true；否则返回false</returns>
					public virtual bool IsEditing()
					{
						byte ret=EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_d.so");
							private static bool csbLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_CSharp_d.so");

						#else 
							private static bool bLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_d.dll");
							private static bool csbLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset.so");
							private static bool csbLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_CSharp.so");

						#else 
							private static bool bLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset.dll");
							private static bool csbLoadDbrasterdatasource = LoadDll.Load("EV_RasterDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataSource", new DbrasterdatasourceClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataSourceProxy", new DbrasterdatasourceClassFactory());

					public Dbrasterdatasource(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(IntPtr pObject, createDataset_CallBack_CDBRasterDataset_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(IntPtr pObject, createDataset_CallBack_CDBRasterDataset_EVString_CDataStream pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(IntPtr pObject, getDatabase_CallBack_CSqlDatabase pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(IntPtr pObject, IsEditing_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(IntPtr pObject, getPropertySet_CallBack_IPropertySet pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pObject, getDatasetInfo_CallBack_IDataMetaInfo_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pObject, getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pObject, createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(IntPtr pObject, openDataset_CallBack_IDataset_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(IntPtr pObject, deleteDataset_CallBack_ev_bool_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(IntPtr pObject, closeDataset_CallBack_ev_bool_IDataset pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource(IntPtr pObject, clone_CallBack_IDataSource pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createDataset_CallBack_CDBRasterDataset_EVString = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Function;
							GC.KeepAlive(m_createDataset_CallBack_CDBRasterDataset_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(this.NativeObject, m_createDataset_CallBack_CDBRasterDataset_EVString);
							m_createDataset_CallBack_CDBRasterDataset_EVString_CDataStream = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Function;
							GC.KeepAlive(m_createDataset_CallBack_CDBRasterDataset_EVString_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(this.NativeObject, m_createDataset_CallBack_CDBRasterDataset_EVString_CDataStream);
							m_getDatabase_CallBack_CSqlDatabase = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Function;
							GC.KeepAlive(m_getDatabase_CallBack_CSqlDatabase);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(this.NativeObject, m_getDatabase_CallBack_CSqlDatabase);
							m_IsEditing_CallBack_ev_bool = EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Function;
							GC.KeepAlive(m_IsEditing_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(this.NativeObject, m_IsEditing_CallBack_ev_bool);
							m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_Function;
							GC.KeepAlive(m_getType_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
							m_getPropertySet_CallBack_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_Function;
							GC.KeepAlive(m_getPropertySet_CallBack_IPropertySet);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(this.NativeObject, m_getPropertySet_CallBack_IPropertySet);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_getDatasetInfo_CallBack_IDataMetaInfo_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_Function;
							GC.KeepAlive(m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Function;
							GC.KeepAlive(m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Function;
							GC.KeepAlive(m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							m_openDataset_CallBack_IDataset_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_Function;
							GC.KeepAlive(m_openDataset_CallBack_IDataset_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(this.NativeObject, m_openDataset_CallBack_IDataset_EVString);
							m_deleteDataset_CallBack_ev_bool_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_Function;
							GC.KeepAlive(m_deleteDataset_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(this.NativeObject, m_deleteDataset_CallBack_ev_bool_EVString);
							m_closeDataset_CallBack_ev_bool_IDataset = EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_Function;
							GC.KeepAlive(m_closeDataset_CallBack_ev_bool_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(this.NativeObject, m_closeDataset_CallBack_ev_bool_IDataset);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_clone_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_Function;
							GC.KeepAlive(m_clone_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource(this.NativeObject, m_clone_CallBack_IDataSource);
						}
					}
					public override EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
					{
						return base.CreateFeatureClass_NoVirtual(name,ref geofield,fields);
					}
					public override EarthView.World.Spatial.GeoDataset.Idatasource Clone()
					{
						return base.Clone_NoVirtual();
					}
					public static Dbrasterdatasource FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Dbrasterdatasource obj = baseObj as  Dbrasterdatasource;
						if (object.Equals(obj, null))
						{
							obj = new Dbrasterdatasource(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDBRasterDataSource");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DbrasterdatasourceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Dbrasterdatasource emptyInstance = new Dbrasterdatasource(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
