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
				/// <summary>
				/// 数据源类型枚举
				/// </summary>
				public enum EVDATASOURCETYPE
				{
								DST_UNKNOWN = 0,
								DST_DATABASE_VECTOR = 1,
								DST_FILESYSTEM_SHAPEFILE = 2,
								DST_FILESYSTEM_CHART = 3,
								DST_DATABASE_RASTER = 4,
								DST_FILESYSTEM_RASTER = 11,
								DST_FILESYSTEM_KML = 12,
								DST_FILESYSTEM_FILE_SMART3D = 13,
								DST_FILESYSTEM_VECTOR = 14,
								DST_FILESYSTEM_SMART3D = 15,
								DST_FILESYSTEM_MESHX = 16,
								DST_FILESYSTEM_MESHXG = 17,
								DST_DATABASE_3DVECTOROCTREE = 18,
								DST_FILESYSTEM_LAS = 19,
								DST_DATABASE_MODEL = 21,
								DST_DATABASE_EFFECT = 31,
								DST_WEBSERVER_OGC_WMS = 41,
								DST_WEBSERVER_OGC_WMTS = 42,
								DST_WEBSERVER_OGC_WFS = 43,
								DST_WEBSERVER_EARTHVIEW_SERVER = 51,
								DST_CUSTOM = 100
				
				}

				/// <summary>
				/// 数据源类，是所有数据源类的基类。
				/// </summary>
				public class Idatasource : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getAliasName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源别名
					/// </summary>
					/// <returns>数据源别名</returns>
					public string GetAliasName()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getAliasName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_IDataSource_setAliasName_void_EVString(IntPtr pNativeObject, string aliasname);

					/// <summary>
					/// 设置数据源别名
					/// </summary>
					/// <param name="aliasname">别名</param>
					/// <returns></returns>
					public void SetAliasName(string aliasname)
					{
						EarthView_World_Spatial_GeoDataset_IDataSource_setAliasName_void_EVString(this.NativeObject, aliasname);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getType_CallBack_ev_int32();

					protected getType_CallBack_ev_int32 m_getType_CallBack_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					public virtual int GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_Function()
					{
						int csret=GetType();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源类型</returns>
					public virtual int GetType()
					{
						int ret=EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getPropertySet_CallBack_IPropertySet();

					protected getPropertySet_CallBack_IPropertySet m_getPropertySet_CallBack_IPropertySet;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ipropertyset csObj = new EarthView.World.Spatial.GeoDataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPropertySet");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ipropertyset;
							csObj.BindNativeObject(__ptr, "IPropertySet");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_Function()
					{
						EarthView.World.Spatial.GeoDataset.Ipropertyset csret=GetPropertySet();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet(IntPtr pNativeObject);

					/// <summary>
					/// 获取数据源参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源KeyValue参数</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ipropertyset csObj = new EarthView.World.Spatial.GeoDataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPropertySet");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ipropertyset;
							csObj.BindNativeObject(__ptr, "IPropertySet");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isValid_CallBack_ev_bool();

					protected isValid_CallBack_ev_bool m_isValid_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 判断数据源是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					public virtual bool IsValid_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_Function()
					{
						bool csret=IsValid();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断数据源是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					public virtual bool IsValid()
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDatasetInfo_CallBack_IDataMetaInfo_EVString(ref IntPtr name);

					protected getDatasetInfo_CallBack_IDataMetaInfo_EVString m_getDatasetInfo_CallBack_IDataMetaInfo_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(this.NativeObject, name);
						
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

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						EarthView.World.Spatial.GeoDataset.Idatametainfo csret=GetDatasetInfo(strname);
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, name);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					protected getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos_NoVirtual(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(this.NativeObject, type);
						
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

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Function(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						EarthView.World.Spatial.GeoDataset.Idatametainfos csret=GetDatasetInfos(type);
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pNativeObject, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type);

					/// <summary>
					/// 获取指定数据集类型的数据元信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据元信息集合对象</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, type);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields(ref IntPtr name, IntPtr geofield, IntPtr fields);

					protected createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_NoVirtual(IntPtr pNativeObject, string name, IntPtr geofield, IntPtr fields);

					/// <summary>
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureClass的指针</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass_NoVirtual(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_NoVirtual(this.NativeObject, name, object.Equals(geofield, null) ? IntPtr.Zero : geofield.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
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

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Function(ref IntPtr name, IntPtr geofield, IntPtr fields)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						EarthView.World.Spatial.GeoDataset.Igeometryfield csobj_geofield = new EarthView.World.Spatial.GeoDataset.Igeometryfield(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_geofield.BindNativeObject(geofield,"IGeometryField");
						csobj_geofield.Delegate = true;
						IClassFactory csobj_geofieldClassFactory = GlobalClassFactoryMap.Get(csobj_geofield.GetCppInstanceTypeName());
						if (csobj_geofieldClassFactory != null)
						{
							csobj_geofield.Delegate = true;
							csobj_geofield = csobj_geofieldClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Igeometryfield;
							csobj_geofield.BindNativeObject(geofield, "IGeometryField");
							csobj_geofield.Delegate = true;
						}
						EarthView.World.Spatial.GeoDataset.Ifields csobj_fields = new EarthView.World.Spatial.GeoDataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_fields.BindNativeObject(fields,"IFields");
						csobj_fields.Delegate = true;
						IClassFactory csobj_fieldsClassFactory = GlobalClassFactoryMap.Get(csobj_fields.GetCppInstanceTypeName());
						if (csobj_fieldsClassFactory != null)
						{
							csobj_fields.Delegate = true;
							csobj_fields = csobj_fieldsClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifields;
							csobj_fields.BindNativeObject(fields, "IFields");
							csobj_fields.Delegate = true;
						}
						
						EarthView.World.Spatial.GeoDataset.Ifeatureclass csret=CreateFeatureClass(strname,ref csobj_geofield, csobj_fields);
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pNativeObject, string name, IntPtr geofield, IntPtr fields);

					/// <summary>
					/// 创建FeatureClass数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial::GeoDataset::IFeatureClass的指针</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, name, object.Equals(geofield, null) ? IntPtr.Zero : geofield.NativeObject, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr openDataset_CallBack_IDataset_EVString(ref IntPtr name);

					protected openDataset_CallBack_IDataset_EVString m_openDataset_CallBack_IDataset_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集的迭代器</returns>
					//virtual EarthView::World::Spatial::GeoDataset::IDatasetIterator * getDatasets(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idataset OpenDataset_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_NoVirtual(this.NativeObject, name);
						
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

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						EarthView.World.Spatial.GeoDataset.Idataset csret=OpenDataset(strname);
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 获取指定数据集类型的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集的迭代器</returns>
					//virtual EarthView::World::Spatial::GeoDataset::IDatasetIterator * getDatasets(EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					/// <summary>
					/// 打开指定数据集名称的数据集
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>数据集对象指针，如果名字不存在，这返回null</returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString(this.NativeObject, name);
						
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

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte deleteDataset_CallBack_ev_bool_EVString(ref IntPtr name);

					protected deleteDataset_CallBack_ev_bool_EVString m_deleteDataset_CallBack_ev_bool_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除指定数据集名称的物理文件
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public virtual bool DeleteDataset_NoVirtual(string name)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_NoVirtual(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						bool csret=DeleteDataset(strname);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除指定数据集名称的物理文件
					/// </summary>
					/// <param name="name">指定名称</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public virtual bool DeleteDataset(string name)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString(this.NativeObject, name);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte closeDataset_CallBack_ev_bool_IDataset(IntPtr dataset);

					protected closeDataset_CallBack_ev_bool_IDataset m_closeDataset_CallBack_ev_bool_IDataset;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr dataset);

					/// <summary>
					/// 关闭指定数据集名称的数据集，会删掉数据集指针
					/// </summary>
					/// <param name="name">数据集指针</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public virtual bool CloseDataset_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset dataset)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_NoVirtual(this.NativeObject, object.Equals(dataset, null) ? IntPtr.Zero : dataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_Function(IntPtr dataset)
					{
						EarthView.World.Spatial.GeoDataset.Idataset csobj_dataset = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dataset.BindNativeObject(dataset,"IDataset");
						csobj_dataset.Delegate = true;
						IClassFactory csobj_datasetClassFactory = GlobalClassFactoryMap.Get(csobj_dataset.GetCppInstanceTypeName());
						if (csobj_datasetClassFactory != null)
						{
							csobj_dataset.Delegate = true;
							csobj_dataset = csobj_datasetClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csobj_dataset.BindNativeObject(dataset, "IDataset");
							csobj_dataset.Delegate = true;
						}
						
						bool csret=CloseDataset(csobj_dataset);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset(IntPtr pNativeObject, IntPtr dataset);

					/// <summary>
					/// 关闭指定数据集名称的数据集，会删掉数据集指针
					/// </summary>
					/// <param name="name">数据集指针</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					public virtual bool CloseDataset(EarthView.World.Spatial.GeoDataset.Idataset dataset)
					{
						byte ret=EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset(this.NativeObject, object.Equals(dataset, null) ? IntPtr.Zero : dataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string toXML_CallBack_EVString();

					protected toXML_CallBack_EVString m_toXML_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					// virtual ILayer * openLayer(EVString name);
					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_Function()
					{
						string csret=ToXML();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					// virtual ILayer * openLayer(EVString name);
					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr clone_CallBack_IDataSource();

					protected clone_CallBack_IDataSource m_clone_CallBack_IDataSource;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idatasource Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataSource");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
							csObj.BindNativeObject(__ptr, "IDataSource");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_Function()
					{
						EarthView.World.Spatial.GeoDataset.Idatasource csret=Clone();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource(IntPtr pNativeObject);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual EarthView.World.Spatial.GeoDataset.Idatasource Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataSource");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
							csObj.BindNativeObject(__ptr, "IDataSource");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIdatasource = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdatasource = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIdatasource = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIdatasource = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIdatasource = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIdatasource = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIdatasource = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdatasource = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIdatasource = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIdatasource = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIdatasource = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIdatasource = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataSource", new IdatasourceClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataSourceProxy", new IdatasourceClassFactory());

					public Idatasource(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet(IntPtr pObject, getPropertySet_CallBack_IPropertySet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pObject, getDatasetInfo_CallBack_IDataMetaInfo_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pObject, getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pObject, createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString(IntPtr pObject, openDataset_CallBack_IDataset_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString(IntPtr pObject, deleteDataset_CallBack_ev_bool_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset(IntPtr pObject, closeDataset_CallBack_ev_bool_IDataset pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource(IntPtr pObject, clone_CallBack_IDataSource pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_Function;
							GC.KeepAlive(m_getType_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
							m_getPropertySet_CallBack_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_Function;
							GC.KeepAlive(m_getPropertySet_CallBack_IPropertySet);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet(this.NativeObject, m_getPropertySet_CallBack_IPropertySet);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_getDatasetInfo_CallBack_IDataMetaInfo_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_Function;
							GC.KeepAlive(m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Function;
							GC.KeepAlive(m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Function;
							GC.KeepAlive(m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							m_openDataset_CallBack_IDataset_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_Function;
							GC.KeepAlive(m_openDataset_CallBack_IDataset_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString(this.NativeObject, m_openDataset_CallBack_IDataset_EVString);
							m_deleteDataset_CallBack_ev_bool_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_Function;
							GC.KeepAlive(m_deleteDataset_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString(this.NativeObject, m_deleteDataset_CallBack_ev_bool_EVString);
							m_closeDataset_CallBack_ev_bool_IDataset = EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_Function;
							GC.KeepAlive(m_closeDataset_CallBack_ev_bool_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset(this.NativeObject, m_closeDataset_CallBack_ev_bool_IDataset);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_clone_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_Function;
							GC.KeepAlive(m_clone_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource(this.NativeObject, m_clone_CallBack_IDataSource);
						}
					}
					public static Idatasource FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Idatasource obj = baseObj as  Idatasource;
						if (object.Equals(obj, null))
						{
							obj = new Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IDataSource");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IdatasourceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Idatasource emptyInstance = new Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Ifiledatasource : EarthView.World.Spatial.GeoDataset.Idatasource
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_IFileDataSource_getDirectory_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取目录
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源目录</returns>
					public string GetDirectory()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_IFileDataSource_getDirectory_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIfiledatasource = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFileDataSource", new IfiledatasourceClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFileDataSourceProxy", new IfiledatasourceClassFactory());

					public Ifiledatasource(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getPropertySet_IPropertySet(IntPtr pObject, getPropertySet_CallBack_IPropertySet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getDatasetInfo_IDataMetaInfo_EVString(IntPtr pObject, getDatasetInfo_CallBack_IDataMetaInfo_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(IntPtr pObject, getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(IntPtr pObject, createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_openDataset_IDataset_EVString(IntPtr pObject, openDataset_CallBack_IDataset_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_deleteDataset_ev_bool_EVString(IntPtr pObject, deleteDataset_CallBack_ev_bool_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_closeDataset_ev_bool_IDataset(IntPtr pObject, closeDataset_CallBack_ev_bool_IDataset pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_clone_IDataSource(IntPtr pObject, clone_CallBack_IDataSource pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSource_getType_ev_int32_Function;
							GC.KeepAlive(m_getType_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
							m_getPropertySet_CallBack_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSource_getPropertySet_IPropertySet_Function;
							GC.KeepAlive(m_getPropertySet_CallBack_IPropertySet);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getPropertySet_IPropertySet(this.NativeObject, m_getPropertySet_CallBack_IPropertySet);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_GeoDataset_IDataSource_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_getDatasetInfo_CallBack_IDataMetaInfo_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfo_IDataMetaInfo_EVString_Function;
							GC.KeepAlive(m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getDatasetInfo_IDataMetaInfo_EVString(this.NativeObject, m_getDatasetInfo_CallBack_IDataMetaInfo_EVString);
							m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType = EarthView_World_Spatial_GeoDataset_IDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Function;
							GC.KeepAlive(m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(this.NativeObject, m_getDatasetInfos_CallBack_IDataMetaInfos_EVDatasetType);
							m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields = EarthView_World_Spatial_GeoDataset_IDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Function;
							GC.KeepAlive(m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(this.NativeObject, m_createFeatureClass_CallBack_IFeatureClass_EVString_IGeometryField_IFields);
							m_openDataset_CallBack_IDataset_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_openDataset_IDataset_EVString_Function;
							GC.KeepAlive(m_openDataset_CallBack_IDataset_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_openDataset_IDataset_EVString(this.NativeObject, m_openDataset_CallBack_IDataset_EVString);
							m_deleteDataset_CallBack_ev_bool_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_deleteDataset_ev_bool_EVString_Function;
							GC.KeepAlive(m_deleteDataset_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_deleteDataset_ev_bool_EVString(this.NativeObject, m_deleteDataset_CallBack_ev_bool_EVString);
							m_closeDataset_CallBack_ev_bool_IDataset = EarthView_World_Spatial_GeoDataset_IDataSource_closeDataset_ev_bool_IDataset_Function;
							GC.KeepAlive(m_closeDataset_CallBack_ev_bool_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_closeDataset_ev_bool_IDataset(this.NativeObject, m_closeDataset_CallBack_ev_bool_IDataset);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_GeoDataset_IDataSource_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_clone_CallBack_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSource_clone_IDataSource_Function;
							GC.KeepAlive(m_clone_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IFileDataSource_clone_IDataSource(this.NativeObject, m_clone_CallBack_IDataSource);
						}
					}
					public override string GetName()
					{
						return base.GetName_NoVirtual();
					}
					public override int GetType()
					{
						return base.GetType_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Ipropertyset GetPropertySet()
					{
						return base.GetPropertySet_NoVirtual();
					}
					public override bool IsValid()
					{
						return base.IsValid_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Idatametainfo GetDatasetInfo(string name)
					{
						return base.GetDatasetInfo_NoVirtual(name);
					}
					public override EarthView.World.Spatial.GeoDataset.Idatametainfos GetDatasetInfos(EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type)
					{
						return base.GetDatasetInfos_NoVirtual(type);
					}
					public override EarthView.World.Spatial.GeoDataset.Ifeatureclass CreateFeatureClass(string name, ref EarthView.World.Spatial.GeoDataset.Igeometryfield geofield, EarthView.World.Spatial.GeoDataset.Ifields fields)
					{
						return base.CreateFeatureClass_NoVirtual(name,ref geofield,fields);
					}
					public override EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string name)
					{
						return base.OpenDataset_NoVirtual(name);
					}
					public override bool DeleteDataset(string name)
					{
						return base.DeleteDataset_NoVirtual(name);
					}
					public override bool CloseDataset(EarthView.World.Spatial.GeoDataset.Idataset dataset)
					{
						return base.CloseDataset_NoVirtual(dataset);
					}
					public override string ToXML()
					{
						return base.ToXML_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Idatasource Clone()
					{
						return base.Clone_NoVirtual();
					}
					public static Ifiledatasource FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ifiledatasource obj = baseObj as  Ifiledatasource;
						if (object.Equals(obj, null))
						{
							obj = new Ifiledatasource(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IFileDataSource");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IfiledatasourceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ifiledatasource emptyInstance = new Ifiledatasource(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
