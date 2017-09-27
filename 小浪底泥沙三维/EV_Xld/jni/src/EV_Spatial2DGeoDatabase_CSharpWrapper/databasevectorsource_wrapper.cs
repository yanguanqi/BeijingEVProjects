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
			namespace GeoDataset
			{
				/// <summary>
				/// 矢量数据源类
				/// </summary>
				public class DatabaseVectorSource : EarthView.World.Spatial.GeoDataset.DatabaseDataSource
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					public new string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					public override string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					public new int GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getType_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getType_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					public override int GetType()
					{
						int ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getType_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getPropertySet_IPropertySet_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					public new EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getPropertySet_IPropertySet_NoVirtual(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getPropertySet_IPropertySet(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					public override EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getPropertySet_IPropertySet(this.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_isValid_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 判断数据源是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					public new bool IsValid_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_isValid_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_isValid_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断数据源是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					public override bool IsValid()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_isValid_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public new EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(this.NativeObject, name);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public override EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, name);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public new EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos_NoVirtual(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(this.NativeObject, type);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public override EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, type);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openDataset_IDataset_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					public new EarthView.World.Spatial.GeoDataset.Idataset OpenDataset_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openDataset_IDataset_EVString_NoVirtual(this.NativeObject, name);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openDataset_IDataset_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					public override EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openDataset_IDataset_EVString(this.NativeObject, name);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_closeDataset_ev_bool_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr pDataset);

					public new bool CloseDataset_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_closeDataset_ev_bool_IDataset_NoVirtual(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_closeDataset_ev_bool_IDataset(IntPtr pNativeObject, IntPtr pDataset);

					public override bool CloseDataset(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_closeDataset_ev_bool_IDataset(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteDataset_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public new bool DeleteDataset_NoVirtual(string name)
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteDataset_ev_bool_EVString_NoVirtual(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteDataset_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public override bool DeleteDataset(string name)
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteDataset_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_NoVirtual(IntPtr pNativeObject, string name, IntPtr geofield, IntPtr fields);

					/// <summary>
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针</returns>
					public new EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass_NoVirtual(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_NoVirtual(this.NativeObject, name, object.Equals(geofield, null) ? IntPtr.Zero : geofield.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ifeatureclass csObj = new EarthView.World.Spatial.GeoDataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IFeatureClass");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeatureclass;
							csObj.BindNativeObject(__ptr, "IFeatureClass");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pNativeObject, string name, IntPtr geofield, IntPtr fields);

					/// <summary>
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针</returns>
					public override EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, name, object.Equals(geofield, null) ? IntPtr.Zero : geofield.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ifeatureclass csObj = new EarthView.World.Spatial.GeoDataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IFeatureClass");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeatureclass;
							csObj.BindNativeObject(__ptr, "IFeatureClass");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openFeatureClass_CVectorFeatureClass_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass的指针</returns>
					public EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass OpenFeatureClass(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openFeatureClass_CVectorFeatureClass_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass csObj = new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVectorFeatureClass");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.VectorFeatureClass;
							csObj.BindNativeObject(__ptr, "CVectorFeatureClass");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteFeatureClass_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public bool DeleteFeatureClass(string name)
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteFeatureClass_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getNetworkDatasetBuilder_CNetworkDatasetBuilder(IntPtr pNativeObject);

					/// <summary>
					/// 获取网络数据集的创建者
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回有效指针;否则，返回NULL</returns>
					public EarthView.World.Spatial2D.GeoDataset.NetworkDatasetBuilder GetNetworkDatasetBuilder()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getNetworkDatasetBuilder_CNetworkDatasetBuilder(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.NetworkDatasetBuilder csObj = new EarthView.World.Spatial2D.GeoDataset.NetworkDatasetBuilder(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CNetworkDatasetBuilder");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.NetworkDatasetBuilder;
							csObj.BindNativeObject(__ptr, "CNetworkDatasetBuilder");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openNetworkDataset_CNetworkDataset_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开网络数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回有效指针;否则，返回NULL</returns>
					public EarthView.World.Spatial2D.GeoDataset.NetworkDataset OpenNetworkDataset(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openNetworkDataset_CNetworkDataset_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.NetworkDataset csObj = new EarthView.World.Spatial2D.GeoDataset.NetworkDataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CNetworkDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.NetworkDataset;
							csObj.BindNativeObject(__ptr, "CNetworkDataset");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteNetworkDataset_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除网络数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回true;否则，返回False</returns>
					public bool DeleteNetworkDataset(string name)
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteNetworkDataset_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openAnnoDataset_CAnnoFeatureClass_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 打开标注数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回有效指针;否则，返回NULL</returns>
					public EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClass OpenAnnoDataset(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openAnnoDataset_CAnnoFeatureClass_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClass csObj = new EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAnnoFeatureClass");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClass;
							csObj.BindNativeObject(__ptr, "CAnnoFeatureClass");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_clone_IDataSource_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new EarthView.World.Spatial.GeoDataset.Idatasource Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_clone_IDataSource_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataSource");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
							csObj.BindNativeObject(__ptr, "IDataSource");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_clone_IDataSource(IntPtr pNativeObject);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override EarthView.World.Spatial.GeoDataset.Idatasource Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_clone_IDataSource(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataSource");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
							csObj.BindNativeObject(__ptr, "IDataSource");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte IsEditing_CallBack_ev_bool();

					protected IsEditing_CallBack_ev_bool m_IsEditing_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 数据源是否正在被编辑
					/// </summary>
					/// <returns>如果是返回true；否则返回false</returns>
					public virtual bool IsEditing_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool_Function()
					{
						bool csret=IsEditing();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 数据源是否正在被编辑
					/// </summary>
					/// <returns>如果是返回true；否则返回false</returns>
					public virtual bool IsEditing()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDatabase_CallBack_CSqlDatabase();

					protected getDatabase_CallBack_CSqlDatabase m_getDatabase_CallBack_CSqlDatabase;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
					public virtual EarthView.World.Core.Database.SqlDatabase GetDatabase_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase_NoVirtual(this.NativeObject);
						
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

					protected  IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase_Function()
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据库句柄
					/// </summary>
					/// <returns>EarthView::World::Core::Database::CSqlDatabase&,数据库句柄</returns>
					public virtual EarthView.World.Core.Database.SqlDatabase GetDatabase()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase(this.NativeObject);
						
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

					#if DEBUG 
						#if Windows 
							private static bool bLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_d.so");
							private static bool csbLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.so");

						#else 
							private static bool bLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_d.dll");
							private static bool csbLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase.so");
							private static bool csbLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.so");

						#else 
							private static bool bLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase.dll");
							private static bool csbLoadDatabaseVectorSource = LoadDll.Load("EV_Spatial2DGeoDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource", new DatabaseVectorSourceClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSourceProxy", new DatabaseVectorSourceClassFactory());

					public DatabaseVectorSource(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool(IntPtr pObject, IsEditing_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase(IntPtr pObject, getDatabase_CallBack_CSqlDatabase pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getPropertySet_IPropertySet(IntPtr pObject, getPropertySet_CallBack_IPropertySet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pObject, getDatasetInfo_CallBack_IDataMetaInfo_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pObject, getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pObject, createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openDataset_IDataset_EVString(IntPtr pObject, openDataset_CallBack_IDataset_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteDataset_ev_bool_EVString(IntPtr pObject, deleteDataset_CallBack_ev_bool_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_closeDataset_ev_bool_IDataset(IntPtr pObject, closeDataset_CallBack_ev_bool_IDataset pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DGeoDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_clone_IDataSource(IntPtr pObject, clone_CallBack_IDataSource pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_IsEditing_CallBack_ev_bool = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool_Function;
							GC.KeepAlive(m_IsEditing_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_IsEditing_ev_bool(this.NativeObject, m_IsEditing_CallBack_ev_bool);
							m_getDatabase_CallBack_CSqlDatabase = EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase_Function;
							GC.KeepAlive(m_getDatabase_CallBack_CSqlDatabase);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatabase_CSqlDatabase(this.NativeObject, m_getDatabase_CallBack_CSqlDatabase);
							m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_Function;
							GC.KeepAlive(m_getType_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
							m_getPropertySet_CallBack_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_Function;
							GC.KeepAlive(m_getPropertySet_CallBack_IPropertySet);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getPropertySet_IPropertySet(this.NativeObject, m_getPropertySet_CallBack_IPropertySet);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_getDatasetInfo_CallBack_IDataMetaInfo_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_Function;
							GC.KeepAlive(m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Function;
							GC.KeepAlive(m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Function;
							GC.KeepAlive(m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							m_openDataset_CallBack_IDataset_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_Function;
							GC.KeepAlive(m_openDataset_CallBack_IDataset_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_openDataset_IDataset_EVString(this.NativeObject, m_openDataset_CallBack_IDataset_EVString);
							m_deleteDataset_CallBack_ev_bool_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_Function;
							GC.KeepAlive(m_deleteDataset_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_deleteDataset_ev_bool_EVString(this.NativeObject, m_deleteDataset_CallBack_ev_bool_EVString);
							m_closeDataset_CallBack_ev_bool_IDataset = EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_Function;
							GC.KeepAlive(m_closeDataset_CallBack_ev_bool_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_closeDataset_ev_bool_IDataset(this.NativeObject, m_closeDataset_CallBack_ev_bool_IDataset);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_clone_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_Function;
							GC.KeepAlive(m_clone_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CDatabaseVectorSource_clone_IDataSource(this.NativeObject, m_clone_CallBack_IDataSource);
						}
					}
					public static DatabaseVectorSource FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DatabaseVectorSource obj = baseObj as  DatabaseVectorSource;
						if (object.Equals(obj, null))
						{
							obj = new DatabaseVectorSource(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDatabaseVectorSource");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DatabaseVectorSourceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DatabaseVectorSource emptyInstance = new DatabaseVectorSource(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
