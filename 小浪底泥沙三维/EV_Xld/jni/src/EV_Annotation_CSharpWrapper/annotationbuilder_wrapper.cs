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
				public class AnnotationBuilder : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public AnnotationBuilder(EarthView.World.Spatial.Atlas.Imap ref_map, EarthView.World.Spatial.Atlas.Ivectorlayer ref_dataLayer, EarthView.World.Spatial.Display.Ispatialdisplay ref_spatialDisplay, EarthView.World.Spatial.Geometry.Ienvelope extent, EarthView.World.Core.Database.SqlDatabase db) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_map = new BasePtr(ref_map);
						list.Add("ref_map", valueref_map.PtrVal);
						BasePtr valueref_dataLayer = new BasePtr(ref_dataLayer);
						list.Add("ref_dataLayer", valueref_dataLayer.PtrVal);
						BasePtr valueref_spatialDisplay = new BasePtr(ref_spatialDisplay);
						list.Add("ref_spatialDisplay", valueref_spatialDisplay.PtrVal);
						BasePtr valueextent = new BasePtr(extent);
						list.Add("extent", valueextent.PtrVal);
						BasePtr valuedb = new BasePtr(db);
						list.Add("db", valuedb.PtrVal);
						Create("CAnnotationBuilder", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_build_ev_bool(IntPtr pNativeObject);

					public bool Build()
					{
						byte ret=EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_build_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置注记数据集名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public void SetName(string name)
					{
						EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setName_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setCreateAnnotationWithSelection_void_ev_bool(IntPtr pNativeObject, ref bool b);

					/// <summary>
					/// 设置是否通过选择集生成注记
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public void SetCreateAnnotationWithSelection(bool b)
					{
						EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setCreateAnnotationWithSelection_void_ev_bool(this.NativeObject, ref b);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setWhereClause_void_EVString(IntPtr pNativeObject, string whereClause);

					/// <summary>
					/// 设置需要生成注记的要素的过滤条件
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					public void SetWhereClause(string whereClause)
					{
						EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setWhereClause_void_EVString(this.NativeObject, whereClause);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setScale_void_ev_real64(IntPtr pNativeObject, ref double scale);

					/// <summary>
					/// 设置注记数据集比例尺
					/// </summary>
					/// <param name="scale">比例尺</param>
					/// <returns></returns>
					public void SetScale(double scale)
					{
						EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setScale_void_ev_real64(this.NativeObject, ref scale);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setAppend_void_ev_bool(IntPtr pNativeObject, byte b);

					/// <summary>
					/// 设置是否追加到已有数据集
					/// </summary>
					/// <param name="b">true表示追加</param>
					/// <returns></returns>
					public void SetAppend(bool b)
					{
						EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setAppend_void_ev_bool(this.NativeObject, Convert.ToByte(b));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Annotation_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setTerminated_void(IntPtr pNativeObject);

					/// <summary>
					/// 如果正在导出注记，停止操作
					/// </summary>
					/// <param name="b">true表示追加</param>
					/// <returns></returns>
					public void SetTerminated()
					{
						EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setTerminated_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_d.dll");
							private static bool csbLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_d.so");
							private static bool csbLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_CSharp_d.so");

						#else 
							private static bool bLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_d.dll");
							private static bool csbLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAnnotationBuilder = LoadDll.Load("EV_Annotation.dll");
							private static bool csbLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_CSharp.dll");

						#elif Linux 
							private static bool bLoadAnnotationBuilder = LoadDll.Load("EV_Annotation.so");
							private static bool csbLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_CSharp.so");

						#else 
							private static bool bLoadAnnotationBuilder = LoadDll.Load("EV_Annotation.dll");
							private static bool csbLoadAnnotationBuilder = LoadDll.Load("EV_Annotation_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder", new AnnotationBuilderClassFactory());

					public AnnotationBuilder(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static AnnotationBuilder FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AnnotationBuilder obj = baseObj as  AnnotationBuilder;
						if (object.Equals(obj, null))
						{
							obj = new AnnotationBuilder(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAnnotationBuilder");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AnnotationBuilderClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AnnotationBuilder emptyInstance = new AnnotationBuilder(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
