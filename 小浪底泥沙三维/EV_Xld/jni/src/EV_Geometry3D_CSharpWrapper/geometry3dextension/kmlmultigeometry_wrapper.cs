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
		namespace Geometry3D
		{
		}
		namespace Spatial
		{
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
			public class KmlMultigeometry : EarthView.World.Geometry3D.VisibleObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				public KmlMultigeometry(EarthView.World.Spatial.Kml.GeoObjectExtension ref_geo, EarthView.World.Graphic.SceneManager ref_scenemanager, string groupName) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_geo = new BasePtr(ref_geo);
					list.Add("ref_geo", valueref_geo.PtrVal);
					BasePtr valueref_scenemanager = new BasePtr(ref_scenemanager);
					list.Add("ref_scenemanager", valueref_scenemanager.PtrVal);
					BasePtr valuegroupName = new BasePtr(groupName);
					list.Add("groupName", valuegroupName.PtrVal);
					Create("CKmlMultigeometryProxy", list);
					if (!"EarthView.World.Geometry3D.KmlMultigeometry".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometry_setSelectable_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte selectable);

				public new void SetSelectable_NoVirtual(bool selectable)
				{
					EarthView_World_Geometry3D_CKmlMultigeometry_setSelectable_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(selectable));
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometry_setSelectable_void_ev_bool(IntPtr pNativeObject, byte selectable);

				public override void SetSelectable(bool selectable)
				{
					EarthView_World_Geometry3D_CKmlMultigeometry_setSelectable_void_ev_bool(this.NativeObject, Convert.ToByte(selectable));
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometry_setUserData_void_CFeatureUserData_NoVirtual(IntPtr pNativeObject, IntPtr userData);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				public new void SetUserData_NoVirtual(ref EarthView.World.Spatial3D.FeatureUserData userData)
				{
					EarthView_World_Geometry3D_CKmlMultigeometry_setUserData_void_CFeatureUserData_NoVirtual(this.NativeObject, object.Equals(userData, null) ? IntPtr.Zero : userData.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometry_setUserData_void_CFeatureUserData(IntPtr pNativeObject, IntPtr userData);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				public override void SetUserData(ref EarthView.World.Spatial3D.FeatureUserData userData)
				{
					EarthView_World_Geometry3D_CKmlMultigeometry_setUserData_void_CFeatureUserData(this.NativeObject, object.Equals(userData, null) ? IntPtr.Zero : userData.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_isLoaded_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public new bool IsLoaded_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_isLoaded_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_isLoaded_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public override bool IsLoaded()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_isLoaded_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_isAttached_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public new bool IsAttached_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_isAttached_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_isAttached_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public override bool IsAttached()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_isAttached_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_load_ev_bool_NoVirtual(IntPtr pNativeObject);

				public new bool Load_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_load_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_load_ev_bool(IntPtr pNativeObject);

				public override bool Load()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_load_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_unload_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public new bool Unload_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_unload_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_unload_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public override bool Unload()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_unload_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_attachToScene_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public new bool AttachToScene_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_attachToScene_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_attachToScene_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public override bool AttachToScene()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_attachToScene_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_detachFromScene_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public new bool DetachFromScene_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_detachFromScene_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_detachFromScene_ev_bool(IntPtr pNativeObject);

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				public override bool DetachFromScene()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_detachFromScene_ev_bool(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_update_ev_bool_NoVirtual(IntPtr pNativeObject);

				public new bool Update_NoVirtual()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_update_ev_bool_NoVirtual(this.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometry_update_ev_bool(IntPtr pNativeObject);

				public override bool Update()
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometry_update_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlMultigeometry = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometry", new KmlMultigeometryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometryProxy", new KmlMultigeometryClassFactory());

				public KmlMultigeometry(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getNode_CNode(IntPtr pObject, getNode_CallBack_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_isLoaded_ev_bool(IntPtr pObject, isLoaded_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_isAttached_ev_bool(IntPtr pObject, isAttached_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_load_ev_bool(IntPtr pObject, load_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_unload_ev_bool(IntPtr pObject, unload_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_attachToNode_ev_bool_CNode(IntPtr pObject, attachToNode_CallBack_ev_bool_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_detachFromNode_CNode(IntPtr pObject, detachFromNode_CallBack_CNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_attachToScene_ev_bool(IntPtr pObject, attachToScene_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_detachFromScene_ev_bool(IntPtr pObject, detachFromScene_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setUserData_void_CFeatureUserData(IntPtr pObject, setUserData_CallBack_void_CFeatureUserData pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setSelectable_void_ev_bool(IntPtr pObject, setSelectable_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getSelectable_ev_bool(IntPtr pObject, getSelectable_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_update_ev_bool(IntPtr pObject, update_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getLayer_IGlobeLayer(IntPtr pObject, getLayer_CallBack_IGlobeLayer pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getDataset_IDataset(IntPtr pObject, getDataset_CallBack_IDataset pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getID_ev_uint32(IntPtr pObject, getID_CallBack_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setMatrix_void_CMatrix4(IntPtr pObject, setMatrix_CallBack_void_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getMatrix_CMatrix4(IntPtr pObject, getMatrix_CallBack_CMatrix4 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr pObject, setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr pObject, getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getNode_CallBack_CNode = EarthView_World_Geometry3D_CVisibleObject_getNode_CNode_Function;
						GC.KeepAlive(m_getNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getNode_CNode(this.NativeObject, m_getNode_CallBack_CNode);
						m_isLoaded_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_isLoaded_ev_bool_Function;
						GC.KeepAlive(m_isLoaded_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_isLoaded_ev_bool(this.NativeObject, m_isLoaded_CallBack_ev_bool);
						m_isAttached_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_isAttached_ev_bool_Function;
						GC.KeepAlive(m_isAttached_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_isAttached_ev_bool(this.NativeObject, m_isAttached_CallBack_ev_bool);
						m_load_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_load_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_load_ev_bool(this.NativeObject, m_load_CallBack_ev_bool);
						m_unload_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_unload_ev_bool_Function;
						GC.KeepAlive(m_unload_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_unload_ev_bool(this.NativeObject, m_unload_CallBack_ev_bool);
						m_attachToNode_CallBack_ev_bool_CNode = EarthView_World_Geometry3D_CVisibleObject_attachToNode_ev_bool_CNode_Function;
						GC.KeepAlive(m_attachToNode_CallBack_ev_bool_CNode);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_attachToNode_ev_bool_CNode(this.NativeObject, m_attachToNode_CallBack_ev_bool_CNode);
						m_detachFromNode_CallBack_CNode = EarthView_World_Geometry3D_CVisibleObject_detachFromNode_CNode_Function;
						GC.KeepAlive(m_detachFromNode_CallBack_CNode);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_detachFromNode_CNode(this.NativeObject, m_detachFromNode_CallBack_CNode);
						m_attachToScene_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_attachToScene_ev_bool_Function;
						GC.KeepAlive(m_attachToScene_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_attachToScene_ev_bool(this.NativeObject, m_attachToScene_CallBack_ev_bool);
						m_detachFromScene_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_detachFromScene_ev_bool_Function;
						GC.KeepAlive(m_detachFromScene_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_detachFromScene_ev_bool(this.NativeObject, m_detachFromScene_CallBack_ev_bool);
						m_setUserData_CallBack_void_CFeatureUserData = EarthView_World_Geometry3D_CVisibleObject_setUserData_void_CFeatureUserData_Function;
						GC.KeepAlive(m_setUserData_CallBack_void_CFeatureUserData);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setUserData_void_CFeatureUserData(this.NativeObject, m_setUserData_CallBack_void_CFeatureUserData);
						m_setSelectable_CallBack_void_ev_bool = EarthView_World_Geometry3D_CVisibleObject_setSelectable_void_ev_bool_Function;
						GC.KeepAlive(m_setSelectable_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setSelectable_void_ev_bool(this.NativeObject, m_setSelectable_CallBack_void_ev_bool);
						m_getSelectable_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_getSelectable_ev_bool_Function;
						GC.KeepAlive(m_getSelectable_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getSelectable_ev_bool(this.NativeObject, m_getSelectable_CallBack_ev_bool);
						m_update_CallBack_ev_bool = EarthView_World_Geometry3D_CVisibleObject_update_ev_bool_Function;
						GC.KeepAlive(m_update_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_update_ev_bool(this.NativeObject, m_update_CallBack_ev_bool);
						m_getLayer_CallBack_IGlobeLayer = EarthView_World_Geometry3D_CVisibleObject_getLayer_IGlobeLayer_Function;
						GC.KeepAlive(m_getLayer_CallBack_IGlobeLayer);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getLayer_IGlobeLayer(this.NativeObject, m_getLayer_CallBack_IGlobeLayer);
						m_getDataset_CallBack_IDataset = EarthView_World_Geometry3D_CVisibleObject_getDataset_IDataset_Function;
						GC.KeepAlive(m_getDataset_CallBack_IDataset);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getDataset_IDataset(this.NativeObject, m_getDataset_CallBack_IDataset);
						m_getID_CallBack_ev_uint32 = EarthView_World_Geometry3D_CVisibleObject_getID_ev_uint32_Function;
						GC.KeepAlive(m_getID_CallBack_ev_uint32);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getID_ev_uint32(this.NativeObject, m_getID_CallBack_ev_uint32);
						m_getName_CallBack_EVString = EarthView_World_Geometry3D_CVisibleObject_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_setMatrix_CallBack_void_CMatrix4 = EarthView_World_Geometry3D_CVisibleObject_setMatrix_void_CMatrix4_Function;
						GC.KeepAlive(m_setMatrix_CallBack_void_CMatrix4);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setMatrix_void_CMatrix4(this.NativeObject, m_setMatrix_CallBack_void_CMatrix4);
						m_getMatrix_CallBack_CMatrix4 = EarthView_World_Geometry3D_CVisibleObject_getMatrix_CMatrix4_Function;
						GC.KeepAlive(m_getMatrix_CallBack_CMatrix4);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getMatrix_CMatrix4(this.NativeObject, m_getMatrix_CallBack_CMatrix4);
						m_setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion = EarthView_World_Geometry3D_CVisibleObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.NativeObject, m_setPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						m_getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion = EarthView_World_Geometry3D_CVisibleObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Function;
						GC.KeepAlive(m_getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometry_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(this.NativeObject, m_getPosition_CallBack_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion);
					}
				}
				public override EarthView.World.Graphic.Node GetNode()
				{
					return base.GetNode_NoVirtual();
				}
				public override bool AttachToNode(EarthView.World.Graphic.Node n)
				{
					return base.AttachToNode_NoVirtual(n);
				}
				public override EarthView.World.Graphic.Node DetachFromNode()
				{
					return base.DetachFromNode_NoVirtual();
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
				public static KmlMultigeometry FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					KmlMultigeometry obj = baseObj as  KmlMultigeometry;
					if (object.Equals(obj, null))
					{
						obj = new KmlMultigeometry(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CKmlMultigeometry");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class KmlMultigeometryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					KmlMultigeometry emptyInstance = new KmlMultigeometry(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class KmlMultigeometryFactory : EarthView.World.Spatial3D.Atlas.Igeometry3dfactory
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				public KmlMultigeometryFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CKmlMultigeometryFactoryProxy", null);
					if (!"EarthView.World.Geometry3D.KmlMultigeometryFactory".Equals(((Object)this).GetType().ToString()))
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
				private static extern ushort EarthView_World_Geometry3D_CKmlMultigeometryFactory_getFactoryType_ev_uint16_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				public new ushort GetFactoryType_NoVirtual()
				{
					ushort ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_getFactoryType_ev_uint16_NoVirtual(this.NativeObject);
					
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
				private static extern ushort EarthView_World_Geometry3D_CKmlMultigeometryFactory_getFactoryType_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				public override ushort GetFactoryType()
				{
					ushort ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_getFactoryType_ev_uint16(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlMultigeometryFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(IntPtr pNativeObject, IntPtr geoObj, IntPtr scenemanager);

				public new EarthView.World.Geometry3D.VisibleObjects CreateRenderable_NoVirtual(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Graphic.SceneManager scenemanager)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlMultigeometryFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(scenemanager, null) ? IntPtr.Zero : scenemanager.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlMultigeometryFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr pNativeObject, IntPtr geoObj, IntPtr scenemanager);

				public override EarthView.World.Geometry3D.VisibleObjects CreateRenderable(EarthView.World.Spatial.Kml.GeoObjectExtension geoObj, EarthView.World.Graphic.SceneManager scenemanager)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlMultigeometryFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(this.NativeObject, object.Equals(geoObj, null) ? IntPtr.Zero : geoObj.NativeObject, object.Equals(scenemanager, null) ? IntPtr.Zero : scenemanager.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometryFactory_destoryRenderable_void_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visitObj);

				public new void DestoryRenderable_NoVirtual(EarthView.World.Geometry3D.VisibleObject visitObj)
				{
					EarthView_World_Geometry3D_CKmlMultigeometryFactory_destoryRenderable_void_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visitObj, null) ? IntPtr.Zero : visitObj.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometryFactory_destoryRenderable_void_CVisibleObject(IntPtr pNativeObject, IntPtr visitObj);

				public override void DestoryRenderable(EarthView.World.Geometry3D.VisibleObject visitObj)
				{
					EarthView_World_Geometry3D_CKmlMultigeometryFactory_destoryRenderable_void_CVisibleObject(this.NativeObject, object.Equals(visitObj, null) ? IntPtr.Zero : visitObj.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometryFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, IntPtr ref_geoObject);

				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				public new bool AppendGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject ref_geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(ref_geoObject, null) ? IntPtr.Zero : ref_geoObject.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometryFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pNativeObject, IntPtr visibleObj, IntPtr ref_geoObject);

				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				public override bool AppendGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject ref_geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(ref_geoObject, null) ? IntPtr.Zero : ref_geoObject.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, IntPtr geoObject);

				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				public new bool RemoveGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(geoObject, null) ? IntPtr.Zero : geoObject.NativeObject);
					
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
				private static extern byte EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pNativeObject, IntPtr visibleObj, IntPtr geoObject);

				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				public override bool RemoveGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, EarthView.World.Spatial.GeoObject geoObject)
				{
					byte ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, object.Equals(geoObject, null) ? IntPtr.Zero : geoObject.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public new void RemoveAllGeoObjects_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeAllGeoObjects_void_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
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
				private static extern void EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeAllGeoObjects_void_CVisibleObject(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public override void RemoveAllGeoObjects(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeAllGeoObjects_void_CVisibleObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj, uint index);

				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				public new EarthView.World.Spatial.GeoObject GetGeoObject_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj, uint index)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, index);
					
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
				private static extern IntPtr EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(IntPtr pNativeObject, IntPtr visibleObj, uint index);

				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				public override EarthView.World.Spatial.GeoObject GetGeoObject(EarthView.World.Geometry3D.VisibleObject visibleObj, uint index)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject, index);
					
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
				private static extern ulong EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				public new ulong GetGeoObjectCount_NoVirtual(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					ulong ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObjectCount_ev_uint64_CVisibleObject_NoVirtual(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
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
				private static extern ulong EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObjectCount_ev_uint64_CVisibleObject(IntPtr pNativeObject, IntPtr visibleObj);

				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				public override ulong GetGeoObjectCount(EarthView.World.Geometry3D.VisibleObject visibleObj)
				{
					ulong ret=EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObjectCount_ev_uint64_CVisibleObject(this.NativeObject, object.Equals(visibleObj, null) ? IntPtr.Zero : visibleObj.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadKmlMultigeometryFactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometryFactory", new KmlMultigeometryFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometryFactoryProxy", new KmlMultigeometryFactoryClassFactory());

				public KmlMultigeometryFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_getFactoryType_ev_uint16(IntPtr pObject, getFactoryType_CallBack_ev_uint16 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(IntPtr pObject, createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_destoryRenderable_void_CVisibleObject(IntPtr pObject, destoryRenderable_CallBack_void_CVisibleObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pObject, appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(IntPtr pObject, removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeAllGeoObjects_void_CVisibleObject(IntPtr pObject, removeAllGeoObjects_CallBack_void_CVisibleObject pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(IntPtr pObject, getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObjectCount_ev_uint64_CVisibleObject(IntPtr pObject, getGeoObjectCount_CallBack_ev_uint64_CVisibleObject pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getFactoryType_CallBack_ev_uint16 = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getFactoryType_ev_uint16_Function;
						GC.KeepAlive(m_getFactoryType_CallBack_ev_uint16);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_getFactoryType_ev_uint16(this.NativeObject, m_getFactoryType_CallBack_ev_uint16);
						m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Function;
						GC.KeepAlive(m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(this.NativeObject, m_createRenderable_CallBack_VisibleObjects_CGeoObjectExtension_CSceneManager);
						m_destoryRenderable_CallBack_void_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_destoryRenderable_void_CVisibleObject_Function;
						GC.KeepAlive(m_destoryRenderable_CallBack_void_CVisibleObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_destoryRenderable_void_CVisibleObject(this.NativeObject, m_destoryRenderable_CallBack_void_CVisibleObject);
						m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Function;
						GC.KeepAlive(m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, m_appendGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Function;
						GC.KeepAlive(m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(this.NativeObject, m_removeGeoObject_CallBack_ev_bool_CVisibleObject_CGeoObject);
						m_removeAllGeoObjects_CallBack_void_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_removeAllGeoObjects_void_CVisibleObject_Function;
						GC.KeepAlive(m_removeAllGeoObjects_CallBack_void_CVisibleObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_removeAllGeoObjects_void_CVisibleObject(this.NativeObject, m_removeAllGeoObjects_CallBack_void_CVisibleObject);
						m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32 = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Function;
						GC.KeepAlive(m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(this.NativeObject, m_getGeoObject_CallBack_CGeoObject_CVisibleObject_ev_uint32);
						m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject = EarthView_World_Spatial3D_Atlas_IGeometry3DFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Function;
						GC.KeepAlive(m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject);
						EV_RegisterCallback_EarthView_World_Geometry3D_CKmlMultigeometryFactory_getGeoObjectCount_ev_uint64_CVisibleObject(this.NativeObject, m_getGeoObjectCount_CallBack_ev_uint64_CVisibleObject);
					}
				}
				public static KmlMultigeometryFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					KmlMultigeometryFactory obj = baseObj as  KmlMultigeometryFactory;
					if (object.Equals(obj, null))
					{
						obj = new KmlMultigeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CKmlMultigeometryFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class KmlMultigeometryFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					KmlMultigeometryFactory emptyInstance = new KmlMultigeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
