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
			}
			namespace Display
			{
			}
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 线类型的地理对象扩展到三维类
			/// 管理面线型的地理对象扩展到三维类方法
			/// </summary>
			public class KmlFresnelSurface : EarthView.World.Geometry3D.MultiPolygon3DExtension
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				public KmlFresnelSurface(EarthView.World.Spatial.Kml.GeoObjectExtension ref_geo, EarthView.World.Graphic.SceneManager ref_scenemanager, string groupName) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_geo = new BasePtr(ref_geo);
					list.Add("ref_geo", valueref_geo.PtrVal);
					BasePtr valueref_scenemanager = new BasePtr(ref_scenemanager);
					list.Add("ref_scenemanager", valueref_scenemanager.PtrVal);
					BasePtr valuegroupName = new BasePtr(groupName);
					list.Add("groupName", valuegroupName.PtrVal);
					Create("CKmlFresnelSurfaceProxy", list);
					if (!"EarthView.World.Geometry3D.KmlFresnelSurface".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_NoVirtual(IntPtr pNativeObject);

				public new bool Load_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(IntPtr pNativeObject);

				public override bool Load()
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_NoVirtual(IntPtr pNativeObject);

				public new bool Update_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(IntPtr pNativeObject);

				public override bool Update()
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlFresnelSurface = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurface", new KmlFresnelSurfaceClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurfaceProxy", new KmlFresnelSurfaceClassFactory());

				public KmlFresnelSurface(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr(IntPtr pObject, getMesh_CallBack_CMeshPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject(IntPtr pObject, appendGeoObject_CallBack_ev_bool_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject(IntPtr pObject, removeGeoObject_CallBack_ev_bool_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void(IntPtr pObject, removeAllGeoObjects_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32(IntPtr pObject, getGeoObject_CallBack_CGeoObject_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64(IntPtr pObject, getGeoObjectCount_CallBack_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool(IntPtr pObject, getDrawWireBoundingBox_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool(IntPtr pObject, setDrawWireBoundingBox_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void(IntPtr pObject, build_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector(IntPtr pObject, build_CallBack_void_CSubMeshDataVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void(IntPtr pObject, render_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void(IntPtr pObject, derender_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool(IntPtr pObject, isRendering_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool(IntPtr pObject, setDenseInterpolation_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(IntPtr pObject, updateLabel_CallBack_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera(IntPtr pObject, updateByCamera_CallBack_void_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64(IntPtr pObject, getLabelVisibleDistance_CallBack_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64(IntPtr pObject, setLabelVisibleDistance_CallBack_void_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real(IntPtr pObject, setLabelProjOffsetMaxAngle_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real(IntPtr pObject, getLabelProjOffsetMaxAngle_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool(IntPtr pObject, setLabelProjOffsetEnable_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool(IntPtr pObject, getLabelProjOffsetEnable_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real(IntPtr pObject, setLabelProjOffset_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real(IntPtr pObject, getLabelProjOffset_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool(IntPtr pObject, updateMaterial_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector(IntPtr pObject, setVisibilityFilter_CallBack_ev_bool_ev_bool_IntVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject(IntPtr pObject, setObjectVisibility_CallBack_ev_bool_ev_bool_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode(IntPtr pObject, getNode_CallBack_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool(IntPtr pObject, isLoaded_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool(IntPtr pObject, isAttached_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(IntPtr pObject, load_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool(IntPtr pObject, unload_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode(IntPtr pObject, attachToNode_CallBack_ev_bool_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode(IntPtr pObject, detachFromNode_CallBack_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool(IntPtr pObject, attachToScene_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool(IntPtr pObject, detachFromScene_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData(IntPtr pObject, setUserData_CallBack_void_CFeatureUserData pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool(IntPtr pObject, setSelectable_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool(IntPtr pObject, getSelectable_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(IntPtr pObject, update_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer(IntPtr pObject, getLayer_CallBack_IGlobeLayer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset(IntPtr pObject, getDataset_CallBack_IDataset pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32(IntPtr pObject, getID_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4(IntPtr pObject, setMatrix_CallBack_void_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4(IntPtr pObject, getMatrix_CallBack_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr pObject, setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr pObject, getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getMesh_CallBack_CMeshPtr = EarthView_World_Geometry3D_CMultiPolygon3DExtension_getMesh_CMeshPtr_Function;
						GC.KeepAlive(m_getMesh_CallBack_CMeshPtr);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMesh_CMeshPtr(this.NativeObject, m_getMesh_CallBack_CMeshPtr);
						m_appendGeoObject_CallBack_ev_bool_CGeoObject = EarthView_World_Geometry3D_CMultiGeometry3DExtension_appendGeoObject_ev_bool_CGeoObject_Function;
						GC.KeepAlive(m_appendGeoObject_CallBack_ev_bool_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_appendGeoObject_ev_bool_CGeoObject(this.NativeObject, m_appendGeoObject_CallBack_ev_bool_CGeoObject);
						m_removeGeoObject_CallBack_ev_bool_CGeoObject = EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeGeoObject_ev_bool_CGeoObject_Function;
						GC.KeepAlive(m_removeGeoObject_CallBack_ev_bool_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeGeoObject_ev_bool_CGeoObject(this.NativeObject, m_removeGeoObject_CallBack_ev_bool_CGeoObject);
						m_removeAllGeoObjects_CallBack_void = EarthView_World_Geometry3D_CMultiGeometry3DExtension_removeAllGeoObjects_void_Function;
						GC.KeepAlive(m_removeAllGeoObjects_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_removeAllGeoObjects_void(this.NativeObject, m_removeAllGeoObjects_CallBack_void);
						m_getGeoObject_CallBack_CGeoObject_ev_uint32 = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObject_CGeoObject_ev_uint32_Function;
						GC.KeepAlive(m_getGeoObject_CallBack_CGeoObject_ev_uint32);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObject_CGeoObject_ev_uint32(this.NativeObject, m_getGeoObject_CallBack_CGeoObject_ev_uint32);
						m_getGeoObjectCount_CallBack_ev_uint64 = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getGeoObjectCount_ev_uint64_Function;
						GC.KeepAlive(m_getGeoObjectCount_CallBack_ev_uint64);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getGeoObjectCount_ev_uint64(this.NativeObject, m_getGeoObjectCount_CallBack_ev_uint64);
						m_getDrawWireBoundingBox_CallBack_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getDrawWireBoundingBox_ev_bool_Function;
						GC.KeepAlive(m_getDrawWireBoundingBox_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDrawWireBoundingBox_ev_bool(this.NativeObject, m_getDrawWireBoundingBox_CallBack_ev_bool);
						m_setDrawWireBoundingBox_CallBack_void_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDrawWireBoundingBox_void_ev_bool_Function;
						GC.KeepAlive(m_setDrawWireBoundingBox_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDrawWireBoundingBox_void_ev_bool(this.NativeObject, m_setDrawWireBoundingBox_CallBack_void_ev_bool);
						m_build_CallBack_void = EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_Function;
						GC.KeepAlive(m_build_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void(this.NativeObject, m_build_CallBack_void);
						m_build_CallBack_void_CSubMeshDataVector = EarthView_World_Geometry3D_CMultiGeometry3DExtension_build_void_CSubMeshDataVector_Function;
						GC.KeepAlive(m_build_CallBack_void_CSubMeshDataVector);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_build_void_CSubMeshDataVector(this.NativeObject, m_build_CallBack_void_CSubMeshDataVector);
						m_render_CallBack_void = EarthView_World_Geometry3D_CMultiGeometry3DExtension_render_void_Function;
						GC.KeepAlive(m_render_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_render_void(this.NativeObject, m_render_CallBack_void);
						m_derender_CallBack_void = EarthView_World_Geometry3D_CMultiGeometry3DExtension_derender_void_Function;
						GC.KeepAlive(m_derender_CallBack_void);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_derender_void(this.NativeObject, m_derender_CallBack_void);
						m_isRendering_CallBack_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_isRendering_ev_bool_Function;
						GC.KeepAlive(m_isRendering_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isRendering_ev_bool(this.NativeObject, m_isRendering_CallBack_ev_bool);
						m_setVisible_CallBack_void_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisible_void_ev_bool_Function;
						GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
						m_setDenseInterpolation_CallBack_void_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setDenseInterpolation_void_ev_bool_Function;
						GC.KeepAlive(m_setDenseInterpolation_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setDenseInterpolation_void_ev_bool(this.NativeObject, m_setDenseInterpolation_CallBack_void_ev_bool);
						m_updateLabel_CallBack_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera = EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_Function;
						GC.KeepAlive(m_updateLabel_CallBack_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateLabel_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera(this.NativeObject, m_updateLabel_CallBack_void_ev_bool_ev_bool_ev_bool_ev_bool_CCamera);
						m_updateByCamera_CallBack_void_CCamera = EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateByCamera_void_CCamera_Function;
						GC.KeepAlive(m_updateByCamera_CallBack_void_CCamera);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateByCamera_void_CCamera(this.NativeObject, m_updateByCamera_CallBack_void_CCamera);
						m_getLabelVisibleDistance_CallBack_ev_real64 = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelVisibleDistance_ev_real64_Function;
						GC.KeepAlive(m_getLabelVisibleDistance_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelVisibleDistance_ev_real64(this.NativeObject, m_getLabelVisibleDistance_CallBack_ev_real64);
						m_setLabelVisibleDistance_CallBack_void_ev_real64 = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelVisibleDistance_void_ev_real64_Function;
						GC.KeepAlive(m_setLabelVisibleDistance_CallBack_void_ev_real64);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelVisibleDistance_void_ev_real64(this.NativeObject, m_setLabelVisibleDistance_CallBack_void_ev_real64);
						m_setLabelProjOffsetMaxAngle_CallBack_void_Real = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetMaxAngle_void_Real_Function;
						GC.KeepAlive(m_setLabelProjOffsetMaxAngle_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetMaxAngle_void_Real(this.NativeObject, m_setLabelProjOffsetMaxAngle_CallBack_void_Real);
						m_getLabelProjOffsetMaxAngle_CallBack_Real = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetMaxAngle_Real_Function;
						GC.KeepAlive(m_getLabelProjOffsetMaxAngle_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetMaxAngle_Real(this.NativeObject, m_getLabelProjOffsetMaxAngle_CallBack_Real);
						m_setLabelProjOffsetEnable_CallBack_void_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffsetEnable_void_ev_bool_Function;
						GC.KeepAlive(m_setLabelProjOffsetEnable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffsetEnable_void_ev_bool(this.NativeObject, m_setLabelProjOffsetEnable_CallBack_void_ev_bool);
						m_getLabelProjOffsetEnable_CallBack_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffsetEnable_ev_bool_Function;
						GC.KeepAlive(m_getLabelProjOffsetEnable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffsetEnable_ev_bool(this.NativeObject, m_getLabelProjOffsetEnable_CallBack_ev_bool);
						m_setLabelProjOffset_CallBack_void_Real = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setLabelProjOffset_void_Real_Function;
						GC.KeepAlive(m_setLabelProjOffset_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setLabelProjOffset_void_Real(this.NativeObject, m_setLabelProjOffset_CallBack_void_Real);
						m_getLabelProjOffset_CallBack_Real = EarthView_World_Geometry3D_CMultiGeometry3DExtension_getLabelProjOffset_Real_Function;
						GC.KeepAlive(m_getLabelProjOffset_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLabelProjOffset_Real(this.NativeObject, m_getLabelProjOffset_CallBack_Real);
						m_updateMaterial_CallBack_ev_bool = EarthView_World_Geometry3D_CMultiGeometry3DExtension_updateMaterial_ev_bool_Function;
						GC.KeepAlive(m_updateMaterial_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_updateMaterial_ev_bool(this.NativeObject, m_updateMaterial_CallBack_ev_bool);
						m_setVisibilityFilter_CallBack_ev_bool_ev_bool_IntVector = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setVisibilityFilter_ev_bool_ev_bool_IntVector_Function;
						GC.KeepAlive(m_setVisibilityFilter_CallBack_ev_bool_ev_bool_IntVector);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setVisibilityFilter_ev_bool_ev_bool_IntVector(this.NativeObject, m_setVisibilityFilter_CallBack_ev_bool_ev_bool_IntVector);
						m_setObjectVisibility_CallBack_ev_bool_ev_bool_CGeoObject = EarthView_World_Geometry3D_CMultiGeometry3DExtension_setObjectVisibility_ev_bool_ev_bool_CGeoObject_Function;
						GC.KeepAlive(m_setObjectVisibility_CallBack_ev_bool_ev_bool_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setObjectVisibility_ev_bool_ev_bool_CGeoObject(this.NativeObject, m_setObjectVisibility_CallBack_ev_bool_ev_bool_CGeoObject);
						m_getNode_CallBack_CNode = EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Function;
						GC.KeepAlive(m_getNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getNode_CNode(this.NativeObject, m_getNode_CallBack_CNode);
						m_isLoaded_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Function;
						GC.KeepAlive(m_isLoaded_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isLoaded_ev_bool(this.NativeObject, m_isLoaded_CallBack_ev_bool);
						m_isAttached_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Function;
						GC.KeepAlive(m_isAttached_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_isAttached_ev_bool(this.NativeObject, m_isAttached_CallBack_ev_bool);
						m_load_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_load_ev_bool(this.NativeObject, m_load_CallBack_ev_bool);
						m_unload_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Function;
						GC.KeepAlive(m_unload_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_unload_ev_bool(this.NativeObject, m_unload_CallBack_ev_bool);
						m_attachToNode_CallBack_ev_bool_CNode = EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Function;
						GC.KeepAlive(m_attachToNode_CallBack_ev_bool_CNode);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToNode_ev_bool_CNode(this.NativeObject, m_attachToNode_CallBack_ev_bool_CNode);
						m_detachFromNode_CallBack_CNode = EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Function;
						GC.KeepAlive(m_detachFromNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromNode_CNode(this.NativeObject, m_detachFromNode_CallBack_CNode);
						m_attachToScene_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Function;
						GC.KeepAlive(m_attachToScene_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_attachToScene_ev_bool(this.NativeObject, m_attachToScene_CallBack_ev_bool);
						m_detachFromScene_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Function;
						GC.KeepAlive(m_detachFromScene_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_detachFromScene_ev_bool(this.NativeObject, m_detachFromScene_CallBack_ev_bool);
						m_setUserData_CallBack_void_CFeatureUserData = EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Function;
						GC.KeepAlive(m_setUserData_CallBack_void_CFeatureUserData);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setUserData_void_CFeatureUserData(this.NativeObject, m_setUserData_CallBack_void_CFeatureUserData);
						m_setSelectable_CallBack_void_ev_bool = EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Function;
						GC.KeepAlive(m_setSelectable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setSelectable_void_ev_bool(this.NativeObject, m_setSelectable_CallBack_void_ev_bool);
						m_getSelectable_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Function;
						GC.KeepAlive(m_getSelectable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getSelectable_ev_bool(this.NativeObject, m_getSelectable_CallBack_ev_bool);
						m_update_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Function;
						GC.KeepAlive(m_update_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_update_ev_bool(this.NativeObject, m_update_CallBack_ev_bool);
						m_getLayer_CallBack_IGlobeLayer = EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Function;
						GC.KeepAlive(m_getLayer_CallBack_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getLayer_IGlobeLayer(this.NativeObject, m_getLayer_CallBack_IGlobeLayer);
						m_getDataset_CallBack_IDataset = EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Function;
						GC.KeepAlive(m_getDataset_CallBack_IDataset);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getDataset_IDataset(this.NativeObject, m_getDataset_CallBack_IDataset);
						m_getID_CallBack_ev_uint32 = EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Function;
						GC.KeepAlive(m_getID_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getID_ev_uint32(this.NativeObject, m_getID_CallBack_ev_uint32);
						m_getName_CallBack_EVString = EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_setMatrix_CallBack_void_CMatrix4 = EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Function;
						GC.KeepAlive(m_setMatrix_CallBack_void_CMatrix4);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setMatrix_void_CMatrix4(this.NativeObject, m_setMatrix_CallBack_void_CMatrix4);
						m_getMatrix_CallBack_CMatrix4 = EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getMatrix_CMatrix4(this.NativeObject, m_getMatrix_CallBack_CMatrix4);
						m_setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion = EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.NativeObject, m_setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						m_getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion = EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurface_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.NativeObject, m_getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
					}
				}
				public override EarthView.World.Graphic.MeshPtr GetMesh()
				{
					return base.GetMesh_NoVirtual();
				}
				public override bool AppendGeoObject(EarthView.World.Spatial.GeoObject ref_geoObject)
				{
					return base.AppendGeoObject_NoVirtual(ref_geoObject);
				}
				public override bool RemoveGeoObject(EarthView.World.Spatial.GeoObject geoObject)
				{
					return base.RemoveGeoObject_NoVirtual(geoObject);
				}
				public override void RemoveAllGeoObjects()
				{
					base.RemoveAllGeoObjects_NoVirtual();
				}
				public override EarthView.World.Spatial.GeoObject GetGeoObject(uint index)
				{
					return base.GetGeoObject_NoVirtual(index);
				}
				public override ulong GetGeoObjectCount()
				{
					return base.GetGeoObjectCount_NoVirtual();
				}
				public override bool GetDrawWireBoundingBox()
				{
					return base.GetDrawWireBoundingBox_NoVirtual();
				}
				public override void SetDrawWireBoundingBox(bool isdraw)
				{
					base.SetDrawWireBoundingBox_NoVirtual(isdraw);
				}
				public override void Build()
				{
					base.Build_NoVirtual();
				}
				public override void Build(ref EarthView.World.Geometry3D.SubMeshDataVector subMeshData)
				{
					base.Build_NoVirtual(ref subMeshData);
				}
				public override void Render()
				{
					base.Render_NoVirtual();
				}
				public override void Derender()
				{
					base.Derender_NoVirtual();
				}
				public override bool IsRendering()
				{
					return base.IsRendering_NoVirtual();
				}
				public override void SetVisible(bool visible)
				{
					base.SetVisible_NoVirtual(visible);
				}
				public override void SetDenseInterpolation(bool dense)
				{
					base.SetDenseInterpolation_NoVirtual(dense);
				}
				public override void UpdateLabel(bool resetTextStyle, bool derenderTxt, bool reCreate, bool attachLabel, EarthView.World.Graphic.Camera pCamera)
				{
					base.UpdateLabel_NoVirtual(resetTextStyle,derenderTxt,reCreate,attachLabel,pCamera);
				}
				public override void UpdateByCamera(EarthView.World.Graphic.Camera pCamera)
				{
					base.UpdateByCamera_NoVirtual(pCamera);
				}
				public override double GetLabelVisibleDistance()
				{
					return base.GetLabelVisibleDistance_NoVirtual();
				}
				public override void SetLabelVisibleDistance(double dis)
				{
					base.SetLabelVisibleDistance_NoVirtual(dis);
				}
				public override void SetLabelProjOffsetMaxAngle(double angle)
				{
					base.SetLabelProjOffsetMaxAngle_NoVirtual(angle);
				}
				public override double GetLabelProjOffsetMaxAngle()
				{
					return base.GetLabelProjOffsetMaxAngle_NoVirtual();
				}
				public override void SetLabelProjOffsetEnable(bool useProjOffset)
				{
					base.SetLabelProjOffsetEnable_NoVirtual(useProjOffset);
				}
				public override bool GetLabelProjOffsetEnable()
				{
					return base.GetLabelProjOffsetEnable_NoVirtual();
				}
				public override void SetLabelProjOffset(double offset)
				{
					base.SetLabelProjOffset_NoVirtual(offset);
				}
				public override double GetLabelProjOffset()
				{
					return base.GetLabelProjOffset_NoVirtual();
				}
				public override bool UpdateMaterial()
				{
					return base.UpdateMaterial_NoVirtual();
				}
				public override bool SetVisibilityFilter(bool visible, EarthView.World.Core.IntVector ids)
				{
					return base.SetVisibilityFilter_NoVirtual(visible,ids);
				}
				public override bool SetObjectVisibility(bool visible, EarthView.World.Spatial.GeoObject ref_geoObject)
				{
					return base.SetObjectVisibility_NoVirtual(visible,ref_geoObject);
				}
				public override EarthView.World.Graphic.Node GetNode()
				{
					return base.GetNode_NoVirtual();
				}
				public override bool IsLoaded()
				{
					return base.IsLoaded_NoVirtual();
				}
				public override bool IsAttached()
				{
					return base.IsAttached_NoVirtual();
				}
				public override bool Unload()
				{
					return base.Unload_NoVirtual();
				}
				public override bool AttachToNode(EarthView.World.Graphic.Node n)
				{
					return base.AttachToNode_NoVirtual(n);
				}
				public override EarthView.World.Graphic.Node DetachFromNode()
				{
					return base.DetachFromNode_NoVirtual();
				}
				public override bool AttachToScene()
				{
					return base.AttachToScene_NoVirtual();
				}
				public override bool DetachFromScene()
				{
					return base.DetachFromScene_NoVirtual();
				}
				public override void SetUserData(ref EarthView.World.Spatial3D.FeatureUserData userData)
				{
					base.SetUserData_NoVirtual(ref userData);
				}
				public override void SetSelectable(bool selectable)
				{
					base.SetSelectable_NoVirtual(selectable);
				}
				public override bool GetSelectable()
				{
					return base.GetSelectable_NoVirtual();
				}
				public override EarthView.World.Spatial3D.Atlas.Iglobelayer GetLayer()
				{
					return base.GetLayer_NoVirtual();
				}
				public override EarthView.World.Spatial.GeoDataset.Idataset GetDataset()
				{
					return base.GetDataset_NoVirtual();
				}
				public override uint GetID()
				{
					return base.GetID_NoVirtual();
				}
				public override string GetName()
				{
					return base.GetName_NoVirtual();
				}
				public override void SetMatrix(EarthView.World.Spatial.Math.Matrix4 m)
				{
					base.SetMatrix_NoVirtual(m);
				}
				public override EarthView.World.Spatial.Math.Matrix4 GetMatrix()
				{
					return base.GetMatrix_NoVirtual();
				}
				public override void SetPosition(double latitude, double longitude, double altitude, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Quaternion qua)
				{
					base.SetPosition_NoVirtual(latitude,longitude,altitude,scale,qua);
				}
				public override void GetPosition(ref double latitude, ref double longitude, ref double altitude, ref  EarthView.World.Spatial.Math.Vector3 scale, ref  EarthView.World.Spatial.Math.Quaternion qua)
				{
					base.GetPosition_NoVirtual(ref latitude,ref longitude,ref altitude,ref scale,ref qua);
				}
				public static KmlFresnelSurface FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					KmlFresnelSurface obj = baseObj as  KmlFresnelSurface;
					if (object.Equals(obj, null))
					{
						obj = new KmlFresnelSurface(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CKmlFresnelSurface");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class KmlFresnelSurfaceClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					KmlFresnelSurface emptyInstance = new KmlFresnelSurface(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class KmlFresnelSurfaceFactory : EarthView.World.Spatial3D.Atlas.Igeometry3dfactory
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				public KmlFresnelSurfaceFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CKmlFresnelSurfaceFactoryProxy", null);
					if (!"EarthView.World.Geometry3D.KmlFresnelSurfaceFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern ushort EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				public new ushort GetFactoryType_NoVirtual()
				{
					ushort ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16_NoVirtual(this.NativeObject);
					
					return ret;
					
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
				private static extern ushort EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				public override ushort GetFactoryType()
				{
					ushort ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(this.NativeObject);
					
					return ret;
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr geoObj, IntPtr scenemanager);

				public new EarthView.World.Geometry3D.VisibleObjects CreateRenderable_NoVirtual(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Graphic.SceneManager scenemanager)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(scenemanager, null) ? IntPtr.Zero : scenemanager.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr pNativeObject, IntPtr geoObj, IntPtr scenemanager);

				public override EarthView.World.Geometry3D.VisibleObjects CreateRenderable(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Graphic.SceneManager scenemanager)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(scenemanager, null) ? IntPtr.Zero : scenemanager.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visitObj);

				public new void DestoryRenderable_NoVirtual(EarthView.World.Geometry3D.VisibleObject visitObj)
				{
					EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visitObj, null) ? IntPtr.Zero : visitObj.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(IntPtr pNativeObject, IntPtr visitObj);

				public override void DestoryRenderable(EarthView.World.Geometry3D.VisibleObject visitObj)
				{
					EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(this.NativeObject, object.Equals(visitObj, null) ? IntPtr.Zero : visitObj.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, IntPtr ref_geoObject);

				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				public new bool AppendGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject ref_geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(ref_geoObject, null) ? IntPtr.Zero : ref_geoObject.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pNativeObject, IntPtr visibleObj, IntPtr ref_geoObject);

				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				public override bool AppendGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject ref_geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(ref_geoObject, null) ? IntPtr.Zero : ref_geoObject.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, IntPtr geoObject);

				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				public new bool RemoveGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(geoObject, null) ? IntPtr.Zero : geoObject.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pNativeObject, IntPtr visibleObj, IntPtr geoObject);

				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				public override bool RemoveGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(geoObject, null) ? IntPtr.Zero : geoObject.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void RemoveAllGeoObjects_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void RemoveAllGeoObjects(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, uint index);

				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				public new EarthView.World.Spatial.GeoObject GetGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, uint index)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, index);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(IntPtr pNativeObject, IntPtr visibleObj, uint index);

				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				public override EarthView.World.Spatial.GeoObject GetGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, uint index)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, index);
					
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
				private static extern ulong EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				public new ulong GetGeoObjectCount_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					ulong ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
					return ret;
					
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
				private static extern ulong EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				public override ulong GetGeoObjectCount(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					ulong ret=EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlFresnelSurfaceFactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory", new KmlFresnelSurfaceFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurfaceFactoryProxy", new KmlFresnelSurfaceFactoryClassFactory());

				public KmlFresnelSurfaceFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(IntPtr pObject, getFactoryType_CallBack_ev_uint16 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr pObject, createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(IntPtr pObject, destoryRenderable_CallBack_void_CVisibleObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pObject, appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pObject, removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(IntPtr pObject, removeAllGeoObjects_CallBack_void_CVisibleObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(IntPtr pObject, getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(IntPtr pObject, getGeoObjectCount_CallBack_ev_uint64_CVisibleObject pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFactoryType_CallBack_ev_uint16 = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Function;
						GC.KeepAlive(m_getFactoryType_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getFactoryType_ev_uint16(this.NativeObject, m_getFactoryType_CallBack_ev_uint16);
						m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Function;
						GC.KeepAlive(m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(this.NativeObject, m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager);
						m_destoryRenderable_CallBack_void_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Function;
						GC.KeepAlive(m_destoryRenderable_CallBack_void_CVisibleObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_destoryRenderable_void_CVisibleObject(this.NativeObject, m_destoryRenderable_CallBack_void_CVisibleObject);
						m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Function;
						GC.KeepAlive(m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Function;
						GC.KeepAlive(m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						m_removeAllGeoObjects_CallBack_void_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Function;
						GC.KeepAlive(m_removeAllGeoObjects_CallBack_void_CVisibleObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_removeAllGeoObjects_void_CVisibleObject(this.NativeObject, m_removeAllGeoObjects_CallBack_void_CVisibleObject);
						m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Function;
						GC.KeepAlive(m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(this.NativeObject, m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32);
						m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Function;
						GC.KeepAlive(m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlFresnelSurfaceFactory_getGeoObjectCount_ev_uint64_CVisibleObject(this.NativeObject, m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject);
					}
				}
				public static KmlFresnelSurfaceFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					KmlFresnelSurfaceFactory obj = baseObj as  KmlFresnelSurfaceFactory;
					if (object.Equals(obj, null))
					{
						obj = new KmlFresnelSurfaceFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CKmlFresnelSurfaceFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class KmlFresnelSurfaceFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					KmlFresnelSurfaceFactory emptyInstance = new KmlFresnelSurfaceFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
