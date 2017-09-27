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
			///<summary>
			///可渲染几何体工厂
			///	由相应的几何体对象创建可渲染对象
			///</summary>
			public class Geometry3DFactory : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public Geometry3DFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGeometry3DFactory",  null);
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createBox_CSimpleRenderableEx_CBox_IColor(IntPtr box, IntPtr color);

				/// <summary>
				/// 创建可渲染的长方体
				/// </summary>
				/// <param name="box">几何长方体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateBox(EarthView.World.Spatial.Geometry.Box box, EarthView.World.Spatial.Display.Icolor color)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createBox_CSimpleRenderableEx_CBox_IColor(object.Equals(box, null) ? IntPtr.Zero : box.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createCone_CSimpleRenderableEx_CCone_IColor(IntPtr cone, IntPtr color);

				/// <summary>
				/// 创建可渲染的圆锥
				/// </summary>
				/// <param name="cone">几何圆锥体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateCone(EarthView.World.Spatial.Geometry.Cone cone, EarthView.World.Spatial.Display.Icolor color)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createCone_CSimpleRenderableEx_CCone_IColor(object.Equals(cone, null) ? IntPtr.Zero : cone.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createColumn_CSimpleRenderableEx_CColumn_IColor(IntPtr column, IntPtr color);

				/// <summary>
				/// 创建可渲染的圆柱体
				/// </summary>
				/// <param name="column">圆柱体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateColumn(EarthView.World.Spatial.Geometry.Column column, EarthView.World.Spatial.Display.Icolor color)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createColumn_CSimpleRenderableEx_CColumn_IColor(object.Equals(column, null) ? IntPtr.Zero : column.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createEllipsoid_CSimpleRenderableEx_CEllipsoid_IColor(IntPtr ellipsoid, IntPtr color);

				/// <summary>
				/// 创建可渲染的椭球体
				/// </summary>
				/// <param name="ellipsoid">椭球体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateEllipsoid(EarthView.World.Spatial.Geometry.Ellipsoid ellipsoid, EarthView.World.Spatial.Display.Icolor color)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createEllipsoid_CSimpleRenderableEx_CEllipsoid_IColor(object.Equals(ellipsoid, null) ? IntPtr.Zero : ellipsoid.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createRing_CSimpleRenderableEx_CRing_IColor(IntPtr ring, IntPtr color);

				/// <summary>
				/// 创建可渲染的圆环
				/// </summary>
				/// <param name="ring">圆环</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateRing(EarthView.World.Spatial.Geometry.Ring ring, EarthView.World.Spatial.Display.Icolor color)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createRing_CSimpleRenderableEx_CRing_IColor(object.Equals(ring, null) ? IntPtr.Zero : ring.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createVolume_CSimpleRenderableEx_CRevolvingVolume_CDegree_IColor_ev_bool(IntPtr volume, IntPtr interval, IntPtr color, byte sideClosed);

				/// <summary>
				/// 创建可渲染的旋转体面
				/// </summary>
				/// <param name="volume">几何旋转体</param>
				/// <param name="interval">旋转间隔</param>
				/// <param name="color">颜色</param>
				/// <param name="sideClosed">是否封闭</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateVolume(EarthView.World.Spatial.Geometry.RevolvingVolume volume, EarthView.World.Spatial.Math.Degree interval, EarthView.World.Spatial.Display.Icolor color, bool sideClosed)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createVolume_CSimpleRenderableEx_CRevolvingVolume_CDegree_IColor_ev_bool(object.Equals(volume, null) ? IntPtr.Zero : volume.NativeObject, object.Equals(interval, null) ? IntPtr.Zero : interval.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject, Convert.ToByte(sideClosed));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern IntPtr EarthView_World_Geometry3D_CGeometry3DFactory_createVolumeFrame_CSimpleRenderableEx_CRevolvingVolume_CDegree_IColor_ev_bool(IntPtr volume, IntPtr interval, IntPtr color, byte sideClosed);

				/// <summary>
				/// 创建可渲染的旋转体边框
				/// </summary>
				/// <param name="volume">几何旋转体</param>
				/// <param name="interval">旋转间隔</param>
				/// <param name="color">颜色</param>
				/// <param name="sideClosed">是否封闭</param>
				/// <returns>可渲染实体</returns>
				public static EarthView.World.Geometry3D.SimpleRenderableEx CreateVolumeFrame(EarthView.World.Spatial.Geometry.RevolvingVolume volume, EarthView.World.Spatial.Math.Degree interval, EarthView.World.Spatial.Display.Icolor color, bool sideClosed)
				{
					IntPtr __ptr = EarthView_World_Geometry3D_CGeometry3DFactory_createVolumeFrame_CSimpleRenderableEx_CRevolvingVolume_CDegree_IColor_ev_bool(object.Equals(volume, null) ? IntPtr.Zero : volume.NativeObject, object.Equals(interval, null) ? IntPtr.Zero : interval.NativeObject, object.Equals(color, null) ? IntPtr.Zero : color.NativeObject, Convert.ToByte(sideClosed));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
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
				private static extern void EarthView_World_Geometry3D_CGeometry3DFactory_destroy_void_CSimpleRenderableEx(IntPtr pRenderable);

				/// <summary>
				/// 销毁几何实体
				/// </summary>
				/// <param name="pRenderable">几何实体</param>
				/// <returns></returns>
				public static void Destroy(EarthView.World.Geometry3D.SimpleRenderableEx pRenderable)
				{
					EarthView_World_Geometry3D_CGeometry3DFactory_destroy_void_CSimpleRenderableEx(object.Equals(pRenderable, null) ? IntPtr.Zero : pRenderable.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_d.so");
						private static bool csbLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.so");

					#else 
						private static bool bLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_d.dll");
						private static bool csbLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#elif Linux 
						private static bool bLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D.so");
						private static bool csbLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_CSharp.so");

					#else 
						private static bool bLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D.dll");
						private static bool csbLoadGeometry3DFactory = LoadDll.Load("EV_Geometry3D_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DFactory", new Geometry3DFactoryClassFactory());

				public Geometry3DFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Geometry3DFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Geometry3DFactory obj = baseObj as  Geometry3DFactory;
					if (object.Equals(obj, null))
					{
						obj = new Geometry3DFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGeometry3DFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class Geometry3DFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Geometry3DFactory emptyInstance = new Geometry3DFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
