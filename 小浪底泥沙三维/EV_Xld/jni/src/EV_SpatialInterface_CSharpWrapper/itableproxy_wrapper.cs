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
				/// 字段类基类
				/// </summary>
				public class Itableproxy : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr max_CallBack_CVariant_EVString(ref IntPtr expression);

					protected max_CallBack_CVariant_EVString m_max_CallBack_CVariant_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString_NoVirtual(IntPtr pNativeObject, string expression);

					/// <summary>
					/// 获取指定表达式下最大值
					/// </summary>
					/// <param name="expression">表达式</param>
					/// <returns>返回最爱值</returns>
					public virtual EarthView.World.Core.Variant Max_NoVirtual(string expression)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString_NoVirtual(this.NativeObject, expression);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString_Function(ref IntPtr expression)
					{
						string strexpression= Marshal.PtrToStringAnsi(expression);
						ClassFactory.FreeString(ref expression);
						
						EarthView.World.Core.Variant csret=Max(strexpression);
						
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
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString(IntPtr pNativeObject, string expression);

					/// <summary>
					/// 获取指定表达式下最大值
					/// </summary>
					/// <param name="expression">表达式</param>
					/// <returns>返回最爱值</returns>
					public virtual EarthView.World.Core.Variant Max(string expression)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString(this.NativeObject, expression);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr min_CallBack_CVariant_EVString(ref IntPtr expression);

					protected min_CallBack_CVariant_EVString m_min_CallBack_CVariant_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString_NoVirtual(IntPtr pNativeObject, string expression);

					/// <summary>
					/// 获取指定表达式下最小值
					/// </summary>
					/// <param name="expression">表达式</param>
					/// <returns>返回最小值</returns>
					public virtual EarthView.World.Core.Variant Min_NoVirtual(string expression)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString_NoVirtual(this.NativeObject, expression);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString_Function(ref IntPtr expression)
					{
						string strexpression= Marshal.PtrToStringAnsi(expression);
						ClassFactory.FreeString(ref expression);
						
						EarthView.World.Core.Variant csret=Min(strexpression);
						
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
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString(IntPtr pNativeObject, string expression);

					/// <summary>
					/// 获取指定表达式下最小值
					/// </summary>
					/// <param name="expression">表达式</param>
					/// <returns>返回最小值</returns>
					public virtual EarthView.World.Core.Variant Min(string expression)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString(this.NativeObject, expression);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariant");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
							csObj.BindNativeObject(__ptr, "CVariant");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr column_CallBack_CVariantArray_EVString_ev_bool(ref IntPtr fieldName, bool isUnique);

					protected column_CallBack_CVariantArray_EVString_ev_bool m_column_CallBack_CVariantArray_EVString_ev_bool;

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
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string fieldName, byte isUnique);

					/// <summary>
					/// 获取字段值数组
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <param name="isUnique">是否唯一</param>
					/// <returns>返回字段值数组</returns>
					public virtual EarthView.World.Core.VariantArray Column_NoVirtual(string fieldName, bool isUnique)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool_NoVirtual(this.NativeObject, fieldName, Convert.ToByte(isUnique));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.VariantArray csObj = new EarthView.World.Core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariantArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.VariantArray;
							csObj.BindNativeObject(__ptr, "CVariantArray");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool_Function(ref IntPtr fieldName, bool isUnique)
					{
						string strfieldName= Marshal.PtrToStringAnsi(fieldName);
						ClassFactory.FreeString(ref fieldName);
						
						EarthView.World.Core.VariantArray csret=Column(strfieldName,isUnique);
						
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
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool(IntPtr pNativeObject, string fieldName, byte isUnique);

					/// <summary>
					/// 获取字段值数组
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <param name="isUnique">是否唯一</param>
					/// <returns>返回字段值数组</returns>
					public virtual EarthView.World.Core.VariantArray Column(string fieldName, bool isUnique)
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool(this.NativeObject, fieldName, Convert.ToByte(isUnique));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.VariantArray csObj = new EarthView.World.Core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVariantArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.VariantArray;
							csObj.BindNativeObject(__ptr, "CVariantArray");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadItableproxy = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadItableproxy = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadItableproxy = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadItableproxy = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadItableproxy = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadItableproxy = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadItableproxy = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadItableproxy = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadItableproxy = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadItableproxy = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadItableproxy = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadItableproxy = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ITableProxy", new ItableproxyClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ITableProxyProxy", new ItableproxyClassFactory());

					public Itableproxy(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString(IntPtr pObject, max_CallBack_CVariant_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString(IntPtr pObject, min_CallBack_CVariant_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool(IntPtr pObject, column_CallBack_CVariantArray_EVString_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_max_CallBack_CVariant_EVString = EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString_Function;
							GC.KeepAlive(m_max_CallBack_CVariant_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ITableProxy_max_CVariant_EVString(this.NativeObject, m_max_CallBack_CVariant_EVString);
							m_min_CallBack_CVariant_EVString = EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString_Function;
							GC.KeepAlive(m_min_CallBack_CVariant_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ITableProxy_min_CVariant_EVString(this.NativeObject, m_min_CallBack_CVariant_EVString);
							m_column_CallBack_CVariantArray_EVString_ev_bool = EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool_Function;
							GC.KeepAlive(m_column_CallBack_CVariantArray_EVString_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_ITableProxy_column_CVariantArray_EVString_ev_bool(this.NativeObject, m_column_CallBack_CVariantArray_EVString_ev_bool);
						}
					}
					public static Itableproxy FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Itableproxy obj = baseObj as  Itableproxy;
						if (object.Equals(obj, null))
						{
							obj = new Itableproxy(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ITableProxy");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ItableproxyClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Itableproxy emptyInstance = new Itableproxy(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
