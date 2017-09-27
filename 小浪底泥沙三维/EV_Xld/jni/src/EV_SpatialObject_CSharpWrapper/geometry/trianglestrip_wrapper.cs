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
			namespace Geometry
			{
				/// <summary>
				/// 三角带类
				/// 
				/// </summary>
				public class TriangleStrip : EarthView.World.Spatial.Geometry.Surface
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public TriangleStrip() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CTriangleStripProxy", null);
						if (!"EarthView.World.Spatial.Geometry.TriangleStrip".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_CTriangleStrip_getPoint_CCoordinate_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获取点
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>点坐标</returns>
					public EarthView.World.Spatial.Geometry.Coordinate GetPoint(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_CTriangleStrip_getPoint_CCoordinate_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Coordinate csObj = new EarthView.World.Spatial.Geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCoordinate");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Coordinate;
							csObj.BindNativeObject(__ptr, "CCoordinate");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_CTriangleStrip_addPoint_void_CCoordinate(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 增加点
					/// </summary>
					/// <param name="point">点</param>
					/// <returns></returns>
					public void AddPoint(EarthView.World.Spatial.Geometry.Coordinate point)
					{
						EarthView_World_Spatial_Geometry_CTriangleStrip_addPoint_void_CCoordinate(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_CTriangleStrip_removePoint_void_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 删除点
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public void RemovePoint(uint index)
					{
						EarthView_World_Spatial_Geometry_CTriangleStrip_removePoint_void_ev_uint32(this.NativeObject, index);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_CTriangleStrip_insertPoint_void_ev_uint32_CCoordinate(IntPtr pNativeObject, uint index, IntPtr point);

					/// <summary>
					/// 插入点
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="point">点</param>
					/// <returns></returns>
					public void InsertPoint(uint index, EarthView.World.Spatial.Geometry.Coordinate point)
					{
						EarthView_World_Spatial_Geometry_CTriangleStrip_insertPoint_void_ev_uint32_CCoordinate(this.NativeObject, index, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_CTriangleStrip_clearPoints_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ClearPoints()
					{
						EarthView_World_Spatial_Geometry_CTriangleStrip_clearPoints_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial_Geometry_CTriangleStrip_getPointCount_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 获取点数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>点数量</returns>
					public ulong GetPointCount()
					{
						ulong ret=EarthView_World_Spatial_Geometry_CTriangleStrip_getPointCount_ev_size_t(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadTriangleStrip = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadTriangleStrip = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadTriangleStrip = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadTriangleStrip = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::CTriangleStrip", new TriangleStripClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::CTriangleStripProxy", new TriangleStripClassFactory());

					public TriangleStrip(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getArea_ev_real64(IntPtr pObject, getArea_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isDirty_ev_bool(IntPtr pObject, isDirty_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_setDirty_void_ev_bool(IntPtr pObject, setDirty_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_update_void(IntPtr pObject, update_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_resample_IGeometry_ev_real64_EVDimensionType(IntPtr pObject, resample_CallBack_IGeometry_ev_real64_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_mirror_IGeometry_IGeometry(IntPtr pObject, mirror_CallBack_IGeometry_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_split_IGeometry_IGeometry(IntPtr pObject, split_CallBack_IGeometry_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_clip_IGeometry_IGeometry(IntPtr pObject, clip_CallBack_IGeometry_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_smooth_IGeometry_ev_real64_EVDimensionType(IntPtr pObject, smooth_CallBack_IGeometry_ev_real64_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(IntPtr pObject, snapToPoint_CallBack_IGeometry_IGeometry_ev_real64_EVGeometrySnapType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_snapToSegment_IGeometry_IGeometry_ev_real64(IntPtr pObject, snapToSegment_CallBack_IGeometry_IGeometry_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_movePointTo_ev_bool_IGeometry_IGeometry(IntPtr pObject, movePointTo_CallBack_ev_bool_IGeometry_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_addPointTo_ev_bool_IGeometry(IntPtr pObject, addPointTo_CallBack_ev_bool_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_deletePoint_ev_bool_IGeometry(IntPtr pObject, deletePoint_CallBack_ev_bool_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getEnvelopeRef_IEnvelope(IntPtr pObject, getEnvelopeRef_CallBack_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getSpatialReferenceRef_ISpatialReference(IntPtr pObject, getSpatialReferenceRef_CallBack_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getGeometryType_EVGeometryType(IntPtr pObject, getGeometryType_CallBack_EVGeometryType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getWKBGeometryType_EVWKBGeometryType(IntPtr pObject, getWKBGeometryType_CallBack_EVWKBGeometryType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isEmpty_ev_bool(IntPtr pObject, isEmpty_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isSimple_ev_bool(IntPtr pObject, isSimple_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_simplify_void(IntPtr pObject, simplify_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getBoundary_IGeometry(IntPtr pObject, getBoundary_CallBack_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_makeZ_void_ev_real64(IntPtr pObject, makeZ_CallBack_void_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_makeM_void_ev_real64(IntPtr pObject, makeM_CallBack_void_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_setSpatialReferenceRef_void_ISpatialReference(IntPtr pObject, setSpatialReferenceRef_CallBack_void_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_clone_IGeometry(IntPtr pObject, clone_CallBack_IGeometry pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isContains_ev_bool_IGeometry_EVDimensionType(IntPtr pObject, isContains_CallBack_ev_bool_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(IntPtr pObject, isEquals_CallBack_ev_bool_IGeometry_ev_real64_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isDisjoin_ev_bool_IGeometry_EVDimensionType(IntPtr pObject, isDisjoin_CallBack_ev_bool_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isIntersects_ev_bool_IGeometry_EVDimensionType(IntPtr pObject, isIntersects_CallBack_ev_bool_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isWithin_ev_bool_IGeometry_EVDimensionType(IntPtr pObject, isWithin_CallBack_ev_bool_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isTouches_ev_bool_IGeometry_EVDimensionType(IntPtr pObject, isTouches_CallBack_ev_bool_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isCrosses_ev_bool_IGeometry_EVDimensionType(IntPtr pObject, isCrosses_CallBack_ev_bool_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(IntPtr pObject, isRelates_CallBack_ev_bool_IGeometry_EVString_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_buffer_IGeometry_ev_real64_EVDimensionType(IntPtr pObject, buffer_CallBack_IGeometry_ev_real64_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_convexHull_IGeometry_EVDimensionType(IntPtr pObject, convexHull_CallBack_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_difference_IGeometry_IGeometry_EVDimensionType(IntPtr pObject, difference_CallBack_IGeometry_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_distance_ev_real64_IGeometry_EVDimensionType(IntPtr pObject, distance_CallBack_ev_real64_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_intersects_IGeometry_IGeometry_EVDimensionType(IntPtr pObject, intersects_CallBack_IGeometry_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_overlaps_IGeometry_IGeometry_EVDimensionType(IntPtr pObject, overlaps_CallBack_IGeometry_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_symDifference_IGeometry_IGeometry_EVDimensionType(IntPtr pObject, symDifference_CallBack_IGeometry_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_unions_IGeometry_IGeometry_EVDimensionType(IntPtr pObject, unions_CallBack_IGeometry_IGeometry_EVDimensionType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_toWKB_void_CDataStream(IntPtr pObject, toWKB_CallBack_void_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_toWKT_void_EVString(IntPtr pObject, toWKT_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_translate_void_ev_real64_ev_real64_ev_real64(IntPtr pObject, translate_CallBack_void_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, rotate_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, scale_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_projects_void_ISpatialReference_ev_real64_ev_uint32(IntPtr pObject, projects_CallBack_void_ISpatialReference_ev_real64_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getInteriorPoint_ev_bool_IGeometry(IntPtr pObject, getInteriorPoint_CallBack_ev_bool_IGeometry pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getArea_CallBack_ev_real64 = EarthView_World_Spatial_Geometry_CSurface_getArea_ev_real64_Function;
							GC.KeepAlive(m_getArea_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getArea_ev_real64(this.NativeObject, m_getArea_CallBack_ev_real64);
							m_isDirty_CallBack_ev_bool = EarthView_World_Spatial_Geometry_CGeometry_isDirty_ev_bool_Function;
							GC.KeepAlive(m_isDirty_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isDirty_ev_bool(this.NativeObject, m_isDirty_CallBack_ev_bool);
							m_setDirty_CallBack_void_ev_bool = EarthView_World_Spatial_Geometry_CGeometry_setDirty_void_ev_bool_Function;
							GC.KeepAlive(m_setDirty_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_setDirty_void_ev_bool(this.NativeObject, m_setDirty_CallBack_void_ev_bool);
							m_update_CallBack_void = EarthView_World_Spatial_Geometry_CGeometry_update_void_Function;
							GC.KeepAlive(m_update_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_update_void(this.NativeObject, m_update_CallBack_void);
							m_resample_CallBack_IGeometry_ev_real64_EVDimensionType = EarthView_World_Spatial_Geometry_CGeometry_resample_IGeometry_ev_real64_EVDimensionType_Function;
							GC.KeepAlive(m_resample_CallBack_IGeometry_ev_real64_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_resample_IGeometry_ev_real64_EVDimensionType(this.NativeObject, m_resample_CallBack_IGeometry_ev_real64_EVDimensionType);
							m_mirror_CallBack_IGeometry_IGeometry = EarthView_World_Spatial_Geometry_CGeometry_mirror_IGeometry_IGeometry_Function;
							GC.KeepAlive(m_mirror_CallBack_IGeometry_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_mirror_IGeometry_IGeometry(this.NativeObject, m_mirror_CallBack_IGeometry_IGeometry);
							m_split_CallBack_IGeometry_IGeometry = EarthView_World_Spatial_Geometry_CGeometry_split_IGeometry_IGeometry_Function;
							GC.KeepAlive(m_split_CallBack_IGeometry_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_split_IGeometry_IGeometry(this.NativeObject, m_split_CallBack_IGeometry_IGeometry);
							m_clip_CallBack_IGeometry_IGeometry = EarthView_World_Spatial_Geometry_CGeometry_clip_IGeometry_IGeometry_Function;
							GC.KeepAlive(m_clip_CallBack_IGeometry_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_clip_IGeometry_IGeometry(this.NativeObject, m_clip_CallBack_IGeometry_IGeometry);
							m_smooth_CallBack_IGeometry_ev_real64_EVDimensionType = EarthView_World_Spatial_Geometry_CGeometry_smooth_IGeometry_ev_real64_EVDimensionType_Function;
							GC.KeepAlive(m_smooth_CallBack_IGeometry_ev_real64_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_smooth_IGeometry_ev_real64_EVDimensionType(this.NativeObject, m_smooth_CallBack_IGeometry_ev_real64_EVDimensionType);
							m_snapToPoint_CallBack_IGeometry_IGeometry_ev_real64_EVGeometrySnapType = EarthView_World_Spatial_Geometry_CGeometry_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType_Function;
							GC.KeepAlive(m_snapToPoint_CallBack_IGeometry_IGeometry_ev_real64_EVGeometrySnapType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_snapToPoint_IGeometry_IGeometry_ev_real64_EVGeometrySnapType(this.NativeObject, m_snapToPoint_CallBack_IGeometry_IGeometry_ev_real64_EVGeometrySnapType);
							m_snapToSegment_CallBack_IGeometry_IGeometry_ev_real64 = EarthView_World_Spatial_Geometry_CGeometry_snapToSegment_IGeometry_IGeometry_ev_real64_Function;
							GC.KeepAlive(m_snapToSegment_CallBack_IGeometry_IGeometry_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_snapToSegment_IGeometry_IGeometry_ev_real64(this.NativeObject, m_snapToSegment_CallBack_IGeometry_IGeometry_ev_real64);
							m_movePointTo_CallBack_ev_bool_IGeometry_IGeometry = EarthView_World_Spatial_Geometry_CGeometry_movePointTo_ev_bool_IGeometry_IGeometry_Function;
							GC.KeepAlive(m_movePointTo_CallBack_ev_bool_IGeometry_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_movePointTo_ev_bool_IGeometry_IGeometry(this.NativeObject, m_movePointTo_CallBack_ev_bool_IGeometry_IGeometry);
							m_addPointTo_CallBack_ev_bool_IGeometry = EarthView_World_Spatial_Geometry_CGeometry_addPointTo_ev_bool_IGeometry_Function;
							GC.KeepAlive(m_addPointTo_CallBack_ev_bool_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_addPointTo_ev_bool_IGeometry(this.NativeObject, m_addPointTo_CallBack_ev_bool_IGeometry);
							m_deletePoint_CallBack_ev_bool_IGeometry = EarthView_World_Spatial_Geometry_CGeometry_deletePoint_ev_bool_IGeometry_Function;
							GC.KeepAlive(m_deletePoint_CallBack_ev_bool_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_deletePoint_ev_bool_IGeometry(this.NativeObject, m_deletePoint_CallBack_ev_bool_IGeometry);
							m_getEnvelopeRef_CallBack_IEnvelope = EarthView_World_Spatial_Geometry_IGeometry_getEnvelopeRef_IEnvelope_Function;
							GC.KeepAlive(m_getEnvelopeRef_CallBack_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getEnvelopeRef_IEnvelope(this.NativeObject, m_getEnvelopeRef_CallBack_IEnvelope);
							m_getSpatialReferenceRef_CallBack_ISpatialReference = EarthView_World_Spatial_Geometry_IGeometry_getSpatialReferenceRef_ISpatialReference_Function;
							GC.KeepAlive(m_getSpatialReferenceRef_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getSpatialReferenceRef_ISpatialReference(this.NativeObject, m_getSpatialReferenceRef_CallBack_ISpatialReference);
							m_getGeometryType_CallBack_EVGeometryType = EarthView_World_Spatial_Geometry_IGeometry_getGeometryType_EVGeometryType_Function;
							GC.KeepAlive(m_getGeometryType_CallBack_EVGeometryType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getGeometryType_EVGeometryType(this.NativeObject, m_getGeometryType_CallBack_EVGeometryType);
							m_getWKBGeometryType_CallBack_EVWKBGeometryType = EarthView_World_Spatial_Geometry_IGeometry_getWKBGeometryType_EVWKBGeometryType_Function;
							GC.KeepAlive(m_getWKBGeometryType_CallBack_EVWKBGeometryType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getWKBGeometryType_EVWKBGeometryType(this.NativeObject, m_getWKBGeometryType_CallBack_EVWKBGeometryType);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_Geometry_IGeometry_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_isEmpty_CallBack_ev_bool = EarthView_World_Spatial_Geometry_IGeometry_isEmpty_ev_bool_Function;
							GC.KeepAlive(m_isEmpty_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isEmpty_ev_bool(this.NativeObject, m_isEmpty_CallBack_ev_bool);
							m_isSimple_CallBack_ev_bool = EarthView_World_Spatial_Geometry_IGeometry_isSimple_ev_bool_Function;
							GC.KeepAlive(m_isSimple_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isSimple_ev_bool(this.NativeObject, m_isSimple_CallBack_ev_bool);
							m_simplify_CallBack_void = EarthView_World_Spatial_Geometry_IGeometry_simplify_void_Function;
							GC.KeepAlive(m_simplify_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_simplify_void(this.NativeObject, m_simplify_CallBack_void);
							m_getBoundary_CallBack_IGeometry = EarthView_World_Spatial_Geometry_IGeometry_getBoundary_IGeometry_Function;
							GC.KeepAlive(m_getBoundary_CallBack_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getBoundary_IGeometry(this.NativeObject, m_getBoundary_CallBack_IGeometry);
							m_makeZ_CallBack_void_ev_real64 = EarthView_World_Spatial_Geometry_IGeometry_makeZ_void_ev_real64_Function;
							GC.KeepAlive(m_makeZ_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_makeZ_void_ev_real64(this.NativeObject, m_makeZ_CallBack_void_ev_real64);
							m_makeM_CallBack_void_ev_real64 = EarthView_World_Spatial_Geometry_IGeometry_makeM_void_ev_real64_Function;
							GC.KeepAlive(m_makeM_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_makeM_void_ev_real64(this.NativeObject, m_makeM_CallBack_void_ev_real64);
							m_setSpatialReferenceRef_CallBack_void_ISpatialReference = EarthView_World_Spatial_Geometry_IGeometry_setSpatialReferenceRef_void_ISpatialReference_Function;
							GC.KeepAlive(m_setSpatialReferenceRef_CallBack_void_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_setSpatialReferenceRef_void_ISpatialReference(this.NativeObject, m_setSpatialReferenceRef_CallBack_void_ISpatialReference);
							m_clone_CallBack_IGeometry = EarthView_World_Spatial_Geometry_IGeometry_clone_IGeometry_Function;
							GC.KeepAlive(m_clone_CallBack_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_clone_IGeometry(this.NativeObject, m_clone_CallBack_IGeometry);
							m_isContains_CallBack_ev_bool_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isContains_ev_bool_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_isContains_CallBack_ev_bool_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isContains_ev_bool_IGeometry_EVDimensionType(this.NativeObject, m_isContains_CallBack_ev_bool_IGeometry_EVDimensionType);
							m_isEquals_CallBack_ev_bool_IGeometry_ev_real64_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType_Function;
							GC.KeepAlive(m_isEquals_CallBack_ev_bool_IGeometry_ev_real64_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isEquals_ev_bool_IGeometry_ev_real64_EVDimensionType(this.NativeObject, m_isEquals_CallBack_ev_bool_IGeometry_ev_real64_EVDimensionType);
							m_isDisjoin_CallBack_ev_bool_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isDisjoin_ev_bool_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_isDisjoin_CallBack_ev_bool_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isDisjoin_ev_bool_IGeometry_EVDimensionType(this.NativeObject, m_isDisjoin_CallBack_ev_bool_IGeometry_EVDimensionType);
							m_isIntersects_CallBack_ev_bool_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isIntersects_ev_bool_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_isIntersects_CallBack_ev_bool_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isIntersects_ev_bool_IGeometry_EVDimensionType(this.NativeObject, m_isIntersects_CallBack_ev_bool_IGeometry_EVDimensionType);
							m_isWithin_CallBack_ev_bool_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isWithin_ev_bool_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_isWithin_CallBack_ev_bool_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isWithin_ev_bool_IGeometry_EVDimensionType(this.NativeObject, m_isWithin_CallBack_ev_bool_IGeometry_EVDimensionType);
							m_isTouches_CallBack_ev_bool_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isTouches_ev_bool_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_isTouches_CallBack_ev_bool_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isTouches_ev_bool_IGeometry_EVDimensionType(this.NativeObject, m_isTouches_CallBack_ev_bool_IGeometry_EVDimensionType);
							m_isCrosses_CallBack_ev_bool_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isCrosses_ev_bool_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_isCrosses_CallBack_ev_bool_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isCrosses_ev_bool_IGeometry_EVDimensionType(this.NativeObject, m_isCrosses_CallBack_ev_bool_IGeometry_EVDimensionType);
							m_isRelates_CallBack_ev_bool_IGeometry_EVString_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_isRelates_ev_bool_IGeometry_EVString_EVDimensionType_Function;
							GC.KeepAlive(m_isRelates_CallBack_ev_bool_IGeometry_EVString_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_isRelates_ev_bool_IGeometry_EVString_EVDimensionType(this.NativeObject, m_isRelates_CallBack_ev_bool_IGeometry_EVString_EVDimensionType);
							m_buffer_CallBack_IGeometry_ev_real64_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_buffer_IGeometry_ev_real64_EVDimensionType_Function;
							GC.KeepAlive(m_buffer_CallBack_IGeometry_ev_real64_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_buffer_IGeometry_ev_real64_EVDimensionType(this.NativeObject, m_buffer_CallBack_IGeometry_ev_real64_EVDimensionType);
							m_convexHull_CallBack_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_convexHull_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_convexHull_CallBack_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_convexHull_IGeometry_EVDimensionType(this.NativeObject, m_convexHull_CallBack_IGeometry_EVDimensionType);
							m_difference_CallBack_IGeometry_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_difference_IGeometry_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_difference_CallBack_IGeometry_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_difference_IGeometry_IGeometry_EVDimensionType(this.NativeObject, m_difference_CallBack_IGeometry_IGeometry_EVDimensionType);
							m_distance_CallBack_ev_real64_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_distance_ev_real64_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_distance_CallBack_ev_real64_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_distance_ev_real64_IGeometry_EVDimensionType(this.NativeObject, m_distance_CallBack_ev_real64_IGeometry_EVDimensionType);
							m_intersects_CallBack_IGeometry_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_intersects_IGeometry_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_intersects_CallBack_IGeometry_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_intersects_IGeometry_IGeometry_EVDimensionType(this.NativeObject, m_intersects_CallBack_IGeometry_IGeometry_EVDimensionType);
							m_overlaps_CallBack_IGeometry_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_overlaps_IGeometry_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_overlaps_CallBack_IGeometry_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_overlaps_IGeometry_IGeometry_EVDimensionType(this.NativeObject, m_overlaps_CallBack_IGeometry_IGeometry_EVDimensionType);
							m_symDifference_CallBack_IGeometry_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_symDifference_IGeometry_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_symDifference_CallBack_IGeometry_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_symDifference_IGeometry_IGeometry_EVDimensionType(this.NativeObject, m_symDifference_CallBack_IGeometry_IGeometry_EVDimensionType);
							m_unions_CallBack_IGeometry_IGeometry_EVDimensionType = EarthView_World_Spatial_Geometry_IGeometry_unions_IGeometry_IGeometry_EVDimensionType_Function;
							GC.KeepAlive(m_unions_CallBack_IGeometry_IGeometry_EVDimensionType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_unions_IGeometry_IGeometry_EVDimensionType(this.NativeObject, m_unions_CallBack_IGeometry_IGeometry_EVDimensionType);
							m_toWKB_CallBack_void_CDataStream = EarthView_World_Spatial_Geometry_IGeometry_toWKB_void_CDataStream_Function;
							GC.KeepAlive(m_toWKB_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_toWKB_void_CDataStream(this.NativeObject, m_toWKB_CallBack_void_CDataStream);
							m_toWKT_CallBack_void_EVString = EarthView_World_Spatial_Geometry_IGeometry_toWKT_void_EVString_Function;
							GC.KeepAlive(m_toWKT_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_toWKT_void_EVString(this.NativeObject, m_toWKT_CallBack_void_EVString);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_Geometry_IGeometry_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_translate_CallBack_void_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Geometry_IGeometry_translate_void_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_translate_CallBack_void_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_translate_void_ev_real64_ev_real64_ev_real64(this.NativeObject, m_translate_CallBack_void_ev_real64_ev_real64_ev_real64);
							m_rotate_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Geometry_IGeometry_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_rotate_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_rotate_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							m_scale_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Geometry_IGeometry_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_scale_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_scale_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64);
							m_projects_CallBack_void_ISpatialReference_ev_real64_ev_uint32 = EarthView_World_Spatial_Geometry_IGeometry_projects_void_ISpatialReference_ev_real64_ev_uint32_Function;
							GC.KeepAlive(m_projects_CallBack_void_ISpatialReference_ev_real64_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_projects_void_ISpatialReference_ev_real64_ev_uint32(this.NativeObject, m_projects_CallBack_void_ISpatialReference_ev_real64_ev_uint32);
							m_getInteriorPoint_CallBack_ev_bool_IGeometry = EarthView_World_Spatial_Geometry_IGeometry_getInteriorPoint_ev_bool_IGeometry_Function;
							GC.KeepAlive(m_getInteriorPoint_CallBack_ev_bool_IGeometry);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CTriangleStrip_getInteriorPoint_ev_bool_IGeometry(this.NativeObject, m_getInteriorPoint_CallBack_ev_bool_IGeometry);
						}
					}
					public override double GetArea()
					{
						return base.GetArea_NoVirtual();
					}
					public override bool IsDirty()
					{
						return base.IsDirty_NoVirtual();
					}
					public override void SetDirty(bool dirty)
					{
						base.SetDirty_NoVirtual(dirty);
					}
					public override void Update()
					{
						base.Update_NoVirtual();
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Resample(double tolerance, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Resample_NoVirtual(tolerance,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Mirror(EarthView.World.Spatial.Geometry.Igeometry line)
					{
						return base.Mirror_NoVirtual(line);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Split(EarthView.World.Spatial.Geometry.Igeometry pSplitGeom)
					{
						return base.Split_NoVirtual(pSplitGeom);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Clip(EarthView.World.Spatial.Geometry.Igeometry clipRegion)
					{
						return base.Clip_NoVirtual(clipRegion);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Smooth(double tolerance, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Smooth_NoVirtual(tolerance,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry SnapToPoint(EarthView.World.Spatial.Geometry.Igeometry point, double tolerance, ref EarthView.World.Spatial.Geometry.EVGEOMETRYSNAPTYPE snap)
					{
						return base.SnapToPoint_NoVirtual(point,tolerance,ref snap);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry SnapToSegment(EarthView.World.Spatial.Geometry.Igeometry point, double tolerance)
					{
						return base.SnapToSegment_NoVirtual(point,tolerance);
					}
					public override bool MovePointTo(EarthView.World.Spatial.Geometry.Igeometry frmPoint, EarthView.World.Spatial.Geometry.Igeometry cpy_toPoint)
					{
						return base.MovePointTo_NoVirtual(frmPoint,cpy_toPoint);
					}
					public override bool AddPointTo(EarthView.World.Spatial.Geometry.Igeometry cpy_point)
					{
						return base.AddPointTo_NoVirtual(cpy_point);
					}
					public override bool DeletePoint(EarthView.World.Spatial.Geometry.Igeometry point)
					{
						return base.DeletePoint_NoVirtual(point);
					}
					public override EarthView.World.Spatial.Geometry.Ienvelope GetEnvelopeRef()
					{
						return base.GetEnvelopeRef_NoVirtual();
					}
					public override EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReferenceRef()
					{
						return base.GetSpatialReferenceRef_NoVirtual();
					}
					public override EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE GetGeometryType()
					{
						return base.GetGeometryType_NoVirtual();
					}
					public override EarthView.World.Spatial.Geometry.EVWKBGEOMETRYTYPE GetWKBGeometryType()
					{
						return base.GetWKBGeometryType_NoVirtual();
					}
					public override bool IsValid()
					{
						return base.IsValid_NoVirtual();
					}
					public override bool IsEmpty()
					{
						return base.IsEmpty_NoVirtual();
					}
					public override bool IsSimple()
					{
						return base.IsSimple_NoVirtual();
					}
					public override void Simplify()
					{
						base.Simplify_NoVirtual();
					}
					public override EarthView.World.Spatial.Geometry.Igeometry GetBoundary()
					{
						return base.GetBoundary_NoVirtual();
					}
					public override void MakeZ(double z)
					{
						base.MakeZ_NoVirtual(z);
					}
					public override void MakeM(double m)
					{
						base.MakeM_NoVirtual(m);
					}
					public override void SetSpatialReferenceRef(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
					{
						base.SetSpatialReferenceRef_NoVirtual(ref_sr);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Clone()
					{
						return base.Clone_NoVirtual();
					}
					public override bool IsContains(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsContains_NoVirtual(geom,dimension);
					}
					public override bool IsEquals(EarthView.World.Spatial.Geometry.Igeometry geom, double tolerance, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsEquals_NoVirtual(geom,tolerance,dimension);
					}
					public override bool IsDisjoin(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsDisjoin_NoVirtual(geom,dimension);
					}
					public override bool IsIntersects(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsIntersects_NoVirtual(geom,dimension);
					}
					public override bool IsWithin(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsWithin_NoVirtual(geom,dimension);
					}
					public override bool IsTouches(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsTouches_NoVirtual(geom,dimension);
					}
					public override bool IsCrosses(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsCrosses_NoVirtual(geom,dimension);
					}
					public override bool IsRelates(EarthView.World.Spatial.Geometry.Igeometry geom, string relateMatrix, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.IsRelates_NoVirtual(geom,relateMatrix,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Buffer(double tolerance, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Buffer_NoVirtual(tolerance,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry ConvexHull(EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.ConvexHull_NoVirtual(dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Difference(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Difference_NoVirtual(geom,dimension);
					}
					public override double Distance(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Distance_NoVirtual(geom,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Intersects(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Intersects_NoVirtual(geom,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Overlaps(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Overlaps_NoVirtual(geom,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry SymDifference(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.SymDifference_NoVirtual(geom,dimension);
					}
					public override EarthView.World.Spatial.Geometry.Igeometry Unions(EarthView.World.Spatial.Geometry.Igeometry geom, EarthView.World.Spatial.Geometry.EVDIMENSIONTYPE dimension)
					{
						return base.Unions_NoVirtual(geom,dimension);
					}
					public override void ToWKB(ref EarthView.World.Core.DataStream stream)
					{
						base.ToWKB_NoVirtual(ref stream);
					}
					public override void ToWKT(ref string wkt)
					{
						base.ToWKT_NoVirtual(ref wkt);
					}
					public override void ToStream(ref EarthView.World.Core.DataStream stream)
					{
						base.ToStream_NoVirtual(ref stream);
					}
					public override void Translate(double x, double y, double z)
					{
						base.Translate_NoVirtual(x,y,z);
					}
					public override void Rotate(double xRef, double yRef, double zRef, double xAngle, double yAngle, double zAngle)
					{
						base.Rotate_NoVirtual(xRef,yRef,zRef,xAngle,yAngle,zAngle);
					}
					public override void Scale(double xRef, double yRef, double zRef, double x, double y, double z)
					{
						base.Scale_NoVirtual(xRef,yRef,zRef,x,y,z);
					}
					public override void Projects(EarthView.World.Spatial.Geometry.Ispatialreference sr, IntPtr sevenParam, uint count)
					{
						base.Projects_NoVirtual(sr,sevenParam,count);
					}
					public override bool GetInteriorPoint(EarthView.World.Spatial.Geometry.Igeometry point)
					{
						return base.GetInteriorPoint_NoVirtual(point);
					}
					public static TriangleStrip FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						TriangleStrip obj = baseObj as  TriangleStrip;
						if (object.Equals(obj, null))
						{
							obj = new TriangleStrip(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CTriangleStrip");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class TriangleStripClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						TriangleStrip emptyInstance = new TriangleStrip(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
