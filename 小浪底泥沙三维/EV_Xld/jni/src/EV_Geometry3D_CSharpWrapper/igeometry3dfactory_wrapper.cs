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
			namespace Atlas
			{
				///
				//// <summary>
				//// 三维类工厂
				//// 管理三维对象的创建和销毁
				//// </summary>
				public class Igeometry3dfactory : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public Igeometry3dfactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IGeometry3DFactoryProxy", null);
						if (!"EarthView.World.Spatial3D.Atlas.Igeometry3dfactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate ushort getFactoryType_CallBack_ev_uint16();

					protected getFactoryType_CallBack_ev_uint16 m_getFactoryType_CallBack_ev_uint16;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <returns>工厂类型</returns>
					public virtual ushort GetFactoryType_NoVirtual()
					{
						ushort ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  ushort EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Function()
					{
						ushort csret=GetFactoryType();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ushort EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(IntPtr pNativeObject);

					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <returns>工厂类型</returns>
					public virtual ushort GetFactoryType()
					{
						ushort ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr geoObj, IntPtr scenemanager);

					protected createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr geoObj, IntPtr scenemanager);

					public virtual EarthView.World.Geometry3D.VisibleObjects CreateRenderable_NoVirtual(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Graphic.SceneManager scenemanager)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(scenemanager, null) ? IntPtr.Zero : scenemanager.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Geometry3D.VisibleObjects csObj = new EarthView.World.Geometry3D.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "VisibleObjects");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObjects;
							csObj.BindNativeObject(__ptr, "VisibleObjects");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Function(IntPtr geoObj, IntPtr scenemanager)
					{
						EarthView.World.Spatial.Kml.GeoObjectExtension csobj_geoObj = new EarthView.World.Spatial.Kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_geoObj.BindNativeObject(geoObj,"CGeoObjectExtension");
						csobj_geoObj.Delegate = true;
						IClassFactory csobj_geoObjClassFactory = GlobalClassFactoryMap.Get(csobj_geoObj.GetCppInstanceTypeName());
						if (csobj_geoObjClassFactory != null)
						{
							csobj_geoObj.Delegate = true;
							csobj_geoObj = csobj_geoObjClassFactory.Create() as EarthView.World.Spatial.Kml.GeoObjectExtension;
							csobj_geoObj.BindNativeObject(geoObj, "CGeoObjectExtension");
							csobj_geoObj.Delegate = true;
						}
						EarthView.World.Graphic.SceneManager csobj_scenemanager = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_scenemanager.BindNativeObject(scenemanager,"CSceneManager");
						csobj_scenemanager.Delegate = true;
						IClassFactory csobj_scenemanagerClassFactory = GlobalClassFactoryMap.Get(csobj_scenemanager.GetCppInstanceTypeName());
						if (csobj_scenemanagerClassFactory != null)
						{
							csobj_scenemanager.Delegate = true;
							csobj_scenemanager = csobj_scenemanagerClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csobj_scenemanager.BindNativeObject(scenemanager, "CSceneManager");
							csobj_scenemanager.Delegate = true;
						}
						
						EarthView.World.Geometry3D.VisibleObjects csret=CreateRenderable(csobj_geoObj, csobj_scenemanager);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr pNativeObject, IntPtr geoObj, IntPtr scenemanager);

					public virtual EarthView.World.Geometry3D.VisibleObjects CreateRenderable(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Graphic.SceneManager scenemanager)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(scenemanager, null) ? IntPtr.Zero : scenemanager.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Geometry3D.VisibleObjects csObj = new EarthView.World.Geometry3D.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "VisibleObjects");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObjects;
							csObj.BindNativeObject(__ptr, "VisibleObjects");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destoryRenderable_CallBack_void_CVisibleObject(IntPtr visitObj);

					protected destoryRenderable_CallBack_void_CVisibleObject m_destoryRenderable_CallBack_void_CVisibleObject;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visitObj);

					public virtual void DestoryRenderable_NoVirtual(EarthView.World.Geometry3D.VisibleObject visitObj)
					{
						EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visitObj, null) ? IntPtr.Zero : visitObj.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Function(IntPtr visitObj)
					{
						EarthView.World.Geometry3D.VisibleObject csobj_visitObj = new EarthView.World.Geometry3D.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_visitObj.BindNativeObject(visitObj,"CVisibleObject");
						csobj_visitObj.Delegate = true;
						IClassFactory csobj_visitObjClassFactory = GlobalClassFactoryMap.Get(csobj_visitObj.GetCppInstanceTypeName());
						if (csobj_visitObjClassFactory != null)
						{
							csobj_visitObj.Delegate = true;
							csobj_visitObj = csobj_visitObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObject;
							csobj_visitObj.BindNativeObject(visitObj, "CVisibleObject");
							csobj_visitObj.Delegate = true;
						}
						
						DestoryRenderable(csobj_visitObj);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(IntPtr pNativeObject, IntPtr visitObj);

					public virtual void DestoryRenderable(EarthView.World.Geometry3D.VisibleObject visitObj)
					{
						EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(this.NativeObject, object.Equals(visitObj, null) ? IntPtr.Zero : visitObj.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject(IntPtr visibleObj, IntPtr ref_geoObject);

					protected appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, IntPtr ref_geoObject);

					/// <summary>
					/// 添加一个要素
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					public virtual bool AppendGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject ref_geoObject)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(ref_geoObject, null) ? IntPtr.Zero : ref_geoObject.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Function(IntPtr visibleObj, IntPtr ref_geoObject)
					{
						EarthView.World.Geometry3D.VisibleObject csobj_visibleObj = new EarthView.World.Geometry3D.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_visibleObj.BindNativeObject(visibleObj,"CVisibleObject");
						csobj_visibleObj.Delegate = true;
						IClassFactory csobj_visibleObjClassFactory = GlobalClassFactoryMap.Get(csobj_visibleObj.GetCppInstanceTypeName());
						if (csobj_visibleObjClassFactory != null)
						{
							csobj_visibleObj.Delegate = true;
							csobj_visibleObj = csobj_visibleObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObject;
							csobj_visibleObj.BindNativeObject(visibleObj, "CVisibleObject");
							csobj_visibleObj.Delegate = true;
						}
						EarthView.World.Spatial.GeoObject csobj_ref_geoObject = new EarthView.World.Spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_geoObject.BindNativeObject(ref_geoObject,"CGeoObject");
						csobj_ref_geoObject.Delegate = true;
						IClassFactory csobj_ref_geoObjectClassFactory = GlobalClassFactoryMap.Get(csobj_ref_geoObject.GetCppInstanceTypeName());
						if (csobj_ref_geoObjectClassFactory != null)
						{
							csobj_ref_geoObject.Delegate = true;
							csobj_ref_geoObject = csobj_ref_geoObjectClassFactory.Create() as EarthView.World.Spatial.GeoObject;
							csobj_ref_geoObject.BindNativeObject(ref_geoObject, "CGeoObject");
							csobj_ref_geoObject.Delegate = true;
						}
						
						bool csret=AppendGeoObject(csobj_visibleObj, csobj_ref_geoObject);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pNativeObject, IntPtr visibleObj, IntPtr ref_geoObject);

					/// <summary>
					/// 添加一个要素
					/// </summary>
					/// <param name="layer">二维图层</param>
					/// <returns></returns>
					public virtual bool AppendGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject ref_geoObject)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(ref_geoObject, null) ? IntPtr.Zero : ref_geoObject.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject(IntPtr visibleObj, IntPtr geoObject);

					protected removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, IntPtr geoObject);

					/// <summary>
					/// 删除二维图形
					/// </summary>
					/// <param name="geometry">二维图形</param>
					/// <returns></returns>
					public virtual bool RemoveGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject geoObject)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(geoObject, null) ? IntPtr.Zero : geoObject.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Function(IntPtr visibleObj, IntPtr geoObject)
					{
						EarthView.World.Geometry3D.VisibleObject csobj_visibleObj = new EarthView.World.Geometry3D.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_visibleObj.BindNativeObject(visibleObj,"CVisibleObject");
						csobj_visibleObj.Delegate = true;
						IClassFactory csobj_visibleObjClassFactory = GlobalClassFactoryMap.Get(csobj_visibleObj.GetCppInstanceTypeName());
						if (csobj_visibleObjClassFactory != null)
						{
							csobj_visibleObj.Delegate = true;
							csobj_visibleObj = csobj_visibleObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObject;
							csobj_visibleObj.BindNativeObject(visibleObj, "CVisibleObject");
							csobj_visibleObj.Delegate = true;
						}
						EarthView.World.Spatial.GeoObject csobj_geoObject = new EarthView.World.Spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_geoObject.BindNativeObject(geoObject,"CGeoObject");
						csobj_geoObject.Delegate = true;
						IClassFactory csobj_geoObjectClassFactory = GlobalClassFactoryMap.Get(csobj_geoObject.GetCppInstanceTypeName());
						if (csobj_geoObjectClassFactory != null)
						{
							csobj_geoObject.Delegate = true;
							csobj_geoObject = csobj_geoObjectClassFactory.Create() as EarthView.World.Spatial.GeoObject;
							csobj_geoObject.BindNativeObject(geoObject, "CGeoObject");
							csobj_geoObject.Delegate = true;
						}
						
						bool csret=RemoveGeoObject(csobj_visibleObj, csobj_geoObject);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pNativeObject, IntPtr visibleObj, IntPtr geoObject);

					/// <summary>
					/// 删除二维图形
					/// </summary>
					/// <param name="geometry">二维图形</param>
					/// <returns></returns>
					public virtual bool RemoveGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject geoObject)
					{
						byte ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(geoObject, null) ? IntPtr.Zero : geoObject.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void removeAllGeoObjects_CallBack_void_CVisibleObject(IntPtr visibleObj);

					protected removeAllGeoObjects_CallBack_void_CVisibleObject m_removeAllGeoObjects_CallBack_void_CVisibleObject;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj);

					/// <summary>
					/// 删除所有二维图形
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void RemoveAllGeoObjects_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj)
					{
						EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Function(IntPtr visibleObj)
					{
						EarthView.World.Geometry3D.VisibleObject csobj_visibleObj = new EarthView.World.Geometry3D.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_visibleObj.BindNativeObject(visibleObj,"CVisibleObject");
						csobj_visibleObj.Delegate = true;
						IClassFactory csobj_visibleObjClassFactory = GlobalClassFactoryMap.Get(csobj_visibleObj.GetCppInstanceTypeName());
						if (csobj_visibleObjClassFactory != null)
						{
							csobj_visibleObj.Delegate = true;
							csobj_visibleObj = csobj_visibleObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObject;
							csobj_visibleObj.BindNativeObject(visibleObj, "CVisibleObject");
							csobj_visibleObj.Delegate = true;
						}
						
						RemoveAllGeoObjects(csobj_visibleObj);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(IntPtr pNativeObject, IntPtr visibleObj);

					/// <summary>
					/// 删除所有二维图形
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void RemoveAllGeoObjects(EarthView.World.Geometry3D.VisibleObject visibleObj)
					{
						EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32(IntPtr visibleObj, uint index);

					protected getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, uint index);

					/// <summary>
					/// 获得二维图形指针
					/// </summary>
					/// <param name="index">二维图形索引</param>
					/// <returns>二维图形</returns>
					public virtual EarthView.World.Spatial.GeoObject GetGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoObject csObj = new EarthView.World.Spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGeoObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoObject;
							csObj.BindNativeObject(__ptr, "CGeoObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Function(IntPtr visibleObj, uint index)
					{
						EarthView.World.Geometry3D.VisibleObject csobj_visibleObj = new EarthView.World.Geometry3D.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_visibleObj.BindNativeObject(visibleObj,"CVisibleObject");
						csobj_visibleObj.Delegate = true;
						IClassFactory csobj_visibleObjClassFactory = GlobalClassFactoryMap.Get(csobj_visibleObj.GetCppInstanceTypeName());
						if (csobj_visibleObjClassFactory != null)
						{
							csobj_visibleObj.Delegate = true;
							csobj_visibleObj = csobj_visibleObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObject;
							csobj_visibleObj.BindNativeObject(visibleObj, "CVisibleObject");
							csobj_visibleObj.Delegate = true;
						}
						
						EarthView.World.Spatial.GeoObject csret=GetGeoObject(csobj_visibleObj, index);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(IntPtr pNativeObject, IntPtr visibleObj, uint index);

					/// <summary>
					/// 获得二维图形指针
					/// </summary>
					/// <param name="index">二维图形索引</param>
					/// <returns>二维图形</returns>
					public virtual EarthView.World.Spatial.GeoObject GetGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoObject csObj = new EarthView.World.Spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGeoObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoObject;
							csObj.BindNativeObject(__ptr, "CGeoObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate ulong getGeoObjectCount_CallBack_ev_uint64_CVisibleObject(IntPtr visibleObj);

					protected getGeoObjectCount_CallBack_ev_uint64_CVisibleObject m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj);

					/// <summary>
					/// 获得三维实体数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>三维实体数量</returns>
					public virtual ulong GetGeoObjectCount_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj)
					{
						ulong ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
						
						return ret;
						
					}

					protected  ulong EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Function(IntPtr visibleObj)
					{
						EarthView.World.Geometry3D.VisibleObject csobj_visibleObj = new EarthView.World.Geometry3D.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_visibleObj.BindNativeObject(visibleObj,"CVisibleObject");
						csobj_visibleObj.Delegate = true;
						IClassFactory csobj_visibleObjClassFactory = GlobalClassFactoryMap.Get(csobj_visibleObj.GetCppInstanceTypeName());
						if (csobj_visibleObjClassFactory != null)
						{
							csobj_visibleObj.Delegate = true;
							csobj_visibleObj = csobj_visibleObjClassFactory.Create() as EarthView.World.Geometry3D.VisibleObject;
							csobj_visibleObj.BindNativeObject(visibleObj, "CVisibleObject");
							csobj_visibleObj.Delegate = true;
						}
						
						ulong csret=GetGeoObjectCount(csobj_visibleObj);
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern ulong EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(IntPtr pNativeObject, IntPtr visibleObj);

					/// <summary>
					/// 获得三维实体数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>三维实体数量</returns>
					public virtual ulong GetGeoObjectCount(EarthView.World.Geometry3D.VisibleObject visibleObj)
					{
						ulong ret=EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_d.so");
							private static bool csbLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

						#else 
							private static bool bLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_d.dll");
							private static bool csbLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#elif Linux 
							private static bool bLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D.so");
							private static bool csbLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_CSharp.so");

						#else 
							private static bool bLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D.dll");
							private static bool csbLoadIgeometry3dfactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IGeometry3DFactory", new Igeometry3dfactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IGeometry3DFactoryProxy", new Igeometry3dfactoryClassFactory());

					public Igeometry3dfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(IntPtr pObject, getFactoryType_CallBack_ev_uint16 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr pObject, createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(IntPtr pObject, destoryRenderable_CallBack_void_CVisibleObject pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pObject, appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pObject, removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(IntPtr pObject, removeAllGeoObjects_CallBack_void_CVisibleObject pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(IntPtr pObject, getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Geometry3D_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(IntPtr pObject, getGeoObjectCount_CallBack_ev_uint64_CVisibleObject pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getFactoryType_CallBack_ev_uint16 = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Function;
							GC.KeepAlive(m_getFactoryType_CallBack_ev_uint16);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16(this.NativeObject, m_getFactoryType_CallBack_ev_uint16);
							m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Function;
							GC.KeepAlive(m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(this.NativeObject, m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager);
							m_destoryRenderable_CallBack_void_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Function;
							GC.KeepAlive(m_destoryRenderable_CallBack_void_CVisibleObject);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject(this.NativeObject, m_destoryRenderable_CallBack_void_CVisibleObject);
							m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Function;
							GC.KeepAlive(m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
							m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Function;
							GC.KeepAlive(m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
							m_removeAllGeoObjects_CallBack_void_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Function;
							GC.KeepAlive(m_removeAllGeoObjects_CallBack_void_CVisibleObject);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject(this.NativeObject, m_removeAllGeoObjects_CallBack_void_CVisibleObject);
							m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Function;
							GC.KeepAlive(m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(this.NativeObject, m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32);
							m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Function;
							GC.KeepAlive(m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject);
							EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject(this.NativeObject, m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject);
						}
					}
					public static Igeometry3dfactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Igeometry3dfactory obj = baseObj as  Igeometry3dfactory;
						if (object.Equals(obj, null))
						{
							obj = new Igeometry3dfactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IGeometry3DFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Igeometry3dfactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Igeometry3dfactory emptyInstance = new Igeometry3dfactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
